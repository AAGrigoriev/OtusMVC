cmake_minimum_required(VERSION 3.10)

project (project_mvc)

add_executable(main main.cpp)

target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
