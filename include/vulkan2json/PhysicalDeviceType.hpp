/*
 * Copyright (c) 2021 Naomasa Matsubayashi
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
#ifndef VULKAN2JSON_PHYSICALDEVICETYPE_HPP
#define VULKAN2JSON_PHYSICALDEVICETYPE_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_VERSION_1_0
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PhysicalDeviceType &p ) {
  if( PhysicalDeviceType :: eOther == p ) {
    j = "Other";
    return;
  }
  if( PhysicalDeviceType :: eIntegratedGpu == p ) {
    j = "IntegratedGpu";
    return;
  }
  if( PhysicalDeviceType :: eDiscreteGpu == p ) {
    j = "DiscreteGpu";
    return;
  }
  if( PhysicalDeviceType :: eVirtualGpu == p ) {
    j = "VirtualGpu";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkPhysicalDeviceType &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PhysicalDeviceType ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PhysicalDeviceType &p ) {
  if( j.is_string() ) {
    if( "Other" == j.get< std::string >() ) {
      p = PhysicalDeviceType :: eOther ;
      return;
    }
    if( "eOther" == j.get< std::string >() ) {
      p = PhysicalDeviceType :: eOther ;
      return;
    }
    if( "VK_PHYSICAL_DEVICE_TYPE_OTHER" == j.get< std::string >() ) {
      p = PhysicalDeviceType :: eOther ;
      return;
    }
    if( "IntegratedGpu" == j.get< std::string >() ) {
      p = PhysicalDeviceType :: eIntegratedGpu ;
      return;
    }
    if( "eIntegratedGpu" == j.get< std::string >() ) {
      p = PhysicalDeviceType :: eIntegratedGpu ;
      return;
    }
    if( "VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU" == j.get< std::string >() ) {
      p = PhysicalDeviceType :: eIntegratedGpu ;
      return;
    }
    if( "DiscreteGpu" == j.get< std::string >() ) {
      p = PhysicalDeviceType :: eDiscreteGpu ;
      return;
    }
    if( "eDiscreteGpu" == j.get< std::string >() ) {
      p = PhysicalDeviceType :: eDiscreteGpu ;
      return;
    }
    if( "VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU" == j.get< std::string >() ) {
      p = PhysicalDeviceType :: eDiscreteGpu ;
      return;
    }
    if( "VirtualGpu" == j.get< std::string >() ) {
      p = PhysicalDeviceType :: eVirtualGpu ;
      return;
    }
    if( "eVirtualGpu" == j.get< std::string >() ) {
      p = PhysicalDeviceType :: eVirtualGpu ;
      return;
    }
    if( "VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU" == j.get< std::string >() ) {
      p = PhysicalDeviceType :: eVirtualGpu ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for PhysicalDeviceType" );
  }
  if( j.is_number() ) {
    p = PhysicalDeviceType ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for PhysicalDeviceType" );
}
}
inline void from_json( const nlohmann::json &j, VkPhysicalDeviceType &p ) {
  VULKAN_HPP_NAMESPACE :: PhysicalDeviceType temp;
  from_json( j, temp );
  p = VkPhysicalDeviceType ( temp );
}
#endif


#endif
