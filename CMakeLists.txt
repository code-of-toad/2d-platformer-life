cmake_minimum_required(VERSION 3.28)
project(2d_platformer_life)

set(CMAKE_CXX_STANDARD 17)

add_executable(2d_platformer_life
        src/main.cpp
)

############# SFML #############
set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/SFML-2.6.1/lib/cmake/SFML)
find_package(SFML COMPONENTS REQUIRED
        system
        window
        graphics
        audio
        network
)
target_link_libraries(2d_platformer_life
        sfml-system
        sfml-window
        sfml-graphics
        sfml-audio
        sfml-network
)
################################