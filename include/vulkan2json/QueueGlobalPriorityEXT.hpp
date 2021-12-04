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
#ifndef VULKAN2JSON_QUEUEGLOBALPRIORITYEXT_HPP
#define VULKAN2JSON_QUEUEGLOBALPRIORITYEXT_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_EXT_GLOBAL_PRIORITY_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const QueueGlobalPriorityEXT &p ) {
  if( QueueGlobalPriorityEXT :: eLow == p ) {
    j = "Low";
    return;
  }
  if( QueueGlobalPriorityEXT :: eMedium == p ) {
    j = "Medium";
    return;
  }
  if( QueueGlobalPriorityEXT :: eHigh == p ) {
    j = "High";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkQueueGlobalPriorityEXT &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: QueueGlobalPriorityEXT ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, QueueGlobalPriorityEXT &p ) {
  if( j.is_string() ) {
    if( "Low" == j.get< std::string >() ) {
      p = QueueGlobalPriorityEXT :: eLow ;
      return;
    }
    if( "eLow" == j.get< std::string >() ) {
      p = QueueGlobalPriorityEXT :: eLow ;
      return;
    }
    if( "VK_QUEUE_GLOBAL_PRIORITY_LOW_EXT" == j.get< std::string >() ) {
      p = QueueGlobalPriorityEXT :: eLow ;
      return;
    }
    if( "Medium" == j.get< std::string >() ) {
      p = QueueGlobalPriorityEXT :: eMedium ;
      return;
    }
    if( "eMedium" == j.get< std::string >() ) {
      p = QueueGlobalPriorityEXT :: eMedium ;
      return;
    }
    if( "VK_QUEUE_GLOBAL_PRIORITY_MEDIUM_EXT" == j.get< std::string >() ) {
      p = QueueGlobalPriorityEXT :: eMedium ;
      return;
    }
    if( "High" == j.get< std::string >() ) {
      p = QueueGlobalPriorityEXT :: eHigh ;
      return;
    }
    if( "eHigh" == j.get< std::string >() ) {
      p = QueueGlobalPriorityEXT :: eHigh ;
      return;
    }
    if( "VK_QUEUE_GLOBAL_PRIORITY_HIGH_EXT" == j.get< std::string >() ) {
      p = QueueGlobalPriorityEXT :: eHigh ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for QueueGlobalPriorityEXT" );
  }
  if( j.is_number() ) {
    p = QueueGlobalPriorityEXT ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for QueueGlobalPriorityEXT" );
}
}
inline void from_json( const nlohmann::json &j, VkQueueGlobalPriorityEXT &p ) {
  VULKAN_HPP_NAMESPACE :: QueueGlobalPriorityEXT temp;
  from_json( j, temp );
  p = VkQueueGlobalPriorityEXT ( temp );
}
#endif


#endif
