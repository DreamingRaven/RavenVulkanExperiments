//
// Created by georgeraven on 1/13/18.
//

#include "VulkanEngine.h"

//private: ---

void VulkanEngine::initWindow() {

    glfwInit();

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
    width_m = 800;
    height_m = 600;
    std::cout << "Window size (h|w)= " << width_m << " | " << height_m << std::endl;

    window_m = glfwCreateWindow(width_m, height_m, WINDOW_NAME, nullptr, nullptr);
}

void VulkanEngine::initVulkan() {

    uint32_t extensionCount = 0;
    vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);

    std::cout << extensionCount << " extensions supported" << std::endl;

    glm::mat4 matrix;
    glm::vec4 vec;
    auto test = matrix * vec;
}

void VulkanEngine::mainLoop() {

    while(!glfwWindowShouldClose(window_m)) {
        glfwPollEvents();
    }

    glfwDestroyWindow(window_m);
}

void VulkanEngine::cleanup() {

}

// public: ---

void VulkanEngine::run() {

    glfwTerminate();
    initWindow();
    initVulkan();
    mainLoop();
    cleanup();
}