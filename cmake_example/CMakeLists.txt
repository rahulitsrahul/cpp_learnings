# Set the minimum CMake version required to build this project
cmake_minimum_required(VERSION 3.10)

# Set the project name
project(MyCMakeProject)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable. 'main.cpp' is relative to the project directory
add_executable(MyCMakeExecutable src/main.cpp src/foo.cpp)