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
#ifndef VULKAN2JSON_BUILDACCELERATIONSTRUCTUREFLAGSKHR_HPP
#define VULKAN2JSON_BUILDACCELERATIONSTRUCTUREFLAGSKHR_HPP

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
inline void to_json( nlohmann::json &j, const BuildAccelerationStructureFlagBitsKHR &p ) {
  if( BuildAccelerationStructureFlagBitsKHR :: eAllowUpdate == p ) {
    j = "AllowUpdate";
    return;
  }
  if( BuildAccelerationStructureFlagBitsKHR :: eAllowCompaction == p ) {
    j = "AllowCompaction";
    return;
  }
  if( BuildAccelerationStructureFlagBitsKHR :: ePreferFastTrace == p ) {
    j = "PreferFastTrace";
    return;
  }
  if( BuildAccelerationStructureFlagBitsKHR :: ePreferFastBuild == p ) {
    j = "PreferFastBuild";
    return;
  }
  if( BuildAccelerationStructureFlagBitsKHR :: eLowMemory == p ) {
    j = "LowMemory";
    return;
  }
}
inline void from_json( const nlohmann::json &j, BuildAccelerationStructureFlagBitsKHR &p ) {
  if( j.is_string() ) {
    if( "AllowUpdate" == j.get< std::string >() ) {
      p = BuildAccelerationStructureFlagBitsKHR :: eAllowUpdate ;
      return;
    }
    if( "eAllowUpdate" == j.get< std::string >() ) {
      p = BuildAccelerationStructureFlagBitsKHR :: eAllowUpdate ;
      return;
    }
    if( "VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_UPDATE_BIT_KHR" == j.get< std::string >() ) {
      p = BuildAccelerationStructureFlagBitsKHR :: eAllowUpdate ;
      return;
    }
    if( "AllowCompaction" == j.get< std::string >() ) {
      p = BuildAccelerationStructureFlagBitsKHR :: eAllowCompaction ;
      return;
    }
    if( "eAllowCompaction" == j.get< std::string >() ) {
      p = BuildAccelerationStructureFlagBitsKHR :: eAllowCompaction ;
      return;
    }
    if( "VK_BUILD_ACCELERATION_STRUCTURE_ALLOW_COMPACTION_BIT_KHR" == j.get< std::string >() ) {
      p = BuildAccelerationStructureFlagBitsKHR :: eAllowCompaction ;
      return;
    }
    if( "PreferFastTrace" == j.get< std::string >() ) {
      p = BuildAccelerationStructureFlagBitsKHR :: ePreferFastTrace ;
      return;
    }
    if( "ePreferFastTrace" == j.get< std::string >() ) {
      p = BuildAccelerationStructureFlagBitsKHR :: ePreferFastTrace ;
      return;
    }
    if( "VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_TRACE_BIT_KHR" == j.get< std::string >() ) {
      p = BuildAccelerationStructureFlagBitsKHR :: ePreferFastTrace ;
      return;
    }
    if( "PreferFastBuild" == j.get< std::string >() ) {
      p = BuildAccelerationStructureFlagBitsKHR :: ePreferFastBuild ;
      return;
    }
    if( "ePreferFastBuild" == j.get< std::string >() ) {
      p = BuildAccelerationStructureFlagBitsKHR :: ePreferFastBuild ;
      return;
    }
    if( "VK_BUILD_ACCELERATION_STRUCTURE_PREFER_FAST_BUILD_BIT_KHR" == j.get< std::string >() ) {
      p = BuildAccelerationStructureFlagBitsKHR :: ePreferFastBuild ;
      return;
    }
    if( "LowMemory" == j.get< std::string >() ) {
      p = BuildAccelerationStructureFlagBitsKHR :: eLowMemory ;
      return;
    }
    if( "eLowMemory" == j.get< std::string >() ) {
      p = BuildAccelerationStructureFlagBitsKHR :: eLowMemory ;
      return;
    }
    if( "VK_BUILD_ACCELERATION_STRUCTURE_LOW_MEMORY_BIT_KHR" == j.get< std::string >() ) {
      p = BuildAccelerationStructureFlagBitsKHR :: eLowMemory ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for BuildAccelerationStructureFlagBitsKHR" );
  }
  if( j.is_number() ) {
    p = BuildAccelerationStructureFlagBitsKHR ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for BuildAccelerationStructureFlagBitsKHR" );
}
inline void to_json( nlohmann::json &j, const BuildAccelerationStructureFlagsKHR &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( BuildAccelerationStructureFlagBitsKHR ) * 8u; ++n ) {
    if( p & BuildAccelerationStructureFlagsKHR ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, BuildAccelerationStructureFlagBitsKHR ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, BuildAccelerationStructureFlagsKHR &p ) {
  if( j.is_array() ) {
    p = BuildAccelerationStructureFlagsKHR ( 0 );
    for( auto &e:  j ) {
      BuildAccelerationStructureFlagBitsKHR temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for BuildAccelerationStructureFlagsKHR" );
}
}
#endif


#endif
