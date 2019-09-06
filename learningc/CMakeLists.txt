cmake_minimum_required(VERSION 3.10)

project(learningc VERSION 0.0.1 LANGUAGES C)

set(CMAKE_C_COMPILER gcc)
string(APPEND CMAKE_C_FLAGS "-Wall -Wextra -Wno-unused-parameter -Wendif-labels")

add_executable(1 src/1.c)
add_executable(2 src/2.c)
add_executable(3 src/3.c)
add_executable(4 src/4.c)
add_executable(5 src/5.c)
add_executable(6 src/6.c)
add_executable(7 src/7.c)
add_executable(8 src/8.c)
add_executable(9 src/9.c)
add_executable(10 src/10.c)
add_executable(11 src/11.c)

add_executable(funfunc src/funfunc.c)

add_executable(usefoo 
    src/usefoo.c
    src/fooutil/foo.c
)
