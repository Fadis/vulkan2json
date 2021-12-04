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
#ifndef VULKAN2JSON_DISPLAYPLANECAPABILITIESKHR_HPP
#define VULKAN2JSON_DISPLAYPLANECAPABILITIESKHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#include <vulkan2json/DisplayPlaneAlphaFlagsKHR.hpp>
#include <vulkan2json/Offset2D.hpp>
#include <vulkan2json/Offset2D.hpp>
#include <vulkan2json/Extent2D.hpp>
#include <vulkan2json/Extent2D.hpp>
#include <vulkan2json/Offset2D.hpp>
#include <vulkan2json/Offset2D.hpp>
#include <vulkan2json/Extent2D.hpp>
#include <vulkan2json/Extent2D.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const DisplayPlaneCapabilitiesKHR &p ) {
  j = nlohmann::json::object();
  j[ "supportedAlpha" ] = p.supportedAlpha;
  j[ "minSrcPosition" ] = p.minSrcPosition;
  j[ "maxSrcPosition" ] = p.maxSrcPosition;
  j[ "minSrcExtent" ] = p.minSrcExtent;
  j[ "maxSrcExtent" ] = p.maxSrcExtent;
  j[ "minDstPosition" ] = p.minDstPosition;
  j[ "maxDstPosition" ] = p.maxDstPosition;
  j[ "minDstExtent" ] = p.minDstExtent;
  j[ "maxDstExtent" ] = p.maxDstExtent;
}
}
inline void to_json( nlohmann::json &j, const VkDisplayPlaneCapabilitiesKHR &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: DisplayPlaneCapabilitiesKHR ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, DisplayPlaneCapabilitiesKHR &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for DisplayPlaneCapabilitiesKHR" );
  p.supportedAlpha = DisplayPlaneAlphaFlagsKHR ( j[ "supportedAlpha" ] );
  p.minSrcPosition = Offset2D ( j[ "minSrcPosition" ] );
  p.maxSrcPosition = Offset2D ( j[ "maxSrcPosition" ] );
  p.minSrcExtent = Extent2D ( j[ "minSrcExtent" ] );
  p.maxSrcExtent = Extent2D ( j[ "maxSrcExtent" ] );
  p.minDstPosition = Offset2D ( j[ "minDstPosition" ] );
  p.maxDstPosition = Offset2D ( j[ "maxDstPosition" ] );
  p.minDstExtent = Extent2D ( j[ "minDstExtent" ] );
  p.maxDstExtent = Extent2D ( j[ "maxDstExtent" ] );
}
}
inline void from_json( const nlohmann::json &j, VkDisplayPlaneCapabilitiesKHR &p ) {
  VULKAN_HPP_NAMESPACE :: DisplayPlaneCapabilitiesKHR temp;
  from_json( j, temp );
  p = VkDisplayPlaneCapabilitiesKHR ( temp );
}


#endif
