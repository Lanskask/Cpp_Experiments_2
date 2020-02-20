project(regex)

cmake_minimum_required(VERSION 2.8)

# For some external project macros
include(ExternalProject)

# Download boost from git and build regex module

ExternalProject_Add(
    boost
    PREFIX ${CMAKE_CURRENT_BINARY_DIR}/boost
    GIT_REPOSITORY https://github.com/conda-forge/boost-cpp-feedstock.git
    GIT_TAG "Boost_1_41_0"
    CONFIGURE_COMMAND ""
    BUILD_COMMAND bjam --with-regex toolset=gcc variant=debug link=static install --prefix=${CMAKE_CURRENT_BINARY_DIR}/boostinstall
    BUILD_IN_SOURCE 1
    INSTALL_COMMAND ""
)

set(Boost_INCLUDE_DIRS ${CMAKE_CURRENT_BINARY_DIR}/boostinstall/include)
set(Boost_LIBRARIES ${CMAKE_CURRENT_BINARY_DIR}/boostinstall/lib/libboost_regex.a)

# Configure app

include_directories(${Boost_INCLUDE_DIRS})
add_executable(regex regex.cpp)
add_dependencies(regex boost)
target_link_libraries(regex ${Boost_LIBRARIES})