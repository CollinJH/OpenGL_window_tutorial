cmake_minimum_required(VERSION 3.12)

project(OpenGLApp)

find_package(glfw3 3.3.8 REQUIRED)

add_executable(OpenGLApp main.cpp)
target_link_libraries(OpenGLApp glfw)
target_link_libraries(OpenGLApp "-framework OpenGL")
