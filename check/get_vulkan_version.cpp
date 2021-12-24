#include <iostream>
#include <vulkan/vulkan_core.h>

int main() {
  std::cout <<
    VK_API_VERSION_MAJOR(VK_HEADER_VERSION_COMPLETE) << "." <<
    VK_API_VERSION_MINOR(VK_HEADER_VERSION_COMPLETE) << "." <<
    VK_API_VERSION_PATCH(VK_HEADER_VERSION_COMPLETE) << std::flush;
}
