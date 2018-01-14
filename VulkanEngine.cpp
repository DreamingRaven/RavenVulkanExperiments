//
// Created by georgeraven on 1/13/18.
//

#include "VulkanEngine.h"

//private: ---

void VulkanEngine::initWindow() {

    glfwInit();
    // configure glfw through hints
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
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

}

void VulkanEngine::cleanup() {

    glfwDestroyWindow(window_m);
    glfwTerminate();
}

// public: ---

void VulkanEngine::run() {

    width_m  = 800; // TODO implement constructor that assighns these
    height_m = 600;
    glfwTerminate();
    initWindow();
    initVulkan();
    mainLoop();
    cleanup();
}