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
#ifndef VULKAN2JSON_DEVICEGROUPPRESENTMODEFLAGSKHR_HPP
#define VULKAN2JSON_DEVICEGROUPPRESENTMODEFLAGSKHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_KHR_SWAPCHAIN_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const DeviceGroupPresentModeFlagBitsKHR &p ) {
  if( DeviceGroupPresentModeFlagBitsKHR :: eLocal == p ) {
    j = "Local";
    return;
  }
  if( DeviceGroupPresentModeFlagBitsKHR :: eRemote == p ) {
    j = "Remote";
    return;
  }
  if( DeviceGroupPresentModeFlagBitsKHR :: eSum == p ) {
    j = "Sum";
    return;
  }
}
inline void from_json( const nlohmann::json &j, DeviceGroupPresentModeFlagBitsKHR &p ) {
  if( j.is_string() ) {
    if( "Local" == j.get< std::string >() ) {
      p = DeviceGroupPresentModeFlagBitsKHR :: eLocal ;
      return;
    }
    if( "eLocal" == j.get< std::string >() ) {
      p = DeviceGroupPresentModeFlagBitsKHR :: eLocal ;
      return;
    }
    if( "VK_DEVICE_GROUP_PRESENT_MODE_LOCAL_BIT_KHR" == j.get< std::string >() ) {
      p = DeviceGroupPresentModeFlagBitsKHR :: eLocal ;
      return;
    }
    if( "Remote" == j.get< std::string >() ) {
      p = DeviceGroupPresentModeFlagBitsKHR :: eRemote ;
      return;
    }
    if( "eRemote" == j.get< std::string >() ) {
      p = DeviceGroupPresentModeFlagBitsKHR :: eRemote ;
      return;
    }
    if( "VK_DEVICE_GROUP_PRESENT_MODE_REMOTE_BIT_KHR" == j.get< std::string >() ) {
      p = DeviceGroupPresentModeFlagBitsKHR :: eRemote ;
      return;
    }
    if( "Sum" == j.get< std::string >() ) {
      p = DeviceGroupPresentModeFlagBitsKHR :: eSum ;
      return;
    }
    if( "eSum" == j.get< std::string >() ) {
      p = DeviceGroupPresentModeFlagBitsKHR :: eSum ;
      return;
    }
    if( "VK_DEVICE_GROUP_PRESENT_MODE_SUM_BIT_KHR" == j.get< std::string >() ) {
      p = DeviceGroupPresentModeFlagBitsKHR :: eSum ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for DeviceGroupPresentModeFlagBitsKHR" );
  }
  if( j.is_number() ) {
    p = DeviceGroupPresentModeFlagBitsKHR ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for DeviceGroupPresentModeFlagBitsKHR" );
}
inline void to_json( nlohmann::json &j, const DeviceGroupPresentModeFlagsKHR &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( DeviceGroupPresentModeFlagBitsKHR ) * 8u; ++n ) {
    if( p & DeviceGroupPresentModeFlagsKHR ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, DeviceGroupPresentModeFlagBitsKHR ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, DeviceGroupPresentModeFlagsKHR &p ) {
  if( j.is_array() ) {
    p = DeviceGroupPresentModeFlagsKHR ( 0 );
    for( auto &e:  j ) {
      DeviceGroupPresentModeFlagBitsKHR temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for DeviceGroupPresentModeFlagsKHR" );
}
}
#endif


#endif
