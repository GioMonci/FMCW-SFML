cmake_minimum_required(VERSION 3.29)
project(FMCW_SFML)
set(CMAKE_CXX_STANDARD 20)
add_executable(FMCW_SFML src/main.cpp
        src/WindowSFML.cpp
        include/WindowSFML.h
        include/common.h
        src/TextAndFont.cpp
        include/TextAndFont.h
        src/Buttons.cpp
        include/Buttons.h)
set(CMAKE_EXE_LINKER_FLAGS "-static")
set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR C:/Z_Dev/SFML-2.6.1/lib/cmake/SFML)
find_package(SFML COMPONENTS system window graphics audio network REQUIRED)
include_directories(C:/Z_Dev/SFML-2.6.1/include/SFML)
target_link_libraries(FMCW_SFML sfml-system sfml-window sfml-graphics sfml-audio)
