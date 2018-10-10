# FATAL_ERROR is implicit in all modern versions... but the point of this
# command is to handle old versions, right?
cmake_minimum_required(VERSION 3.9 FATAL_ERROR)

project(HelloCpp LANGUAGES CXX)

# Default to debug builds
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "Debug")
endif()

# XXX There should really be a more generic way to do this...
if(MSVC)
  add_compile_options(/W4 /WX)
else(MSVC)
  add_compile_options(-Wall -Wextra -pedantic -Werror)
endif(MSVC)

# Use Conan to install dependencies
# conan.cmake comes from https://github.com/conan-io/cmake-conan
include(conan.cmake)
conan_cmake_run(CONANFILE conanfile.txt
                BASIC_SETUP CMAKE_TARGETS
                BUILD missing)

# Configure Conan
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_subdirectory(src)
