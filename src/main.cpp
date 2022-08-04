
// GLEW needs to be included first
#include <GL/glew.h>

// GLFW is included next
#include <GLFW/glfw3.h>

constexpr unsigned int WIDTH = 1440;
constexpr unsigned int HEIGHT = 900;

int main(int argc, char **argv)
{

	glfwInit();
	GLFWwindow *window = glfwCreateWindow(WIDTH, HEIGHT, " Hello OpenGL ", NULL, NULL);
	glfwMakeContextCurrent(window);
	glewInit();

	GLuint VertexArrayID;
	glGenVertexArrays(1, &VertexArrayID);
	glBindVertexArray(VertexArrayID);

	while (!glfwWindowShouldClose(window))
	{

		glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glDeleteVertexArrays(1, &VertexArrayID);

	glfwTerminate();

	return 0;
}
