// GeorgeRaven:18/01/13 (yy/mm/dd)

#ifndef RAVENVULKANEXPERIMENTS_VULKANENGINE_H
#define RAVENVULKANEXPERIMENTS_VULKANENGINE_H
#define WINDOW_NAME "Vulkan GLFW window"

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

#include <iostream>
#include <vector>

class VulkanEngine {
private:
    // members
    GLFWwindow* window_m;
    VkInstance instance_m;
    const int height_m = 800;   //TODO: set via constructor
    const int width_m = 700;    //TODO: set via constructor
    const std::vector<const char*> validationLayers_m {
            "VK_LAYER_LUNARG_standard_validation"
    };
#ifndef NDEBUG // check if compiler is in debug or release mode
    const bool enableValidationLayers_m = false;
#else
    const bool enableValidationLayers_m = true;
#endif
    // funcs
    void createInstance();
    void initWindow();
    void initVulkan();
    void mainLoop();
    void cleanup();
protected:
public:
    void run();
    VulkanEngine() = default;
};


#endif //RAVENVULKANEXPERIMENTS_VULKANENGINE_H