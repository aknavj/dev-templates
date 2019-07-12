# dev-templates
My preconfigured environment for a quick development. Keeping things organized!

## Visual Studio Project template solution:

Folder structure:
 * **build** - Folder is generated when you are building project. Builded **exec** or **lib** depends on your target platform architecture.
 * **common** - Folder where shared application resources are. For example **.rc** files.
 * **externs** - Folder where you will put an external library dependencies into **include** and **lib** forlder
    * include
    * lib
      * x86
      * x64
 * **scripts** - Folder for your build steps, scripts. Setup your Environment variables and so on.
    * pre - You must specify a folder in VS project solution
    * post - You must specify a folder in VS project solution.
    * custom - Custom scripts.
    
 * **sources** - Folder for your **SOURCE CODE** to be placed. (You must import your source code for each VS project file separately.

What is configured and supported?
* [x] Supports general x86 and x64 bit builds in Debug and Release mode.
* [ ] Linux Scons Configuration, cross platform compilation using Virtual Machine.

Supported VS Solutions in folder: (ready to use)
 * [ ] VS2010
 * [ ] VS2012
 * [x] VS2013
 * [ ] VS2015 
 * [x] VS2017

Usage:

Just rename **.SLN** files and **vcxproj**-based files in root and **project** directory.
