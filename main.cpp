#include <iostream>
#include "VulkanEngine.h"

int main() {
    try{
        VulkanEngine app;
        app.run();
    }
    catch(const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}