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
#ifndef VULKAN2JSON_SAMPLERCREATEINFO_HPP
#define VULKAN2JSON_SAMPLERCREATEINFO_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#include <vulkan2json/StructureType.hpp>
#include <vulkan2json/SamplerCreateFlags.hpp>
#include <vulkan2json/Filter.hpp>
#include <vulkan2json/Filter.hpp>
#include <vulkan2json/SamplerMipmapMode.hpp>
#include <vulkan2json/SamplerAddressMode.hpp>
#include <vulkan2json/SamplerAddressMode.hpp>
#include <vulkan2json/SamplerAddressMode.hpp>
#include <vulkan2json/CompareOp.hpp>
#include <vulkan2json/BorderColor.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const SamplerCreateInfo &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "flags" ] = p.flags;
  j[ "magFilter" ] = p.magFilter;
  j[ "minFilter" ] = p.minFilter;
  j[ "mipmapMode" ] = p.mipmapMode;
  j[ "addressModeU" ] = p.addressModeU;
  j[ "addressModeV" ] = p.addressModeV;
  j[ "addressModeW" ] = p.addressModeW;
  j[ "mipLodBias" ] = p.mipLodBias;
  j[ "anisotropyEnable" ] = bool( p.anisotropyEnable );
  j[ "maxAnisotropy" ] = p.maxAnisotropy;
  j[ "compareEnable" ] = bool( p.compareEnable );
  j[ "compareOp" ] = p.compareOp;
  j[ "minLod" ] = p.minLod;
  j[ "maxLod" ] = p.maxLod;
  j[ "borderColor" ] = p.borderColor;
  j[ "unnormalizedCoordinates" ] = bool( p.unnormalizedCoordinates );
}
}
inline void to_json( nlohmann::json &j, const VkSamplerCreateInfo &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: SamplerCreateInfo ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, SamplerCreateInfo &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for SamplerCreateInfo" );
  p.flags = SamplerCreateFlags ( j[ "flags" ] );
  p.magFilter = Filter ( j[ "magFilter" ] );
  p.minFilter = Filter ( j[ "minFilter" ] );
  p.mipmapMode = SamplerMipmapMode ( j[ "mipmapMode" ] );
  p.addressModeU = SamplerAddressMode ( j[ "addressModeU" ] );
  p.addressModeV = SamplerAddressMode ( j[ "addressModeV" ] );
  p.addressModeW = SamplerAddressMode ( j[ "addressModeW" ] );
  p.mipLodBias = j[ "mipLodBias" ];
  p.anisotropyEnable = j[ "anisotropyEnable" ];
  p.maxAnisotropy = j[ "maxAnisotropy" ];
  p.compareEnable = j[ "compareEnable" ];
  p.compareOp = CompareOp ( j[ "compareOp" ] );
  p.minLod = j[ "minLod" ];
  p.maxLod = j[ "maxLod" ];
  p.borderColor = BorderColor ( j[ "borderColor" ] );
  p.unnormalizedCoordinates = j[ "unnormalizedCoordinates" ];
}
}
inline void from_json( const nlohmann::json &j, VkSamplerCreateInfo &p ) {
  VULKAN_HPP_NAMESPACE :: SamplerCreateInfo temp;
  from_json( j, temp );
  p = VkSamplerCreateInfo ( temp );
}


#endif
