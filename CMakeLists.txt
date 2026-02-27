cmake_minimum_required(VERSION 4.1)
project(srs C)

set(CMAKE_C_STANDARD 11)

add_executable(srs src/main.c
        src/student.c
        src/utils.c
        include/student.h
        include/utils.h
        include/file.h
        src/file.c)
