cmake_minimum_required(VERSION 3.15)
project(justify C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(justify
        alternate.c
        cijeli.c
        justify.c
        line.c
        line.h
        word.c
        word.h)
