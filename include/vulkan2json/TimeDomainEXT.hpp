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
#ifndef VULKAN2JSON_TIMEDOMAINEXT_HPP
#define VULKAN2JSON_TIMEDOMAINEXT_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_EXT_CALIBRATED_TIMESTAMPS_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const TimeDomainEXT &p ) {
  if( TimeDomainEXT :: eDevice == p ) {
    j = "Device";
    return;
  }
  if( TimeDomainEXT :: eClockMonotonic == p ) {
    j = "ClockMonotonic";
    return;
  }
  if( TimeDomainEXT :: eClockMonotonicRaw == p ) {
    j = "ClockMonotonicRaw";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkTimeDomainEXT &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: TimeDomainEXT ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, TimeDomainEXT &p ) {
  if( j.is_string() ) {
    if( "Device" == j.get< std::string >() ) {
      p = TimeDomainEXT :: eDevice ;
      return;
    }
    if( "eDevice" == j.get< std::string >() ) {
      p = TimeDomainEXT :: eDevice ;
      return;
    }
    if( "VK_TIME_DOMAIN_DEVICE_EXT" == j.get< std::string >() ) {
      p = TimeDomainEXT :: eDevice ;
      return;
    }
    if( "ClockMonotonic" == j.get< std::string >() ) {
      p = TimeDomainEXT :: eClockMonotonic ;
      return;
    }
    if( "eClockMonotonic" == j.get< std::string >() ) {
      p = TimeDomainEXT :: eClockMonotonic ;
      return;
    }
    if( "VK_TIME_DOMAIN_CLOCK_MONOTONIC_EXT" == j.get< std::string >() ) {
      p = TimeDomainEXT :: eClockMonotonic ;
      return;
    }
    if( "ClockMonotonicRaw" == j.get< std::string >() ) {
      p = TimeDomainEXT :: eClockMonotonicRaw ;
      return;
    }
    if( "eClockMonotonicRaw" == j.get< std::string >() ) {
      p = TimeDomainEXT :: eClockMonotonicRaw ;
      return;
    }
    if( "VK_TIME_DOMAIN_CLOCK_MONOTONIC_RAW_EXT" == j.get< std::string >() ) {
      p = TimeDomainEXT :: eClockMonotonicRaw ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for TimeDomainEXT" );
  }
  if( j.is_number() ) {
    p = TimeDomainEXT ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for TimeDomainEXT" );
}
}
inline void from_json( const nlohmann::json &j, VkTimeDomainEXT &p ) {
  VULKAN_HPP_NAMESPACE :: TimeDomainEXT temp;
  from_json( j, temp );
  p = VkTimeDomainEXT ( temp );
}
#endif


#endif
