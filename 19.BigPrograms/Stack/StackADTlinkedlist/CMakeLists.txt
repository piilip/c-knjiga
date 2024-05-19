cmake_minimum_required(VERSION 3.15)
project(StackADTlinkedlist C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(StackADTlinkedlist
        stackadt.c
        stackadt.h
        stackclient.c)
