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
#ifndef VULKAN2JSON_ATTACHMENTSTOREOP_HPP
#define VULKAN2JSON_ATTACHMENTSTOREOP_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_VERSION_1_0
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const AttachmentStoreOp &p ) {
  if( AttachmentStoreOp :: eStore == p ) {
    j = "Store";
    return;
  }
  if( AttachmentStoreOp :: eDontCare == p ) {
    j = "DontCare";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkAttachmentStoreOp &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: AttachmentStoreOp ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, AttachmentStoreOp &p ) {
  if( j.is_string() ) {
    if( "Store" == j.get< std::string >() ) {
      p = AttachmentStoreOp :: eStore ;
      return;
    }
    if( "eStore" == j.get< std::string >() ) {
      p = AttachmentStoreOp :: eStore ;
      return;
    }
    if( "VK_ATTACHMENT_STORE_OP_STORE" == j.get< std::string >() ) {
      p = AttachmentStoreOp :: eStore ;
      return;
    }
    if( "DontCare" == j.get< std::string >() ) {
      p = AttachmentStoreOp :: eDontCare ;
      return;
    }
    if( "eDontCare" == j.get< std::string >() ) {
      p = AttachmentStoreOp :: eDontCare ;
      return;
    }
    if( "VK_ATTACHMENT_STORE_OP_DONT_CARE" == j.get< std::string >() ) {
      p = AttachmentStoreOp :: eDontCare ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for AttachmentStoreOp" );
  }
  if( j.is_number() ) {
    p = AttachmentStoreOp ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for AttachmentStoreOp" );
}
}
inline void from_json( const nlohmann::json &j, VkAttachmentStoreOp &p ) {
  VULKAN_HPP_NAMESPACE :: AttachmentStoreOp temp;
  from_json( j, temp );
  p = VkAttachmentStoreOp ( temp );
}
#endif


#endif
