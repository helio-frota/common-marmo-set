> Notes

- `CMakeLists.txt` is the CMake's configuration file.
- `CMake` has the concept of `src` and `binary` directories which `build` 
  directory is most used for the `binary` concept.
- `CTest` and `CPack` create files inside `build` directory.
- `CMake` creates a file called `CMakeCache.txt` inside `build` to store 
  information to be used again on future runs.