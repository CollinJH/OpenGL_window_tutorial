#!/bin/bash

GLFW_PATH=/opt/homebrew/Cellar/glfw/3.3.8

g++ -o OpenGLApp main.cpp -I$GLFW_PATH/include -L$GLFW_PATH/lib -lglfw -framework OpenGL
