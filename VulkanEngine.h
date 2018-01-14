//
// Created by georgeraven on 1/13/18.
//

#ifndef RAVENVULKANEXPERIMENTS_VULKANENGINE_H
#define RAVENVULKANEXPERIMENTS_VULKANENGINE_H
#define WINDOW_NAME "So long and thanks for all the fish"

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

#include <iostream>

class VulkanEngine {
private:
    // p members
    GLFWwindow* window_m;
    int width_m;
    int height_m;
    // p funcs
    void initWindow();
    void initVulkan();
    void mainLoop();
    void cleanup();
protected:
public:
    void run();
};


#endif //RAVENVULKANEXPERIMENTS_VULKANENGINE_H
