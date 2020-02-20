
cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

# project(Try3_With_Lybraries VERSION 0.1.0 LANGUAGES CXX and/or C)
project(Try3_With_Lybraries)

set(SOURCE_EXE main.cpp)
set(SOURCE_LIB foo.cpp)

add_executable(main ${SOURCE_EXE})
add_library(foo STATIC ${SOURCE_LIB})

target_link_libraries(main foo)
