cmake_minimum_required(VERSION 3.22)
project(Victor)

set(CMAKE_CXX_STANDARD 17)

add_library(Victor src/Vector.cpp src/Vector.h src/SIMD/SIMD.h)
