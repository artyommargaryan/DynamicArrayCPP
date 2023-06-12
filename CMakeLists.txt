cmake_minimum_required(VERSION 3.25)
project(DynamicArrayCPP)

set(CMAKE_CXX_STANDARD 17)

add_executable(DynamicArrayCPP main.cpp DynamicArray.h DynamicArray.cpp)
