@echo off
:: gen_sln.bat --build release --vs 2017 --qt <path_to_qt>
SETLOCAL

rem Print help message
if "%1"=="-h" goto :print_help
if "%1"=="-help" goto :print_help
if "%1"=="--h" goto :print_help
if "%1"=="--help" goto :print_help
if "%1"=="/?" goto :print_help

goto :start

:print_help
echo:
echo This script generates Visual Studio project and solution files for RGA on Windows.
echo:
echo Usage:  Prebuild.bat ^[options^]
echo:
echo Options:
echo    --no-fetch           Do not call FetchDependencies.py script before running cmake. The default is "false".
echo    --cmake              Path to cmake executable to use. If not specified, the cmake from PATH env variable will be used.
echo    --build              The build type: "release" or "debug". The default is "debug".
echo    --vs                 Microsoft Visual Studio verson. Currently supported values are: "2015", "2017". The default is "2017".
echo    --qt                 Path to Qt5 root folder. The default is empty (cmake will look for Qt5 package istalled on the system).
echo    --cli-only           Build RGA command-line tool only (do not build GUI). The default is "false".
echo    --gui-only           Build GUI only (do not build RGA command-line tool). The default is "false".
echo    --no-vulkan          Build RGA without live Vulkan mode support. If this option is used, Vulkan SDK is not required. The default is "false".
echo    --vk-include         Path to the Vulkan SDK include folder.
echo    --vk-lib             Path to the Vulkan SDK library folder.
echo:
echo Examples:
echo    Prebuild.bat
echo    Prebuild.bat --build release
echo    Prebuild.bat --vs 2017 --qt C:\Qt\5.7\msvc2015_64
echo    Prebuild.bat --vs 2015 --cli-only --build debug
echo    Prebuild.bat --no-vulkan
goto :exit

:start
set SCRIPT_DIR=%~dp0
set CURRENT_DIR=%CD%

rem Default values
set CMAKE_PATH=cmake
set BUILD_TYPE=Debug
set VS_VER=2017
set QT_ROOT=
set VK_INCLUDE=
set VK_LIB=

:begin
if [%1]==[] goto :start_cmake
if "%1"=="--cmake" goto :set_cmake
if "%1"=="--build" goto :set_build
if "%1"=="--vs" goto :set_vs
if "%1"=="--qt" goto :set_qt
if "%1"=="--cli-only" goto :set_cli_only
if "%1"=="--gui-only" goto :set_gui_only
if "%1"=="--no-vulkan" goto :set_no_vulkan
if "%1"=="--vk-include" goto :set_vk_include
if "%1"=="--vk-lib" goto :set_vk_lib
if "%1"=="--no-fetch" goto :set_no_fetch
if "%1"=="--automation" goto :set_automation
if "%1"=="--internal" goto :set_internal
if "%1"=="--verbose" goto :set_verbose
goto :bad_arg

:set_cmake
set CMAKE_PATH=%2
goto :shift_2args

:set_build
set BUILD_TYPE=%2
if "%BUILD_TYPE%"=="release" set BUILD_TYPE=Release
if "%BUILD_TYPE%"=="debug" set BUILD_TYPE=Debug
goto :shift_2args

:set_vs
set VS_VER=%2
goto :shift_2args

:set_qt
set QT_ROOT=%2
goto :shift_2args

:set_vk_include
set VK_INCLUDE=%2
goto :shift_2args

:set_vk_lib
set VK_LIB=%2
goto :shift_2args

:set_cli_only
set CLI_ONLY=-DBUILD_CLI_ONLY^=ON
goto :shift_arg

:set_gui_only
set GUI_ONLY=-DBUILD_GUI_ONLY^=ON
goto :shift_arg

:set_no_vulkan
set NO_VULKAN=-DRGA_ENABLE_VULKAN^=OFF
goto :shift_arg

:set_no_fetch
set NO_FETCH=TRUE
goto :shift_arg

:set_automation
set AUTOMATION=-DGUI_AUTOMATION^=ON
set TEST_DIR_SUFFIX=_Test
goto :shift_arg

:set_internal
set AMD_INTERNAL=-DAMD_INTERNAL^=ON
set INTERNAL=TRUE
goto :shift_arg

:set_verbose
@echo on
goto :shift_arg

:shift_2args
rem Shift to the next pair of arguments
shift
:shift_arg
shift
goto :begin

:bad_arg
echo Error: Unexpected argument: %1%. Aborting...
exit /b

:start_cmake 
if "%VS_VER%"=="2015" (
    set CMAKE_VS="Visual Studio 14 2015 Win64"
) else (
    if "%VS_VER%"=="2017" (
        set CMAKE_VS="Visual Studio 15 2017 Win64"
    ) else (
        echo Error: Unknows VisualStudio version provided. Aborting...
        exit /b
    )
)

if not [%QT_ROOT%]==[] (
    set CMAKE_QT=-DQT_PACKAGE_ROOT^=%QT_ROOT% -DNO_DEFAULT_QT=ON
)

if not [%VK_INCLUDE%]==[] (
    set CMAKE_VK_INCLUDE=-DVULKAN_SDK_INC_DIR^=%VK_INCLUDE%
)

if not [%VK_LIB%]==[] (
    set CMAKE_VK_LIB=-DVULKAN_SDK_LIB_DIR^=%VK_LIB%
)

rem Create an output folder
set VS_FOLDER=VS%VS_VER%
set OUTPUT_FOLDER=%SCRIPT_DIR%Windows\%VS_FOLDER%\%BUILD_TYPE%%TEST_DIR_SUFFIX%
if not exist %OUTPUT_FOLDER% (
    mkdir %OUTPUT_FOLDER%
)

rem clone or download dependencies
if not "%NO_FETCH%"=="TRUE" (
    echo:
    echo Updating Common...
    python %SCRIPT_DIR%\FetchDependencies.py

    if "%ERRORLEVEL%"=="1" (
        echo Error: encountered an error while fetching dependencies. Aborting...
        goto :exit
    )

    if exist %SCRIPT_DIR%\FetchDependencies-Internal.py (
        python %SCRIPT_DIR%\FetchDependencies-Internal.py
    )

    if "%ERRORLEVEL%"=="1" (
        echo Error: encountered an error while fetching internal dependencies. Aborting...
        goto :exit
    )
)

rem Invoke cmake with required arguments.
echo:
echo Running cmake to generate a VisualStudio solution...
cd %OUTPUT_FOLDER%
%CMAKE_PATH% -G %CMAKE_VS% -DCMAKE_BUILD_TYPE=%BUILD_TYPE% %CMAKE_QT% %CMAKE_VK_INCLUDE% %CMAKE_VK_LIB% %CLI_ONLY% %GUI_ONLY% %NO_VULKAN% %AUTOMATION% %AMD_INTERNAL% ..\..\..\..
cd %CURRENT_DIR%
echo Done.

:exit
