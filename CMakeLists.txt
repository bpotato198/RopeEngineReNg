cmake_minimum_required(VERSION 3.10.0)
project(ropeenginereng VERSION 0.1.0 LANGUAGES C CXX)

add_executable(ropeenginereng 

    src/main.cpp
    src/shapes.cpp

)

include_directories(${CMAKE_SOURCE_DIR}/src)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

target_link_libraries(ropeenginereng OpenGL::GL glfw)