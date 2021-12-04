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
#ifndef VULKAN2JSON_SCOPENV_HPP
#define VULKAN2JSON_SCOPENV_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_NV_COOPERATIVE_MATRIX_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const ScopeNV &p ) {
  if( ScopeNV :: eDevice == p ) {
    j = "Device";
    return;
  }
  if( ScopeNV :: eWorkgroup == p ) {
    j = "Workgroup";
    return;
  }
  if( ScopeNV :: eSubgroup == p ) {
    j = "Subgroup";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkScopeNV &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: ScopeNV ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, ScopeNV &p ) {
  if( j.is_string() ) {
    if( "Device" == j.get< std::string >() ) {
      p = ScopeNV :: eDevice ;
      return;
    }
    if( "eDevice" == j.get< std::string >() ) {
      p = ScopeNV :: eDevice ;
      return;
    }
    if( "VK_SCOPE_DEVICE_NV" == j.get< std::string >() ) {
      p = ScopeNV :: eDevice ;
      return;
    }
    if( "Workgroup" == j.get< std::string >() ) {
      p = ScopeNV :: eWorkgroup ;
      return;
    }
    if( "eWorkgroup" == j.get< std::string >() ) {
      p = ScopeNV :: eWorkgroup ;
      return;
    }
    if( "VK_SCOPE_WORKGROUP_NV" == j.get< std::string >() ) {
      p = ScopeNV :: eWorkgroup ;
      return;
    }
    if( "Subgroup" == j.get< std::string >() ) {
      p = ScopeNV :: eSubgroup ;
      return;
    }
    if( "eSubgroup" == j.get< std::string >() ) {
      p = ScopeNV :: eSubgroup ;
      return;
    }
    if( "VK_SCOPE_SUBGROUP_NV" == j.get< std::string >() ) {
      p = ScopeNV :: eSubgroup ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ScopeNV" );
  }
  if( j.is_number() ) {
    p = ScopeNV ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ScopeNV" );
}
}
inline void from_json( const nlohmann::json &j, VkScopeNV &p ) {
  VULKAN_HPP_NAMESPACE :: ScopeNV temp;
  from_json( j, temp );
  p = VkScopeNV ( temp );
}
#endif


#endif
