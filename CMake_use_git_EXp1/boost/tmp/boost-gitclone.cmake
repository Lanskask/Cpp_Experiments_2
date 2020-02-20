
if(NOT "/Users/smurtazin/Programming/C++/CMake_use_git_EXp1/boost/src/boost-stamp/boost-gitinfo.txt" IS_NEWER_THAN "/Users/smurtazin/Programming/C++/CMake_use_git_EXp1/boost/src/boost-stamp/boost-gitclone-lastrun.txt")
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/Users/smurtazin/Programming/C++/CMake_use_git_EXp1/boost/src/boost-stamp/boost-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E remove_directory "/Users/smurtazin/Programming/C++/CMake_use_git_EXp1/boost/src/boost"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/Users/smurtazin/Programming/C++/CMake_use_git_EXp1/boost/src/boost'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git"  clone  "https://github.com/conda-forge/boost-cpp-feedstock.git" "boost"
    WORKING_DIRECTORY "/Users/smurtazin/Programming/C++/CMake_use_git_EXp1/boost/src"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/conda-forge/boost-cpp-feedstock.git'")
endif()

execute_process(
  COMMAND "/usr/bin/git"  checkout Boost_1_41_0 --
  WORKING_DIRECTORY "/Users/smurtazin/Programming/C++/CMake_use_git_EXp1/boost/src/boost"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: 'Boost_1_41_0'")
endif()

execute_process(
  COMMAND "/usr/bin/git"  submodule update --recursive --init 
  WORKING_DIRECTORY "/Users/smurtazin/Programming/C++/CMake_use_git_EXp1/boost/src/boost"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/Users/smurtazin/Programming/C++/CMake_use_git_EXp1/boost/src/boost'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/Users/smurtazin/Programming/C++/CMake_use_git_EXp1/boost/src/boost-stamp/boost-gitinfo.txt"
    "/Users/smurtazin/Programming/C++/CMake_use_git_EXp1/boost/src/boost-stamp/boost-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/Users/smurtazin/Programming/C++/CMake_use_git_EXp1/boost/src/boost-stamp/boost-gitclone-lastrun.txt'")
endif()

