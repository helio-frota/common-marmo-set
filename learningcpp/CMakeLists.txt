cmake_minimum_required(VERSION 3.15)

add_executable(hello ${PROJECT_SOURCE_DIR}/src/hello.cc)
add_executable(cout ${PROJECT_SOURCE_DIR}/src/cout.cc)
add_executable(sometypes ${PROJECT_SOURCE_DIR}/src/sometypes.cc)
add_executable(simplefunction ${PROJECT_SOURCE_DIR}/src/simplefunction.cc)
add_executable(somefloat ${PROJECT_SOURCE_DIR}/src/somefloat.cc)

add_executable(simpleclass 
    ${PROJECT_SOURCE_DIR}/src/simpleclass.cc
    ${PROJECT_SOURCE_DIR}/src/SimpleClassBar.cc
)

add_executable(CatMain 
    ${PROJECT_SOURCE_DIR}/src/CatMain.cc
    ${PROJECT_SOURCE_DIR}/src/Cat.cc
)