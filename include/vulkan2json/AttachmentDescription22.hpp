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
#ifndef VULKAN2JSON_ATTACHMENTDESCRIPTION22_HPP
#define VULKAN2JSON_ATTACHMENTDESCRIPTION22_HPP

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
#include <vulkan2json/AttachmentDescriptionFlags.hpp>
#include <vulkan2json/Format.hpp>
#include <vulkan2json/SampleCountFlags.hpp>
#include <vulkan2json/AttachmentLoadOp.hpp>
#include <vulkan2json/AttachmentStoreOp.hpp>
#include <vulkan2json/AttachmentLoadOp.hpp>
#include <vulkan2json/AttachmentStoreOp.hpp>
#include <vulkan2json/ImageLayout.hpp>
#include <vulkan2json/ImageLayout.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const AttachmentDescription2 &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "flags" ] = p.flags;
  j[ "format" ] = p.format;
  j[ "samples" ] = p.samples;
  j[ "loadOp" ] = p.loadOp;
  j[ "storeOp" ] = p.storeOp;
  j[ "stencilLoadOp" ] = p.stencilLoadOp;
  j[ "stencilStoreOp" ] = p.stencilStoreOp;
  j[ "initialLayout" ] = p.initialLayout;
  j[ "finalLayout" ] = p.finalLayout;
}
}
inline void to_json( nlohmann::json &j, const VkAttachmentDescription2 &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: AttachmentDescription2 ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, AttachmentDescription2 &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for AttachmentDescription2" );
  p.flags = AttachmentDescriptionFlags ( j[ "flags" ] );
  p.format = Format ( j[ "format" ] );
  p.samples = SampleCountFlagBits ( j[ "samples" ] );
  p.loadOp = AttachmentLoadOp ( j[ "loadOp" ] );
  p.storeOp = AttachmentStoreOp ( j[ "storeOp" ] );
  p.stencilLoadOp = AttachmentLoadOp ( j[ "stencilLoadOp" ] );
  p.stencilStoreOp = AttachmentStoreOp ( j[ "stencilStoreOp" ] );
  p.initialLayout = ImageLayout ( j[ "initialLayout" ] );
  p.finalLayout = ImageLayout ( j[ "finalLayout" ] );
}
}
inline void from_json( const nlohmann::json &j, VkAttachmentDescription2 &p ) {
  VULKAN_HPP_NAMESPACE :: AttachmentDescription2 temp;
  from_json( j, temp );
  p = VkAttachmentDescription2 ( temp );
}


#endif
