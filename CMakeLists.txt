cmake_minimum_required(VERSION 3.10)

project(MaximalRectangle)

set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(main_ejecutable demos/main.cpp src/maximal_rectangle.cpp)
add_executable(tests_ejecutable tests/test.cpp src/maximal_rectangle.cpp)
add_executable(benchmark_ejecutable benchmarks/benchmark.cpp src/maximal_rectangle.cpp)