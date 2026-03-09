add_executable(myApp)

target_sources(myApp
    PRIVATE
        main.cpp
)

target_link_libraries(myApp
    PRIVATE
        mylib
)