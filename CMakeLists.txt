cmake_minimum_required(VERSION 3.20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(
    VectoRex
    VERSION 0.1.0
    DESCRIPTION "A vector database in C++"
    LANGUAGES CXX
)

add_executable(VectoRex
    src/main.cpp
    src/vector.cpp
)

target_include_directories(VectoRex
    PRIVATE
        include
)
