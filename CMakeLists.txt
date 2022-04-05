cmake_minimum_required(VERSION 3.20)
project(Lab2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Lab2
        animal.h
        main.cpp
        safari.cpp
        safari.h
        simple_simulation.h
        simulation.cpp
        simulation.h Point.cpp Point.h Vector2D.cpp Vector2D.h)
