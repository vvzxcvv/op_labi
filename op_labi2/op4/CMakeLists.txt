cmake_minimum_required(VERSION 3.23)
project(op4)

set(CMAKE_CXX_STANDARD 20)

add_executable(op4 main.cpp IGeoFig.h CVector2D.h IPhysObject.h IPrintable.h IDialogInitiable.h BaseCObject.h ShapeInterfaces.h Hexagon.h Hexagon.cpp)
