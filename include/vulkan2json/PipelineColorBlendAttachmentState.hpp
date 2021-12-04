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
#ifndef VULKAN2JSON_PIPELINECOLORBLENDATTACHMENTSTATE_HPP
#define VULKAN2JSON_PIPELINECOLORBLENDATTACHMENTSTATE_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#include <vulkan2json/BlendFactor.hpp>
#include <vulkan2json/BlendFactor.hpp>
#include <vulkan2json/BlendOp.hpp>
#include <vulkan2json/BlendFactor.hpp>
#include <vulkan2json/BlendFactor.hpp>
#include <vulkan2json/BlendOp.hpp>
#include <vulkan2json/ColorComponentFlags.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PipelineColorBlendAttachmentState &p ) {
  j = nlohmann::json::object();
  j[ "blendEnable" ] = bool( p.blendEnable );
  j[ "srcColorBlendFactor" ] = p.srcColorBlendFactor;
  j[ "dstColorBlendFactor" ] = p.dstColorBlendFactor;
  j[ "colorBlendOp" ] = p.colorBlendOp;
  j[ "srcAlphaBlendFactor" ] = p.srcAlphaBlendFactor;
  j[ "dstAlphaBlendFactor" ] = p.dstAlphaBlendFactor;
  j[ "alphaBlendOp" ] = p.alphaBlendOp;
  j[ "colorWriteMask" ] = p.colorWriteMask;
}
}
inline void to_json( nlohmann::json &j, const VkPipelineColorBlendAttachmentState &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PipelineColorBlendAttachmentState ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PipelineColorBlendAttachmentState &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for PipelineColorBlendAttachmentState" );
  p.blendEnable = j[ "blendEnable" ];
  p.srcColorBlendFactor = BlendFactor ( j[ "srcColorBlendFactor" ] );
  p.dstColorBlendFactor = BlendFactor ( j[ "dstColorBlendFactor" ] );
  p.colorBlendOp = BlendOp ( j[ "colorBlendOp" ] );
  p.srcAlphaBlendFactor = BlendFactor ( j[ "srcAlphaBlendFactor" ] );
  p.dstAlphaBlendFactor = BlendFactor ( j[ "dstAlphaBlendFactor" ] );
  p.alphaBlendOp = BlendOp ( j[ "alphaBlendOp" ] );
  p.colorWriteMask = ColorComponentFlags ( j[ "colorWriteMask" ] );
}
}
inline void from_json( const nlohmann::json &j, VkPipelineColorBlendAttachmentState &p ) {
  VULKAN_HPP_NAMESPACE :: PipelineColorBlendAttachmentState temp;
  from_json( j, temp );
  p = VkPipelineColorBlendAttachmentState ( temp );
}


#endif
