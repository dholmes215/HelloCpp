# FATAL_ERROR is implicit in all modern versions... but the point of this
# command is to handle old versions, right?
cmake_minimum_required(VERSION 3.9 FATAL_ERROR)

project(HelloCpp LANGUAGES CXX)

# XXX There should really be a more generic way to do this...
if(MSVC)
  add_compile_options(/W4 /WX)
else(MSVC)
  add_compile_options(-Wall -Wextra -pedantic -Werror)
endif(MSVC)

add_subdirectory(src)
