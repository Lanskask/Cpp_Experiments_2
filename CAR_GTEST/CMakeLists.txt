cmake_minimum_required(VERSION 3.15)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

#add_executable(CAR_GTEST main.cpp Car.cpp Car.h)
include_directories(src)

add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(lib/googletest)
#add_subdirectory(~/cmake_packages/googletes)


#project(regex)
#cmake_minimum_required(VERSION 2.8)
#include(ExternalProject)
#ExternalProject_Add(
#        googletest
#        PREFIX ${CMAKE_CURRENT_BINARY_DIR}/lib/googletest
#        GIT_REPOSITORY https://github.com/google/googletest/
##        GIT_TAG "Boost_1_41_0"
#        CONFIGURE_COMMAND ""
##        BUILD_COMMAND bjam --with-regex toolset=gcc variant=debug link=static install --prefix=${CMAKE_CURRENT_BINARY_DIR}/boostinstall
##        BUILD_IN_SOURCE 1
##        INSTALL_COMMAND ""
#)
#set(GoogleTest_INCLUDE_DIRS ${CMAKE_CURRENT_BINARY_DIR}/boostinstall/include)
#set(GoogleTest_LIBRARIES ${CMAKE_CURRENT_BINARY_DIR}/boostinstall/lib/libboost_regex.a)
#
## Configure app
#
#include_directories(${Boost_INCLUDE_DIRS})
#add_executable(regex regex.cpp)
#add_dependencies(regex boost)
#target_link_libraries(regex ${Boost_LIBRARIES})