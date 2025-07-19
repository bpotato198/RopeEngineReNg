#include <GL/gl.h>
#include <GLFW/glfw3.h>
#include <thread>
#include <chrono>

#include "../include/shapes.h"

#define WINDOWHEIGHT 640
#define WINDOWWIDTH 840





int main() {


    GLFWwindow* wndw;

    if (!glfwInit()) {
        glfwTerminate();
        return -1;
    }

        wndw = glfwCreateWindow(WINDOWHEIGHT, WINDOWWIDTH, "RopeEngineRENG", NULL, NULL);


        if (!wndw) {
            glfwTerminate();
            return -1;

        }

        glfwMakeContextCurrent(wndw);

        while (!glfwWindowShouldClose(wndw)) {
            int clrkeystate = glfwGetKeyScancode(GLFW_KEY_SPACE);



            


            glClear(GL_COLOR_BUFFER_BIT);
            rectanglegreen();
            glfwSwapBuffers(wndw);
            glfwPollEvents();


        }

        glfwTerminate();


    




}
