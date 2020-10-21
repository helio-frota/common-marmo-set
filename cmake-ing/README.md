> General notes

- `CMakeLists.txt` is the CMake's configuration file.
- `CMake` has the concept of `src` and `binary` directories which `build` 
  directory is most used for the `binary` concept.
- `CTest` and `CPack` create files inside `build` directory.
- `CMake` creates a file called `CMakeCache.txt` inside `build` to store 
  information to be used again on future runs to speed up the process. 
- `CMake` has its own language that includes variables, functions, macros,
  conditional logic, loops...

> Notes about CMake commands

- Commands are case insensitive but is recommended to write them lowercase.
- `cmake_minimum_required` should be present on the top of 
  the `CMakeLists.txt` file.
    - The `VERSION` keyword must be present.
- Every project should contain `project` command right after `cmake_minimum_required`.
    - The project name is required.
    - The name is used in others parts of the project like docs, 
      packaging and other metadata.
    - The `VERSION` keyword is used to populate variables and as 
      default package metadata.
    - The `VERSION` is optional but it is recommended to use.
    - The `LANGUAGES` argument sets the programming language.
        - We can specify multiple languages separated by a space.
        - If we don't specify `LANGUAGES` it will default to `C` and `CXX`.
    - The `project` command checks compilers for each specified language.    

> Examples

[basics](./basics)