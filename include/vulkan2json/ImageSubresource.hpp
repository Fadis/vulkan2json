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
#ifndef VULKAN2JSON_IMAGESUBRESOURCE_HPP
#define VULKAN2JSON_IMAGESUBRESOURCE_HPP

#include <nlohmann/json_fwd.hpp>
#include <vulkan/vulkan.hpp>

static_assert( VK_HEADER_VERSION == 189, "Wrong VK_HEADER_VERSION!" );

namespace VULKAN_HPP_NAMESPACE {
void to_json( nlohmann::json &j, const ImageSubresource &p );
}
void to_json( nlohmann::json &j, const VkImageSubresource &p );
namespace VULKAN_HPP_NAMESPACE {
  void from_json( const nlohmann::json &j, ImageSubresource &p );
}
void from_json( const nlohmann::json &j, VkImageSubresource &p );


#endif
