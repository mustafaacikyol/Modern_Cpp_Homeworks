cmake_minimum_required(VERSION 3.1)
project(web_application3)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(../include/)

add_library(image_browser ../src/image_browser.cpp)
add_executable(main3 ../src/main3.cpp) 
target_link_libraries(main3 image_browser)
