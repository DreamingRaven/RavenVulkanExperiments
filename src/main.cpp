// GeorgeRaven: Importat notes; Hungarian notation, and template headers as .tpp files.

#include <string>
#include <iostream>
#include <stdexcept>
#include <functional>

//#include <vulkan/vulkan.h> // vk* = function, VK* = struct/enum, VK_* = enum values
#define GLFW_INCLUDE_VULKAN // tells glfw to include vulkan for us
#include <GLFW/glfw3.h>

#include "ExampleVariableArrayTemplate.h"
#include "VulkanHandler.h"

// Quick hashed together print simplifier TODO: implement log class
template <typename T>
void print(T value)
{
    std::cout << value << std::endl;
}

int main()
{
    VulkanHandler app;
    ExampleVariableArrayTemplate<int, 5> templatedArray; // delete this whenever its just a shitty example and niche
    print(templatedArray.getSize()); // as above ^

    try
    {

    print("Hello, World."); // templated shorthand print statement
        app.run();

    }
    catch (const std::runtime_error& e)
    {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE; // usually is=to 1
    }

    return EXIT_SUCCESS; // usually is=to 0
}