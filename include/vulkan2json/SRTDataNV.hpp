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
#ifndef VULKAN2JSON_SRTDATANV_HPP
#define VULKAN2JSON_SRTDATANV_HPP

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
inline void to_json( nlohmann::json &j, const SRTDataNV &p ) {
  j = nlohmann::json::object();
  j[ "sx" ] = p.sx;
  j[ "a" ] = p.a;
  j[ "b" ] = p.b;
  j[ "pvx" ] = p.pvx;
  j[ "sy" ] = p.sy;
  j[ "c" ] = p.c;
  j[ "pvy" ] = p.pvy;
  j[ "sz" ] = p.sz;
  j[ "pvz" ] = p.pvz;
  j[ "qx" ] = p.qx;
  j[ "qy" ] = p.qy;
  j[ "qz" ] = p.qz;
  j[ "qw" ] = p.qw;
  j[ "tx" ] = p.tx;
  j[ "ty" ] = p.ty;
  j[ "tz" ] = p.tz;
}
}
inline void to_json( nlohmann::json &j, const VkSRTDataNV &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: SRTDataNV ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, SRTDataNV &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for SRTDataNV" );
  p.sx = j[ "sx" ];
  p.a = j[ "a" ];
  p.b = j[ "b" ];
  p.pvx = j[ "pvx" ];
  p.sy = j[ "sy" ];
  p.c = j[ "c" ];
  p.pvy = j[ "pvy" ];
  p.sz = j[ "sz" ];
  p.pvz = j[ "pvz" ];
  p.qx = j[ "qx" ];
  p.qy = j[ "qy" ];
  p.qz = j[ "qz" ];
  p.qw = j[ "qw" ];
  p.tx = j[ "tx" ];
  p.ty = j[ "ty" ];
  p.tz = j[ "tz" ];
}
}
inline void from_json( const nlohmann::json &j, VkSRTDataNV &p ) {
  VULKAN_HPP_NAMESPACE :: SRTDataNV temp;
  from_json( j, temp );
  p = VkSRTDataNV ( temp );
}


#endif
