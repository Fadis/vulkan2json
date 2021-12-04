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
#ifndef VULKAN2JSON_PASTPRESENTATIONTIMINGGOOGLE_HPP
#define VULKAN2JSON_PASTPRESENTATIONTIMINGGOOGLE_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PastPresentationTimingGOOGLE &p ) {
  j = nlohmann::json::object();
  j[ "presentID" ] = p.presentID;
  j[ "desiredPresentTime" ] = p.desiredPresentTime;
  j[ "actualPresentTime" ] = p.actualPresentTime;
  j[ "earliestPresentTime" ] = p.earliestPresentTime;
  j[ "presentMargin" ] = p.presentMargin;
}
}
inline void to_json( nlohmann::json &j, const VkPastPresentationTimingGOOGLE &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PastPresentationTimingGOOGLE ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PastPresentationTimingGOOGLE &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for PastPresentationTimingGOOGLE" );
  p.presentID = j[ "presentID" ];
  p.desiredPresentTime = j[ "desiredPresentTime" ];
  p.actualPresentTime = j[ "actualPresentTime" ];
  p.earliestPresentTime = j[ "earliestPresentTime" ];
  p.presentMargin = j[ "presentMargin" ];
}
}
inline void from_json( const nlohmann::json &j, VkPastPresentationTimingGOOGLE &p ) {
  VULKAN_HPP_NAMESPACE :: PastPresentationTimingGOOGLE temp;
  from_json( j, temp );
  p = VkPastPresentationTimingGOOGLE ( temp );
}


#endif
