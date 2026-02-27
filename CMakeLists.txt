cmake_minimum_required(VERSION 3.12)

# set the project name
project(Deluxe-Poker-System LANGUAGE CXX)

# setting the c++ version for cmake
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# list of all the cpp file that will get execute
set(SOURCE_CPP_FILES
    main.cpp
    src/onePlayer.cpp
    src/twoPlayers.cpp
    src/cards.cpp
    src/instructions.cpp
)

# execute with using a set variable
add_executable(my_executable ${SOURCE_CPP_FILES})

# including the header file
target_include_directories(my_executable PRIVATE ${CMAKE_SOURCE_DIR}/header)

