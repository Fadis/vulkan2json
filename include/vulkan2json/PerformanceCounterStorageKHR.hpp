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
#ifndef VULKAN2JSON_PERFORMANCECOUNTERSTORAGEKHR_HPP
#define VULKAN2JSON_PERFORMANCECOUNTERSTORAGEKHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_KHR_PERFORMANCE_QUERY_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PerformanceCounterStorageKHR &p ) {
  if( PerformanceCounterStorageKHR :: eInt32 == p ) {
    j = "Int32";
    return;
  }
  if( PerformanceCounterStorageKHR :: eInt64 == p ) {
    j = "Int64";
    return;
  }
  if( PerformanceCounterStorageKHR :: eUint32 == p ) {
    j = "Uint32";
    return;
  }
  if( PerformanceCounterStorageKHR :: eUint64 == p ) {
    j = "Uint64";
    return;
  }
  if( PerformanceCounterStorageKHR :: eFloat32 == p ) {
    j = "Float32";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkPerformanceCounterStorageKHR &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PerformanceCounterStorageKHR ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PerformanceCounterStorageKHR &p ) {
  if( j.is_string() ) {
    if( "Int32" == j.get< std::string >() ) {
      p = PerformanceCounterStorageKHR :: eInt32 ;
      return;
    }
    if( "eInt32" == j.get< std::string >() ) {
      p = PerformanceCounterStorageKHR :: eInt32 ;
      return;
    }
    if( "VK_PERFORMANCE_COUNTER_STORAGE_INT32_KHR" == j.get< std::string >() ) {
      p = PerformanceCounterStorageKHR :: eInt32 ;
      return;
    }
    if( "Int64" == j.get< std::string >() ) {
      p = PerformanceCounterStorageKHR :: eInt64 ;
      return;
    }
    if( "eInt64" == j.get< std::string >() ) {
      p = PerformanceCounterStorageKHR :: eInt64 ;
      return;
    }
    if( "VK_PERFORMANCE_COUNTER_STORAGE_INT64_KHR" == j.get< std::string >() ) {
      p = PerformanceCounterStorageKHR :: eInt64 ;
      return;
    }
    if( "Uint32" == j.get< std::string >() ) {
      p = PerformanceCounterStorageKHR :: eUint32 ;
      return;
    }
    if( "eUint32" == j.get< std::string >() ) {
      p = PerformanceCounterStorageKHR :: eUint32 ;
      return;
    }
    if( "VK_PERFORMANCE_COUNTER_STORAGE_UINT32_KHR" == j.get< std::string >() ) {
      p = PerformanceCounterStorageKHR :: eUint32 ;
      return;
    }
    if( "Uint64" == j.get< std::string >() ) {
      p = PerformanceCounterStorageKHR :: eUint64 ;
      return;
    }
    if( "eUint64" == j.get< std::string >() ) {
      p = PerformanceCounterStorageKHR :: eUint64 ;
      return;
    }
    if( "VK_PERFORMANCE_COUNTER_STORAGE_UINT64_KHR" == j.get< std::string >() ) {
      p = PerformanceCounterStorageKHR :: eUint64 ;
      return;
    }
    if( "Float32" == j.get< std::string >() ) {
      p = PerformanceCounterStorageKHR :: eFloat32 ;
      return;
    }
    if( "eFloat32" == j.get< std::string >() ) {
      p = PerformanceCounterStorageKHR :: eFloat32 ;
      return;
    }
    if( "VK_PERFORMANCE_COUNTER_STORAGE_FLOAT32_KHR" == j.get< std::string >() ) {
      p = PerformanceCounterStorageKHR :: eFloat32 ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for PerformanceCounterStorageKHR" );
  }
  if( j.is_number() ) {
    p = PerformanceCounterStorageKHR ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for PerformanceCounterStorageKHR" );
}
}
inline void from_json( const nlohmann::json &j, VkPerformanceCounterStorageKHR &p ) {
  VULKAN_HPP_NAMESPACE :: PerformanceCounterStorageKHR temp;
  from_json( j, temp );
  p = VkPerformanceCounterStorageKHR ( temp );
}
#endif


#endif
