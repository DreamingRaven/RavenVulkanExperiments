# GeorgeRaven:18/01/13 (yy/mm/dd)
cmake_minimum_required(VERSION 3.9)
project(RavenVulkanExperiments)
set(CMAKE_CXX_STANDARD 11)

if( NOT CMAKE_BUILD_TYPE )
    set( CMAKE_BUILD_TYPE Debug
            CACHE STRING
            "Choose the type of build, options are: None Debug Release RelWithDebInfo MinSizeRel."
            FORCE)
endif()

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src/)