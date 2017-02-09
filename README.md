﻿# RGA (Radeon GPU Analyzer) Command Line Tool #

RGA CLI is an offline compiler and a performance analysis tool for DirectX shaders, OpenGL shaders,
Vulkan shaders and OpenCL kernels. Using this product, you can compile source code for a variety of AMD GPUs and APUs,
independent from the GPU/APU that is physically installed on your system, and generate AMD ISA, intermediate language 
and performance statistics for each target platform.

RGA CLI replaces CodeXL Analyzer CLI, and maintains backward compatibility. All of the commands and functionality that
used to be supported by CodeXL Analyzer CLI are still being supported by RGA. For a quick overview of those features,
see http://gpuopen.com/up-and-running-with-codexl-analyzer-cli/

This product can be used to produce the following output:
* Build errors and warnings
* AMD ISA, AMDIL and HSAIL disassembly
* DX ASM for D3D shaders
* Compiled binaries
* Performance statistics
* Live register analysis

The supported platforms are:
* D3D11
* OpenGL
* OpenCL
* Vulkan

## System Requirements ##

* Windows: 7, 8.1 or 10, 64-bit. Visual Studio 2015.
* Linux: Ubuntu 14.04, Red Hat 6.4 or later. Build with gcc 4.7.2 or later.

The Radeon Software Crimson Edition or AMD Catalyst release must be installed to run this tool.

## Build Instructions ##

### Building on Windows ###
There are two ways to build RGA on Windows:

1. Using the RadeonGPUAnalyzer.sln file that can be found under Build\VS2015.

   Before using the solution file, run the UpdateCommon.py script, which fetches the solution's dependencies.

2. Using CMake. To generate the solution and project files for an x86 build, use:

   cmake.exe –DCMAKE_BUILD_TYPE=Release (or: Debug) <full path to the RGA-Temp repo>
   
   To generate the files for an x64 build, use:
   
   cmake.exe -G "Visual Studio 14 2015 Win64"  –DCMAKE_BUILD_TYPE=Release (or: Debug) <full path to the RGA-Temp repo>
   
   Unlike the solution file that can be found under Build\VS2015, the solution file that is being generated by CMake currently
   does not contain a post-build event that copies the core binaries to the output directory. Therefore, if your target platform
   is DirectX, OpenGL or Vulkan, you will have to manually create the x86 or x64 subdirectories under the build output folder, and copy
   the Core binaries to that folder:
   * When building RGA for x86, the contents of the following folders should be copied to a subdirectory named "x86" under the executable's directory: 
     * Core\OpenGL\VirtualContext\Release\win32 
     * Core\Vulkan\rev_1_0_0\Release\win32 
     * Core\ShaderAnalysis\Windows\x86
     * The x86 version of Microsoft's D3DCompiler_47.dll 
   * When building RGA for x64, the contents of the following folders should be copied to a subdirectory named "x64" under the executable's directory: 
     * Core\OpenGL\VirtualContext\Release\win64
     * Core\Vulkan\rev_1_0_0\Release\win64
     * Core\ShaderAnalysis\Windows\x86
     * The x64 version of Microsoft's D3DCompiler_47.dll 
       
Note that after switching CMake build configurations, you might need to delete the old files that were previously generated by CMake. Therefore, 
it is recommended to work with separate output directories, one for each build configuration.

### Building on Ubuntu ###
One time setup:
* sudo apt-get install libboost-all-dev
* sudo apt-get install gcc-multilib g++-multilib
* sudo apt-get install libglu1-mesa-dev mesa-common-dev libgtk2.0-dev
* sudo apt-get install zlib1g-dev libx11-dev:i386
* run: UpdateCommon.py
* run: cmake –DCMAKE_BUILD_TYPE=Release (or: Debug) <full path to the RGA-Temp repo>
* run: make

#### Building on CENTOS 6.X ####
Install compiler 4.7.2
* sudo wget http://people.centos.org/tru/devtools-1.1/devtools-1.1.repo -P /etc/yum.repos.d
* sudo sh -c 'echo "enabled=1" >> /etc/yum.repos.d/devtools-1.1.repo'
* sudo yum install devtoolset-1.1
* wget http://people.centos.org/tru/devtools-1.1/6/i386/RPMS/devtoolset-1.1-libstdc++-devel-4.7.2-5.el6.i686.rpm
* sudo yum install devtoolset-1.1-libstdc++-devel-4.7.2-5.el6.i686.rpm
* sudo ln -s /opt/centos/devtoolset-1.1/root/usr/bin/* /usr/local/bin/
* hash -r
* gcc --version (verify that version 4.7.2 is displayed)
Install zlib
* yum install zlib-devel

Install glibc
* yum -y install glibc-devel.i686 glibc-devel
 
Building RGA
* run: UpdateCommon.py
* run: cmake –DCMAKE_BUILD_TYPE=Release (or: Debug) <full path to the RGA-Temp repo>
* run: make

## Running ##
Run the rga executable.

* Usage: 
  * General: rga -h
  * DirectX: rga -hlsl -h
  * OpenGL:  rga -opengl -h
  * OpenCL:  rga -cl -h
  * Vulkan:  rga -vulkan -h

## Support ##
For support, please visit the RGA repository github page: https://github.com/GPUOpen-Tools/RGA

## License ##
Radeon GPU Analyzer is licensed under the MIT license. See LICENSE file for full license information.

## Copyright information ##

**Boost**

Copyright Beman Dawes, 2003.
    
**TinyXML**

TinyXML is released under the zlib license
Files: *
Copyright: 2000-2007, Lee Thomason, 2002-2004, Yves Berquin 
Files: tinystr.*
Copyright: 2000-2007, Lee Thomason, 2002-2004, Yves Berquin, 2005, Tyge Lovset
    
**glew**

The OpenGL Extension Wrangler Library
Copyright (C) 2002-2007, Milan Ikits <milan ikits@ieee org>
Copyright (C) 2002-2007, Marcelo E. Magallon <mmagallo@debian org>
Copyright (C) 2002, Lev Povalahev
All rights reserved.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE 
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
THE POSSIBILITY OF SUCH DAMAGE.
    
**OpenCL**

Copyright (c) 2008-2015 The Khronos Group Inc.

**RSA Data Security, Inc.**

Copyright (C) 1990, RSA Data Security, Inc. All rights reserved.
License to copy and use this software is granted provided that
it is identified as the "RSA Data Security, Inc. MD5 Message
Digest Algorithm" in all material mentioning or referencing this 
software or this function.
License is also granted to make and use derivative works
provided that such works are identified as "derived from the RSA
Data Security, Inc. MD5 Message Digest Algorithm" in all
material mentioning or referencing the derived work.

RSA Data Security, Inc. makes no representations concerning
either the merchantability of this software or the suitability
of this software for any particular purpose.  It is provided "as
is" without express or implied warranty of any kind.

These notices must be retained in any copies of any part of this
documentation and/or software.
 
**Glslang**
Copyright (C) 2002-2005 3Dlabs Inc. Ltd.
Copyright (C) 2012-2013 LunarG, Inc.