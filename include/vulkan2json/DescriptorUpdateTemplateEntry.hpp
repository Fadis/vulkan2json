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
#ifndef VULKAN2JSON_DESCRIPTORUPDATETEMPLATEENTRY_HPP
#define VULKAN2JSON_DESCRIPTORUPDATETEMPLATEENTRY_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#include <vulkan2json/DescriptorType.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const DescriptorUpdateTemplateEntry &p ) {
  j = nlohmann::json::object();
  j[ "dstBinding" ] = p.dstBinding;
  j[ "dstArrayElement" ] = p.dstArrayElement;
  j[ "descriptorCount" ] = p.descriptorCount;
  j[ "descriptorType" ] = p.descriptorType;
  j[ "offset" ] = p.offset;
  j[ "stride" ] = p.stride;
}
}
inline void to_json( nlohmann::json &j, const VkDescriptorUpdateTemplateEntry &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: DescriptorUpdateTemplateEntry ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, DescriptorUpdateTemplateEntry &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for DescriptorUpdateTemplateEntry" );
  p.dstBinding = j[ "dstBinding" ];
  p.dstArrayElement = j[ "dstArrayElement" ];
  p.descriptorCount = j[ "descriptorCount" ];
  p.descriptorType = DescriptorType ( j[ "descriptorType" ] );
  p.offset = j[ "offset" ];
  p.stride = j[ "stride" ];
}
}
inline void from_json( const nlohmann::json &j, VkDescriptorUpdateTemplateEntry &p ) {
  VULKAN_HPP_NAMESPACE :: DescriptorUpdateTemplateEntry temp;
  from_json( j, temp );
  p = VkDescriptorUpdateTemplateEntry ( temp );
}


#endif
