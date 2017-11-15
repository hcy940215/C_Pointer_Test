cmake_minimum_required(VERSION 3.8)
project(Test)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c pointerFun.c)
add_executable(Test ${SOURCE_FILES})