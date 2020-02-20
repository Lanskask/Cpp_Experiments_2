cmake_minimum_required(VERSION 2.8)
project(hello_world)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(foo)
include_directories(foo)

add_subdirectory(POCOs)
include_directories(POCOs)

add_executable(mainTry3 main.cpp)


target_link_libraries(mainTry3 foo Box)


# cmake_minimum_required(VERSION 3.0)

# project (Foo)

# file(GLOB_RECURSE Foo_SOURCES "src/*.cpp")
# file(GLOB_RECURSE Foo_HEADERS "src/*.h")

# set (Foo_INCLUDE_DIRS "")
# foreach (_headerFile ${Foo_HEADERS})
#     get_filename_component(_dir ${_headerFile} PATH)
#     list (APPEND Foo_INCLUDE_DIRS ${_dir})
# endforeach()
# list(REMOVE_DUPLICATES Foo_INCLUDE_DIRS)

# add_executable (FooExe ${Foo_SOURCES})
# target_include_directories(FooExe PRIVATE ${Foo_INCLUDE_DIRS})

