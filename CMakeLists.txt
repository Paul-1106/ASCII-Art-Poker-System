# minimum version required
cmake_minimum_required(VERSION 3.31)

# set the project name
project(Deluxe-Poker-System CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# execute with using a set variable
add_subdirectory(src)
add_subdirectory(app)

