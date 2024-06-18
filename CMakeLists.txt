cmake_minimum_required(VERSION 3.28)
project(tutorial)

set(CMAKE_CXX_STANDARD 20)

add_executable(tutorial main.cpp
        Source/calculator.cpp
        Include/calculator.h
        Source/hypotenuse.cpp
        Include/hypotenuse.h
        Source/temp_converter.cpp
        Include/temp_converter.h
        Source/number_guesser.cpp
        Include/number_guesser.h
        Source/banking.cpp
        Include/banking.h
        Source/rock_paper_scissors.cpp
        Include/rock_paper_scissors.h
        Source/sorting.cpp
        Include/sorting.h
)
