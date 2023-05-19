cmake_minimum_required(VERSION 3.24)
project(Tetris)

set(CMAKE_CXX_STANDARD 11)

add_executable(Tetris main.cpp src/Block.cpp src/Block.h src/Tetris.cpp src/Tetris.h)
