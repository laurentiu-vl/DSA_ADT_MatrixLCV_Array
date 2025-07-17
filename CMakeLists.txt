cmake_minimum_required(VERSION 3.30)
project(DSA_ADT_MatrixLCV_Array)

set(CMAKE_CXX_STANDARD 20)

add_executable(DSA_ADT_MatrixLCV_Array main.cpp
        ExtendedTest.cpp
        ExtendedTest.h
        Matrix.cpp
        Matrix.h
        ShortTest.cpp
        ShortTest.h)
