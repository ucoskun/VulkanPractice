#define GLFW_INCLUDE_VULKAN

#include <GLFW/glfw3.h>

#include <stdexcept>
#include <vector>
#include <iostream>

#include "VulkanRenderer.h"
VulkanRenderer vulkanRenderer;

GLFWwindow* window;

void initWindow(std::string wName = "Test Window", const int width = 800, const int height = 600)
{
	// Initialize GLFW
	glfwInit();

	// Set GLFW to NOT work with OpenGL
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	window = glfwCreateWindow(width, height, wName.c_str(), nullptr, nullptr);

}

int main()
{
	// Create window
	initWindow("Test Window", 800, 600);

	// Create Vulkan Renderer Instance
	vulkanRenderer.init(window);

	// Loop until closed
	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
	}

	// Destroy GLFW window and stop GLFW
	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}