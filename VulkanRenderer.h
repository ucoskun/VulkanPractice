#pragma once

#include <GLFW/glfw3.h>
#include <iostream>

#include <stdexcept>
#include <vector>



class VulkanRenderer
{
public:
	VulkanRenderer();

	int init(GLFWwindow* newWindow);

	~VulkanRenderer();

private:
	GLFWwindow* window;

	// Vulkan components
	VkInstance instance;
	

	// Vulkan functions
	void createInstance();
};

