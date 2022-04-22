cmake_minimum_required(VERSION 3.1)
project(web_application)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(../include/)

add_library(html_writer ../src/html_writer.cpp)
add_executable(main ../src/main.cpp) 
target_link_libraries(main html_writer)
