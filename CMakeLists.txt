cmake_minimum_required(VERSION 3.10)
project(goodName)

add_executable(${PROJECT_NAME} main.cpp)

#去掉控制台
set_target_properties(${PROJECT_NAME} PROPERTIES
    LINK_FLAGS "-mwindows")

add_subdirectory(adder)
add_subdirectory(external/glfw)

#include_directories(external/glfw/include)

target_include_directories(${PROJECT_NAME} PUBLIC external/glfw/include)

target_link_directories(${PROJECT_NAME} PUBLIC external/glfw/src)

target_link_libraries(${PROJECT_NAME} adder glfw)
