cmake_minimum_required(VERSION 3.31)
project(Brainfuck_Interpreter)

set(CMAKE_CXX_STANDARD 20)

add_executable(Brainfuck_Interpreter src/main.cpp
        src/compilador.cpp
        include/compilador.h)
