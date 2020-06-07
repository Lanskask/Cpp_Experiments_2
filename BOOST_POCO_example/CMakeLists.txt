cmake_minimum_required(VERSION 2.8)
project(BoostPoco)
add_compile_options(-std=c++11)
#add_compile_options(-static-libstdc++)

#Flags: -lc++abi -std=c++11
#For clang: -stdlib=libc++
#set(CMAKE_CXX_FLAGS "${CMAKE_C_FLAGS} -stdlib=libc++")

if(EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
  include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
  conan_basic_setup()
endif()

add_executable(timer timer.cpp)
target_link_libraries(timer ${CONAN_LIBS})

# But we could use CMake find_package as well, or link with libraries individually
#find_package(Boost REQUIRED regex)

#if(Boost_FOUND)
#  include_directories(${Boost_INCLUDE_DIRS})
#  target_link_libraries(timer ${Boost_LIBRARIES})
#endif()
	
#target_link_libraries(timer ${CONAN_LIBS_POCO})
