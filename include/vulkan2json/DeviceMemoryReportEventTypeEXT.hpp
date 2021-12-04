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
#ifndef VULKAN2JSON_DEVICEMEMORYREPORTEVENTTYPEEXT_HPP
#define VULKAN2JSON_DEVICEMEMORYREPORTEVENTTYPEEXT_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_EXT_DEVICE_MEMORY_REPORT_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const DeviceMemoryReportEventTypeEXT &p ) {
  if( DeviceMemoryReportEventTypeEXT :: eAllocate == p ) {
    j = "Allocate";
    return;
  }
  if( DeviceMemoryReportEventTypeEXT :: eFree == p ) {
    j = "Free";
    return;
  }
  if( DeviceMemoryReportEventTypeEXT :: eImport == p ) {
    j = "Import";
    return;
  }
  if( DeviceMemoryReportEventTypeEXT :: eUnimport == p ) {
    j = "Unimport";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkDeviceMemoryReportEventTypeEXT &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: DeviceMemoryReportEventTypeEXT ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, DeviceMemoryReportEventTypeEXT &p ) {
  if( j.is_string() ) {
    if( "Allocate" == j.get< std::string >() ) {
      p = DeviceMemoryReportEventTypeEXT :: eAllocate ;
      return;
    }
    if( "eAllocate" == j.get< std::string >() ) {
      p = DeviceMemoryReportEventTypeEXT :: eAllocate ;
      return;
    }
    if( "VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_ALLOCATE_EXT" == j.get< std::string >() ) {
      p = DeviceMemoryReportEventTypeEXT :: eAllocate ;
      return;
    }
    if( "Free" == j.get< std::string >() ) {
      p = DeviceMemoryReportEventTypeEXT :: eFree ;
      return;
    }
    if( "eFree" == j.get< std::string >() ) {
      p = DeviceMemoryReportEventTypeEXT :: eFree ;
      return;
    }
    if( "VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_FREE_EXT" == j.get< std::string >() ) {
      p = DeviceMemoryReportEventTypeEXT :: eFree ;
      return;
    }
    if( "Import" == j.get< std::string >() ) {
      p = DeviceMemoryReportEventTypeEXT :: eImport ;
      return;
    }
    if( "eImport" == j.get< std::string >() ) {
      p = DeviceMemoryReportEventTypeEXT :: eImport ;
      return;
    }
    if( "VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_IMPORT_EXT" == j.get< std::string >() ) {
      p = DeviceMemoryReportEventTypeEXT :: eImport ;
      return;
    }
    if( "Unimport" == j.get< std::string >() ) {
      p = DeviceMemoryReportEventTypeEXT :: eUnimport ;
      return;
    }
    if( "eUnimport" == j.get< std::string >() ) {
      p = DeviceMemoryReportEventTypeEXT :: eUnimport ;
      return;
    }
    if( "VK_DEVICE_MEMORY_REPORT_EVENT_TYPE_UNIMPORT_EXT" == j.get< std::string >() ) {
      p = DeviceMemoryReportEventTypeEXT :: eUnimport ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for DeviceMemoryReportEventTypeEXT" );
  }
  if( j.is_number() ) {
    p = DeviceMemoryReportEventTypeEXT ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for DeviceMemoryReportEventTypeEXT" );
}
}
inline void from_json( const nlohmann::json &j, VkDeviceMemoryReportEventTypeEXT &p ) {
  VULKAN_HPP_NAMESPACE :: DeviceMemoryReportEventTypeEXT temp;
  from_json( j, temp );
  p = VkDeviceMemoryReportEventTypeEXT ( temp );
}
#endif


#endif
