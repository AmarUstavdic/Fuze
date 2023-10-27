#include <GL/glew.h>
#include <GLFW/glfw3.h>

int main() {
    
    if (!glfwInit()) {
        return -1;
    }

    GLFWwindow* window = glfwCreateWindow(800, 600, "Fuze", NULL, NULL);
    if (!window) {
        // Window creation failed
        glfwTerminate();
        return -1;
    }

    // Make the window's OpenGL context current
    glfwMakeContextCurrent(window);

    if (glewInit() != GLEW_OK) {
        // GLEW initialization failed
        return -1;
    }

    while (!glfwWindowShouldClose(window)) {
        // Game loop code goes here
        

        glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);


        // Swap the front and back buffers
        glfwSwapBuffers(window);


        // Poll for and process events
        glfwPollEvents();
    }

    // Terminate GLFW and clean up resources
    glfwTerminate();

    return 0;
}
