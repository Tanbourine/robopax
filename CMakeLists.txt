cmake_minimum_required(VERSION 3.5)
project(robopax)

# Specify C++ standard (optional, but recommended)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Use GLOB for each module
file(GLOB_RECURSE SOURCES src/*.cpp)

# Collect sources
set(${SOURCES})

add_executable(robopax ${SOURCES})
