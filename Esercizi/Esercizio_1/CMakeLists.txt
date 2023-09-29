cmake_minimum_required (VERSION 3.25.1)
project(test)

add_subdirectory(src)

add_executable(test
hello_world.cpp
)
target_link_libraries(test test_lib)
