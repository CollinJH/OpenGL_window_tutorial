## How to open a window in OpenGL

This is done on MacOS using the .zsh shell <br>

We want to use a library called GLFW to allow us simple cross platform accessability. <br>

in our terminal install GLFW using homebrew <br>
`brew install glfw` <br>

now we can include the <br> `GLFW/glfw3.h`<br>
in our c++ code <br>
`main.cpp` <br>
shows us example of code that will open an OpenGL window <br>

## Compiling and linking

first try <br>
`g++ -o OpenGLApp main.cpp -lglfw -framework OpenGL` <br>
this may give you an error that the library is not linked properly though <br>
this is because the linker -l cannot find the proper path <br> <br>

What we will do is find the proper path in our terminal<br>
`brew info glfw` <br>

This will reveal your proper path and we can include it like so <br>
`g++ -o OpenGLApp main.cpp -I/usr/local/Cellar/glfw/x.x.x/include \` <br>
 `-L/usr/local/Cellar/glfw/x.x.x/lib -lgflw -framework OpenGL` <br>

This should properly compile and create an executable <br>

that we can run with `./OpenGLApp`

## How can we shorten this process?

1. create a bash script
    we can create a bash script that can compile our cpp program <br>
    `#!bin/bash
     GLFW_PATH=/usr/local/Cellar/glfw/x.x.x
     g++ -o OpenGLApp main.cpp -I$GLFW_PATH/include -L$GLFW_PATH/lib -lgflw -framework OpenGL
    `
2. create and export a variable in .zshrc or .bashrc etc
    `export GLFW_PATH=/usr/local/Cellar/glfw/x.x.x`


3. using CMAKE
