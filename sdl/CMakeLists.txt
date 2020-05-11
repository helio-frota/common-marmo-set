cmake_minimum_required(VERSION 3.15)

project(learningc VERSION 0.0.1 LANGUAGES C)

set(CMAKE_C_COMPILER gcc)
string(APPEND CMAKE_C_FLAGS "-Wall -Wextra -Wno-unused-parameter -Wendif-labels")

find_package(SDL2 REQUIRED)

add_executable(hello src/hello.c)
target_link_libraries(hello SDL2)

