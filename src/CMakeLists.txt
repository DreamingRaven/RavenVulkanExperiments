cmake_minimum_required(VERSION 3.9)

set(CMAKE_CXX_STANDARD 11)

find_package(Vulkan REQUIRED)
find_package(glfw3 REQUIRED)
find_package(glm REQUIRED)

include_directories(${Vulkan_INCLUDE_DIR})
add_executable(${PROJECT_NAME}
        ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/HelloTriangleApplication.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/HelloTriangleApplication.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/ExampleVariableArrayTemplate.tpp # not neccessary
        ${CMAKE_CURRENT_SOURCE_DIR}/src/ExampleVariableArrayTemplate.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/ExampleVariableArrayTemplate.h
        )
target_link_libraries(${PROJECT_NAME} Vulkan::Vulkan glfw) # **not 100% on Vulkan::Vulkan

# ** Vulkan seems to implement a similar import to Eigen3:Eigen needs checking!