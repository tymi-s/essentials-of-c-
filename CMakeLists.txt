cmake_minimum_required(VERSION 3.28)
project(Essentials_of_C__)

set(CMAKE_CXX_STANDARD 26)

add_executable(Essentials_of_C__ main.cpp
        pointers.cpp
        pointers.h
        arrays.cpp
        arrays.h
        MemoryAlocation.cpp
        vectors.cpp
        solution.h
        solution.cpp
        STL.h
        STL.cpp
        algorythms.h
        algorithms.cpp)
