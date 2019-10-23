cmake_minimum_required(VERSION 3.15)

project(learningc VERSION 0.0.1 LANGUAGES C)

set(CMAKE_C_COMPILER gcc)
string(APPEND CMAKE_C_FLAGS "-Wall -Wextra -Wno-unused-parameter -Wendif-labels")

add_executable(print src/print.c)
add_executable(types src/types.c)
add_executable(array src/array.c)
add_executable(bitwise src/bitwise.c)
add_executable(argv src/argv.c)
add_executable(pointer src/pointer.c)
add_executable(index src/index.c)
add_executable(malloc src/malloc.c)
add_executable(struct src/struct.c)
add_executable(rand src/rand.c)
add_executable(macro src/macro.c)

add_executable(funfunc src/funfunc.c)

add_executable(usefoo 
    src/usefoo.c
    src/fooutil/foo.c
)
