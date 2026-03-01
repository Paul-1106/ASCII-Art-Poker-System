# minimum version required
cmake_minimum_required(VERSION 3.31)

# set the project name
project(Deluxe-Poker-System)

# setting the c++ version for cmake
set(CMAKE_CXX_STANDARD 20)

# execute with using a set variable
add_library(myLibrary)

# list of all the cpp file that will get execute
target_sources(myLibrary
    PRIVATE
        main.cpp
        src/cards.cpp
        src/instructions.cpp
        src/onePlayer.cpp
        src/twoPlayers.cpp

    PUBLIC
        FILE_SET HEADERS
        BASE_DIRS
            header
        FILES
            header/poker.h
        
)

