cmake_minimum_required(VERSION 3.1)
project(arithmetic)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(include/)

add_library(ipb_arithmetic src/sum.cpp src/subtract.cpp)
add_executable(main src/main.cpp)
target_link_libraries(main ipb_arithmetic)
