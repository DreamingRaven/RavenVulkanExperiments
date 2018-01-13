//
// Created by georgeraven on 1/13/18.
//

#ifndef RAVENVULKANEXPERIMENTS_VulkanHandler_H
#define RAVENVULKANEXPERIMENTS_VulkanHandler_H


class VulkanHandler {
private:
    void initWindow();
    void initVulkan();
    void mainLoop();
    void cleanup();
protected:
public:
    void run();
};


#endif //RAVENVULKANEXPERIMENTS_VulkanHandler_H
