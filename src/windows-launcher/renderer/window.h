#pragma once
#include "pch.h"

#include <glad/glad.h>
#include <GLFW/glfw3.h>

// inits window, returns error code if any.
int initWindow();

// resize callback
void framebufferSizeCallback(GLFWwindow* window, int width, int height);

GLFWwindow* getCurrentWindow();