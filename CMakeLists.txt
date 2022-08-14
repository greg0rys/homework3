cmake_minimum_required(VERSION 3.23)
project(cs162_homework3_dynamic_memory)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cs162_homework3_dynamic_memory
        list.cpp
        list.h
        main.cpp
        main.h
        word.cpp
        word.h)
