cmake_minimum_required(VERSION 4.1)
project(srs C)

set(CMAKE_C_STANDARD 11)

add_executable(srs src/main.c
        src/student.c
        src/file.c
        src/utils.c
        include/student.h
        include/file.h
        include/utils.h)
