cmake_minimum_required(VERSION 3.7)
project(Clock)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
add_executable(Clock ${SOURCE_FILES})
target_link_libraries(Clock graph)