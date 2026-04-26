cmake_minimum_required(VERSION 3.10)

project(MaximalRectangleProject)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_executable(maximal_rectangle demos/main.cpp src/maximal_rectangle.cpp)