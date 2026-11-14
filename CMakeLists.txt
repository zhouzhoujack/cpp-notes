cmake_minimum_required(VERSION 3.16)

project(cpp-notes LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include("/home/hz/toolchain/cmake/toolchain.cmake")

add_executable(cpp-notes src/main.cpp)
