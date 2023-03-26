cmake_minimum_required(VERSION 3.23)
project(op3)

set(CMAKE_CXX_STANDARD 20)

add_executable(op3 main.cpp Triangle.h Triangle.cpp Stack.h Stack.cpp)
