#include <GLFW/glfw3.h>

int main() {

  if (!glfwInit()) {
    return -1;
  }

  GLFWwindow* window = glfwCreateWindow(800, 600, "OpenGL Window", NULL, NULL);
  if (!window) {
    return -1;
  }

  glfwMakeContextCurrent(window);

  while (!glfwWindowShouldClose(window)) {
    glfwSwapBuffers(window);

    glfwPollEvents();
  }

  glfwTerminate();
  return 0;
}
