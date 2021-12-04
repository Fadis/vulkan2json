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
#ifndef VULKAN2JSON_DESCRIPTORUPDATETEMPLATETYPE_HPP
#define VULKAN2JSON_DESCRIPTORUPDATETEMPLATETYPE_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_VERSION_1_1
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const DescriptorUpdateTemplateType &p ) {
  if( DescriptorUpdateTemplateType :: eDescriptorSet == p ) {
    j = "DescriptorSet";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkDescriptorUpdateTemplateType &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: DescriptorUpdateTemplateType ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, DescriptorUpdateTemplateType &p ) {
  if( j.is_string() ) {
    if( "DescriptorSet" == j.get< std::string >() ) {
      p = DescriptorUpdateTemplateType :: eDescriptorSet ;
      return;
    }
    if( "eDescriptorSet" == j.get< std::string >() ) {
      p = DescriptorUpdateTemplateType :: eDescriptorSet ;
      return;
    }
    if( "VK_DESCRIPTOR_UPDATE_TEMPLATE_TYPE_DESCRIPTOR_SET" == j.get< std::string >() ) {
      p = DescriptorUpdateTemplateType :: eDescriptorSet ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for DescriptorUpdateTemplateType" );
  }
  if( j.is_number() ) {
    p = DescriptorUpdateTemplateType ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for DescriptorUpdateTemplateType" );
}
}
inline void from_json( const nlohmann::json &j, VkDescriptorUpdateTemplateType &p ) {
  VULKAN_HPP_NAMESPACE :: DescriptorUpdateTemplateType temp;
  from_json( j, temp );
  p = VkDescriptorUpdateTemplateType ( temp );
}
#endif


#endif
