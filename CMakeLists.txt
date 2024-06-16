cmake_minimum_required(VERSION 3.16)
project(assign1Soln C)

set(CMAKE_C_STANDARD 99)

add_executable(assign1Soln clientApp.c
        sudokuTester.c
        sudokuTester.h
        sudokuTester.h)