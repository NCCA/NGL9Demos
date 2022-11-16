# NGL9 Demos

This is a meta repository to allow the download of all the current NGL 9 demos in one go. It uses the git submodules to clone the other repositories and may take some time to download all the different demos as some are quite large. The total download is at present 1.9Gb

```
git clone --depth=1 --recurse-submodules git@github.com:/NCCA/NGL9Demos
```

In addition to the core NGL requirements (Including Qt) extra libraries are required to be installed for certain demos.

For Mac and Linux use

```
./vcpkg install bullet3
./vcpkg install tbb
./vcpkg install box2d
./vcpkg install SDL2
./vcpkg install SDL2-ttf
./vcpkg install SDL2-image
./vcpkg install assimp
./vcpkg install libsquish
./vcpkg install cxxopts

```

For windows we need to add the correct triplet 

```
./vcpkg install bullet3:x64-windows
./vcpkg install tbb:x64-windows
./vcpkg install box2d:x64-windows
./vcpkg install SDL2:x64-windows
./vcpkg install SDL2-ttf:x64-windows
./vcpkg install SDL2-image:x64-windows
./vcpkg install assimp:x64-windows
./vcpkg install libsquish:x64-windows
./vcpkg install cxxopts:x64-windows

```

Note that all of these are installed and in the correct paths in the NCCA lab build so you don't need to worry.


## Building

There are a lot of folders / demos to build as part of this system so I suggest using [Ninja](https://ninja-build.org/) It is usually installed as part of the vcpkg and Visual Studio install so should already be part of the toolchain installed.

In the project folder do the following
```
cd NGL9Demos
mkdir build
cd build 
cmake -G Ninja ..
cmake --build .

```

## Updating

If new demos are added or there are bug fixes we can update using.

```
git submodule update --recursive --remote
```