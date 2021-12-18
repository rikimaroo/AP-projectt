cmake_minimum_required(VERSION 3.0)
project(AP)
set(CMAKE_CXX_STANDARD 11)
add_executable( 
    sources/main.cpp 
    sources/shoe.cpp 
    sources/waxe.cpp
    sources/repair.cpp)
include_directories(include)