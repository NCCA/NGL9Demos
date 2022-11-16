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
```





```