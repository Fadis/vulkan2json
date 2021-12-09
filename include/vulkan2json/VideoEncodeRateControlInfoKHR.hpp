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
#ifndef VULKAN2JSON_VIDEOENCODERATECONTROLINFOKHR_HPP
#define VULKAN2JSON_VIDEOENCODERATECONTROLINFOKHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

static_assert( VK_HEADER_VERSION == 189, "Wrong VK_HEADER_VERSION!" );

#include <vulkan2json/StructureType.hpp>
#include <vulkan2json/VideoEncodeRateControlFlagsKHR.hpp>
#include <vulkan2json/VideoEncodeRateControlModeFlagsKHR.hpp>
#include <vulkan2json/StructureType.hpp>
#include <vulkan2json/VideoEncodeRateControlFlagsKHR.hpp>
#include <vulkan2json/VideoEncodeRateControlModeFlagsKHR.hpp>
#if defined( VK_ENABLE_BETA_EXTENSIONS )
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const VideoEncodeRateControlInfoKHR &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "flags" ] = p.flags;
  j[ "rateControlMode" ] = p.rateControlMode;
  j[ "averageBitrate" ] = p.averageBitrate;
  j[ "peakToAverageBitrateRatio" ] = p.peakToAverageBitrateRatio;
  j[ "frameRateNumerator" ] = p.frameRateNumerator;
  j[ "frameRateDenominator" ] = p.frameRateDenominator;
  j[ "virtualBufferSizeInMs" ] = p.virtualBufferSizeInMs;
}
}
inline void to_json( nlohmann::json &j, const VkVideoEncodeRateControlInfoKHR &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: VideoEncodeRateControlInfoKHR ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, VideoEncodeRateControlInfoKHR &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for VideoEncodeRateControlInfoKHR" );
  if( j.find( "flags" ) != j.end() ) {
    p.flags = VideoEncodeRateControlFlagsKHR ( j[ "flags" ] );
  }
  if( j.find( "rateControlMode" ) != j.end() ) {
    p.rateControlMode = VideoEncodeRateControlModeFlagBitsKHR ( j[ "rateControlMode" ] );
  }
  if( j.find( "averageBitrate" ) != j.end() ) {
    p.averageBitrate = j[ "averageBitrate" ];
  }
  if( j.find( "peakToAverageBitrateRatio" ) != j.end() ) {
    p.peakToAverageBitrateRatio = j[ "peakToAverageBitrateRatio" ];
  }
  if( j.find( "frameRateNumerator" ) != j.end() ) {
    p.frameRateNumerator = j[ "frameRateNumerator" ];
  }
  if( j.find( "frameRateDenominator" ) != j.end() ) {
    p.frameRateDenominator = j[ "frameRateDenominator" ];
  }
  if( j.find( "virtualBufferSizeInMs" ) != j.end() ) {
    p.virtualBufferSizeInMs = j[ "virtualBufferSizeInMs" ];
  }
}
}
inline void from_json( const nlohmann::json &j, VkVideoEncodeRateControlInfoKHR &p ) {
  VULKAN_HPP_NAMESPACE :: VideoEncodeRateControlInfoKHR temp;
  from_json( j, temp );
  p = VkVideoEncodeRateControlInfoKHR ( temp );
}
#endif


#endif
