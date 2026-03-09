add_library(mylib)

target_sources(mylib
    PRIVATE
        cards.cpp
        instructions.cpp
        onePlayer.cpp
        twoPlayers.cpp
        freeCredits.cpp
        credits.cpp
)

target_include_directories(mylib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/../header
)