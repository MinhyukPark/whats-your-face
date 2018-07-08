# whats-your-face
i can't figure out what my face shape is so this project better figure it out for me

:dizzy_face: just starting

## Documentation
The official documentation is created using doxygen and hosted on readthedocs.

[Official Documentation](https://whats-your-face.readthedocs.io/en/latest/?)

## Dependencies
Besides the standard development tools such as cmake (>= 2.6),
building this project requires [sanitizers-cmake](github.com/arsenm/sanitizers-cmake)
for address sanitization support in cmake. This is handled via git submodules which is explained
later on in How To Build section.

If the standard development tools such as c/c++ compilers are not available,
e.g. developing in Windows, then here are some things you can try.

#### Windows without Visual Studio 2017
Download cmake.
Download MinGW and remember the install directory. (The default is C:\MinGW).
Add ${minGWpath}\bin to your system's path environment variable.
Run the following commands in your cloned directory.
```
cd to_cloned_repo
mkdir _build
cd _build
cmake .. -G "Your desired generator"
```
A list of generators available on your system can be identified by running the following command.
```
cmake --help
```
For example to build for Visual Studio 2015, one would replace "Your desired generator" with
"Visual Studio 14 2015". This will create a set of required files which one should already be familiar with
since the generator was of one's own choice.

#### Windows with Visual Studio 2017
Microsoft has recently added a native support for cmake projects in their 2017 edition
of Visual Studio. Now all you need to do is navigate to the folder and open the folder in Visual Studio
either by right clicking the folder and selecting "open in Visual Studio", or launching Visual Studio
first and then opening the folder.

To confirm that the folder has opened properly and that Visual Studio has correctly identified the folder as 
a cmake project, look at the top menu bar. With File, Edit, and other items should be CMake.

Additionally, navigate to Debug, Options, Debugging, Symbols, and tick the check box next to Microsoft Symbol Servers"

## How to Build
### Visual Studio not 2017
Right click the app project under executable and set it as startup project.
Click the drop down arrow next to the green arrow in the top menu bar. It'll most likely say "Select Startup Item"
or some variant of it. Change it to app.exe, which should be the only option.
Click the green arrow itself and the program should launch.

### Visual Studio 2017
Assuming that the folder has opened correctly within Visual Studio.
Right click CMakeLists.txt that is at the very top level of the folder.
Select Build and then All.


### Unix Based Environment
```
cd to_cloned_repo
git submodule update --remote --merge
./create_release
cd _build
make
cd bin
./app [optional parameters]
```

## FAQ
#### Can you pass command line arguments to the program?
I would prefer not to.
#### Do I have to run git submodule update everytime?
No.
#### What should I develop in? Visual Studio or Linux?
Arch.
