#include <string>
#include <iostream>
#include <stdexcept>
#include <functional>
#include <vulkan/vulkan.h> // vk* = function, VK* = struct/enum, VK_* = enum values

#include "ExampleVariableArrayTemplate.h"
#include "HelloTriangleApplication.h"

// Quick hashed together print simplifier TODO: implement log class
template <typename T>
void print(T value)
{
    std::cout << value << std::endl;
}

int main()
{
    HelloTriangleApplication app;

    try
    {

    print("Hello, World."); // templated shorthand print statement

    }
    catch (const std::runtime_error& e)
    {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE; // usually is=to 1
    }

    return EXIT_SUCCESS; // usually is=to 0
}