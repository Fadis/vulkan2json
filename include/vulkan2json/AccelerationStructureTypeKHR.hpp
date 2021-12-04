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
#ifndef VULKAN2JSON_ACCELERATIONSTRUCTURETYPEKHR_HPP
#define VULKAN2JSON_ACCELERATIONSTRUCTURETYPEKHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_KHR_ACCELERATION_STRUCTURE_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const AccelerationStructureTypeKHR &p ) {
  if( AccelerationStructureTypeKHR :: eTopLevel == p ) {
    j = "TopLevel";
    return;
  }
  if( AccelerationStructureTypeKHR :: eBottomLevel == p ) {
    j = "BottomLevel";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkAccelerationStructureTypeKHR &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: AccelerationStructureTypeKHR ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, AccelerationStructureTypeKHR &p ) {
  if( j.is_string() ) {
    if( "TopLevel" == j.get< std::string >() ) {
      p = AccelerationStructureTypeKHR :: eTopLevel ;
      return;
    }
    if( "eTopLevel" == j.get< std::string >() ) {
      p = AccelerationStructureTypeKHR :: eTopLevel ;
      return;
    }
    if( "VK_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL_KHR" == j.get< std::string >() ) {
      p = AccelerationStructureTypeKHR :: eTopLevel ;
      return;
    }
    if( "BottomLevel" == j.get< std::string >() ) {
      p = AccelerationStructureTypeKHR :: eBottomLevel ;
      return;
    }
    if( "eBottomLevel" == j.get< std::string >() ) {
      p = AccelerationStructureTypeKHR :: eBottomLevel ;
      return;
    }
    if( "VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_KHR" == j.get< std::string >() ) {
      p = AccelerationStructureTypeKHR :: eBottomLevel ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for AccelerationStructureTypeKHR" );
  }
  if( j.is_number() ) {
    p = AccelerationStructureTypeKHR ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for AccelerationStructureTypeKHR" );
}
}
inline void from_json( const nlohmann::json &j, VkAccelerationStructureTypeKHR &p ) {
  VULKAN_HPP_NAMESPACE :: AccelerationStructureTypeKHR temp;
  from_json( j, temp );
  p = VkAccelerationStructureTypeKHR ( temp );
}
#endif


#endif
