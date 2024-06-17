cmake_minimum_required(VERSION 3.26)
project(code C)

set(CMAKE_C_STANDARD 11)

add_executable(code main.c
        algorithms/task/1_get_time.h
        algorithms/task/2_determine_type_quadrilateral.h)
