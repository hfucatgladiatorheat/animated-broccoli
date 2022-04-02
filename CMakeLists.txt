cmake_minimum_required(VERSION 3.10)

# set the project name
project(hello)

# add the executable
add_library(increase OBJECT increase.c)
# target_link_libraries(increase PUBLIC incr)
add_library(twice OBJECT twice.c)
# target_link_libraries(twice PUBLIC twc)
add_executable(hello hello.c)
target_link_libraries(hello increase)
target_link_libraries(hello twice)
