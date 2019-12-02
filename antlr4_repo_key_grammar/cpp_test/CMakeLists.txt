cmake_minimum_required(VERSION 3.8)
project(repo_key_test_cpp)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++11 -Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG")

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

add_subdirectory(antlr4_cpp_runtime/)

file(GLOB sources repo_key_generated/*.cpp)

add_executable(repo_key_test_cpp ${sources} main.cpp)
target_link_libraries(repo_key_test_cpp antlr4_cpp_runtime)
