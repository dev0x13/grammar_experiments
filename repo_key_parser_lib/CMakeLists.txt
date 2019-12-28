cmake_minimum_required(VERSION 3.8)
project(repo_key_parser)

# Parameters

set(lib_type         STATIC     CACHE STRING "Built library type")
set(prebuilt_type    x64-gcc5.4 CACHE STRING "Prebuilt platform type")
set(antlr4_link_type STATIC     CACHE STRING "ANTLR4 C++ runtime library to use")

# Compiler args

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra -fPIC")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG")

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# Main target set up

add_subdirectory(prebuilt/)

file(GLOB sources src/*.cpp)

add_library(repo_key_parser ${lib_type} ${sources})
target_include_directories(repo_key_parser PUBLIC include/)
target_link_libraries(repo_key_parser antlr4_cpp_runtime)
