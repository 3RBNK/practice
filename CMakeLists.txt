cmake_minimum_required(VERSION 3.26)
project(code C)

set(CMAKE_C_STANDARD 11)

add_executable(code main.c
        algorithms/task/1_get_time.h
        algorithms/task/2_determine_type_quadrilateral.h
        algorithms/task/4_get_variance.h
        algorithms/task/3_get_rectangle_intersection.h
        data_structures/matrix/matrix.h
        data_structures/matrix/matrix.c
        algorithms/task/6_find_all_hidden_columns.h
)
