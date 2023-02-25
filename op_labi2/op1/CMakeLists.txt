cmake_minimum_required(VERSION 3.23)
project(op1)

set(CMAKE_CXX_STANDARD 20)

add_executable(op1 main.cpp procedures.cpp functions.h procedures.h Square.cpp Square.h Point.cpp Point.h)
