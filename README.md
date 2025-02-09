# RGA (Radeon GPU Analyzer) #

Radeon GPU Analyzer is a compiler and code analysis tool for Vulkan, DirectX, OpenGL and OpenCL. Using this product, you can compile source code for a variety of AMD GPUs and APUs,
independent from the GPU/APU that is physically installed on your system, and generate GCN ISA disassembly, intermediate language disassembly,
performance statistics and static analysis reports for each target platform.

This product can be used to produce the following output:
* AMD GPU ISA disassembly for different GCN generations
* Intermediate langauge disassebly: AMDIL, HSAIL, DX ASM for DirectX shaders, LLVM IR for ROCm OpenCL, SPIR-V for Vulkan
* Compiled binaries
* Performance statistics
* Live register analysis (see http://gpuopen.com/live-vgpr-analysis-radeon-gpu-analyzer/ for more info)
* Control-Flow graphs
* Build errors and warnings

The RGA package contains both a GUI app and a command-line executable.

The supported platforms by the **GUI app** are:
* Vulkan - GLSL/SPIR-V as input, together with the Vulkan pipeline state, through AMD's Vulkan driver
* OpenCL - AMD's LLVM-based Lightning Compiler for ROCm

The supported platforms by the **command-line tool** are:
* D3D11
* OpenCL - AMD's LLVM-based Lightning Compiler for ROCm (-s rocm-cl)
* OpenCL - Legacy compiler (-s cl)
* OpenGL
* AMD IL
* Vulkan - Compilation of GLSL/SPIR-V together with the API's pipeline state, using AMD's Vulkan driver
* Offline Vulkan - Using a static compiler, accepts GLSL/SPIR-V as input. Note that the this mode is about to be removed from RGA. To ensure that the results that RGA provides are accurate and reflect the real-life case, please use the new Vulkan live driver mode (which is also supported in the GUI application).

## System Requirements ##

* Windows: 7 or 10, 64-bit. Visual Studio 2015 or later.
* Linux: Ubuntu 18.04, Red Hat 6.4 or later. Build with gcc 4.7.2 or later.
* Vulkan SDK 1.1.97.0 or later. To download the Vulkan SDK, visit https://vulkan.lunarg.com/

The AMD Radeon Adrenalin Software must be installed to run this tool (for all modes except for Offline Vulkan and ROCm OpenCL).

## Build Instructions ##

### Building on Windows ###
As a preliminary step, make sure that you have the following installed on your system:
* CMake 3.5 or above. For auto-detecting the Vulkan SDK version 3.7 or above is required.
* Python 2.7 or above
* Qt (in case that you are interested in building the GUI app; you can build the command line executable without Qt). Qt 5.9.2 is recommended.

cd to the Build sub-folder, and run:

Prebuild.bat --qt C:\Qt\Qt5.9.2\msvc2017_64 --vs 2017 --build release (or: debug)

Running the Prebuild script will fetch all the dependencies, and generate the solution file for Visual Studio. 
After successfully running the preuild script, open RGA.sln from Build\CMake\VS2017 (or VS2015), and build:
* RadeonGPUAnalyzerCLI project for the command line executable
* RadeonGPUAnalyzerGUI project for the GUI app

Some useful options of the Prebuild script:
* --vs <VS version>: generate the solution files for a specific Visual Studio version. For example, to target VS 2017, add --vs 2017 to the command.
* --qt <path>: full path to the folder from where you would like the Qt binaries to be retrieved. By default, CMake would try to auto-detect Qt on the system.
* --vk-include and --vk-lib: full paths to where the Vulkan SDK include and Vulkan lib folders. By default, CMake would try to auto-detect the Vulkan SDK on the system.
* --build <configuration>: by default, the solution files would be generated for Debug configuration. Add --build Release to generate the solution files for Release configuration
* --cli-only: only build the command line tool (do not build the GUI app)
* --no-fetch: do not attempt to update the third party repositories
   
If you are intending to analyze DirectX shaders using RGA, copy the x64 version of Microsoft's D3D compiler to a subdirectory
named "x64" under the RGA executable's directory (for example, D3DCompiler_47.dll).

-=-
   
If for some reason you do not want to use the Prebuild.bat script, you can also manually fetch the dependencies and generate the solution and project files:
   
Start by running the FetchDependencies.py script to fetch the solution's dependencies.
   
To generate the files for an x64 VS 2017 Release build, use:
   
  cmake.exe -G "Visual Studio 14 2017 Win64" –DCMAKE_BUILD_TYPE=Release (or: Debug) <full path to the RGA repo directory>
   
If you are intending to analyze DirectX shaders using RGA, copy the x64 version of Microsoft's D3D compiler to a subdirectory
named "x64" under the RGA executable's directory (for example, D3DCompiler_47.dll).

  
### Building on Ubuntu ###
* One time setup:
  * Install the Vulkan SDK (version 1.1.82 or above). To download the Vulkan SDK, visit https://vulkan.lunarg.com/
  * sudo apt-get install libboost-all-dev
  * sudo apt-get install gcc-multilib g++-multilib
  * sudo apt-get install libglu1-mesa-dev mesa-common-dev libgtk2.0-dev
  * sudo apt-get install zlib1g-dev libx11-dev:i386
  * Install CMake 3.5 or above. For auto-detecting the Vulkan SDK version 3.7 or above is required.
  * Install python 2.7 (or above)
  * To build the GUI app, you should also have Qt installed
  
* Build: 

   cd to the Build sub-folder
   
   On Linux, it is recommended to explicitly pass to CMake the location of the Vulkan SDK include and lib directories as well as the location of Qt. For example:
   
   ./Prebuild.sh --qt ~/Qt-5.9.2/5.9.2/gcc_64 --vk-include ~/work/vulkan-sdk/1.1.97.0/x86_64/include/ --vk-lib ~/work/vulkan-sdk/1.1.97.0/x86_64/lib/ 
   
   This will fetch all the dependencies, and generate the makefiles.

   Then, cd to the auto-generated subfolder Build/CMake/linux and run make.

   -=-

   If for some reason you do not want to use the Prebuild.sh script, you can also manually fetch the dependencies and generate the makefiles:

  * run: FetchDependencies.py
  * run: cmake –DCMAKE_BUILD_TYPE=Release (or: Debug) <full or relative path to the RGA repo directory>

	It is recommended to create a directory to hold all build files, and launch cmake from that directory.
	
	For example:
	* cd to the RGA repo directory
	* mkdir _build
	* cd _build
	* cmake –DCMAKE_BUILD_TYPE=Release ../
  * run: make
  
## Running ##
### GUI App ###
Run the RadeonGPUAnalyzerGUI executable. The app provides a quickstart guide and a help manual under Help. 

### Command Line Executable ###

Run the rga executable.

* Usage:
  * General: rga -h
  * DirectX: rga -s hlsl -h
        
    Note: RGA's HLSL mode requires Microsoft's D3D Compiler DLL in runtime. If you copy the relevant D3D Compiler DLL to the x64 
	subdirectory under the executable's directory, RGA will use that DLL in runtime. The default D3D compiler that RGA public releases ship with
	is d3dcompiler_47.dll.
  * OpenGL:  rga -s opengl -h
  * ROCm OpenCL:  rga -s rocm-cl -h
  * Legacy OpenCL:  rga -s cl -h
  * Vulkan live-driver:  rga -s vulkan -h
  * Vulkan offline - glsl:  rga -s vk-offline -h
  * Vulkan offline - SPIR-V binary input:  rga -s vk-offline-spv -h
  * Vulkan offline - SPIRV-V textual input:  rga -s vk-offline-spv-txt -h
  * AMD IL: rga -s amdil -h

## Support ##
For support, please visit the RGA repository github page: https://github.com/GPUOpen-Tools/RGA

## License ##
Radeon GPU Analyzer is licensed under the MIT license. See the License.txt file for complete license information.

## Copyright information ##
Please see RGAThirdPartyLicenses.txt for copyright and third party license information.