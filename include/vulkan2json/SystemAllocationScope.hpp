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
#ifndef VULKAN2JSON_SYSTEMALLOCATIONSCOPE_HPP
#define VULKAN2JSON_SYSTEMALLOCATIONSCOPE_HPP

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
inline void to_json( nlohmann::json &j, const SystemAllocationScope &p ) {
  if( SystemAllocationScope :: eCommand == p ) {
    j = "Command";
    return;
  }
  if( SystemAllocationScope :: eObject == p ) {
    j = "Object";
    return;
  }
  if( SystemAllocationScope :: eCache == p ) {
    j = "Cache";
    return;
  }
  if( SystemAllocationScope :: eDevice == p ) {
    j = "Device";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkSystemAllocationScope &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: SystemAllocationScope ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, SystemAllocationScope &p ) {
  if( j.is_string() ) {
    if( "Command" == j.get< std::string >() ) {
      p = SystemAllocationScope :: eCommand ;
      return;
    }
    if( "eCommand" == j.get< std::string >() ) {
      p = SystemAllocationScope :: eCommand ;
      return;
    }
    if( "VK_SYSTEM_ALLOCATION_SCOPE_COMMAND" == j.get< std::string >() ) {
      p = SystemAllocationScope :: eCommand ;
      return;
    }
    if( "Object" == j.get< std::string >() ) {
      p = SystemAllocationScope :: eObject ;
      return;
    }
    if( "eObject" == j.get< std::string >() ) {
      p = SystemAllocationScope :: eObject ;
      return;
    }
    if( "VK_SYSTEM_ALLOCATION_SCOPE_OBJECT" == j.get< std::string >() ) {
      p = SystemAllocationScope :: eObject ;
      return;
    }
    if( "Cache" == j.get< std::string >() ) {
      p = SystemAllocationScope :: eCache ;
      return;
    }
    if( "eCache" == j.get< std::string >() ) {
      p = SystemAllocationScope :: eCache ;
      return;
    }
    if( "VK_SYSTEM_ALLOCATION_SCOPE_CACHE" == j.get< std::string >() ) {
      p = SystemAllocationScope :: eCache ;
      return;
    }
    if( "Device" == j.get< std::string >() ) {
      p = SystemAllocationScope :: eDevice ;
      return;
    }
    if( "eDevice" == j.get< std::string >() ) {
      p = SystemAllocationScope :: eDevice ;
      return;
    }
    if( "VK_SYSTEM_ALLOCATION_SCOPE_DEVICE" == j.get< std::string >() ) {
      p = SystemAllocationScope :: eDevice ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for SystemAllocationScope" );
  }
  if( j.is_number() ) {
    p = SystemAllocationScope ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for SystemAllocationScope" );
}
}
inline void from_json( const nlohmann::json &j, VkSystemAllocationScope &p ) {
  VULKAN_HPP_NAMESPACE :: SystemAllocationScope temp;
  from_json( j, temp );
  p = VkSystemAllocationScope ( temp );
}
#endif


#endif
