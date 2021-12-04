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
#ifndef VULKAN2JSON_FORMAT_HPP
#define VULKAN2JSON_FORMAT_HPP

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
inline void to_json( nlohmann::json &j, const Format &p ) {
  if( Format :: eUndefined == p ) {
    j = "Undefined";
    return;
  }
  if( Format :: eR4G4UnormPack8 == p ) {
    j = "R4G4UnormPack8";
    return;
  }
  if( Format :: eR4G4B4A4UnormPack16 == p ) {
    j = "R4G4B4A4UnormPack16";
    return;
  }
  if( Format :: eB4G4R4A4UnormPack16 == p ) {
    j = "B4G4R4A4UnormPack16";
    return;
  }
  if( Format :: eR5G6B5UnormPack16 == p ) {
    j = "R5G6B5UnormPack16";
    return;
  }
  if( Format :: eB5G6R5UnormPack16 == p ) {
    j = "B5G6R5UnormPack16";
    return;
  }
  if( Format :: eR5G5B5A1UnormPack16 == p ) {
    j = "R5G5B5A1UnormPack16";
    return;
  }
  if( Format :: eB5G5R5A1UnormPack16 == p ) {
    j = "B5G5R5A1UnormPack16";
    return;
  }
  if( Format :: eA1R5G5B5UnormPack16 == p ) {
    j = "A1R5G5B5UnormPack16";
    return;
  }
  if( Format :: eR8Unorm == p ) {
    j = "R8Unorm";
    return;
  }
  if( Format :: eR8Snorm == p ) {
    j = "R8Snorm";
    return;
  }
  if( Format :: eR8Uscaled == p ) {
    j = "R8Uscaled";
    return;
  }
  if( Format :: eR8Sscaled == p ) {
    j = "R8Sscaled";
    return;
  }
  if( Format :: eR8Uint == p ) {
    j = "R8Uint";
    return;
  }
  if( Format :: eR8Sint == p ) {
    j = "R8Sint";
    return;
  }
  if( Format :: eR8Srgb == p ) {
    j = "R8Srgb";
    return;
  }
  if( Format :: eR8G8Unorm == p ) {
    j = "R8G8Unorm";
    return;
  }
  if( Format :: eR8G8Snorm == p ) {
    j = "R8G8Snorm";
    return;
  }
  if( Format :: eR8G8Uscaled == p ) {
    j = "R8G8Uscaled";
    return;
  }
  if( Format :: eR8G8Sscaled == p ) {
    j = "R8G8Sscaled";
    return;
  }
  if( Format :: eR8G8Uint == p ) {
    j = "R8G8Uint";
    return;
  }
  if( Format :: eR8G8Sint == p ) {
    j = "R8G8Sint";
    return;
  }
  if( Format :: eR8G8Srgb == p ) {
    j = "R8G8Srgb";
    return;
  }
  if( Format :: eR8G8B8Unorm == p ) {
    j = "R8G8B8Unorm";
    return;
  }
  if( Format :: eR8G8B8Snorm == p ) {
    j = "R8G8B8Snorm";
    return;
  }
  if( Format :: eR8G8B8Uscaled == p ) {
    j = "R8G8B8Uscaled";
    return;
  }
  if( Format :: eR8G8B8Sscaled == p ) {
    j = "R8G8B8Sscaled";
    return;
  }
  if( Format :: eR8G8B8Uint == p ) {
    j = "R8G8B8Uint";
    return;
  }
  if( Format :: eR8G8B8Sint == p ) {
    j = "R8G8B8Sint";
    return;
  }
  if( Format :: eR8G8B8Srgb == p ) {
    j = "R8G8B8Srgb";
    return;
  }
  if( Format :: eB8G8R8Unorm == p ) {
    j = "B8G8R8Unorm";
    return;
  }
  if( Format :: eB8G8R8Snorm == p ) {
    j = "B8G8R8Snorm";
    return;
  }
  if( Format :: eB8G8R8Uscaled == p ) {
    j = "B8G8R8Uscaled";
    return;
  }
  if( Format :: eB8G8R8Sscaled == p ) {
    j = "B8G8R8Sscaled";
    return;
  }
  if( Format :: eB8G8R8Uint == p ) {
    j = "B8G8R8Uint";
    return;
  }
  if( Format :: eB8G8R8Sint == p ) {
    j = "B8G8R8Sint";
    return;
  }
  if( Format :: eB8G8R8Srgb == p ) {
    j = "B8G8R8Srgb";
    return;
  }
  if( Format :: eR8G8B8A8Unorm == p ) {
    j = "R8G8B8A8Unorm";
    return;
  }
  if( Format :: eR8G8B8A8Snorm == p ) {
    j = "R8G8B8A8Snorm";
    return;
  }
  if( Format :: eR8G8B8A8Uscaled == p ) {
    j = "R8G8B8A8Uscaled";
    return;
  }
  if( Format :: eR8G8B8A8Sscaled == p ) {
    j = "R8G8B8A8Sscaled";
    return;
  }
  if( Format :: eR8G8B8A8Uint == p ) {
    j = "R8G8B8A8Uint";
    return;
  }
  if( Format :: eR8G8B8A8Sint == p ) {
    j = "R8G8B8A8Sint";
    return;
  }
  if( Format :: eR8G8B8A8Srgb == p ) {
    j = "R8G8B8A8Srgb";
    return;
  }
  if( Format :: eB8G8R8A8Unorm == p ) {
    j = "B8G8R8A8Unorm";
    return;
  }
  if( Format :: eB8G8R8A8Snorm == p ) {
    j = "B8G8R8A8Snorm";
    return;
  }
  if( Format :: eB8G8R8A8Uscaled == p ) {
    j = "B8G8R8A8Uscaled";
    return;
  }
  if( Format :: eB8G8R8A8Sscaled == p ) {
    j = "B8G8R8A8Sscaled";
    return;
  }
  if( Format :: eB8G8R8A8Uint == p ) {
    j = "B8G8R8A8Uint";
    return;
  }
  if( Format :: eB8G8R8A8Sint == p ) {
    j = "B8G8R8A8Sint";
    return;
  }
  if( Format :: eB8G8R8A8Srgb == p ) {
    j = "B8G8R8A8Srgb";
    return;
  }
  if( Format :: eA8B8G8R8UnormPack32 == p ) {
    j = "A8B8G8R8UnormPack32";
    return;
  }
  if( Format :: eA8B8G8R8SnormPack32 == p ) {
    j = "A8B8G8R8SnormPack32";
    return;
  }
  if( Format :: eA8B8G8R8UscaledPack32 == p ) {
    j = "A8B8G8R8UscaledPack32";
    return;
  }
  if( Format :: eA8B8G8R8SscaledPack32 == p ) {
    j = "A8B8G8R8SscaledPack32";
    return;
  }
  if( Format :: eA8B8G8R8UintPack32 == p ) {
    j = "A8B8G8R8UintPack32";
    return;
  }
  if( Format :: eA8B8G8R8SintPack32 == p ) {
    j = "A8B8G8R8SintPack32";
    return;
  }
  if( Format :: eA8B8G8R8SrgbPack32 == p ) {
    j = "A8B8G8R8SrgbPack32";
    return;
  }
  if( Format :: eA2R10G10B10UnormPack32 == p ) {
    j = "A2R10G10B10UnormPack32";
    return;
  }
  if( Format :: eA2R10G10B10SnormPack32 == p ) {
    j = "A2R10G10B10SnormPack32";
    return;
  }
  if( Format :: eA2R10G10B10UscaledPack32 == p ) {
    j = "A2R10G10B10UscaledPack32";
    return;
  }
  if( Format :: eA2R10G10B10SscaledPack32 == p ) {
    j = "A2R10G10B10SscaledPack32";
    return;
  }
  if( Format :: eA2R10G10B10UintPack32 == p ) {
    j = "A2R10G10B10UintPack32";
    return;
  }
  if( Format :: eA2R10G10B10SintPack32 == p ) {
    j = "A2R10G10B10SintPack32";
    return;
  }
  if( Format :: eA2B10G10R10UnormPack32 == p ) {
    j = "A2B10G10R10UnormPack32";
    return;
  }
  if( Format :: eA2B10G10R10SnormPack32 == p ) {
    j = "A2B10G10R10SnormPack32";
    return;
  }
  if( Format :: eA2B10G10R10UscaledPack32 == p ) {
    j = "A2B10G10R10UscaledPack32";
    return;
  }
  if( Format :: eA2B10G10R10SscaledPack32 == p ) {
    j = "A2B10G10R10SscaledPack32";
    return;
  }
  if( Format :: eA2B10G10R10UintPack32 == p ) {
    j = "A2B10G10R10UintPack32";
    return;
  }
  if( Format :: eA2B10G10R10SintPack32 == p ) {
    j = "A2B10G10R10SintPack32";
    return;
  }
  if( Format :: eR16Unorm == p ) {
    j = "R16Unorm";
    return;
  }
  if( Format :: eR16Snorm == p ) {
    j = "R16Snorm";
    return;
  }
  if( Format :: eR16Uscaled == p ) {
    j = "R16Uscaled";
    return;
  }
  if( Format :: eR16Sscaled == p ) {
    j = "R16Sscaled";
    return;
  }
  if( Format :: eR16Uint == p ) {
    j = "R16Uint";
    return;
  }
  if( Format :: eR16Sint == p ) {
    j = "R16Sint";
    return;
  }
  if( Format :: eR16Sfloat == p ) {
    j = "R16Sfloat";
    return;
  }
  if( Format :: eR16G16Unorm == p ) {
    j = "R16G16Unorm";
    return;
  }
  if( Format :: eR16G16Snorm == p ) {
    j = "R16G16Snorm";
    return;
  }
  if( Format :: eR16G16Uscaled == p ) {
    j = "R16G16Uscaled";
    return;
  }
  if( Format :: eR16G16Sscaled == p ) {
    j = "R16G16Sscaled";
    return;
  }
  if( Format :: eR16G16Uint == p ) {
    j = "R16G16Uint";
    return;
  }
  if( Format :: eR16G16Sint == p ) {
    j = "R16G16Sint";
    return;
  }
  if( Format :: eR16G16Sfloat == p ) {
    j = "R16G16Sfloat";
    return;
  }
  if( Format :: eR16G16B16Unorm == p ) {
    j = "R16G16B16Unorm";
    return;
  }
  if( Format :: eR16G16B16Snorm == p ) {
    j = "R16G16B16Snorm";
    return;
  }
  if( Format :: eR16G16B16Uscaled == p ) {
    j = "R16G16B16Uscaled";
    return;
  }
  if( Format :: eR16G16B16Sscaled == p ) {
    j = "R16G16B16Sscaled";
    return;
  }
  if( Format :: eR16G16B16Uint == p ) {
    j = "R16G16B16Uint";
    return;
  }
  if( Format :: eR16G16B16Sint == p ) {
    j = "R16G16B16Sint";
    return;
  }
  if( Format :: eR16G16B16Sfloat == p ) {
    j = "R16G16B16Sfloat";
    return;
  }
  if( Format :: eR16G16B16A16Unorm == p ) {
    j = "R16G16B16A16Unorm";
    return;
  }
  if( Format :: eR16G16B16A16Snorm == p ) {
    j = "R16G16B16A16Snorm";
    return;
  }
  if( Format :: eR16G16B16A16Uscaled == p ) {
    j = "R16G16B16A16Uscaled";
    return;
  }
  if( Format :: eR16G16B16A16Sscaled == p ) {
    j = "R16G16B16A16Sscaled";
    return;
  }
  if( Format :: eR16G16B16A16Uint == p ) {
    j = "R16G16B16A16Uint";
    return;
  }
  if( Format :: eR16G16B16A16Sint == p ) {
    j = "R16G16B16A16Sint";
    return;
  }
  if( Format :: eR16G16B16A16Sfloat == p ) {
    j = "R16G16B16A16Sfloat";
    return;
  }
  if( Format :: eR32Uint == p ) {
    j = "R32Uint";
    return;
  }
  if( Format :: eR32Sint == p ) {
    j = "R32Sint";
    return;
  }
  if( Format :: eR32Sfloat == p ) {
    j = "R32Sfloat";
    return;
  }
  if( Format :: eR32G32Uint == p ) {
    j = "R32G32Uint";
    return;
  }
  if( Format :: eR32G32Sint == p ) {
    j = "R32G32Sint";
    return;
  }
  if( Format :: eR32G32Sfloat == p ) {
    j = "R32G32Sfloat";
    return;
  }
  if( Format :: eR32G32B32Uint == p ) {
    j = "R32G32B32Uint";
    return;
  }
  if( Format :: eR32G32B32Sint == p ) {
    j = "R32G32B32Sint";
    return;
  }
  if( Format :: eR32G32B32Sfloat == p ) {
    j = "R32G32B32Sfloat";
    return;
  }
  if( Format :: eR32G32B32A32Uint == p ) {
    j = "R32G32B32A32Uint";
    return;
  }
  if( Format :: eR32G32B32A32Sint == p ) {
    j = "R32G32B32A32Sint";
    return;
  }
  if( Format :: eR32G32B32A32Sfloat == p ) {
    j = "R32G32B32A32Sfloat";
    return;
  }
  if( Format :: eR64Uint == p ) {
    j = "R64Uint";
    return;
  }
  if( Format :: eR64Sint == p ) {
    j = "R64Sint";
    return;
  }
  if( Format :: eR64Sfloat == p ) {
    j = "R64Sfloat";
    return;
  }
  if( Format :: eR64G64Uint == p ) {
    j = "R64G64Uint";
    return;
  }
  if( Format :: eR64G64Sint == p ) {
    j = "R64G64Sint";
    return;
  }
  if( Format :: eR64G64Sfloat == p ) {
    j = "R64G64Sfloat";
    return;
  }
  if( Format :: eR64G64B64Uint == p ) {
    j = "R64G64B64Uint";
    return;
  }
  if( Format :: eR64G64B64Sint == p ) {
    j = "R64G64B64Sint";
    return;
  }
  if( Format :: eR64G64B64Sfloat == p ) {
    j = "R64G64B64Sfloat";
    return;
  }
  if( Format :: eR64G64B64A64Uint == p ) {
    j = "R64G64B64A64Uint";
    return;
  }
  if( Format :: eR64G64B64A64Sint == p ) {
    j = "R64G64B64A64Sint";
    return;
  }
  if( Format :: eR64G64B64A64Sfloat == p ) {
    j = "R64G64B64A64Sfloat";
    return;
  }
  if( Format :: eB10G11R11UfloatPack32 == p ) {
    j = "B10G11R11UfloatPack32";
    return;
  }
  if( Format :: eE5B9G9R9UfloatPack32 == p ) {
    j = "E5B9G9R9UfloatPack32";
    return;
  }
  if( Format :: eD16Unorm == p ) {
    j = "D16Unorm";
    return;
  }
  if( Format :: eX8D24UnormPack32 == p ) {
    j = "X8D24UnormPack32";
    return;
  }
  if( Format :: eD32Sfloat == p ) {
    j = "D32Sfloat";
    return;
  }
  if( Format :: eS8Uint == p ) {
    j = "S8Uint";
    return;
  }
  if( Format :: eD16UnormS8Uint == p ) {
    j = "D16UnormS8Uint";
    return;
  }
  if( Format :: eD24UnormS8Uint == p ) {
    j = "D24UnormS8Uint";
    return;
  }
  if( Format :: eD32SfloatS8Uint == p ) {
    j = "D32SfloatS8Uint";
    return;
  }
  if( Format :: eBc1RgbUnormBlock == p ) {
    j = "Bc1RgbUnormBlock";
    return;
  }
  if( Format :: eBc1RgbSrgbBlock == p ) {
    j = "Bc1RgbSrgbBlock";
    return;
  }
  if( Format :: eBc1RgbaUnormBlock == p ) {
    j = "Bc1RgbaUnormBlock";
    return;
  }
  if( Format :: eBc1RgbaSrgbBlock == p ) {
    j = "Bc1RgbaSrgbBlock";
    return;
  }
  if( Format :: eBc2UnormBlock == p ) {
    j = "Bc2UnormBlock";
    return;
  }
  if( Format :: eBc2SrgbBlock == p ) {
    j = "Bc2SrgbBlock";
    return;
  }
  if( Format :: eBc3UnormBlock == p ) {
    j = "Bc3UnormBlock";
    return;
  }
  if( Format :: eBc3SrgbBlock == p ) {
    j = "Bc3SrgbBlock";
    return;
  }
  if( Format :: eBc4UnormBlock == p ) {
    j = "Bc4UnormBlock";
    return;
  }
  if( Format :: eBc4SnormBlock == p ) {
    j = "Bc4SnormBlock";
    return;
  }
  if( Format :: eBc5UnormBlock == p ) {
    j = "Bc5UnormBlock";
    return;
  }
  if( Format :: eBc5SnormBlock == p ) {
    j = "Bc5SnormBlock";
    return;
  }
  if( Format :: eBc6HUfloatBlock == p ) {
    j = "Bc6HUfloatBlock";
    return;
  }
  if( Format :: eBc6HSfloatBlock == p ) {
    j = "Bc6HSfloatBlock";
    return;
  }
  if( Format :: eBc7UnormBlock == p ) {
    j = "Bc7UnormBlock";
    return;
  }
  if( Format :: eBc7SrgbBlock == p ) {
    j = "Bc7SrgbBlock";
    return;
  }
  if( Format :: eEtc2R8G8B8UnormBlock == p ) {
    j = "Etc2R8G8B8UnormBlock";
    return;
  }
  if( Format :: eEtc2R8G8B8SrgbBlock == p ) {
    j = "Etc2R8G8B8SrgbBlock";
    return;
  }
  if( Format :: eEtc2R8G8B8A1UnormBlock == p ) {
    j = "Etc2R8G8B8A1UnormBlock";
    return;
  }
  if( Format :: eEtc2R8G8B8A1SrgbBlock == p ) {
    j = "Etc2R8G8B8A1SrgbBlock";
    return;
  }
  if( Format :: eEtc2R8G8B8A8UnormBlock == p ) {
    j = "Etc2R8G8B8A8UnormBlock";
    return;
  }
  if( Format :: eEtc2R8G8B8A8SrgbBlock == p ) {
    j = "Etc2R8G8B8A8SrgbBlock";
    return;
  }
  if( Format :: eEacR11UnormBlock == p ) {
    j = "EacR11UnormBlock";
    return;
  }
  if( Format :: eEacR11SnormBlock == p ) {
    j = "EacR11SnormBlock";
    return;
  }
  if( Format :: eEacR11G11UnormBlock == p ) {
    j = "EacR11G11UnormBlock";
    return;
  }
  if( Format :: eEacR11G11SnormBlock == p ) {
    j = "EacR11G11SnormBlock";
    return;
  }
  if( Format :: eAstc4x4UnormBlock == p ) {
    j = "Astc4x4UnormBlock";
    return;
  }
  if( Format :: eAstc4x4SrgbBlock == p ) {
    j = "Astc4x4SrgbBlock";
    return;
  }
  if( Format :: eAstc5x4UnormBlock == p ) {
    j = "Astc5x4UnormBlock";
    return;
  }
  if( Format :: eAstc5x4SrgbBlock == p ) {
    j = "Astc5x4SrgbBlock";
    return;
  }
  if( Format :: eAstc5x5UnormBlock == p ) {
    j = "Astc5x5UnormBlock";
    return;
  }
  if( Format :: eAstc5x5SrgbBlock == p ) {
    j = "Astc5x5SrgbBlock";
    return;
  }
  if( Format :: eAstc6x5UnormBlock == p ) {
    j = "Astc6x5UnormBlock";
    return;
  }
  if( Format :: eAstc6x5SrgbBlock == p ) {
    j = "Astc6x5SrgbBlock";
    return;
  }
  if( Format :: eAstc6x6UnormBlock == p ) {
    j = "Astc6x6UnormBlock";
    return;
  }
  if( Format :: eAstc6x6SrgbBlock == p ) {
    j = "Astc6x6SrgbBlock";
    return;
  }
  if( Format :: eAstc8x5UnormBlock == p ) {
    j = "Astc8x5UnormBlock";
    return;
  }
  if( Format :: eAstc8x5SrgbBlock == p ) {
    j = "Astc8x5SrgbBlock";
    return;
  }
  if( Format :: eAstc8x6UnormBlock == p ) {
    j = "Astc8x6UnormBlock";
    return;
  }
  if( Format :: eAstc8x6SrgbBlock == p ) {
    j = "Astc8x6SrgbBlock";
    return;
  }
  if( Format :: eAstc8x8UnormBlock == p ) {
    j = "Astc8x8UnormBlock";
    return;
  }
  if( Format :: eAstc8x8SrgbBlock == p ) {
    j = "Astc8x8SrgbBlock";
    return;
  }
  if( Format :: eAstc10x5UnormBlock == p ) {
    j = "Astc10x5UnormBlock";
    return;
  }
  if( Format :: eAstc10x5SrgbBlock == p ) {
    j = "Astc10x5SrgbBlock";
    return;
  }
  if( Format :: eAstc10x6UnormBlock == p ) {
    j = "Astc10x6UnormBlock";
    return;
  }
  if( Format :: eAstc10x6SrgbBlock == p ) {
    j = "Astc10x6SrgbBlock";
    return;
  }
  if( Format :: eAstc10x8UnormBlock == p ) {
    j = "Astc10x8UnormBlock";
    return;
  }
  if( Format :: eAstc10x8SrgbBlock == p ) {
    j = "Astc10x8SrgbBlock";
    return;
  }
  if( Format :: eAstc10x10UnormBlock == p ) {
    j = "Astc10x10UnormBlock";
    return;
  }
  if( Format :: eAstc10x10SrgbBlock == p ) {
    j = "Astc10x10SrgbBlock";
    return;
  }
  if( Format :: eAstc12x10UnormBlock == p ) {
    j = "Astc12x10UnormBlock";
    return;
  }
  if( Format :: eAstc12x10SrgbBlock == p ) {
    j = "Astc12x10SrgbBlock";
    return;
  }
  if( Format :: eAstc12x12UnormBlock == p ) {
    j = "Astc12x12UnormBlock";
    return;
  }
  if( Format :: eAstc12x12SrgbBlock == p ) {
    j = "Astc12x12SrgbBlock";
    return;
  }
  if( Format :: eG8B8G8R8422Unorm == p ) {
    j = "G8B8G8R8422Unorm";
    return;
  }
  if( Format :: eB8G8R8G8422Unorm == p ) {
    j = "B8G8R8G8422Unorm";
    return;
  }
  if( Format :: eG8B8R83Plane420Unorm == p ) {
    j = "G8B8R83Plane420Unorm";
    return;
  }
  if( Format :: eG8B8R82Plane420Unorm == p ) {
    j = "G8B8R82Plane420Unorm";
    return;
  }
  if( Format :: eG8B8R83Plane422Unorm == p ) {
    j = "G8B8R83Plane422Unorm";
    return;
  }
  if( Format :: eG8B8R82Plane422Unorm == p ) {
    j = "G8B8R82Plane422Unorm";
    return;
  }
  if( Format :: eG8B8R83Plane444Unorm == p ) {
    j = "G8B8R83Plane444Unorm";
    return;
  }
  if( Format :: eR10X6UnormPack16 == p ) {
    j = "R10X6UnormPack16";
    return;
  }
  if( Format :: eR10X6G10X6Unorm2Pack16 == p ) {
    j = "R10X6G10X6Unorm2Pack16";
    return;
  }
  if( Format :: eR10X6G10X6B10X6A10X6Unorm4Pack16 == p ) {
    j = "R10X6G10X6B10X6A10X6Unorm4Pack16";
    return;
  }
  if( Format :: eG10X6B10X6G10X6R10X6422Unorm4Pack16 == p ) {
    j = "G10X6B10X6G10X6R10X6422Unorm4Pack16";
    return;
  }
  if( Format :: eB10X6G10X6R10X6G10X6422Unorm4Pack16 == p ) {
    j = "B10X6G10X6R10X6G10X6422Unorm4Pack16";
    return;
  }
  if( Format :: eG10X6B10X6R10X63Plane420Unorm3Pack16 == p ) {
    j = "G10X6B10X6R10X63Plane420Unorm3Pack16";
    return;
  }
  if( Format :: eG10X6B10X6R10X62Plane420Unorm3Pack16 == p ) {
    j = "G10X6B10X6R10X62Plane420Unorm3Pack16";
    return;
  }
  if( Format :: eG10X6B10X6R10X63Plane422Unorm3Pack16 == p ) {
    j = "G10X6B10X6R10X63Plane422Unorm3Pack16";
    return;
  }
  if( Format :: eG10X6B10X6R10X62Plane422Unorm3Pack16 == p ) {
    j = "G10X6B10X6R10X62Plane422Unorm3Pack16";
    return;
  }
  if( Format :: eG10X6B10X6R10X63Plane444Unorm3Pack16 == p ) {
    j = "G10X6B10X6R10X63Plane444Unorm3Pack16";
    return;
  }
  if( Format :: eR12X4UnormPack16 == p ) {
    j = "R12X4UnormPack16";
    return;
  }
  if( Format :: eR12X4G12X4Unorm2Pack16 == p ) {
    j = "R12X4G12X4Unorm2Pack16";
    return;
  }
  if( Format :: eR12X4G12X4B12X4A12X4Unorm4Pack16 == p ) {
    j = "R12X4G12X4B12X4A12X4Unorm4Pack16";
    return;
  }
  if( Format :: eG12X4B12X4G12X4R12X4422Unorm4Pack16 == p ) {
    j = "G12X4B12X4G12X4R12X4422Unorm4Pack16";
    return;
  }
  if( Format :: eB12X4G12X4R12X4G12X4422Unorm4Pack16 == p ) {
    j = "B12X4G12X4R12X4G12X4422Unorm4Pack16";
    return;
  }
  if( Format :: eG12X4B12X4R12X43Plane420Unorm3Pack16 == p ) {
    j = "G12X4B12X4R12X43Plane420Unorm3Pack16";
    return;
  }
  if( Format :: eG12X4B12X4R12X42Plane420Unorm3Pack16 == p ) {
    j = "G12X4B12X4R12X42Plane420Unorm3Pack16";
    return;
  }
  if( Format :: eG12X4B12X4R12X43Plane422Unorm3Pack16 == p ) {
    j = "G12X4B12X4R12X43Plane422Unorm3Pack16";
    return;
  }
  if( Format :: eG12X4B12X4R12X42Plane422Unorm3Pack16 == p ) {
    j = "G12X4B12X4R12X42Plane422Unorm3Pack16";
    return;
  }
  if( Format :: eG12X4B12X4R12X43Plane444Unorm3Pack16 == p ) {
    j = "G12X4B12X4R12X43Plane444Unorm3Pack16";
    return;
  }
  if( Format :: eG16B16G16R16422Unorm == p ) {
    j = "G16B16G16R16422Unorm";
    return;
  }
  if( Format :: eB16G16R16G16422Unorm == p ) {
    j = "B16G16R16G16422Unorm";
    return;
  }
  if( Format :: eG16B16R163Plane420Unorm == p ) {
    j = "G16B16R163Plane420Unorm";
    return;
  }
  if( Format :: eG16B16R162Plane420Unorm == p ) {
    j = "G16B16R162Plane420Unorm";
    return;
  }
  if( Format :: eG16B16R163Plane422Unorm == p ) {
    j = "G16B16R163Plane422Unorm";
    return;
  }
  if( Format :: eG16B16R162Plane422Unorm == p ) {
    j = "G16B16R162Plane422Unorm";
    return;
  }
  if( Format :: eG16B16R163Plane444Unorm == p ) {
    j = "G16B16R163Plane444Unorm";
    return;
  }
  if( Format :: ePvrtc12BppUnormBlockIMG == p ) {
    j = "Pvrtc12BppUnormBlockIMG";
    return;
  }
  if( Format :: ePvrtc14BppUnormBlockIMG == p ) {
    j = "Pvrtc14BppUnormBlockIMG";
    return;
  }
  if( Format :: ePvrtc22BppUnormBlockIMG == p ) {
    j = "Pvrtc22BppUnormBlockIMG";
    return;
  }
  if( Format :: ePvrtc24BppUnormBlockIMG == p ) {
    j = "Pvrtc24BppUnormBlockIMG";
    return;
  }
  if( Format :: ePvrtc12BppSrgbBlockIMG == p ) {
    j = "Pvrtc12BppSrgbBlockIMG";
    return;
  }
  if( Format :: ePvrtc14BppSrgbBlockIMG == p ) {
    j = "Pvrtc14BppSrgbBlockIMG";
    return;
  }
  if( Format :: ePvrtc22BppSrgbBlockIMG == p ) {
    j = "Pvrtc22BppSrgbBlockIMG";
    return;
  }
  if( Format :: ePvrtc24BppSrgbBlockIMG == p ) {
    j = "Pvrtc24BppSrgbBlockIMG";
    return;
  }
  if( Format :: eAstc4x4SfloatBlockEXT == p ) {
    j = "Astc4x4SfloatBlockEXT";
    return;
  }
  if( Format :: eAstc5x4SfloatBlockEXT == p ) {
    j = "Astc5x4SfloatBlockEXT";
    return;
  }
  if( Format :: eAstc5x5SfloatBlockEXT == p ) {
    j = "Astc5x5SfloatBlockEXT";
    return;
  }
  if( Format :: eAstc6x5SfloatBlockEXT == p ) {
    j = "Astc6x5SfloatBlockEXT";
    return;
  }
  if( Format :: eAstc6x6SfloatBlockEXT == p ) {
    j = "Astc6x6SfloatBlockEXT";
    return;
  }
  if( Format :: eAstc8x5SfloatBlockEXT == p ) {
    j = "Astc8x5SfloatBlockEXT";
    return;
  }
  if( Format :: eAstc8x6SfloatBlockEXT == p ) {
    j = "Astc8x6SfloatBlockEXT";
    return;
  }
  if( Format :: eAstc8x8SfloatBlockEXT == p ) {
    j = "Astc8x8SfloatBlockEXT";
    return;
  }
  if( Format :: eAstc10x5SfloatBlockEXT == p ) {
    j = "Astc10x5SfloatBlockEXT";
    return;
  }
  if( Format :: eAstc10x6SfloatBlockEXT == p ) {
    j = "Astc10x6SfloatBlockEXT";
    return;
  }
  if( Format :: eAstc10x8SfloatBlockEXT == p ) {
    j = "Astc10x8SfloatBlockEXT";
    return;
  }
  if( Format :: eAstc10x10SfloatBlockEXT == p ) {
    j = "Astc10x10SfloatBlockEXT";
    return;
  }
  if( Format :: eAstc12x10SfloatBlockEXT == p ) {
    j = "Astc12x10SfloatBlockEXT";
    return;
  }
  if( Format :: eAstc12x12SfloatBlockEXT == p ) {
    j = "Astc12x12SfloatBlockEXT";
    return;
  }
  if( Format :: eG8B8R82Plane444UnormEXT == p ) {
    j = "G8B8R82Plane444UnormEXT";
    return;
  }
  if( Format :: eG10X6B10X6R10X62Plane444Unorm3Pack16EXT == p ) {
    j = "G10X6B10X6R10X62Plane444Unorm3Pack16EXT";
    return;
  }
  if( Format :: eG12X4B12X4R12X42Plane444Unorm3Pack16EXT == p ) {
    j = "G12X4B12X4R12X42Plane444Unorm3Pack16EXT";
    return;
  }
  if( Format :: eG16B16R162Plane444UnormEXT == p ) {
    j = "G16B16R162Plane444UnormEXT";
    return;
  }
  if( Format :: eA4R4G4B4UnormPack16EXT == p ) {
    j = "A4R4G4B4UnormPack16EXT";
    return;
  }
  if( Format :: eA4B4G4R4UnormPack16EXT == p ) {
    j = "A4B4G4R4UnormPack16EXT";
    return;
  }
  if( Format :: eB10X6G10X6R10X6G10X6422Unorm4Pack16KHR == p ) {
    j = "B10X6G10X6R10X6G10X6422Unorm4Pack16KHR";
    return;
  }
  if( Format :: eB12X4G12X4R12X4G12X4422Unorm4Pack16KHR == p ) {
    j = "B12X4G12X4R12X4G12X4422Unorm4Pack16KHR";
    return;
  }
  if( Format :: eB16G16R16G16422UnormKHR == p ) {
    j = "B16G16R16G16422UnormKHR";
    return;
  }
  if( Format :: eB8G8R8G8422UnormKHR == p ) {
    j = "B8G8R8G8422UnormKHR";
    return;
  }
  if( Format :: eG10X6B10X6G10X6R10X6422Unorm4Pack16KHR == p ) {
    j = "G10X6B10X6G10X6R10X6422Unorm4Pack16KHR";
    return;
  }
  if( Format :: eG10X6B10X6R10X62Plane420Unorm3Pack16KHR == p ) {
    j = "G10X6B10X6R10X62Plane420Unorm3Pack16KHR";
    return;
  }
  if( Format :: eG10X6B10X6R10X62Plane422Unorm3Pack16KHR == p ) {
    j = "G10X6B10X6R10X62Plane422Unorm3Pack16KHR";
    return;
  }
  if( Format :: eG10X6B10X6R10X63Plane420Unorm3Pack16KHR == p ) {
    j = "G10X6B10X6R10X63Plane420Unorm3Pack16KHR";
    return;
  }
  if( Format :: eG10X6B10X6R10X63Plane422Unorm3Pack16KHR == p ) {
    j = "G10X6B10X6R10X63Plane422Unorm3Pack16KHR";
    return;
  }
  if( Format :: eG10X6B10X6R10X63Plane444Unorm3Pack16KHR == p ) {
    j = "G10X6B10X6R10X63Plane444Unorm3Pack16KHR";
    return;
  }
  if( Format :: eG12X4B12X4G12X4R12X4422Unorm4Pack16KHR == p ) {
    j = "G12X4B12X4G12X4R12X4422Unorm4Pack16KHR";
    return;
  }
  if( Format :: eG12X4B12X4R12X42Plane420Unorm3Pack16KHR == p ) {
    j = "G12X4B12X4R12X42Plane420Unorm3Pack16KHR";
    return;
  }
  if( Format :: eG12X4B12X4R12X42Plane422Unorm3Pack16KHR == p ) {
    j = "G12X4B12X4R12X42Plane422Unorm3Pack16KHR";
    return;
  }
  if( Format :: eG12X4B12X4R12X43Plane420Unorm3Pack16KHR == p ) {
    j = "G12X4B12X4R12X43Plane420Unorm3Pack16KHR";
    return;
  }
  if( Format :: eG12X4B12X4R12X43Plane422Unorm3Pack16KHR == p ) {
    j = "G12X4B12X4R12X43Plane422Unorm3Pack16KHR";
    return;
  }
  if( Format :: eG12X4B12X4R12X43Plane444Unorm3Pack16KHR == p ) {
    j = "G12X4B12X4R12X43Plane444Unorm3Pack16KHR";
    return;
  }
  if( Format :: eG16B16G16R16422UnormKHR == p ) {
    j = "G16B16G16R16422UnormKHR";
    return;
  }
  if( Format :: eG16B16R162Plane420UnormKHR == p ) {
    j = "G16B16R162Plane420UnormKHR";
    return;
  }
  if( Format :: eG16B16R162Plane422UnormKHR == p ) {
    j = "G16B16R162Plane422UnormKHR";
    return;
  }
  if( Format :: eG16B16R163Plane420UnormKHR == p ) {
    j = "G16B16R163Plane420UnormKHR";
    return;
  }
  if( Format :: eG16B16R163Plane422UnormKHR == p ) {
    j = "G16B16R163Plane422UnormKHR";
    return;
  }
  if( Format :: eG16B16R163Plane444UnormKHR == p ) {
    j = "G16B16R163Plane444UnormKHR";
    return;
  }
  if( Format :: eG8B8G8R8422UnormKHR == p ) {
    j = "G8B8G8R8422UnormKHR";
    return;
  }
  if( Format :: eG8B8R82Plane420UnormKHR == p ) {
    j = "G8B8R82Plane420UnormKHR";
    return;
  }
  if( Format :: eG8B8R82Plane422UnormKHR == p ) {
    j = "G8B8R82Plane422UnormKHR";
    return;
  }
  if( Format :: eG8B8R83Plane420UnormKHR == p ) {
    j = "G8B8R83Plane420UnormKHR";
    return;
  }
  if( Format :: eG8B8R83Plane422UnormKHR == p ) {
    j = "G8B8R83Plane422UnormKHR";
    return;
  }
  if( Format :: eG8B8R83Plane444UnormKHR == p ) {
    j = "G8B8R83Plane444UnormKHR";
    return;
  }
  if( Format :: eR10X6G10X6B10X6A10X6Unorm4Pack16KHR == p ) {
    j = "R10X6G10X6B10X6A10X6Unorm4Pack16KHR";
    return;
  }
  if( Format :: eR10X6G10X6Unorm2Pack16KHR == p ) {
    j = "R10X6G10X6Unorm2Pack16KHR";
    return;
  }
  if( Format :: eR10X6UnormPack16KHR == p ) {
    j = "R10X6UnormPack16KHR";
    return;
  }
  if( Format :: eR12X4G12X4B12X4A12X4Unorm4Pack16KHR == p ) {
    j = "R12X4G12X4B12X4A12X4Unorm4Pack16KHR";
    return;
  }
  if( Format :: eR12X4G12X4Unorm2Pack16KHR == p ) {
    j = "R12X4G12X4Unorm2Pack16KHR";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkFormat &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: Format ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, Format &p ) {
  if( j.is_string() ) {
    if( "Undefined" == j.get< std::string >() ) {
      p = Format :: eUndefined ;
      return;
    }
    if( "eUndefined" == j.get< std::string >() ) {
      p = Format :: eUndefined ;
      return;
    }
    if( "VK_FORMAT_UNDEFINED" == j.get< std::string >() ) {
      p = Format :: eUndefined ;
      return;
    }
    if( "R4G4UnormPack8" == j.get< std::string >() ) {
      p = Format :: eR4G4UnormPack8 ;
      return;
    }
    if( "eR4G4UnormPack8" == j.get< std::string >() ) {
      p = Format :: eR4G4UnormPack8 ;
      return;
    }
    if( "VK_FORMAT_R4G4_UNORM_PACK8" == j.get< std::string >() ) {
      p = Format :: eR4G4UnormPack8 ;
      return;
    }
    if( "R4G4B4A4UnormPack16" == j.get< std::string >() ) {
      p = Format :: eR4G4B4A4UnormPack16 ;
      return;
    }
    if( "eR4G4B4A4UnormPack16" == j.get< std::string >() ) {
      p = Format :: eR4G4B4A4UnormPack16 ;
      return;
    }
    if( "VK_FORMAT_R4G4B4A4_UNORM_PACK16" == j.get< std::string >() ) {
      p = Format :: eR4G4B4A4UnormPack16 ;
      return;
    }
    if( "B4G4R4A4UnormPack16" == j.get< std::string >() ) {
      p = Format :: eB4G4R4A4UnormPack16 ;
      return;
    }
    if( "eB4G4R4A4UnormPack16" == j.get< std::string >() ) {
      p = Format :: eB4G4R4A4UnormPack16 ;
      return;
    }
    if( "VK_FORMAT_B4G4R4A4_UNORM_PACK16" == j.get< std::string >() ) {
      p = Format :: eB4G4R4A4UnormPack16 ;
      return;
    }
    if( "R5G6B5UnormPack16" == j.get< std::string >() ) {
      p = Format :: eR5G6B5UnormPack16 ;
      return;
    }
    if( "eR5G6B5UnormPack16" == j.get< std::string >() ) {
      p = Format :: eR5G6B5UnormPack16 ;
      return;
    }
    if( "VK_FORMAT_R5G6B5_UNORM_PACK16" == j.get< std::string >() ) {
      p = Format :: eR5G6B5UnormPack16 ;
      return;
    }
    if( "B5G6R5UnormPack16" == j.get< std::string >() ) {
      p = Format :: eB5G6R5UnormPack16 ;
      return;
    }
    if( "eB5G6R5UnormPack16" == j.get< std::string >() ) {
      p = Format :: eB5G6R5UnormPack16 ;
      return;
    }
    if( "VK_FORMAT_B5G6R5_UNORM_PACK16" == j.get< std::string >() ) {
      p = Format :: eB5G6R5UnormPack16 ;
      return;
    }
    if( "R5G5B5A1UnormPack16" == j.get< std::string >() ) {
      p = Format :: eR5G5B5A1UnormPack16 ;
      return;
    }
    if( "eR5G5B5A1UnormPack16" == j.get< std::string >() ) {
      p = Format :: eR5G5B5A1UnormPack16 ;
      return;
    }
    if( "VK_FORMAT_R5G5B5A1_UNORM_PACK16" == j.get< std::string >() ) {
      p = Format :: eR5G5B5A1UnormPack16 ;
      return;
    }
    if( "B5G5R5A1UnormPack16" == j.get< std::string >() ) {
      p = Format :: eB5G5R5A1UnormPack16 ;
      return;
    }
    if( "eB5G5R5A1UnormPack16" == j.get< std::string >() ) {
      p = Format :: eB5G5R5A1UnormPack16 ;
      return;
    }
    if( "VK_FORMAT_B5G5R5A1_UNORM_PACK16" == j.get< std::string >() ) {
      p = Format :: eB5G5R5A1UnormPack16 ;
      return;
    }
    if( "A1R5G5B5UnormPack16" == j.get< std::string >() ) {
      p = Format :: eA1R5G5B5UnormPack16 ;
      return;
    }
    if( "eA1R5G5B5UnormPack16" == j.get< std::string >() ) {
      p = Format :: eA1R5G5B5UnormPack16 ;
      return;
    }
    if( "VK_FORMAT_A1R5G5B5_UNORM_PACK16" == j.get< std::string >() ) {
      p = Format :: eA1R5G5B5UnormPack16 ;
      return;
    }
    if( "R8Unorm" == j.get< std::string >() ) {
      p = Format :: eR8Unorm ;
      return;
    }
    if( "eR8Unorm" == j.get< std::string >() ) {
      p = Format :: eR8Unorm ;
      return;
    }
    if( "VK_FORMAT_R8_UNORM" == j.get< std::string >() ) {
      p = Format :: eR8Unorm ;
      return;
    }
    if( "R8Snorm" == j.get< std::string >() ) {
      p = Format :: eR8Snorm ;
      return;
    }
    if( "eR8Snorm" == j.get< std::string >() ) {
      p = Format :: eR8Snorm ;
      return;
    }
    if( "VK_FORMAT_R8_SNORM" == j.get< std::string >() ) {
      p = Format :: eR8Snorm ;
      return;
    }
    if( "R8Uscaled" == j.get< std::string >() ) {
      p = Format :: eR8Uscaled ;
      return;
    }
    if( "eR8Uscaled" == j.get< std::string >() ) {
      p = Format :: eR8Uscaled ;
      return;
    }
    if( "VK_FORMAT_R8_USCALED" == j.get< std::string >() ) {
      p = Format :: eR8Uscaled ;
      return;
    }
    if( "R8Sscaled" == j.get< std::string >() ) {
      p = Format :: eR8Sscaled ;
      return;
    }
    if( "eR8Sscaled" == j.get< std::string >() ) {
      p = Format :: eR8Sscaled ;
      return;
    }
    if( "VK_FORMAT_R8_SSCALED" == j.get< std::string >() ) {
      p = Format :: eR8Sscaled ;
      return;
    }
    if( "R8Uint" == j.get< std::string >() ) {
      p = Format :: eR8Uint ;
      return;
    }
    if( "eR8Uint" == j.get< std::string >() ) {
      p = Format :: eR8Uint ;
      return;
    }
    if( "VK_FORMAT_R8_UINT" == j.get< std::string >() ) {
      p = Format :: eR8Uint ;
      return;
    }
    if( "R8Sint" == j.get< std::string >() ) {
      p = Format :: eR8Sint ;
      return;
    }
    if( "eR8Sint" == j.get< std::string >() ) {
      p = Format :: eR8Sint ;
      return;
    }
    if( "VK_FORMAT_R8_SINT" == j.get< std::string >() ) {
      p = Format :: eR8Sint ;
      return;
    }
    if( "R8Srgb" == j.get< std::string >() ) {
      p = Format :: eR8Srgb ;
      return;
    }
    if( "eR8Srgb" == j.get< std::string >() ) {
      p = Format :: eR8Srgb ;
      return;
    }
    if( "VK_FORMAT_R8_SRGB" == j.get< std::string >() ) {
      p = Format :: eR8Srgb ;
      return;
    }
    if( "R8G8Unorm" == j.get< std::string >() ) {
      p = Format :: eR8G8Unorm ;
      return;
    }
    if( "eR8G8Unorm" == j.get< std::string >() ) {
      p = Format :: eR8G8Unorm ;
      return;
    }
    if( "VK_FORMAT_R8G8_UNORM" == j.get< std::string >() ) {
      p = Format :: eR8G8Unorm ;
      return;
    }
    if( "R8G8Snorm" == j.get< std::string >() ) {
      p = Format :: eR8G8Snorm ;
      return;
    }
    if( "eR8G8Snorm" == j.get< std::string >() ) {
      p = Format :: eR8G8Snorm ;
      return;
    }
    if( "VK_FORMAT_R8G8_SNORM" == j.get< std::string >() ) {
      p = Format :: eR8G8Snorm ;
      return;
    }
    if( "R8G8Uscaled" == j.get< std::string >() ) {
      p = Format :: eR8G8Uscaled ;
      return;
    }
    if( "eR8G8Uscaled" == j.get< std::string >() ) {
      p = Format :: eR8G8Uscaled ;
      return;
    }
    if( "VK_FORMAT_R8G8_USCALED" == j.get< std::string >() ) {
      p = Format :: eR8G8Uscaled ;
      return;
    }
    if( "R8G8Sscaled" == j.get< std::string >() ) {
      p = Format :: eR8G8Sscaled ;
      return;
    }
    if( "eR8G8Sscaled" == j.get< std::string >() ) {
      p = Format :: eR8G8Sscaled ;
      return;
    }
    if( "VK_FORMAT_R8G8_SSCALED" == j.get< std::string >() ) {
      p = Format :: eR8G8Sscaled ;
      return;
    }
    if( "R8G8Uint" == j.get< std::string >() ) {
      p = Format :: eR8G8Uint ;
      return;
    }
    if( "eR8G8Uint" == j.get< std::string >() ) {
      p = Format :: eR8G8Uint ;
      return;
    }
    if( "VK_FORMAT_R8G8_UINT" == j.get< std::string >() ) {
      p = Format :: eR8G8Uint ;
      return;
    }
    if( "R8G8Sint" == j.get< std::string >() ) {
      p = Format :: eR8G8Sint ;
      return;
    }
    if( "eR8G8Sint" == j.get< std::string >() ) {
      p = Format :: eR8G8Sint ;
      return;
    }
    if( "VK_FORMAT_R8G8_SINT" == j.get< std::string >() ) {
      p = Format :: eR8G8Sint ;
      return;
    }
    if( "R8G8Srgb" == j.get< std::string >() ) {
      p = Format :: eR8G8Srgb ;
      return;
    }
    if( "eR8G8Srgb" == j.get< std::string >() ) {
      p = Format :: eR8G8Srgb ;
      return;
    }
    if( "VK_FORMAT_R8G8_SRGB" == j.get< std::string >() ) {
      p = Format :: eR8G8Srgb ;
      return;
    }
    if( "R8G8B8Unorm" == j.get< std::string >() ) {
      p = Format :: eR8G8B8Unorm ;
      return;
    }
    if( "eR8G8B8Unorm" == j.get< std::string >() ) {
      p = Format :: eR8G8B8Unorm ;
      return;
    }
    if( "VK_FORMAT_R8G8B8_UNORM" == j.get< std::string >() ) {
      p = Format :: eR8G8B8Unorm ;
      return;
    }
    if( "R8G8B8Snorm" == j.get< std::string >() ) {
      p = Format :: eR8G8B8Snorm ;
      return;
    }
    if( "eR8G8B8Snorm" == j.get< std::string >() ) {
      p = Format :: eR8G8B8Snorm ;
      return;
    }
    if( "VK_FORMAT_R8G8B8_SNORM" == j.get< std::string >() ) {
      p = Format :: eR8G8B8Snorm ;
      return;
    }
    if( "R8G8B8Uscaled" == j.get< std::string >() ) {
      p = Format :: eR8G8B8Uscaled ;
      return;
    }
    if( "eR8G8B8Uscaled" == j.get< std::string >() ) {
      p = Format :: eR8G8B8Uscaled ;
      return;
    }
    if( "VK_FORMAT_R8G8B8_USCALED" == j.get< std::string >() ) {
      p = Format :: eR8G8B8Uscaled ;
      return;
    }
    if( "R8G8B8Sscaled" == j.get< std::string >() ) {
      p = Format :: eR8G8B8Sscaled ;
      return;
    }
    if( "eR8G8B8Sscaled" == j.get< std::string >() ) {
      p = Format :: eR8G8B8Sscaled ;
      return;
    }
    if( "VK_FORMAT_R8G8B8_SSCALED" == j.get< std::string >() ) {
      p = Format :: eR8G8B8Sscaled ;
      return;
    }
    if( "R8G8B8Uint" == j.get< std::string >() ) {
      p = Format :: eR8G8B8Uint ;
      return;
    }
    if( "eR8G8B8Uint" == j.get< std::string >() ) {
      p = Format :: eR8G8B8Uint ;
      return;
    }
    if( "VK_FORMAT_R8G8B8_UINT" == j.get< std::string >() ) {
      p = Format :: eR8G8B8Uint ;
      return;
    }
    if( "R8G8B8Sint" == j.get< std::string >() ) {
      p = Format :: eR8G8B8Sint ;
      return;
    }
    if( "eR8G8B8Sint" == j.get< std::string >() ) {
      p = Format :: eR8G8B8Sint ;
      return;
    }
    if( "VK_FORMAT_R8G8B8_SINT" == j.get< std::string >() ) {
      p = Format :: eR8G8B8Sint ;
      return;
    }
    if( "R8G8B8Srgb" == j.get< std::string >() ) {
      p = Format :: eR8G8B8Srgb ;
      return;
    }
    if( "eR8G8B8Srgb" == j.get< std::string >() ) {
      p = Format :: eR8G8B8Srgb ;
      return;
    }
    if( "VK_FORMAT_R8G8B8_SRGB" == j.get< std::string >() ) {
      p = Format :: eR8G8B8Srgb ;
      return;
    }
    if( "B8G8R8Unorm" == j.get< std::string >() ) {
      p = Format :: eB8G8R8Unorm ;
      return;
    }
    if( "eB8G8R8Unorm" == j.get< std::string >() ) {
      p = Format :: eB8G8R8Unorm ;
      return;
    }
    if( "VK_FORMAT_B8G8R8_UNORM" == j.get< std::string >() ) {
      p = Format :: eB8G8R8Unorm ;
      return;
    }
    if( "B8G8R8Snorm" == j.get< std::string >() ) {
      p = Format :: eB8G8R8Snorm ;
      return;
    }
    if( "eB8G8R8Snorm" == j.get< std::string >() ) {
      p = Format :: eB8G8R8Snorm ;
      return;
    }
    if( "VK_FORMAT_B8G8R8_SNORM" == j.get< std::string >() ) {
      p = Format :: eB8G8R8Snorm ;
      return;
    }
    if( "B8G8R8Uscaled" == j.get< std::string >() ) {
      p = Format :: eB8G8R8Uscaled ;
      return;
    }
    if( "eB8G8R8Uscaled" == j.get< std::string >() ) {
      p = Format :: eB8G8R8Uscaled ;
      return;
    }
    if( "VK_FORMAT_B8G8R8_USCALED" == j.get< std::string >() ) {
      p = Format :: eB8G8R8Uscaled ;
      return;
    }
    if( "B8G8R8Sscaled" == j.get< std::string >() ) {
      p = Format :: eB8G8R8Sscaled ;
      return;
    }
    if( "eB8G8R8Sscaled" == j.get< std::string >() ) {
      p = Format :: eB8G8R8Sscaled ;
      return;
    }
    if( "VK_FORMAT_B8G8R8_SSCALED" == j.get< std::string >() ) {
      p = Format :: eB8G8R8Sscaled ;
      return;
    }
    if( "B8G8R8Uint" == j.get< std::string >() ) {
      p = Format :: eB8G8R8Uint ;
      return;
    }
    if( "eB8G8R8Uint" == j.get< std::string >() ) {
      p = Format :: eB8G8R8Uint ;
      return;
    }
    if( "VK_FORMAT_B8G8R8_UINT" == j.get< std::string >() ) {
      p = Format :: eB8G8R8Uint ;
      return;
    }
    if( "B8G8R8Sint" == j.get< std::string >() ) {
      p = Format :: eB8G8R8Sint ;
      return;
    }
    if( "eB8G8R8Sint" == j.get< std::string >() ) {
      p = Format :: eB8G8R8Sint ;
      return;
    }
    if( "VK_FORMAT_B8G8R8_SINT" == j.get< std::string >() ) {
      p = Format :: eB8G8R8Sint ;
      return;
    }
    if( "B8G8R8Srgb" == j.get< std::string >() ) {
      p = Format :: eB8G8R8Srgb ;
      return;
    }
    if( "eB8G8R8Srgb" == j.get< std::string >() ) {
      p = Format :: eB8G8R8Srgb ;
      return;
    }
    if( "VK_FORMAT_B8G8R8_SRGB" == j.get< std::string >() ) {
      p = Format :: eB8G8R8Srgb ;
      return;
    }
    if( "R8G8B8A8Unorm" == j.get< std::string >() ) {
      p = Format :: eR8G8B8A8Unorm ;
      return;
    }
    if( "eR8G8B8A8Unorm" == j.get< std::string >() ) {
      p = Format :: eR8G8B8A8Unorm ;
      return;
    }
    if( "VK_FORMAT_R8G8B8A8_UNORM" == j.get< std::string >() ) {
      p = Format :: eR8G8B8A8Unorm ;
      return;
    }
    if( "R8G8B8A8Snorm" == j.get< std::string >() ) {
      p = Format :: eR8G8B8A8Snorm ;
      return;
    }
    if( "eR8G8B8A8Snorm" == j.get< std::string >() ) {
      p = Format :: eR8G8B8A8Snorm ;
      return;
    }
    if( "VK_FORMAT_R8G8B8A8_SNORM" == j.get< std::string >() ) {
      p = Format :: eR8G8B8A8Snorm ;
      return;
    }
    if( "R8G8B8A8Uscaled" == j.get< std::string >() ) {
      p = Format :: eR8G8B8A8Uscaled ;
      return;
    }
    if( "eR8G8B8A8Uscaled" == j.get< std::string >() ) {
      p = Format :: eR8G8B8A8Uscaled ;
      return;
    }
    if( "VK_FORMAT_R8G8B8A8_USCALED" == j.get< std::string >() ) {
      p = Format :: eR8G8B8A8Uscaled ;
      return;
    }
    if( "R8G8B8A8Sscaled" == j.get< std::string >() ) {
      p = Format :: eR8G8B8A8Sscaled ;
      return;
    }
    if( "eR8G8B8A8Sscaled" == j.get< std::string >() ) {
      p = Format :: eR8G8B8A8Sscaled ;
      return;
    }
    if( "VK_FORMAT_R8G8B8A8_SSCALED" == j.get< std::string >() ) {
      p = Format :: eR8G8B8A8Sscaled ;
      return;
    }
    if( "R8G8B8A8Uint" == j.get< std::string >() ) {
      p = Format :: eR8G8B8A8Uint ;
      return;
    }
    if( "eR8G8B8A8Uint" == j.get< std::string >() ) {
      p = Format :: eR8G8B8A8Uint ;
      return;
    }
    if( "VK_FORMAT_R8G8B8A8_UINT" == j.get< std::string >() ) {
      p = Format :: eR8G8B8A8Uint ;
      return;
    }
    if( "R8G8B8A8Sint" == j.get< std::string >() ) {
      p = Format :: eR8G8B8A8Sint ;
      return;
    }
    if( "eR8G8B8A8Sint" == j.get< std::string >() ) {
      p = Format :: eR8G8B8A8Sint ;
      return;
    }
    if( "VK_FORMAT_R8G8B8A8_SINT" == j.get< std::string >() ) {
      p = Format :: eR8G8B8A8Sint ;
      return;
    }
    if( "R8G8B8A8Srgb" == j.get< std::string >() ) {
      p = Format :: eR8G8B8A8Srgb ;
      return;
    }
    if( "eR8G8B8A8Srgb" == j.get< std::string >() ) {
      p = Format :: eR8G8B8A8Srgb ;
      return;
    }
    if( "VK_FORMAT_R8G8B8A8_SRGB" == j.get< std::string >() ) {
      p = Format :: eR8G8B8A8Srgb ;
      return;
    }
    if( "B8G8R8A8Unorm" == j.get< std::string >() ) {
      p = Format :: eB8G8R8A8Unorm ;
      return;
    }
    if( "eB8G8R8A8Unorm" == j.get< std::string >() ) {
      p = Format :: eB8G8R8A8Unorm ;
      return;
    }
    if( "VK_FORMAT_B8G8R8A8_UNORM" == j.get< std::string >() ) {
      p = Format :: eB8G8R8A8Unorm ;
      return;
    }
    if( "B8G8R8A8Snorm" == j.get< std::string >() ) {
      p = Format :: eB8G8R8A8Snorm ;
      return;
    }
    if( "eB8G8R8A8Snorm" == j.get< std::string >() ) {
      p = Format :: eB8G8R8A8Snorm ;
      return;
    }
    if( "VK_FORMAT_B8G8R8A8_SNORM" == j.get< std::string >() ) {
      p = Format :: eB8G8R8A8Snorm ;
      return;
    }
    if( "B8G8R8A8Uscaled" == j.get< std::string >() ) {
      p = Format :: eB8G8R8A8Uscaled ;
      return;
    }
    if( "eB8G8R8A8Uscaled" == j.get< std::string >() ) {
      p = Format :: eB8G8R8A8Uscaled ;
      return;
    }
    if( "VK_FORMAT_B8G8R8A8_USCALED" == j.get< std::string >() ) {
      p = Format :: eB8G8R8A8Uscaled ;
      return;
    }
    if( "B8G8R8A8Sscaled" == j.get< std::string >() ) {
      p = Format :: eB8G8R8A8Sscaled ;
      return;
    }
    if( "eB8G8R8A8Sscaled" == j.get< std::string >() ) {
      p = Format :: eB8G8R8A8Sscaled ;
      return;
    }
    if( "VK_FORMAT_B8G8R8A8_SSCALED" == j.get< std::string >() ) {
      p = Format :: eB8G8R8A8Sscaled ;
      return;
    }
    if( "B8G8R8A8Uint" == j.get< std::string >() ) {
      p = Format :: eB8G8R8A8Uint ;
      return;
    }
    if( "eB8G8R8A8Uint" == j.get< std::string >() ) {
      p = Format :: eB8G8R8A8Uint ;
      return;
    }
    if( "VK_FORMAT_B8G8R8A8_UINT" == j.get< std::string >() ) {
      p = Format :: eB8G8R8A8Uint ;
      return;
    }
    if( "B8G8R8A8Sint" == j.get< std::string >() ) {
      p = Format :: eB8G8R8A8Sint ;
      return;
    }
    if( "eB8G8R8A8Sint" == j.get< std::string >() ) {
      p = Format :: eB8G8R8A8Sint ;
      return;
    }
    if( "VK_FORMAT_B8G8R8A8_SINT" == j.get< std::string >() ) {
      p = Format :: eB8G8R8A8Sint ;
      return;
    }
    if( "B8G8R8A8Srgb" == j.get< std::string >() ) {
      p = Format :: eB8G8R8A8Srgb ;
      return;
    }
    if( "eB8G8R8A8Srgb" == j.get< std::string >() ) {
      p = Format :: eB8G8R8A8Srgb ;
      return;
    }
    if( "VK_FORMAT_B8G8R8A8_SRGB" == j.get< std::string >() ) {
      p = Format :: eB8G8R8A8Srgb ;
      return;
    }
    if( "A8B8G8R8UnormPack32" == j.get< std::string >() ) {
      p = Format :: eA8B8G8R8UnormPack32 ;
      return;
    }
    if( "eA8B8G8R8UnormPack32" == j.get< std::string >() ) {
      p = Format :: eA8B8G8R8UnormPack32 ;
      return;
    }
    if( "VK_FORMAT_A8B8G8R8_UNORM_PACK32" == j.get< std::string >() ) {
      p = Format :: eA8B8G8R8UnormPack32 ;
      return;
    }
    if( "A8B8G8R8SnormPack32" == j.get< std::string >() ) {
      p = Format :: eA8B8G8R8SnormPack32 ;
      return;
    }
    if( "eA8B8G8R8SnormPack32" == j.get< std::string >() ) {
      p = Format :: eA8B8G8R8SnormPack32 ;
      return;
    }
    if( "VK_FORMAT_A8B8G8R8_SNORM_PACK32" == j.get< std::string >() ) {
      p = Format :: eA8B8G8R8SnormPack32 ;
      return;
    }
    if( "A8B8G8R8UscaledPack32" == j.get< std::string >() ) {
      p = Format :: eA8B8G8R8UscaledPack32 ;
      return;
    }
    if( "eA8B8G8R8UscaledPack32" == j.get< std::string >() ) {
      p = Format :: eA8B8G8R8UscaledPack32 ;
      return;
    }
    if( "VK_FORMAT_A8B8G8R8_USCALED_PACK32" == j.get< std::string >() ) {
      p = Format :: eA8B8G8R8UscaledPack32 ;
      return;
    }
    if( "A8B8G8R8SscaledPack32" == j.get< std::string >() ) {
      p = Format :: eA8B8G8R8SscaledPack32 ;
      return;
    }
    if( "eA8B8G8R8SscaledPack32" == j.get< std::string >() ) {
      p = Format :: eA8B8G8R8SscaledPack32 ;
      return;
    }
    if( "VK_FORMAT_A8B8G8R8_SSCALED_PACK32" == j.get< std::string >() ) {
      p = Format :: eA8B8G8R8SscaledPack32 ;
      return;
    }
    if( "A8B8G8R8UintPack32" == j.get< std::string >() ) {
      p = Format :: eA8B8G8R8UintPack32 ;
      return;
    }
    if( "eA8B8G8R8UintPack32" == j.get< std::string >() ) {
      p = Format :: eA8B8G8R8UintPack32 ;
      return;
    }
    if( "VK_FORMAT_A8B8G8R8_UINT_PACK32" == j.get< std::string >() ) {
      p = Format :: eA8B8G8R8UintPack32 ;
      return;
    }
    if( "A8B8G8R8SintPack32" == j.get< std::string >() ) {
      p = Format :: eA8B8G8R8SintPack32 ;
      return;
    }
    if( "eA8B8G8R8SintPack32" == j.get< std::string >() ) {
      p = Format :: eA8B8G8R8SintPack32 ;
      return;
    }
    if( "VK_FORMAT_A8B8G8R8_SINT_PACK32" == j.get< std::string >() ) {
      p = Format :: eA8B8G8R8SintPack32 ;
      return;
    }
    if( "A8B8G8R8SrgbPack32" == j.get< std::string >() ) {
      p = Format :: eA8B8G8R8SrgbPack32 ;
      return;
    }
    if( "eA8B8G8R8SrgbPack32" == j.get< std::string >() ) {
      p = Format :: eA8B8G8R8SrgbPack32 ;
      return;
    }
    if( "VK_FORMAT_A8B8G8R8_SRGB_PACK32" == j.get< std::string >() ) {
      p = Format :: eA8B8G8R8SrgbPack32 ;
      return;
    }
    if( "A2R10G10B10UnormPack32" == j.get< std::string >() ) {
      p = Format :: eA2R10G10B10UnormPack32 ;
      return;
    }
    if( "eA2R10G10B10UnormPack32" == j.get< std::string >() ) {
      p = Format :: eA2R10G10B10UnormPack32 ;
      return;
    }
    if( "VK_FORMAT_A2R10G10B10_UNORM_PACK32" == j.get< std::string >() ) {
      p = Format :: eA2R10G10B10UnormPack32 ;
      return;
    }
    if( "A2R10G10B10SnormPack32" == j.get< std::string >() ) {
      p = Format :: eA2R10G10B10SnormPack32 ;
      return;
    }
    if( "eA2R10G10B10SnormPack32" == j.get< std::string >() ) {
      p = Format :: eA2R10G10B10SnormPack32 ;
      return;
    }
    if( "VK_FORMAT_A2R10G10B10_SNORM_PACK32" == j.get< std::string >() ) {
      p = Format :: eA2R10G10B10SnormPack32 ;
      return;
    }
    if( "A2R10G10B10UscaledPack32" == j.get< std::string >() ) {
      p = Format :: eA2R10G10B10UscaledPack32 ;
      return;
    }
    if( "eA2R10G10B10UscaledPack32" == j.get< std::string >() ) {
      p = Format :: eA2R10G10B10UscaledPack32 ;
      return;
    }
    if( "VK_FORMAT_A2R10G10B10_USCALED_PACK32" == j.get< std::string >() ) {
      p = Format :: eA2R10G10B10UscaledPack32 ;
      return;
    }
    if( "A2R10G10B10SscaledPack32" == j.get< std::string >() ) {
      p = Format :: eA2R10G10B10SscaledPack32 ;
      return;
    }
    if( "eA2R10G10B10SscaledPack32" == j.get< std::string >() ) {
      p = Format :: eA2R10G10B10SscaledPack32 ;
      return;
    }
    if( "VK_FORMAT_A2R10G10B10_SSCALED_PACK32" == j.get< std::string >() ) {
      p = Format :: eA2R10G10B10SscaledPack32 ;
      return;
    }
    if( "A2R10G10B10UintPack32" == j.get< std::string >() ) {
      p = Format :: eA2R10G10B10UintPack32 ;
      return;
    }
    if( "eA2R10G10B10UintPack32" == j.get< std::string >() ) {
      p = Format :: eA2R10G10B10UintPack32 ;
      return;
    }
    if( "VK_FORMAT_A2R10G10B10_UINT_PACK32" == j.get< std::string >() ) {
      p = Format :: eA2R10G10B10UintPack32 ;
      return;
    }
    if( "A2R10G10B10SintPack32" == j.get< std::string >() ) {
      p = Format :: eA2R10G10B10SintPack32 ;
      return;
    }
    if( "eA2R10G10B10SintPack32" == j.get< std::string >() ) {
      p = Format :: eA2R10G10B10SintPack32 ;
      return;
    }
    if( "VK_FORMAT_A2R10G10B10_SINT_PACK32" == j.get< std::string >() ) {
      p = Format :: eA2R10G10B10SintPack32 ;
      return;
    }
    if( "A2B10G10R10UnormPack32" == j.get< std::string >() ) {
      p = Format :: eA2B10G10R10UnormPack32 ;
      return;
    }
    if( "eA2B10G10R10UnormPack32" == j.get< std::string >() ) {
      p = Format :: eA2B10G10R10UnormPack32 ;
      return;
    }
    if( "VK_FORMAT_A2B10G10R10_UNORM_PACK32" == j.get< std::string >() ) {
      p = Format :: eA2B10G10R10UnormPack32 ;
      return;
    }
    if( "A2B10G10R10SnormPack32" == j.get< std::string >() ) {
      p = Format :: eA2B10G10R10SnormPack32 ;
      return;
    }
    if( "eA2B10G10R10SnormPack32" == j.get< std::string >() ) {
      p = Format :: eA2B10G10R10SnormPack32 ;
      return;
    }
    if( "VK_FORMAT_A2B10G10R10_SNORM_PACK32" == j.get< std::string >() ) {
      p = Format :: eA2B10G10R10SnormPack32 ;
      return;
    }
    if( "A2B10G10R10UscaledPack32" == j.get< std::string >() ) {
      p = Format :: eA2B10G10R10UscaledPack32 ;
      return;
    }
    if( "eA2B10G10R10UscaledPack32" == j.get< std::string >() ) {
      p = Format :: eA2B10G10R10UscaledPack32 ;
      return;
    }
    if( "VK_FORMAT_A2B10G10R10_USCALED_PACK32" == j.get< std::string >() ) {
      p = Format :: eA2B10G10R10UscaledPack32 ;
      return;
    }
    if( "A2B10G10R10SscaledPack32" == j.get< std::string >() ) {
      p = Format :: eA2B10G10R10SscaledPack32 ;
      return;
    }
    if( "eA2B10G10R10SscaledPack32" == j.get< std::string >() ) {
      p = Format :: eA2B10G10R10SscaledPack32 ;
      return;
    }
    if( "VK_FORMAT_A2B10G10R10_SSCALED_PACK32" == j.get< std::string >() ) {
      p = Format :: eA2B10G10R10SscaledPack32 ;
      return;
    }
    if( "A2B10G10R10UintPack32" == j.get< std::string >() ) {
      p = Format :: eA2B10G10R10UintPack32 ;
      return;
    }
    if( "eA2B10G10R10UintPack32" == j.get< std::string >() ) {
      p = Format :: eA2B10G10R10UintPack32 ;
      return;
    }
    if( "VK_FORMAT_A2B10G10R10_UINT_PACK32" == j.get< std::string >() ) {
      p = Format :: eA2B10G10R10UintPack32 ;
      return;
    }
    if( "A2B10G10R10SintPack32" == j.get< std::string >() ) {
      p = Format :: eA2B10G10R10SintPack32 ;
      return;
    }
    if( "eA2B10G10R10SintPack32" == j.get< std::string >() ) {
      p = Format :: eA2B10G10R10SintPack32 ;
      return;
    }
    if( "VK_FORMAT_A2B10G10R10_SINT_PACK32" == j.get< std::string >() ) {
      p = Format :: eA2B10G10R10SintPack32 ;
      return;
    }
    if( "R16Unorm" == j.get< std::string >() ) {
      p = Format :: eR16Unorm ;
      return;
    }
    if( "eR16Unorm" == j.get< std::string >() ) {
      p = Format :: eR16Unorm ;
      return;
    }
    if( "VK_FORMAT_R16_UNORM" == j.get< std::string >() ) {
      p = Format :: eR16Unorm ;
      return;
    }
    if( "R16Snorm" == j.get< std::string >() ) {
      p = Format :: eR16Snorm ;
      return;
    }
    if( "eR16Snorm" == j.get< std::string >() ) {
      p = Format :: eR16Snorm ;
      return;
    }
    if( "VK_FORMAT_R16_SNORM" == j.get< std::string >() ) {
      p = Format :: eR16Snorm ;
      return;
    }
    if( "R16Uscaled" == j.get< std::string >() ) {
      p = Format :: eR16Uscaled ;
      return;
    }
    if( "eR16Uscaled" == j.get< std::string >() ) {
      p = Format :: eR16Uscaled ;
      return;
    }
    if( "VK_FORMAT_R16_USCALED" == j.get< std::string >() ) {
      p = Format :: eR16Uscaled ;
      return;
    }
    if( "R16Sscaled" == j.get< std::string >() ) {
      p = Format :: eR16Sscaled ;
      return;
    }
    if( "eR16Sscaled" == j.get< std::string >() ) {
      p = Format :: eR16Sscaled ;
      return;
    }
    if( "VK_FORMAT_R16_SSCALED" == j.get< std::string >() ) {
      p = Format :: eR16Sscaled ;
      return;
    }
    if( "R16Uint" == j.get< std::string >() ) {
      p = Format :: eR16Uint ;
      return;
    }
    if( "eR16Uint" == j.get< std::string >() ) {
      p = Format :: eR16Uint ;
      return;
    }
    if( "VK_FORMAT_R16_UINT" == j.get< std::string >() ) {
      p = Format :: eR16Uint ;
      return;
    }
    if( "R16Sint" == j.get< std::string >() ) {
      p = Format :: eR16Sint ;
      return;
    }
    if( "eR16Sint" == j.get< std::string >() ) {
      p = Format :: eR16Sint ;
      return;
    }
    if( "VK_FORMAT_R16_SINT" == j.get< std::string >() ) {
      p = Format :: eR16Sint ;
      return;
    }
    if( "R16Sfloat" == j.get< std::string >() ) {
      p = Format :: eR16Sfloat ;
      return;
    }
    if( "eR16Sfloat" == j.get< std::string >() ) {
      p = Format :: eR16Sfloat ;
      return;
    }
    if( "VK_FORMAT_R16_SFLOAT" == j.get< std::string >() ) {
      p = Format :: eR16Sfloat ;
      return;
    }
    if( "R16G16Unorm" == j.get< std::string >() ) {
      p = Format :: eR16G16Unorm ;
      return;
    }
    if( "eR16G16Unorm" == j.get< std::string >() ) {
      p = Format :: eR16G16Unorm ;
      return;
    }
    if( "VK_FORMAT_R16G16_UNORM" == j.get< std::string >() ) {
      p = Format :: eR16G16Unorm ;
      return;
    }
    if( "R16G16Snorm" == j.get< std::string >() ) {
      p = Format :: eR16G16Snorm ;
      return;
    }
    if( "eR16G16Snorm" == j.get< std::string >() ) {
      p = Format :: eR16G16Snorm ;
      return;
    }
    if( "VK_FORMAT_R16G16_SNORM" == j.get< std::string >() ) {
      p = Format :: eR16G16Snorm ;
      return;
    }
    if( "R16G16Uscaled" == j.get< std::string >() ) {
      p = Format :: eR16G16Uscaled ;
      return;
    }
    if( "eR16G16Uscaled" == j.get< std::string >() ) {
      p = Format :: eR16G16Uscaled ;
      return;
    }
    if( "VK_FORMAT_R16G16_USCALED" == j.get< std::string >() ) {
      p = Format :: eR16G16Uscaled ;
      return;
    }
    if( "R16G16Sscaled" == j.get< std::string >() ) {
      p = Format :: eR16G16Sscaled ;
      return;
    }
    if( "eR16G16Sscaled" == j.get< std::string >() ) {
      p = Format :: eR16G16Sscaled ;
      return;
    }
    if( "VK_FORMAT_R16G16_SSCALED" == j.get< std::string >() ) {
      p = Format :: eR16G16Sscaled ;
      return;
    }
    if( "R16G16Uint" == j.get< std::string >() ) {
      p = Format :: eR16G16Uint ;
      return;
    }
    if( "eR16G16Uint" == j.get< std::string >() ) {
      p = Format :: eR16G16Uint ;
      return;
    }
    if( "VK_FORMAT_R16G16_UINT" == j.get< std::string >() ) {
      p = Format :: eR16G16Uint ;
      return;
    }
    if( "R16G16Sint" == j.get< std::string >() ) {
      p = Format :: eR16G16Sint ;
      return;
    }
    if( "eR16G16Sint" == j.get< std::string >() ) {
      p = Format :: eR16G16Sint ;
      return;
    }
    if( "VK_FORMAT_R16G16_SINT" == j.get< std::string >() ) {
      p = Format :: eR16G16Sint ;
      return;
    }
    if( "R16G16Sfloat" == j.get< std::string >() ) {
      p = Format :: eR16G16Sfloat ;
      return;
    }
    if( "eR16G16Sfloat" == j.get< std::string >() ) {
      p = Format :: eR16G16Sfloat ;
      return;
    }
    if( "VK_FORMAT_R16G16_SFLOAT" == j.get< std::string >() ) {
      p = Format :: eR16G16Sfloat ;
      return;
    }
    if( "R16G16B16Unorm" == j.get< std::string >() ) {
      p = Format :: eR16G16B16Unorm ;
      return;
    }
    if( "eR16G16B16Unorm" == j.get< std::string >() ) {
      p = Format :: eR16G16B16Unorm ;
      return;
    }
    if( "VK_FORMAT_R16G16B16_UNORM" == j.get< std::string >() ) {
      p = Format :: eR16G16B16Unorm ;
      return;
    }
    if( "R16G16B16Snorm" == j.get< std::string >() ) {
      p = Format :: eR16G16B16Snorm ;
      return;
    }
    if( "eR16G16B16Snorm" == j.get< std::string >() ) {
      p = Format :: eR16G16B16Snorm ;
      return;
    }
    if( "VK_FORMAT_R16G16B16_SNORM" == j.get< std::string >() ) {
      p = Format :: eR16G16B16Snorm ;
      return;
    }
    if( "R16G16B16Uscaled" == j.get< std::string >() ) {
      p = Format :: eR16G16B16Uscaled ;
      return;
    }
    if( "eR16G16B16Uscaled" == j.get< std::string >() ) {
      p = Format :: eR16G16B16Uscaled ;
      return;
    }
    if( "VK_FORMAT_R16G16B16_USCALED" == j.get< std::string >() ) {
      p = Format :: eR16G16B16Uscaled ;
      return;
    }
    if( "R16G16B16Sscaled" == j.get< std::string >() ) {
      p = Format :: eR16G16B16Sscaled ;
      return;
    }
    if( "eR16G16B16Sscaled" == j.get< std::string >() ) {
      p = Format :: eR16G16B16Sscaled ;
      return;
    }
    if( "VK_FORMAT_R16G16B16_SSCALED" == j.get< std::string >() ) {
      p = Format :: eR16G16B16Sscaled ;
      return;
    }
    if( "R16G16B16Uint" == j.get< std::string >() ) {
      p = Format :: eR16G16B16Uint ;
      return;
    }
    if( "eR16G16B16Uint" == j.get< std::string >() ) {
      p = Format :: eR16G16B16Uint ;
      return;
    }
    if( "VK_FORMAT_R16G16B16_UINT" == j.get< std::string >() ) {
      p = Format :: eR16G16B16Uint ;
      return;
    }
    if( "R16G16B16Sint" == j.get< std::string >() ) {
      p = Format :: eR16G16B16Sint ;
      return;
    }
    if( "eR16G16B16Sint" == j.get< std::string >() ) {
      p = Format :: eR16G16B16Sint ;
      return;
    }
    if( "VK_FORMAT_R16G16B16_SINT" == j.get< std::string >() ) {
      p = Format :: eR16G16B16Sint ;
      return;
    }
    if( "R16G16B16Sfloat" == j.get< std::string >() ) {
      p = Format :: eR16G16B16Sfloat ;
      return;
    }
    if( "eR16G16B16Sfloat" == j.get< std::string >() ) {
      p = Format :: eR16G16B16Sfloat ;
      return;
    }
    if( "VK_FORMAT_R16G16B16_SFLOAT" == j.get< std::string >() ) {
      p = Format :: eR16G16B16Sfloat ;
      return;
    }
    if( "R16G16B16A16Unorm" == j.get< std::string >() ) {
      p = Format :: eR16G16B16A16Unorm ;
      return;
    }
    if( "eR16G16B16A16Unorm" == j.get< std::string >() ) {
      p = Format :: eR16G16B16A16Unorm ;
      return;
    }
    if( "VK_FORMAT_R16G16B16A16_UNORM" == j.get< std::string >() ) {
      p = Format :: eR16G16B16A16Unorm ;
      return;
    }
    if( "R16G16B16A16Snorm" == j.get< std::string >() ) {
      p = Format :: eR16G16B16A16Snorm ;
      return;
    }
    if( "eR16G16B16A16Snorm" == j.get< std::string >() ) {
      p = Format :: eR16G16B16A16Snorm ;
      return;
    }
    if( "VK_FORMAT_R16G16B16A16_SNORM" == j.get< std::string >() ) {
      p = Format :: eR16G16B16A16Snorm ;
      return;
    }
    if( "R16G16B16A16Uscaled" == j.get< std::string >() ) {
      p = Format :: eR16G16B16A16Uscaled ;
      return;
    }
    if( "eR16G16B16A16Uscaled" == j.get< std::string >() ) {
      p = Format :: eR16G16B16A16Uscaled ;
      return;
    }
    if( "VK_FORMAT_R16G16B16A16_USCALED" == j.get< std::string >() ) {
      p = Format :: eR16G16B16A16Uscaled ;
      return;
    }
    if( "R16G16B16A16Sscaled" == j.get< std::string >() ) {
      p = Format :: eR16G16B16A16Sscaled ;
      return;
    }
    if( "eR16G16B16A16Sscaled" == j.get< std::string >() ) {
      p = Format :: eR16G16B16A16Sscaled ;
      return;
    }
    if( "VK_FORMAT_R16G16B16A16_SSCALED" == j.get< std::string >() ) {
      p = Format :: eR16G16B16A16Sscaled ;
      return;
    }
    if( "R16G16B16A16Uint" == j.get< std::string >() ) {
      p = Format :: eR16G16B16A16Uint ;
      return;
    }
    if( "eR16G16B16A16Uint" == j.get< std::string >() ) {
      p = Format :: eR16G16B16A16Uint ;
      return;
    }
    if( "VK_FORMAT_R16G16B16A16_UINT" == j.get< std::string >() ) {
      p = Format :: eR16G16B16A16Uint ;
      return;
    }
    if( "R16G16B16A16Sint" == j.get< std::string >() ) {
      p = Format :: eR16G16B16A16Sint ;
      return;
    }
    if( "eR16G16B16A16Sint" == j.get< std::string >() ) {
      p = Format :: eR16G16B16A16Sint ;
      return;
    }
    if( "VK_FORMAT_R16G16B16A16_SINT" == j.get< std::string >() ) {
      p = Format :: eR16G16B16A16Sint ;
      return;
    }
    if( "R16G16B16A16Sfloat" == j.get< std::string >() ) {
      p = Format :: eR16G16B16A16Sfloat ;
      return;
    }
    if( "eR16G16B16A16Sfloat" == j.get< std::string >() ) {
      p = Format :: eR16G16B16A16Sfloat ;
      return;
    }
    if( "VK_FORMAT_R16G16B16A16_SFLOAT" == j.get< std::string >() ) {
      p = Format :: eR16G16B16A16Sfloat ;
      return;
    }
    if( "R32Uint" == j.get< std::string >() ) {
      p = Format :: eR32Uint ;
      return;
    }
    if( "eR32Uint" == j.get< std::string >() ) {
      p = Format :: eR32Uint ;
      return;
    }
    if( "VK_FORMAT_R32_UINT" == j.get< std::string >() ) {
      p = Format :: eR32Uint ;
      return;
    }
    if( "R32Sint" == j.get< std::string >() ) {
      p = Format :: eR32Sint ;
      return;
    }
    if( "eR32Sint" == j.get< std::string >() ) {
      p = Format :: eR32Sint ;
      return;
    }
    if( "VK_FORMAT_R32_SINT" == j.get< std::string >() ) {
      p = Format :: eR32Sint ;
      return;
    }
    if( "R32Sfloat" == j.get< std::string >() ) {
      p = Format :: eR32Sfloat ;
      return;
    }
    if( "eR32Sfloat" == j.get< std::string >() ) {
      p = Format :: eR32Sfloat ;
      return;
    }
    if( "VK_FORMAT_R32_SFLOAT" == j.get< std::string >() ) {
      p = Format :: eR32Sfloat ;
      return;
    }
    if( "R32G32Uint" == j.get< std::string >() ) {
      p = Format :: eR32G32Uint ;
      return;
    }
    if( "eR32G32Uint" == j.get< std::string >() ) {
      p = Format :: eR32G32Uint ;
      return;
    }
    if( "VK_FORMAT_R32G32_UINT" == j.get< std::string >() ) {
      p = Format :: eR32G32Uint ;
      return;
    }
    if( "R32G32Sint" == j.get< std::string >() ) {
      p = Format :: eR32G32Sint ;
      return;
    }
    if( "eR32G32Sint" == j.get< std::string >() ) {
      p = Format :: eR32G32Sint ;
      return;
    }
    if( "VK_FORMAT_R32G32_SINT" == j.get< std::string >() ) {
      p = Format :: eR32G32Sint ;
      return;
    }
    if( "R32G32Sfloat" == j.get< std::string >() ) {
      p = Format :: eR32G32Sfloat ;
      return;
    }
    if( "eR32G32Sfloat" == j.get< std::string >() ) {
      p = Format :: eR32G32Sfloat ;
      return;
    }
    if( "VK_FORMAT_R32G32_SFLOAT" == j.get< std::string >() ) {
      p = Format :: eR32G32Sfloat ;
      return;
    }
    if( "R32G32B32Uint" == j.get< std::string >() ) {
      p = Format :: eR32G32B32Uint ;
      return;
    }
    if( "eR32G32B32Uint" == j.get< std::string >() ) {
      p = Format :: eR32G32B32Uint ;
      return;
    }
    if( "VK_FORMAT_R32G32B32_UINT" == j.get< std::string >() ) {
      p = Format :: eR32G32B32Uint ;
      return;
    }
    if( "R32G32B32Sint" == j.get< std::string >() ) {
      p = Format :: eR32G32B32Sint ;
      return;
    }
    if( "eR32G32B32Sint" == j.get< std::string >() ) {
      p = Format :: eR32G32B32Sint ;
      return;
    }
    if( "VK_FORMAT_R32G32B32_SINT" == j.get< std::string >() ) {
      p = Format :: eR32G32B32Sint ;
      return;
    }
    if( "R32G32B32Sfloat" == j.get< std::string >() ) {
      p = Format :: eR32G32B32Sfloat ;
      return;
    }
    if( "eR32G32B32Sfloat" == j.get< std::string >() ) {
      p = Format :: eR32G32B32Sfloat ;
      return;
    }
    if( "VK_FORMAT_R32G32B32_SFLOAT" == j.get< std::string >() ) {
      p = Format :: eR32G32B32Sfloat ;
      return;
    }
    if( "R32G32B32A32Uint" == j.get< std::string >() ) {
      p = Format :: eR32G32B32A32Uint ;
      return;
    }
    if( "eR32G32B32A32Uint" == j.get< std::string >() ) {
      p = Format :: eR32G32B32A32Uint ;
      return;
    }
    if( "VK_FORMAT_R32G32B32A32_UINT" == j.get< std::string >() ) {
      p = Format :: eR32G32B32A32Uint ;
      return;
    }
    if( "R32G32B32A32Sint" == j.get< std::string >() ) {
      p = Format :: eR32G32B32A32Sint ;
      return;
    }
    if( "eR32G32B32A32Sint" == j.get< std::string >() ) {
      p = Format :: eR32G32B32A32Sint ;
      return;
    }
    if( "VK_FORMAT_R32G32B32A32_SINT" == j.get< std::string >() ) {
      p = Format :: eR32G32B32A32Sint ;
      return;
    }
    if( "R32G32B32A32Sfloat" == j.get< std::string >() ) {
      p = Format :: eR32G32B32A32Sfloat ;
      return;
    }
    if( "eR32G32B32A32Sfloat" == j.get< std::string >() ) {
      p = Format :: eR32G32B32A32Sfloat ;
      return;
    }
    if( "VK_FORMAT_R32G32B32A32_SFLOAT" == j.get< std::string >() ) {
      p = Format :: eR32G32B32A32Sfloat ;
      return;
    }
    if( "R64Uint" == j.get< std::string >() ) {
      p = Format :: eR64Uint ;
      return;
    }
    if( "eR64Uint" == j.get< std::string >() ) {
      p = Format :: eR64Uint ;
      return;
    }
    if( "VK_FORMAT_R64_UINT" == j.get< std::string >() ) {
      p = Format :: eR64Uint ;
      return;
    }
    if( "R64Sint" == j.get< std::string >() ) {
      p = Format :: eR64Sint ;
      return;
    }
    if( "eR64Sint" == j.get< std::string >() ) {
      p = Format :: eR64Sint ;
      return;
    }
    if( "VK_FORMAT_R64_SINT" == j.get< std::string >() ) {
      p = Format :: eR64Sint ;
      return;
    }
    if( "R64Sfloat" == j.get< std::string >() ) {
      p = Format :: eR64Sfloat ;
      return;
    }
    if( "eR64Sfloat" == j.get< std::string >() ) {
      p = Format :: eR64Sfloat ;
      return;
    }
    if( "VK_FORMAT_R64_SFLOAT" == j.get< std::string >() ) {
      p = Format :: eR64Sfloat ;
      return;
    }
    if( "R64G64Uint" == j.get< std::string >() ) {
      p = Format :: eR64G64Uint ;
      return;
    }
    if( "eR64G64Uint" == j.get< std::string >() ) {
      p = Format :: eR64G64Uint ;
      return;
    }
    if( "VK_FORMAT_R64G64_UINT" == j.get< std::string >() ) {
      p = Format :: eR64G64Uint ;
      return;
    }
    if( "R64G64Sint" == j.get< std::string >() ) {
      p = Format :: eR64G64Sint ;
      return;
    }
    if( "eR64G64Sint" == j.get< std::string >() ) {
      p = Format :: eR64G64Sint ;
      return;
    }
    if( "VK_FORMAT_R64G64_SINT" == j.get< std::string >() ) {
      p = Format :: eR64G64Sint ;
      return;
    }
    if( "R64G64Sfloat" == j.get< std::string >() ) {
      p = Format :: eR64G64Sfloat ;
      return;
    }
    if( "eR64G64Sfloat" == j.get< std::string >() ) {
      p = Format :: eR64G64Sfloat ;
      return;
    }
    if( "VK_FORMAT_R64G64_SFLOAT" == j.get< std::string >() ) {
      p = Format :: eR64G64Sfloat ;
      return;
    }
    if( "R64G64B64Uint" == j.get< std::string >() ) {
      p = Format :: eR64G64B64Uint ;
      return;
    }
    if( "eR64G64B64Uint" == j.get< std::string >() ) {
      p = Format :: eR64G64B64Uint ;
      return;
    }
    if( "VK_FORMAT_R64G64B64_UINT" == j.get< std::string >() ) {
      p = Format :: eR64G64B64Uint ;
      return;
    }
    if( "R64G64B64Sint" == j.get< std::string >() ) {
      p = Format :: eR64G64B64Sint ;
      return;
    }
    if( "eR64G64B64Sint" == j.get< std::string >() ) {
      p = Format :: eR64G64B64Sint ;
      return;
    }
    if( "VK_FORMAT_R64G64B64_SINT" == j.get< std::string >() ) {
      p = Format :: eR64G64B64Sint ;
      return;
    }
    if( "R64G64B64Sfloat" == j.get< std::string >() ) {
      p = Format :: eR64G64B64Sfloat ;
      return;
    }
    if( "eR64G64B64Sfloat" == j.get< std::string >() ) {
      p = Format :: eR64G64B64Sfloat ;
      return;
    }
    if( "VK_FORMAT_R64G64B64_SFLOAT" == j.get< std::string >() ) {
      p = Format :: eR64G64B64Sfloat ;
      return;
    }
    if( "R64G64B64A64Uint" == j.get< std::string >() ) {
      p = Format :: eR64G64B64A64Uint ;
      return;
    }
    if( "eR64G64B64A64Uint" == j.get< std::string >() ) {
      p = Format :: eR64G64B64A64Uint ;
      return;
    }
    if( "VK_FORMAT_R64G64B64A64_UINT" == j.get< std::string >() ) {
      p = Format :: eR64G64B64A64Uint ;
      return;
    }
    if( "R64G64B64A64Sint" == j.get< std::string >() ) {
      p = Format :: eR64G64B64A64Sint ;
      return;
    }
    if( "eR64G64B64A64Sint" == j.get< std::string >() ) {
      p = Format :: eR64G64B64A64Sint ;
      return;
    }
    if( "VK_FORMAT_R64G64B64A64_SINT" == j.get< std::string >() ) {
      p = Format :: eR64G64B64A64Sint ;
      return;
    }
    if( "R64G64B64A64Sfloat" == j.get< std::string >() ) {
      p = Format :: eR64G64B64A64Sfloat ;
      return;
    }
    if( "eR64G64B64A64Sfloat" == j.get< std::string >() ) {
      p = Format :: eR64G64B64A64Sfloat ;
      return;
    }
    if( "VK_FORMAT_R64G64B64A64_SFLOAT" == j.get< std::string >() ) {
      p = Format :: eR64G64B64A64Sfloat ;
      return;
    }
    if( "B10G11R11UfloatPack32" == j.get< std::string >() ) {
      p = Format :: eB10G11R11UfloatPack32 ;
      return;
    }
    if( "eB10G11R11UfloatPack32" == j.get< std::string >() ) {
      p = Format :: eB10G11R11UfloatPack32 ;
      return;
    }
    if( "VK_FORMAT_B10G11R11_UFLOAT_PACK32" == j.get< std::string >() ) {
      p = Format :: eB10G11R11UfloatPack32 ;
      return;
    }
    if( "E5B9G9R9UfloatPack32" == j.get< std::string >() ) {
      p = Format :: eE5B9G9R9UfloatPack32 ;
      return;
    }
    if( "eE5B9G9R9UfloatPack32" == j.get< std::string >() ) {
      p = Format :: eE5B9G9R9UfloatPack32 ;
      return;
    }
    if( "VK_FORMAT_E5B9G9R9_UFLOAT_PACK32" == j.get< std::string >() ) {
      p = Format :: eE5B9G9R9UfloatPack32 ;
      return;
    }
    if( "D16Unorm" == j.get< std::string >() ) {
      p = Format :: eD16Unorm ;
      return;
    }
    if( "eD16Unorm" == j.get< std::string >() ) {
      p = Format :: eD16Unorm ;
      return;
    }
    if( "VK_FORMAT_D16_UNORM" == j.get< std::string >() ) {
      p = Format :: eD16Unorm ;
      return;
    }
    if( "X8D24UnormPack32" == j.get< std::string >() ) {
      p = Format :: eX8D24UnormPack32 ;
      return;
    }
    if( "eX8D24UnormPack32" == j.get< std::string >() ) {
      p = Format :: eX8D24UnormPack32 ;
      return;
    }
    if( "VK_FORMAT_X8_D24_UNORM_PACK32" == j.get< std::string >() ) {
      p = Format :: eX8D24UnormPack32 ;
      return;
    }
    if( "D32Sfloat" == j.get< std::string >() ) {
      p = Format :: eD32Sfloat ;
      return;
    }
    if( "eD32Sfloat" == j.get< std::string >() ) {
      p = Format :: eD32Sfloat ;
      return;
    }
    if( "VK_FORMAT_D32_SFLOAT" == j.get< std::string >() ) {
      p = Format :: eD32Sfloat ;
      return;
    }
    if( "S8Uint" == j.get< std::string >() ) {
      p = Format :: eS8Uint ;
      return;
    }
    if( "eS8Uint" == j.get< std::string >() ) {
      p = Format :: eS8Uint ;
      return;
    }
    if( "VK_FORMAT_S8_UINT" == j.get< std::string >() ) {
      p = Format :: eS8Uint ;
      return;
    }
    if( "D16UnormS8Uint" == j.get< std::string >() ) {
      p = Format :: eD16UnormS8Uint ;
      return;
    }
    if( "eD16UnormS8Uint" == j.get< std::string >() ) {
      p = Format :: eD16UnormS8Uint ;
      return;
    }
    if( "VK_FORMAT_D16_UNORM_S8_UINT" == j.get< std::string >() ) {
      p = Format :: eD16UnormS8Uint ;
      return;
    }
    if( "D24UnormS8Uint" == j.get< std::string >() ) {
      p = Format :: eD24UnormS8Uint ;
      return;
    }
    if( "eD24UnormS8Uint" == j.get< std::string >() ) {
      p = Format :: eD24UnormS8Uint ;
      return;
    }
    if( "VK_FORMAT_D24_UNORM_S8_UINT" == j.get< std::string >() ) {
      p = Format :: eD24UnormS8Uint ;
      return;
    }
    if( "D32SfloatS8Uint" == j.get< std::string >() ) {
      p = Format :: eD32SfloatS8Uint ;
      return;
    }
    if( "eD32SfloatS8Uint" == j.get< std::string >() ) {
      p = Format :: eD32SfloatS8Uint ;
      return;
    }
    if( "VK_FORMAT_D32_SFLOAT_S8_UINT" == j.get< std::string >() ) {
      p = Format :: eD32SfloatS8Uint ;
      return;
    }
    if( "Bc1RgbUnormBlock" == j.get< std::string >() ) {
      p = Format :: eBc1RgbUnormBlock ;
      return;
    }
    if( "eBc1RgbUnormBlock" == j.get< std::string >() ) {
      p = Format :: eBc1RgbUnormBlock ;
      return;
    }
    if( "VK_FORMAT_BC1_RGB_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eBc1RgbUnormBlock ;
      return;
    }
    if( "Bc1RgbSrgbBlock" == j.get< std::string >() ) {
      p = Format :: eBc1RgbSrgbBlock ;
      return;
    }
    if( "eBc1RgbSrgbBlock" == j.get< std::string >() ) {
      p = Format :: eBc1RgbSrgbBlock ;
      return;
    }
    if( "VK_FORMAT_BC1_RGB_SRGB_BLOCK" == j.get< std::string >() ) {
      p = Format :: eBc1RgbSrgbBlock ;
      return;
    }
    if( "Bc1RgbaUnormBlock" == j.get< std::string >() ) {
      p = Format :: eBc1RgbaUnormBlock ;
      return;
    }
    if( "eBc1RgbaUnormBlock" == j.get< std::string >() ) {
      p = Format :: eBc1RgbaUnormBlock ;
      return;
    }
    if( "VK_FORMAT_BC1_RGBA_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eBc1RgbaUnormBlock ;
      return;
    }
    if( "Bc1RgbaSrgbBlock" == j.get< std::string >() ) {
      p = Format :: eBc1RgbaSrgbBlock ;
      return;
    }
    if( "eBc1RgbaSrgbBlock" == j.get< std::string >() ) {
      p = Format :: eBc1RgbaSrgbBlock ;
      return;
    }
    if( "VK_FORMAT_BC1_RGBA_SRGB_BLOCK" == j.get< std::string >() ) {
      p = Format :: eBc1RgbaSrgbBlock ;
      return;
    }
    if( "Bc2UnormBlock" == j.get< std::string >() ) {
      p = Format :: eBc2UnormBlock ;
      return;
    }
    if( "eBc2UnormBlock" == j.get< std::string >() ) {
      p = Format :: eBc2UnormBlock ;
      return;
    }
    if( "VK_FORMAT_BC2_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eBc2UnormBlock ;
      return;
    }
    if( "Bc2SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eBc2SrgbBlock ;
      return;
    }
    if( "eBc2SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eBc2SrgbBlock ;
      return;
    }
    if( "VK_FORMAT_BC2_SRGB_BLOCK" == j.get< std::string >() ) {
      p = Format :: eBc2SrgbBlock ;
      return;
    }
    if( "Bc3UnormBlock" == j.get< std::string >() ) {
      p = Format :: eBc3UnormBlock ;
      return;
    }
    if( "eBc3UnormBlock" == j.get< std::string >() ) {
      p = Format :: eBc3UnormBlock ;
      return;
    }
    if( "VK_FORMAT_BC3_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eBc3UnormBlock ;
      return;
    }
    if( "Bc3SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eBc3SrgbBlock ;
      return;
    }
    if( "eBc3SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eBc3SrgbBlock ;
      return;
    }
    if( "VK_FORMAT_BC3_SRGB_BLOCK" == j.get< std::string >() ) {
      p = Format :: eBc3SrgbBlock ;
      return;
    }
    if( "Bc4UnormBlock" == j.get< std::string >() ) {
      p = Format :: eBc4UnormBlock ;
      return;
    }
    if( "eBc4UnormBlock" == j.get< std::string >() ) {
      p = Format :: eBc4UnormBlock ;
      return;
    }
    if( "VK_FORMAT_BC4_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eBc4UnormBlock ;
      return;
    }
    if( "Bc4SnormBlock" == j.get< std::string >() ) {
      p = Format :: eBc4SnormBlock ;
      return;
    }
    if( "eBc4SnormBlock" == j.get< std::string >() ) {
      p = Format :: eBc4SnormBlock ;
      return;
    }
    if( "VK_FORMAT_BC4_SNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eBc4SnormBlock ;
      return;
    }
    if( "Bc5UnormBlock" == j.get< std::string >() ) {
      p = Format :: eBc5UnormBlock ;
      return;
    }
    if( "eBc5UnormBlock" == j.get< std::string >() ) {
      p = Format :: eBc5UnormBlock ;
      return;
    }
    if( "VK_FORMAT_BC5_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eBc5UnormBlock ;
      return;
    }
    if( "Bc5SnormBlock" == j.get< std::string >() ) {
      p = Format :: eBc5SnormBlock ;
      return;
    }
    if( "eBc5SnormBlock" == j.get< std::string >() ) {
      p = Format :: eBc5SnormBlock ;
      return;
    }
    if( "VK_FORMAT_BC5_SNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eBc5SnormBlock ;
      return;
    }
    if( "Bc6HUfloatBlock" == j.get< std::string >() ) {
      p = Format :: eBc6HUfloatBlock ;
      return;
    }
    if( "eBc6HUfloatBlock" == j.get< std::string >() ) {
      p = Format :: eBc6HUfloatBlock ;
      return;
    }
    if( "VK_FORMAT_BC6H_UFLOAT_BLOCK" == j.get< std::string >() ) {
      p = Format :: eBc6HUfloatBlock ;
      return;
    }
    if( "Bc6HSfloatBlock" == j.get< std::string >() ) {
      p = Format :: eBc6HSfloatBlock ;
      return;
    }
    if( "eBc6HSfloatBlock" == j.get< std::string >() ) {
      p = Format :: eBc6HSfloatBlock ;
      return;
    }
    if( "VK_FORMAT_BC6H_SFLOAT_BLOCK" == j.get< std::string >() ) {
      p = Format :: eBc6HSfloatBlock ;
      return;
    }
    if( "Bc7UnormBlock" == j.get< std::string >() ) {
      p = Format :: eBc7UnormBlock ;
      return;
    }
    if( "eBc7UnormBlock" == j.get< std::string >() ) {
      p = Format :: eBc7UnormBlock ;
      return;
    }
    if( "VK_FORMAT_BC7_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eBc7UnormBlock ;
      return;
    }
    if( "Bc7SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eBc7SrgbBlock ;
      return;
    }
    if( "eBc7SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eBc7SrgbBlock ;
      return;
    }
    if( "VK_FORMAT_BC7_SRGB_BLOCK" == j.get< std::string >() ) {
      p = Format :: eBc7SrgbBlock ;
      return;
    }
    if( "Etc2R8G8B8UnormBlock" == j.get< std::string >() ) {
      p = Format :: eEtc2R8G8B8UnormBlock ;
      return;
    }
    if( "eEtc2R8G8B8UnormBlock" == j.get< std::string >() ) {
      p = Format :: eEtc2R8G8B8UnormBlock ;
      return;
    }
    if( "VK_FORMAT_ETC2_R8G8B8_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eEtc2R8G8B8UnormBlock ;
      return;
    }
    if( "Etc2R8G8B8SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eEtc2R8G8B8SrgbBlock ;
      return;
    }
    if( "eEtc2R8G8B8SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eEtc2R8G8B8SrgbBlock ;
      return;
    }
    if( "VK_FORMAT_ETC2_R8G8B8_SRGB_BLOCK" == j.get< std::string >() ) {
      p = Format :: eEtc2R8G8B8SrgbBlock ;
      return;
    }
    if( "Etc2R8G8B8A1UnormBlock" == j.get< std::string >() ) {
      p = Format :: eEtc2R8G8B8A1UnormBlock ;
      return;
    }
    if( "eEtc2R8G8B8A1UnormBlock" == j.get< std::string >() ) {
      p = Format :: eEtc2R8G8B8A1UnormBlock ;
      return;
    }
    if( "VK_FORMAT_ETC2_R8G8B8A1_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eEtc2R8G8B8A1UnormBlock ;
      return;
    }
    if( "Etc2R8G8B8A1SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eEtc2R8G8B8A1SrgbBlock ;
      return;
    }
    if( "eEtc2R8G8B8A1SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eEtc2R8G8B8A1SrgbBlock ;
      return;
    }
    if( "VK_FORMAT_ETC2_R8G8B8A1_SRGB_BLOCK" == j.get< std::string >() ) {
      p = Format :: eEtc2R8G8B8A1SrgbBlock ;
      return;
    }
    if( "Etc2R8G8B8A8UnormBlock" == j.get< std::string >() ) {
      p = Format :: eEtc2R8G8B8A8UnormBlock ;
      return;
    }
    if( "eEtc2R8G8B8A8UnormBlock" == j.get< std::string >() ) {
      p = Format :: eEtc2R8G8B8A8UnormBlock ;
      return;
    }
    if( "VK_FORMAT_ETC2_R8G8B8A8_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eEtc2R8G8B8A8UnormBlock ;
      return;
    }
    if( "Etc2R8G8B8A8SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eEtc2R8G8B8A8SrgbBlock ;
      return;
    }
    if( "eEtc2R8G8B8A8SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eEtc2R8G8B8A8SrgbBlock ;
      return;
    }
    if( "VK_FORMAT_ETC2_R8G8B8A8_SRGB_BLOCK" == j.get< std::string >() ) {
      p = Format :: eEtc2R8G8B8A8SrgbBlock ;
      return;
    }
    if( "EacR11UnormBlock" == j.get< std::string >() ) {
      p = Format :: eEacR11UnormBlock ;
      return;
    }
    if( "eEacR11UnormBlock" == j.get< std::string >() ) {
      p = Format :: eEacR11UnormBlock ;
      return;
    }
    if( "VK_FORMAT_EAC_R11_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eEacR11UnormBlock ;
      return;
    }
    if( "EacR11SnormBlock" == j.get< std::string >() ) {
      p = Format :: eEacR11SnormBlock ;
      return;
    }
    if( "eEacR11SnormBlock" == j.get< std::string >() ) {
      p = Format :: eEacR11SnormBlock ;
      return;
    }
    if( "VK_FORMAT_EAC_R11_SNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eEacR11SnormBlock ;
      return;
    }
    if( "EacR11G11UnormBlock" == j.get< std::string >() ) {
      p = Format :: eEacR11G11UnormBlock ;
      return;
    }
    if( "eEacR11G11UnormBlock" == j.get< std::string >() ) {
      p = Format :: eEacR11G11UnormBlock ;
      return;
    }
    if( "VK_FORMAT_EAC_R11G11_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eEacR11G11UnormBlock ;
      return;
    }
    if( "EacR11G11SnormBlock" == j.get< std::string >() ) {
      p = Format :: eEacR11G11SnormBlock ;
      return;
    }
    if( "eEacR11G11SnormBlock" == j.get< std::string >() ) {
      p = Format :: eEacR11G11SnormBlock ;
      return;
    }
    if( "VK_FORMAT_EAC_R11G11_SNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eEacR11G11SnormBlock ;
      return;
    }
    if( "Astc4x4UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc4x4UnormBlock ;
      return;
    }
    if( "eAstc4x4UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc4x4UnormBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_4x4_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc4x4UnormBlock ;
      return;
    }
    if( "Astc4x4SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc4x4SrgbBlock ;
      return;
    }
    if( "eAstc4x4SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc4x4SrgbBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_4x4_SRGB_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc4x4SrgbBlock ;
      return;
    }
    if( "Astc5x4UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc5x4UnormBlock ;
      return;
    }
    if( "eAstc5x4UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc5x4UnormBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_5x4_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc5x4UnormBlock ;
      return;
    }
    if( "Astc5x4SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc5x4SrgbBlock ;
      return;
    }
    if( "eAstc5x4SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc5x4SrgbBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_5x4_SRGB_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc5x4SrgbBlock ;
      return;
    }
    if( "Astc5x5UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc5x5UnormBlock ;
      return;
    }
    if( "eAstc5x5UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc5x5UnormBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_5x5_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc5x5UnormBlock ;
      return;
    }
    if( "Astc5x5SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc5x5SrgbBlock ;
      return;
    }
    if( "eAstc5x5SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc5x5SrgbBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_5x5_SRGB_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc5x5SrgbBlock ;
      return;
    }
    if( "Astc6x5UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc6x5UnormBlock ;
      return;
    }
    if( "eAstc6x5UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc6x5UnormBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_6x5_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc6x5UnormBlock ;
      return;
    }
    if( "Astc6x5SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc6x5SrgbBlock ;
      return;
    }
    if( "eAstc6x5SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc6x5SrgbBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_6x5_SRGB_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc6x5SrgbBlock ;
      return;
    }
    if( "Astc6x6UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc6x6UnormBlock ;
      return;
    }
    if( "eAstc6x6UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc6x6UnormBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_6x6_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc6x6UnormBlock ;
      return;
    }
    if( "Astc6x6SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc6x6SrgbBlock ;
      return;
    }
    if( "eAstc6x6SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc6x6SrgbBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_6x6_SRGB_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc6x6SrgbBlock ;
      return;
    }
    if( "Astc8x5UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc8x5UnormBlock ;
      return;
    }
    if( "eAstc8x5UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc8x5UnormBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_8x5_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc8x5UnormBlock ;
      return;
    }
    if( "Astc8x5SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc8x5SrgbBlock ;
      return;
    }
    if( "eAstc8x5SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc8x5SrgbBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_8x5_SRGB_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc8x5SrgbBlock ;
      return;
    }
    if( "Astc8x6UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc8x6UnormBlock ;
      return;
    }
    if( "eAstc8x6UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc8x6UnormBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_8x6_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc8x6UnormBlock ;
      return;
    }
    if( "Astc8x6SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc8x6SrgbBlock ;
      return;
    }
    if( "eAstc8x6SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc8x6SrgbBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_8x6_SRGB_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc8x6SrgbBlock ;
      return;
    }
    if( "Astc8x8UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc8x8UnormBlock ;
      return;
    }
    if( "eAstc8x8UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc8x8UnormBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_8x8_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc8x8UnormBlock ;
      return;
    }
    if( "Astc8x8SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc8x8SrgbBlock ;
      return;
    }
    if( "eAstc8x8SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc8x8SrgbBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_8x8_SRGB_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc8x8SrgbBlock ;
      return;
    }
    if( "Astc10x5UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc10x5UnormBlock ;
      return;
    }
    if( "eAstc10x5UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc10x5UnormBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_10x5_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc10x5UnormBlock ;
      return;
    }
    if( "Astc10x5SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc10x5SrgbBlock ;
      return;
    }
    if( "eAstc10x5SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc10x5SrgbBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_10x5_SRGB_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc10x5SrgbBlock ;
      return;
    }
    if( "Astc10x6UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc10x6UnormBlock ;
      return;
    }
    if( "eAstc10x6UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc10x6UnormBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_10x6_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc10x6UnormBlock ;
      return;
    }
    if( "Astc10x6SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc10x6SrgbBlock ;
      return;
    }
    if( "eAstc10x6SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc10x6SrgbBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_10x6_SRGB_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc10x6SrgbBlock ;
      return;
    }
    if( "Astc10x8UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc10x8UnormBlock ;
      return;
    }
    if( "eAstc10x8UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc10x8UnormBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_10x8_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc10x8UnormBlock ;
      return;
    }
    if( "Astc10x8SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc10x8SrgbBlock ;
      return;
    }
    if( "eAstc10x8SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc10x8SrgbBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_10x8_SRGB_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc10x8SrgbBlock ;
      return;
    }
    if( "Astc10x10UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc10x10UnormBlock ;
      return;
    }
    if( "eAstc10x10UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc10x10UnormBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_10x10_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc10x10UnormBlock ;
      return;
    }
    if( "Astc10x10SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc10x10SrgbBlock ;
      return;
    }
    if( "eAstc10x10SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc10x10SrgbBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_10x10_SRGB_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc10x10SrgbBlock ;
      return;
    }
    if( "Astc12x10UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc12x10UnormBlock ;
      return;
    }
    if( "eAstc12x10UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc12x10UnormBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_12x10_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc12x10UnormBlock ;
      return;
    }
    if( "Astc12x10SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc12x10SrgbBlock ;
      return;
    }
    if( "eAstc12x10SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc12x10SrgbBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_12x10_SRGB_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc12x10SrgbBlock ;
      return;
    }
    if( "Astc12x12UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc12x12UnormBlock ;
      return;
    }
    if( "eAstc12x12UnormBlock" == j.get< std::string >() ) {
      p = Format :: eAstc12x12UnormBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_12x12_UNORM_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc12x12UnormBlock ;
      return;
    }
    if( "Astc12x12SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc12x12SrgbBlock ;
      return;
    }
    if( "eAstc12x12SrgbBlock" == j.get< std::string >() ) {
      p = Format :: eAstc12x12SrgbBlock ;
      return;
    }
    if( "VK_FORMAT_ASTC_12x12_SRGB_BLOCK" == j.get< std::string >() ) {
      p = Format :: eAstc12x12SrgbBlock ;
      return;
    }
    if( "G8B8G8R8422Unorm" == j.get< std::string >() ) {
      p = Format :: eG8B8G8R8422Unorm ;
      return;
    }
    if( "eG8B8G8R8422Unorm" == j.get< std::string >() ) {
      p = Format :: eG8B8G8R8422Unorm ;
      return;
    }
    if( "VK_FORMAT_G8B8G8R8_422_UNORM" == j.get< std::string >() ) {
      p = Format :: eG8B8G8R8422Unorm ;
      return;
    }
    if( "B8G8R8G8422Unorm" == j.get< std::string >() ) {
      p = Format :: eB8G8R8G8422Unorm ;
      return;
    }
    if( "eB8G8R8G8422Unorm" == j.get< std::string >() ) {
      p = Format :: eB8G8R8G8422Unorm ;
      return;
    }
    if( "VK_FORMAT_B8G8R8G8_422_UNORM" == j.get< std::string >() ) {
      p = Format :: eB8G8R8G8422Unorm ;
      return;
    }
    if( "G8B8R83Plane420Unorm" == j.get< std::string >() ) {
      p = Format :: eG8B8R83Plane420Unorm ;
      return;
    }
    if( "eG8B8R83Plane420Unorm" == j.get< std::string >() ) {
      p = Format :: eG8B8R83Plane420Unorm ;
      return;
    }
    if( "VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM" == j.get< std::string >() ) {
      p = Format :: eG8B8R83Plane420Unorm ;
      return;
    }
    if( "G8B8R82Plane420Unorm" == j.get< std::string >() ) {
      p = Format :: eG8B8R82Plane420Unorm ;
      return;
    }
    if( "eG8B8R82Plane420Unorm" == j.get< std::string >() ) {
      p = Format :: eG8B8R82Plane420Unorm ;
      return;
    }
    if( "VK_FORMAT_G8_B8R8_2PLANE_420_UNORM" == j.get< std::string >() ) {
      p = Format :: eG8B8R82Plane420Unorm ;
      return;
    }
    if( "G8B8R83Plane422Unorm" == j.get< std::string >() ) {
      p = Format :: eG8B8R83Plane422Unorm ;
      return;
    }
    if( "eG8B8R83Plane422Unorm" == j.get< std::string >() ) {
      p = Format :: eG8B8R83Plane422Unorm ;
      return;
    }
    if( "VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM" == j.get< std::string >() ) {
      p = Format :: eG8B8R83Plane422Unorm ;
      return;
    }
    if( "G8B8R82Plane422Unorm" == j.get< std::string >() ) {
      p = Format :: eG8B8R82Plane422Unorm ;
      return;
    }
    if( "eG8B8R82Plane422Unorm" == j.get< std::string >() ) {
      p = Format :: eG8B8R82Plane422Unorm ;
      return;
    }
    if( "VK_FORMAT_G8_B8R8_2PLANE_422_UNORM" == j.get< std::string >() ) {
      p = Format :: eG8B8R82Plane422Unorm ;
      return;
    }
    if( "G8B8R83Plane444Unorm" == j.get< std::string >() ) {
      p = Format :: eG8B8R83Plane444Unorm ;
      return;
    }
    if( "eG8B8R83Plane444Unorm" == j.get< std::string >() ) {
      p = Format :: eG8B8R83Plane444Unorm ;
      return;
    }
    if( "VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM" == j.get< std::string >() ) {
      p = Format :: eG8B8R83Plane444Unorm ;
      return;
    }
    if( "R10X6UnormPack16" == j.get< std::string >() ) {
      p = Format :: eR10X6UnormPack16 ;
      return;
    }
    if( "eR10X6UnormPack16" == j.get< std::string >() ) {
      p = Format :: eR10X6UnormPack16 ;
      return;
    }
    if( "VK_FORMAT_R10X6_UNORM_PACK16" == j.get< std::string >() ) {
      p = Format :: eR10X6UnormPack16 ;
      return;
    }
    if( "R10X6G10X6Unorm2Pack16" == j.get< std::string >() ) {
      p = Format :: eR10X6G10X6Unorm2Pack16 ;
      return;
    }
    if( "eR10X6G10X6Unorm2Pack16" == j.get< std::string >() ) {
      p = Format :: eR10X6G10X6Unorm2Pack16 ;
      return;
    }
    if( "VK_FORMAT_R10X6G10X6_UNORM_2PACK16" == j.get< std::string >() ) {
      p = Format :: eR10X6G10X6Unorm2Pack16 ;
      return;
    }
    if( "R10X6G10X6B10X6A10X6Unorm4Pack16" == j.get< std::string >() ) {
      p = Format :: eR10X6G10X6B10X6A10X6Unorm4Pack16 ;
      return;
    }
    if( "eR10X6G10X6B10X6A10X6Unorm4Pack16" == j.get< std::string >() ) {
      p = Format :: eR10X6G10X6B10X6A10X6Unorm4Pack16 ;
      return;
    }
    if( "VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16" == j.get< std::string >() ) {
      p = Format :: eR10X6G10X6B10X6A10X6Unorm4Pack16 ;
      return;
    }
    if( "G10X6B10X6G10X6R10X6422Unorm4Pack16" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6G10X6R10X6422Unorm4Pack16 ;
      return;
    }
    if( "eG10X6B10X6G10X6R10X6422Unorm4Pack16" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6G10X6R10X6422Unorm4Pack16 ;
      return;
    }
    if( "VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6G10X6R10X6422Unorm4Pack16 ;
      return;
    }
    if( "B10X6G10X6R10X6G10X6422Unorm4Pack16" == j.get< std::string >() ) {
      p = Format :: eB10X6G10X6R10X6G10X6422Unorm4Pack16 ;
      return;
    }
    if( "eB10X6G10X6R10X6G10X6422Unorm4Pack16" == j.get< std::string >() ) {
      p = Format :: eB10X6G10X6R10X6G10X6422Unorm4Pack16 ;
      return;
    }
    if( "VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16" == j.get< std::string >() ) {
      p = Format :: eB10X6G10X6R10X6G10X6422Unorm4Pack16 ;
      return;
    }
    if( "G10X6B10X6R10X63Plane420Unorm3Pack16" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X63Plane420Unorm3Pack16 ;
      return;
    }
    if( "eG10X6B10X6R10X63Plane420Unorm3Pack16" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X63Plane420Unorm3Pack16 ;
      return;
    }
    if( "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X63Plane420Unorm3Pack16 ;
      return;
    }
    if( "G10X6B10X6R10X62Plane420Unorm3Pack16" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X62Plane420Unorm3Pack16 ;
      return;
    }
    if( "eG10X6B10X6R10X62Plane420Unorm3Pack16" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X62Plane420Unorm3Pack16 ;
      return;
    }
    if( "VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X62Plane420Unorm3Pack16 ;
      return;
    }
    if( "G10X6B10X6R10X63Plane422Unorm3Pack16" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X63Plane422Unorm3Pack16 ;
      return;
    }
    if( "eG10X6B10X6R10X63Plane422Unorm3Pack16" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X63Plane422Unorm3Pack16 ;
      return;
    }
    if( "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X63Plane422Unorm3Pack16 ;
      return;
    }
    if( "G10X6B10X6R10X62Plane422Unorm3Pack16" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X62Plane422Unorm3Pack16 ;
      return;
    }
    if( "eG10X6B10X6R10X62Plane422Unorm3Pack16" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X62Plane422Unorm3Pack16 ;
      return;
    }
    if( "VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X62Plane422Unorm3Pack16 ;
      return;
    }
    if( "G10X6B10X6R10X63Plane444Unorm3Pack16" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X63Plane444Unorm3Pack16 ;
      return;
    }
    if( "eG10X6B10X6R10X63Plane444Unorm3Pack16" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X63Plane444Unorm3Pack16 ;
      return;
    }
    if( "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X63Plane444Unorm3Pack16 ;
      return;
    }
    if( "R12X4UnormPack16" == j.get< std::string >() ) {
      p = Format :: eR12X4UnormPack16 ;
      return;
    }
    if( "eR12X4UnormPack16" == j.get< std::string >() ) {
      p = Format :: eR12X4UnormPack16 ;
      return;
    }
    if( "VK_FORMAT_R12X4_UNORM_PACK16" == j.get< std::string >() ) {
      p = Format :: eR12X4UnormPack16 ;
      return;
    }
    if( "R12X4G12X4Unorm2Pack16" == j.get< std::string >() ) {
      p = Format :: eR12X4G12X4Unorm2Pack16 ;
      return;
    }
    if( "eR12X4G12X4Unorm2Pack16" == j.get< std::string >() ) {
      p = Format :: eR12X4G12X4Unorm2Pack16 ;
      return;
    }
    if( "VK_FORMAT_R12X4G12X4_UNORM_2PACK16" == j.get< std::string >() ) {
      p = Format :: eR12X4G12X4Unorm2Pack16 ;
      return;
    }
    if( "R12X4G12X4B12X4A12X4Unorm4Pack16" == j.get< std::string >() ) {
      p = Format :: eR12X4G12X4B12X4A12X4Unorm4Pack16 ;
      return;
    }
    if( "eR12X4G12X4B12X4A12X4Unorm4Pack16" == j.get< std::string >() ) {
      p = Format :: eR12X4G12X4B12X4A12X4Unorm4Pack16 ;
      return;
    }
    if( "VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16" == j.get< std::string >() ) {
      p = Format :: eR12X4G12X4B12X4A12X4Unorm4Pack16 ;
      return;
    }
    if( "G12X4B12X4G12X4R12X4422Unorm4Pack16" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4G12X4R12X4422Unorm4Pack16 ;
      return;
    }
    if( "eG12X4B12X4G12X4R12X4422Unorm4Pack16" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4G12X4R12X4422Unorm4Pack16 ;
      return;
    }
    if( "VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4G12X4R12X4422Unorm4Pack16 ;
      return;
    }
    if( "B12X4G12X4R12X4G12X4422Unorm4Pack16" == j.get< std::string >() ) {
      p = Format :: eB12X4G12X4R12X4G12X4422Unorm4Pack16 ;
      return;
    }
    if( "eB12X4G12X4R12X4G12X4422Unorm4Pack16" == j.get< std::string >() ) {
      p = Format :: eB12X4G12X4R12X4G12X4422Unorm4Pack16 ;
      return;
    }
    if( "VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16" == j.get< std::string >() ) {
      p = Format :: eB12X4G12X4R12X4G12X4422Unorm4Pack16 ;
      return;
    }
    if( "G12X4B12X4R12X43Plane420Unorm3Pack16" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X43Plane420Unorm3Pack16 ;
      return;
    }
    if( "eG12X4B12X4R12X43Plane420Unorm3Pack16" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X43Plane420Unorm3Pack16 ;
      return;
    }
    if( "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X43Plane420Unorm3Pack16 ;
      return;
    }
    if( "G12X4B12X4R12X42Plane420Unorm3Pack16" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X42Plane420Unorm3Pack16 ;
      return;
    }
    if( "eG12X4B12X4R12X42Plane420Unorm3Pack16" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X42Plane420Unorm3Pack16 ;
      return;
    }
    if( "VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X42Plane420Unorm3Pack16 ;
      return;
    }
    if( "G12X4B12X4R12X43Plane422Unorm3Pack16" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X43Plane422Unorm3Pack16 ;
      return;
    }
    if( "eG12X4B12X4R12X43Plane422Unorm3Pack16" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X43Plane422Unorm3Pack16 ;
      return;
    }
    if( "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X43Plane422Unorm3Pack16 ;
      return;
    }
    if( "G12X4B12X4R12X42Plane422Unorm3Pack16" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X42Plane422Unorm3Pack16 ;
      return;
    }
    if( "eG12X4B12X4R12X42Plane422Unorm3Pack16" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X42Plane422Unorm3Pack16 ;
      return;
    }
    if( "VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X42Plane422Unorm3Pack16 ;
      return;
    }
    if( "G12X4B12X4R12X43Plane444Unorm3Pack16" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X43Plane444Unorm3Pack16 ;
      return;
    }
    if( "eG12X4B12X4R12X43Plane444Unorm3Pack16" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X43Plane444Unorm3Pack16 ;
      return;
    }
    if( "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X43Plane444Unorm3Pack16 ;
      return;
    }
    if( "G16B16G16R16422Unorm" == j.get< std::string >() ) {
      p = Format :: eG16B16G16R16422Unorm ;
      return;
    }
    if( "eG16B16G16R16422Unorm" == j.get< std::string >() ) {
      p = Format :: eG16B16G16R16422Unorm ;
      return;
    }
    if( "VK_FORMAT_G16B16G16R16_422_UNORM" == j.get< std::string >() ) {
      p = Format :: eG16B16G16R16422Unorm ;
      return;
    }
    if( "B16G16R16G16422Unorm" == j.get< std::string >() ) {
      p = Format :: eB16G16R16G16422Unorm ;
      return;
    }
    if( "eB16G16R16G16422Unorm" == j.get< std::string >() ) {
      p = Format :: eB16G16R16G16422Unorm ;
      return;
    }
    if( "VK_FORMAT_B16G16R16G16_422_UNORM" == j.get< std::string >() ) {
      p = Format :: eB16G16R16G16422Unorm ;
      return;
    }
    if( "G16B16R163Plane420Unorm" == j.get< std::string >() ) {
      p = Format :: eG16B16R163Plane420Unorm ;
      return;
    }
    if( "eG16B16R163Plane420Unorm" == j.get< std::string >() ) {
      p = Format :: eG16B16R163Plane420Unorm ;
      return;
    }
    if( "VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM" == j.get< std::string >() ) {
      p = Format :: eG16B16R163Plane420Unorm ;
      return;
    }
    if( "G16B16R162Plane420Unorm" == j.get< std::string >() ) {
      p = Format :: eG16B16R162Plane420Unorm ;
      return;
    }
    if( "eG16B16R162Plane420Unorm" == j.get< std::string >() ) {
      p = Format :: eG16B16R162Plane420Unorm ;
      return;
    }
    if( "VK_FORMAT_G16_B16R16_2PLANE_420_UNORM" == j.get< std::string >() ) {
      p = Format :: eG16B16R162Plane420Unorm ;
      return;
    }
    if( "G16B16R163Plane422Unorm" == j.get< std::string >() ) {
      p = Format :: eG16B16R163Plane422Unorm ;
      return;
    }
    if( "eG16B16R163Plane422Unorm" == j.get< std::string >() ) {
      p = Format :: eG16B16R163Plane422Unorm ;
      return;
    }
    if( "VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM" == j.get< std::string >() ) {
      p = Format :: eG16B16R163Plane422Unorm ;
      return;
    }
    if( "G16B16R162Plane422Unorm" == j.get< std::string >() ) {
      p = Format :: eG16B16R162Plane422Unorm ;
      return;
    }
    if( "eG16B16R162Plane422Unorm" == j.get< std::string >() ) {
      p = Format :: eG16B16R162Plane422Unorm ;
      return;
    }
    if( "VK_FORMAT_G16_B16R16_2PLANE_422_UNORM" == j.get< std::string >() ) {
      p = Format :: eG16B16R162Plane422Unorm ;
      return;
    }
    if( "G16B16R163Plane444Unorm" == j.get< std::string >() ) {
      p = Format :: eG16B16R163Plane444Unorm ;
      return;
    }
    if( "eG16B16R163Plane444Unorm" == j.get< std::string >() ) {
      p = Format :: eG16B16R163Plane444Unorm ;
      return;
    }
    if( "VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM" == j.get< std::string >() ) {
      p = Format :: eG16B16R163Plane444Unorm ;
      return;
    }
    if( "Pvrtc12BppUnormBlockIMG" == j.get< std::string >() ) {
      p = Format :: ePvrtc12BppUnormBlockIMG ;
      return;
    }
    if( "ePvrtc12BppUnormBlockIMG" == j.get< std::string >() ) {
      p = Format :: ePvrtc12BppUnormBlockIMG ;
      return;
    }
    if( "VK_FORMAT_PVRTC1_2BPP_UNORM_BLOCK_IMG" == j.get< std::string >() ) {
      p = Format :: ePvrtc12BppUnormBlockIMG ;
      return;
    }
    if( "Pvrtc14BppUnormBlockIMG" == j.get< std::string >() ) {
      p = Format :: ePvrtc14BppUnormBlockIMG ;
      return;
    }
    if( "ePvrtc14BppUnormBlockIMG" == j.get< std::string >() ) {
      p = Format :: ePvrtc14BppUnormBlockIMG ;
      return;
    }
    if( "VK_FORMAT_PVRTC1_4BPP_UNORM_BLOCK_IMG" == j.get< std::string >() ) {
      p = Format :: ePvrtc14BppUnormBlockIMG ;
      return;
    }
    if( "Pvrtc22BppUnormBlockIMG" == j.get< std::string >() ) {
      p = Format :: ePvrtc22BppUnormBlockIMG ;
      return;
    }
    if( "ePvrtc22BppUnormBlockIMG" == j.get< std::string >() ) {
      p = Format :: ePvrtc22BppUnormBlockIMG ;
      return;
    }
    if( "VK_FORMAT_PVRTC2_2BPP_UNORM_BLOCK_IMG" == j.get< std::string >() ) {
      p = Format :: ePvrtc22BppUnormBlockIMG ;
      return;
    }
    if( "Pvrtc24BppUnormBlockIMG" == j.get< std::string >() ) {
      p = Format :: ePvrtc24BppUnormBlockIMG ;
      return;
    }
    if( "ePvrtc24BppUnormBlockIMG" == j.get< std::string >() ) {
      p = Format :: ePvrtc24BppUnormBlockIMG ;
      return;
    }
    if( "VK_FORMAT_PVRTC2_4BPP_UNORM_BLOCK_IMG" == j.get< std::string >() ) {
      p = Format :: ePvrtc24BppUnormBlockIMG ;
      return;
    }
    if( "Pvrtc12BppSrgbBlockIMG" == j.get< std::string >() ) {
      p = Format :: ePvrtc12BppSrgbBlockIMG ;
      return;
    }
    if( "ePvrtc12BppSrgbBlockIMG" == j.get< std::string >() ) {
      p = Format :: ePvrtc12BppSrgbBlockIMG ;
      return;
    }
    if( "VK_FORMAT_PVRTC1_2BPP_SRGB_BLOCK_IMG" == j.get< std::string >() ) {
      p = Format :: ePvrtc12BppSrgbBlockIMG ;
      return;
    }
    if( "Pvrtc14BppSrgbBlockIMG" == j.get< std::string >() ) {
      p = Format :: ePvrtc14BppSrgbBlockIMG ;
      return;
    }
    if( "ePvrtc14BppSrgbBlockIMG" == j.get< std::string >() ) {
      p = Format :: ePvrtc14BppSrgbBlockIMG ;
      return;
    }
    if( "VK_FORMAT_PVRTC1_4BPP_SRGB_BLOCK_IMG" == j.get< std::string >() ) {
      p = Format :: ePvrtc14BppSrgbBlockIMG ;
      return;
    }
    if( "Pvrtc22BppSrgbBlockIMG" == j.get< std::string >() ) {
      p = Format :: ePvrtc22BppSrgbBlockIMG ;
      return;
    }
    if( "ePvrtc22BppSrgbBlockIMG" == j.get< std::string >() ) {
      p = Format :: ePvrtc22BppSrgbBlockIMG ;
      return;
    }
    if( "VK_FORMAT_PVRTC2_2BPP_SRGB_BLOCK_IMG" == j.get< std::string >() ) {
      p = Format :: ePvrtc22BppSrgbBlockIMG ;
      return;
    }
    if( "Pvrtc24BppSrgbBlockIMG" == j.get< std::string >() ) {
      p = Format :: ePvrtc24BppSrgbBlockIMG ;
      return;
    }
    if( "ePvrtc24BppSrgbBlockIMG" == j.get< std::string >() ) {
      p = Format :: ePvrtc24BppSrgbBlockIMG ;
      return;
    }
    if( "VK_FORMAT_PVRTC2_4BPP_SRGB_BLOCK_IMG" == j.get< std::string >() ) {
      p = Format :: ePvrtc24BppSrgbBlockIMG ;
      return;
    }
    if( "Astc4x4SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc4x4SfloatBlockEXT ;
      return;
    }
    if( "eAstc4x4SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc4x4SfloatBlockEXT ;
      return;
    }
    if( "VK_FORMAT_ASTC_4x4_SFLOAT_BLOCK_EXT" == j.get< std::string >() ) {
      p = Format :: eAstc4x4SfloatBlockEXT ;
      return;
    }
    if( "Astc5x4SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc5x4SfloatBlockEXT ;
      return;
    }
    if( "eAstc5x4SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc5x4SfloatBlockEXT ;
      return;
    }
    if( "VK_FORMAT_ASTC_5x4_SFLOAT_BLOCK_EXT" == j.get< std::string >() ) {
      p = Format :: eAstc5x4SfloatBlockEXT ;
      return;
    }
    if( "Astc5x5SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc5x5SfloatBlockEXT ;
      return;
    }
    if( "eAstc5x5SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc5x5SfloatBlockEXT ;
      return;
    }
    if( "VK_FORMAT_ASTC_5x5_SFLOAT_BLOCK_EXT" == j.get< std::string >() ) {
      p = Format :: eAstc5x5SfloatBlockEXT ;
      return;
    }
    if( "Astc6x5SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc6x5SfloatBlockEXT ;
      return;
    }
    if( "eAstc6x5SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc6x5SfloatBlockEXT ;
      return;
    }
    if( "VK_FORMAT_ASTC_6x5_SFLOAT_BLOCK_EXT" == j.get< std::string >() ) {
      p = Format :: eAstc6x5SfloatBlockEXT ;
      return;
    }
    if( "Astc6x6SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc6x6SfloatBlockEXT ;
      return;
    }
    if( "eAstc6x6SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc6x6SfloatBlockEXT ;
      return;
    }
    if( "VK_FORMAT_ASTC_6x6_SFLOAT_BLOCK_EXT" == j.get< std::string >() ) {
      p = Format :: eAstc6x6SfloatBlockEXT ;
      return;
    }
    if( "Astc8x5SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc8x5SfloatBlockEXT ;
      return;
    }
    if( "eAstc8x5SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc8x5SfloatBlockEXT ;
      return;
    }
    if( "VK_FORMAT_ASTC_8x5_SFLOAT_BLOCK_EXT" == j.get< std::string >() ) {
      p = Format :: eAstc8x5SfloatBlockEXT ;
      return;
    }
    if( "Astc8x6SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc8x6SfloatBlockEXT ;
      return;
    }
    if( "eAstc8x6SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc8x6SfloatBlockEXT ;
      return;
    }
    if( "VK_FORMAT_ASTC_8x6_SFLOAT_BLOCK_EXT" == j.get< std::string >() ) {
      p = Format :: eAstc8x6SfloatBlockEXT ;
      return;
    }
    if( "Astc8x8SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc8x8SfloatBlockEXT ;
      return;
    }
    if( "eAstc8x8SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc8x8SfloatBlockEXT ;
      return;
    }
    if( "VK_FORMAT_ASTC_8x8_SFLOAT_BLOCK_EXT" == j.get< std::string >() ) {
      p = Format :: eAstc8x8SfloatBlockEXT ;
      return;
    }
    if( "Astc10x5SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc10x5SfloatBlockEXT ;
      return;
    }
    if( "eAstc10x5SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc10x5SfloatBlockEXT ;
      return;
    }
    if( "VK_FORMAT_ASTC_10x5_SFLOAT_BLOCK_EXT" == j.get< std::string >() ) {
      p = Format :: eAstc10x5SfloatBlockEXT ;
      return;
    }
    if( "Astc10x6SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc10x6SfloatBlockEXT ;
      return;
    }
    if( "eAstc10x6SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc10x6SfloatBlockEXT ;
      return;
    }
    if( "VK_FORMAT_ASTC_10x6_SFLOAT_BLOCK_EXT" == j.get< std::string >() ) {
      p = Format :: eAstc10x6SfloatBlockEXT ;
      return;
    }
    if( "Astc10x8SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc10x8SfloatBlockEXT ;
      return;
    }
    if( "eAstc10x8SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc10x8SfloatBlockEXT ;
      return;
    }
    if( "VK_FORMAT_ASTC_10x8_SFLOAT_BLOCK_EXT" == j.get< std::string >() ) {
      p = Format :: eAstc10x8SfloatBlockEXT ;
      return;
    }
    if( "Astc10x10SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc10x10SfloatBlockEXT ;
      return;
    }
    if( "eAstc10x10SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc10x10SfloatBlockEXT ;
      return;
    }
    if( "VK_FORMAT_ASTC_10x10_SFLOAT_BLOCK_EXT" == j.get< std::string >() ) {
      p = Format :: eAstc10x10SfloatBlockEXT ;
      return;
    }
    if( "Astc12x10SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc12x10SfloatBlockEXT ;
      return;
    }
    if( "eAstc12x10SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc12x10SfloatBlockEXT ;
      return;
    }
    if( "VK_FORMAT_ASTC_12x10_SFLOAT_BLOCK_EXT" == j.get< std::string >() ) {
      p = Format :: eAstc12x10SfloatBlockEXT ;
      return;
    }
    if( "Astc12x12SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc12x12SfloatBlockEXT ;
      return;
    }
    if( "eAstc12x12SfloatBlockEXT" == j.get< std::string >() ) {
      p = Format :: eAstc12x12SfloatBlockEXT ;
      return;
    }
    if( "VK_FORMAT_ASTC_12x12_SFLOAT_BLOCK_EXT" == j.get< std::string >() ) {
      p = Format :: eAstc12x12SfloatBlockEXT ;
      return;
    }
    if( "G8B8R82Plane444UnormEXT" == j.get< std::string >() ) {
      p = Format :: eG8B8R82Plane444UnormEXT ;
      return;
    }
    if( "eG8B8R82Plane444UnormEXT" == j.get< std::string >() ) {
      p = Format :: eG8B8R82Plane444UnormEXT ;
      return;
    }
    if( "VK_FORMAT_G8_B8R8_2PLANE_444_UNORM_EXT" == j.get< std::string >() ) {
      p = Format :: eG8B8R82Plane444UnormEXT ;
      return;
    }
    if( "G10X6B10X6R10X62Plane444Unorm3Pack16EXT" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X62Plane444Unorm3Pack16EXT ;
      return;
    }
    if( "eG10X6B10X6R10X62Plane444Unorm3Pack16EXT" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X62Plane444Unorm3Pack16EXT ;
      return;
    }
    if( "VK_FORMAT_G10X6_B10X6R10X6_2PLANE_444_UNORM_3PACK16_EXT" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X62Plane444Unorm3Pack16EXT ;
      return;
    }
    if( "G12X4B12X4R12X42Plane444Unorm3Pack16EXT" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X42Plane444Unorm3Pack16EXT ;
      return;
    }
    if( "eG12X4B12X4R12X42Plane444Unorm3Pack16EXT" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X42Plane444Unorm3Pack16EXT ;
      return;
    }
    if( "VK_FORMAT_G12X4_B12X4R12X4_2PLANE_444_UNORM_3PACK16_EXT" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X42Plane444Unorm3Pack16EXT ;
      return;
    }
    if( "G16B16R162Plane444UnormEXT" == j.get< std::string >() ) {
      p = Format :: eG16B16R162Plane444UnormEXT ;
      return;
    }
    if( "eG16B16R162Plane444UnormEXT" == j.get< std::string >() ) {
      p = Format :: eG16B16R162Plane444UnormEXT ;
      return;
    }
    if( "VK_FORMAT_G16_B16R16_2PLANE_444_UNORM_EXT" == j.get< std::string >() ) {
      p = Format :: eG16B16R162Plane444UnormEXT ;
      return;
    }
    if( "A4R4G4B4UnormPack16EXT" == j.get< std::string >() ) {
      p = Format :: eA4R4G4B4UnormPack16EXT ;
      return;
    }
    if( "eA4R4G4B4UnormPack16EXT" == j.get< std::string >() ) {
      p = Format :: eA4R4G4B4UnormPack16EXT ;
      return;
    }
    if( "VK_FORMAT_A4R4G4B4_UNORM_PACK16_EXT" == j.get< std::string >() ) {
      p = Format :: eA4R4G4B4UnormPack16EXT ;
      return;
    }
    if( "A4B4G4R4UnormPack16EXT" == j.get< std::string >() ) {
      p = Format :: eA4B4G4R4UnormPack16EXT ;
      return;
    }
    if( "eA4B4G4R4UnormPack16EXT" == j.get< std::string >() ) {
      p = Format :: eA4B4G4R4UnormPack16EXT ;
      return;
    }
    if( "VK_FORMAT_A4B4G4R4_UNORM_PACK16_EXT" == j.get< std::string >() ) {
      p = Format :: eA4B4G4R4UnormPack16EXT ;
      return;
    }
    if( "B10X6G10X6R10X6G10X6422Unorm4Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eB10X6G10X6R10X6G10X6422Unorm4Pack16KHR ;
      return;
    }
    if( "eB10X6G10X6R10X6G10X6422Unorm4Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eB10X6G10X6R10X6G10X6422Unorm4Pack16KHR ;
      return;
    }
    if( "VK_FORMAT_B10X6G10X6R10X6G10X6_422_UNORM_4PACK16_KHR" == j.get< std::string >() ) {
      p = Format :: eB10X6G10X6R10X6G10X6422Unorm4Pack16KHR ;
      return;
    }
    if( "B12X4G12X4R12X4G12X4422Unorm4Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eB12X4G12X4R12X4G12X4422Unorm4Pack16KHR ;
      return;
    }
    if( "eB12X4G12X4R12X4G12X4422Unorm4Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eB12X4G12X4R12X4G12X4422Unorm4Pack16KHR ;
      return;
    }
    if( "VK_FORMAT_B12X4G12X4R12X4G12X4_422_UNORM_4PACK16_KHR" == j.get< std::string >() ) {
      p = Format :: eB12X4G12X4R12X4G12X4422Unorm4Pack16KHR ;
      return;
    }
    if( "B16G16R16G16422UnormKHR" == j.get< std::string >() ) {
      p = Format :: eB16G16R16G16422UnormKHR ;
      return;
    }
    if( "eB16G16R16G16422UnormKHR" == j.get< std::string >() ) {
      p = Format :: eB16G16R16G16422UnormKHR ;
      return;
    }
    if( "VK_FORMAT_B16G16R16G16_422_UNORM_KHR" == j.get< std::string >() ) {
      p = Format :: eB16G16R16G16422UnormKHR ;
      return;
    }
    if( "B8G8R8G8422UnormKHR" == j.get< std::string >() ) {
      p = Format :: eB8G8R8G8422UnormKHR ;
      return;
    }
    if( "eB8G8R8G8422UnormKHR" == j.get< std::string >() ) {
      p = Format :: eB8G8R8G8422UnormKHR ;
      return;
    }
    if( "VK_FORMAT_B8G8R8G8_422_UNORM_KHR" == j.get< std::string >() ) {
      p = Format :: eB8G8R8G8422UnormKHR ;
      return;
    }
    if( "G10X6B10X6G10X6R10X6422Unorm4Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6G10X6R10X6422Unorm4Pack16KHR ;
      return;
    }
    if( "eG10X6B10X6G10X6R10X6422Unorm4Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6G10X6R10X6422Unorm4Pack16KHR ;
      return;
    }
    if( "VK_FORMAT_G10X6B10X6G10X6R10X6_422_UNORM_4PACK16_KHR" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6G10X6R10X6422Unorm4Pack16KHR ;
      return;
    }
    if( "G10X6B10X6R10X62Plane420Unorm3Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X62Plane420Unorm3Pack16KHR ;
      return;
    }
    if( "eG10X6B10X6R10X62Plane420Unorm3Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X62Plane420Unorm3Pack16KHR ;
      return;
    }
    if( "VK_FORMAT_G10X6_B10X6R10X6_2PLANE_420_UNORM_3PACK16_KHR" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X62Plane420Unorm3Pack16KHR ;
      return;
    }
    if( "G10X6B10X6R10X62Plane422Unorm3Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X62Plane422Unorm3Pack16KHR ;
      return;
    }
    if( "eG10X6B10X6R10X62Plane422Unorm3Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X62Plane422Unorm3Pack16KHR ;
      return;
    }
    if( "VK_FORMAT_G10X6_B10X6R10X6_2PLANE_422_UNORM_3PACK16_KHR" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X62Plane422Unorm3Pack16KHR ;
      return;
    }
    if( "G10X6B10X6R10X63Plane420Unorm3Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X63Plane420Unorm3Pack16KHR ;
      return;
    }
    if( "eG10X6B10X6R10X63Plane420Unorm3Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X63Plane420Unorm3Pack16KHR ;
      return;
    }
    if( "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_420_UNORM_3PACK16_KHR" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X63Plane420Unorm3Pack16KHR ;
      return;
    }
    if( "G10X6B10X6R10X63Plane422Unorm3Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X63Plane422Unorm3Pack16KHR ;
      return;
    }
    if( "eG10X6B10X6R10X63Plane422Unorm3Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X63Plane422Unorm3Pack16KHR ;
      return;
    }
    if( "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_422_UNORM_3PACK16_KHR" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X63Plane422Unorm3Pack16KHR ;
      return;
    }
    if( "G10X6B10X6R10X63Plane444Unorm3Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X63Plane444Unorm3Pack16KHR ;
      return;
    }
    if( "eG10X6B10X6R10X63Plane444Unorm3Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X63Plane444Unorm3Pack16KHR ;
      return;
    }
    if( "VK_FORMAT_G10X6_B10X6_R10X6_3PLANE_444_UNORM_3PACK16_KHR" == j.get< std::string >() ) {
      p = Format :: eG10X6B10X6R10X63Plane444Unorm3Pack16KHR ;
      return;
    }
    if( "G12X4B12X4G12X4R12X4422Unorm4Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4G12X4R12X4422Unorm4Pack16KHR ;
      return;
    }
    if( "eG12X4B12X4G12X4R12X4422Unorm4Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4G12X4R12X4422Unorm4Pack16KHR ;
      return;
    }
    if( "VK_FORMAT_G12X4B12X4G12X4R12X4_422_UNORM_4PACK16_KHR" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4G12X4R12X4422Unorm4Pack16KHR ;
      return;
    }
    if( "G12X4B12X4R12X42Plane420Unorm3Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X42Plane420Unorm3Pack16KHR ;
      return;
    }
    if( "eG12X4B12X4R12X42Plane420Unorm3Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X42Plane420Unorm3Pack16KHR ;
      return;
    }
    if( "VK_FORMAT_G12X4_B12X4R12X4_2PLANE_420_UNORM_3PACK16_KHR" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X42Plane420Unorm3Pack16KHR ;
      return;
    }
    if( "G12X4B12X4R12X42Plane422Unorm3Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X42Plane422Unorm3Pack16KHR ;
      return;
    }
    if( "eG12X4B12X4R12X42Plane422Unorm3Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X42Plane422Unorm3Pack16KHR ;
      return;
    }
    if( "VK_FORMAT_G12X4_B12X4R12X4_2PLANE_422_UNORM_3PACK16_KHR" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X42Plane422Unorm3Pack16KHR ;
      return;
    }
    if( "G12X4B12X4R12X43Plane420Unorm3Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X43Plane420Unorm3Pack16KHR ;
      return;
    }
    if( "eG12X4B12X4R12X43Plane420Unorm3Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X43Plane420Unorm3Pack16KHR ;
      return;
    }
    if( "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_420_UNORM_3PACK16_KHR" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X43Plane420Unorm3Pack16KHR ;
      return;
    }
    if( "G12X4B12X4R12X43Plane422Unorm3Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X43Plane422Unorm3Pack16KHR ;
      return;
    }
    if( "eG12X4B12X4R12X43Plane422Unorm3Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X43Plane422Unorm3Pack16KHR ;
      return;
    }
    if( "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_422_UNORM_3PACK16_KHR" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X43Plane422Unorm3Pack16KHR ;
      return;
    }
    if( "G12X4B12X4R12X43Plane444Unorm3Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X43Plane444Unorm3Pack16KHR ;
      return;
    }
    if( "eG12X4B12X4R12X43Plane444Unorm3Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X43Plane444Unorm3Pack16KHR ;
      return;
    }
    if( "VK_FORMAT_G12X4_B12X4_R12X4_3PLANE_444_UNORM_3PACK16_KHR" == j.get< std::string >() ) {
      p = Format :: eG12X4B12X4R12X43Plane444Unorm3Pack16KHR ;
      return;
    }
    if( "G16B16G16R16422UnormKHR" == j.get< std::string >() ) {
      p = Format :: eG16B16G16R16422UnormKHR ;
      return;
    }
    if( "eG16B16G16R16422UnormKHR" == j.get< std::string >() ) {
      p = Format :: eG16B16G16R16422UnormKHR ;
      return;
    }
    if( "VK_FORMAT_G16B16G16R16_422_UNORM_KHR" == j.get< std::string >() ) {
      p = Format :: eG16B16G16R16422UnormKHR ;
      return;
    }
    if( "G16B16R162Plane420UnormKHR" == j.get< std::string >() ) {
      p = Format :: eG16B16R162Plane420UnormKHR ;
      return;
    }
    if( "eG16B16R162Plane420UnormKHR" == j.get< std::string >() ) {
      p = Format :: eG16B16R162Plane420UnormKHR ;
      return;
    }
    if( "VK_FORMAT_G16_B16R16_2PLANE_420_UNORM_KHR" == j.get< std::string >() ) {
      p = Format :: eG16B16R162Plane420UnormKHR ;
      return;
    }
    if( "G16B16R162Plane422UnormKHR" == j.get< std::string >() ) {
      p = Format :: eG16B16R162Plane422UnormKHR ;
      return;
    }
    if( "eG16B16R162Plane422UnormKHR" == j.get< std::string >() ) {
      p = Format :: eG16B16R162Plane422UnormKHR ;
      return;
    }
    if( "VK_FORMAT_G16_B16R16_2PLANE_422_UNORM_KHR" == j.get< std::string >() ) {
      p = Format :: eG16B16R162Plane422UnormKHR ;
      return;
    }
    if( "G16B16R163Plane420UnormKHR" == j.get< std::string >() ) {
      p = Format :: eG16B16R163Plane420UnormKHR ;
      return;
    }
    if( "eG16B16R163Plane420UnormKHR" == j.get< std::string >() ) {
      p = Format :: eG16B16R163Plane420UnormKHR ;
      return;
    }
    if( "VK_FORMAT_G16_B16_R16_3PLANE_420_UNORM_KHR" == j.get< std::string >() ) {
      p = Format :: eG16B16R163Plane420UnormKHR ;
      return;
    }
    if( "G16B16R163Plane422UnormKHR" == j.get< std::string >() ) {
      p = Format :: eG16B16R163Plane422UnormKHR ;
      return;
    }
    if( "eG16B16R163Plane422UnormKHR" == j.get< std::string >() ) {
      p = Format :: eG16B16R163Plane422UnormKHR ;
      return;
    }
    if( "VK_FORMAT_G16_B16_R16_3PLANE_422_UNORM_KHR" == j.get< std::string >() ) {
      p = Format :: eG16B16R163Plane422UnormKHR ;
      return;
    }
    if( "G16B16R163Plane444UnormKHR" == j.get< std::string >() ) {
      p = Format :: eG16B16R163Plane444UnormKHR ;
      return;
    }
    if( "eG16B16R163Plane444UnormKHR" == j.get< std::string >() ) {
      p = Format :: eG16B16R163Plane444UnormKHR ;
      return;
    }
    if( "VK_FORMAT_G16_B16_R16_3PLANE_444_UNORM_KHR" == j.get< std::string >() ) {
      p = Format :: eG16B16R163Plane444UnormKHR ;
      return;
    }
    if( "G8B8G8R8422UnormKHR" == j.get< std::string >() ) {
      p = Format :: eG8B8G8R8422UnormKHR ;
      return;
    }
    if( "eG8B8G8R8422UnormKHR" == j.get< std::string >() ) {
      p = Format :: eG8B8G8R8422UnormKHR ;
      return;
    }
    if( "VK_FORMAT_G8B8G8R8_422_UNORM_KHR" == j.get< std::string >() ) {
      p = Format :: eG8B8G8R8422UnormKHR ;
      return;
    }
    if( "G8B8R82Plane420UnormKHR" == j.get< std::string >() ) {
      p = Format :: eG8B8R82Plane420UnormKHR ;
      return;
    }
    if( "eG8B8R82Plane420UnormKHR" == j.get< std::string >() ) {
      p = Format :: eG8B8R82Plane420UnormKHR ;
      return;
    }
    if( "VK_FORMAT_G8_B8R8_2PLANE_420_UNORM_KHR" == j.get< std::string >() ) {
      p = Format :: eG8B8R82Plane420UnormKHR ;
      return;
    }
    if( "G8B8R82Plane422UnormKHR" == j.get< std::string >() ) {
      p = Format :: eG8B8R82Plane422UnormKHR ;
      return;
    }
    if( "eG8B8R82Plane422UnormKHR" == j.get< std::string >() ) {
      p = Format :: eG8B8R82Plane422UnormKHR ;
      return;
    }
    if( "VK_FORMAT_G8_B8R8_2PLANE_422_UNORM_KHR" == j.get< std::string >() ) {
      p = Format :: eG8B8R82Plane422UnormKHR ;
      return;
    }
    if( "G8B8R83Plane420UnormKHR" == j.get< std::string >() ) {
      p = Format :: eG8B8R83Plane420UnormKHR ;
      return;
    }
    if( "eG8B8R83Plane420UnormKHR" == j.get< std::string >() ) {
      p = Format :: eG8B8R83Plane420UnormKHR ;
      return;
    }
    if( "VK_FORMAT_G8_B8_R8_3PLANE_420_UNORM_KHR" == j.get< std::string >() ) {
      p = Format :: eG8B8R83Plane420UnormKHR ;
      return;
    }
    if( "G8B8R83Plane422UnormKHR" == j.get< std::string >() ) {
      p = Format :: eG8B8R83Plane422UnormKHR ;
      return;
    }
    if( "eG8B8R83Plane422UnormKHR" == j.get< std::string >() ) {
      p = Format :: eG8B8R83Plane422UnormKHR ;
      return;
    }
    if( "VK_FORMAT_G8_B8_R8_3PLANE_422_UNORM_KHR" == j.get< std::string >() ) {
      p = Format :: eG8B8R83Plane422UnormKHR ;
      return;
    }
    if( "G8B8R83Plane444UnormKHR" == j.get< std::string >() ) {
      p = Format :: eG8B8R83Plane444UnormKHR ;
      return;
    }
    if( "eG8B8R83Plane444UnormKHR" == j.get< std::string >() ) {
      p = Format :: eG8B8R83Plane444UnormKHR ;
      return;
    }
    if( "VK_FORMAT_G8_B8_R8_3PLANE_444_UNORM_KHR" == j.get< std::string >() ) {
      p = Format :: eG8B8R83Plane444UnormKHR ;
      return;
    }
    if( "R10X6G10X6B10X6A10X6Unorm4Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eR10X6G10X6B10X6A10X6Unorm4Pack16KHR ;
      return;
    }
    if( "eR10X6G10X6B10X6A10X6Unorm4Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eR10X6G10X6B10X6A10X6Unorm4Pack16KHR ;
      return;
    }
    if( "VK_FORMAT_R10X6G10X6B10X6A10X6_UNORM_4PACK16_KHR" == j.get< std::string >() ) {
      p = Format :: eR10X6G10X6B10X6A10X6Unorm4Pack16KHR ;
      return;
    }
    if( "R10X6G10X6Unorm2Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eR10X6G10X6Unorm2Pack16KHR ;
      return;
    }
    if( "eR10X6G10X6Unorm2Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eR10X6G10X6Unorm2Pack16KHR ;
      return;
    }
    if( "VK_FORMAT_R10X6G10X6_UNORM_2PACK16_KHR" == j.get< std::string >() ) {
      p = Format :: eR10X6G10X6Unorm2Pack16KHR ;
      return;
    }
    if( "R10X6UnormPack16KHR" == j.get< std::string >() ) {
      p = Format :: eR10X6UnormPack16KHR ;
      return;
    }
    if( "eR10X6UnormPack16KHR" == j.get< std::string >() ) {
      p = Format :: eR10X6UnormPack16KHR ;
      return;
    }
    if( "VK_FORMAT_R10X6_UNORM_PACK16_KHR" == j.get< std::string >() ) {
      p = Format :: eR10X6UnormPack16KHR ;
      return;
    }
    if( "R12X4G12X4B12X4A12X4Unorm4Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eR12X4G12X4B12X4A12X4Unorm4Pack16KHR ;
      return;
    }
    if( "eR12X4G12X4B12X4A12X4Unorm4Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eR12X4G12X4B12X4A12X4Unorm4Pack16KHR ;
      return;
    }
    if( "VK_FORMAT_R12X4G12X4B12X4A12X4_UNORM_4PACK16_KHR" == j.get< std::string >() ) {
      p = Format :: eR12X4G12X4B12X4A12X4Unorm4Pack16KHR ;
      return;
    }
    if( "R12X4G12X4Unorm2Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eR12X4G12X4Unorm2Pack16KHR ;
      return;
    }
    if( "eR12X4G12X4Unorm2Pack16KHR" == j.get< std::string >() ) {
      p = Format :: eR12X4G12X4Unorm2Pack16KHR ;
      return;
    }
    if( "VK_FORMAT_R12X4G12X4_UNORM_2PACK16_KHR" == j.get< std::string >() ) {
      p = Format :: eR12X4G12X4Unorm2Pack16KHR ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for Format" );
  }
  if( j.is_number() ) {
    p = Format ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for Format" );
}
}
inline void from_json( const nlohmann::json &j, VkFormat &p ) {
  VULKAN_HPP_NAMESPACE :: Format temp;
  from_json( j, temp );
  p = VkFormat ( temp );
}
#endif


#endif
