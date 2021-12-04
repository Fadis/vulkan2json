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
#ifndef VULKAN2JSON_PHYSICALDEVICEPORTABILITYSUBSETFEATURESKHR_HPP
#define VULKAN2JSON_PHYSICALDEVICEPORTABILITYSUBSETFEATURESKHR_HPP

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
#if defined( VK_ENABLE_BETA_EXTENSIONS )
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PhysicalDevicePortabilitySubsetFeaturesKHR &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "constantAlphaColorBlendFactors" ] = bool( p.constantAlphaColorBlendFactors );
  j[ "events" ] = bool( p.events );
  j[ "imageViewFormatReinterpretation" ] = bool( p.imageViewFormatReinterpretation );
  j[ "imageViewFormatSwizzle" ] = bool( p.imageViewFormatSwizzle );
  j[ "imageView2DOn3DImage" ] = bool( p.imageView2DOn3DImage );
  j[ "multisampleArrayImage" ] = bool( p.multisampleArrayImage );
  j[ "mutableComparisonSamplers" ] = bool( p.mutableComparisonSamplers );
  j[ "pointPolygons" ] = bool( p.pointPolygons );
  j[ "samplerMipLodBias" ] = bool( p.samplerMipLodBias );
  j[ "separateStencilMaskRef" ] = bool( p.separateStencilMaskRef );
  j[ "shaderSampleRateInterpolationFunctions" ] = bool( p.shaderSampleRateInterpolationFunctions );
  j[ "tessellationIsolines" ] = bool( p.tessellationIsolines );
  j[ "tessellationPointMode" ] = bool( p.tessellationPointMode );
  j[ "triangleFans" ] = bool( p.triangleFans );
  j[ "vertexAttributeAccessBeyondStride" ] = bool( p.vertexAttributeAccessBeyondStride );
}
}
inline void to_json( nlohmann::json &j, const VkPhysicalDevicePortabilitySubsetFeaturesKHR &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PhysicalDevicePortabilitySubsetFeaturesKHR ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PhysicalDevicePortabilitySubsetFeaturesKHR &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for PhysicalDevicePortabilitySubsetFeaturesKHR" );
  p.constantAlphaColorBlendFactors = j[ "constantAlphaColorBlendFactors" ];
  p.events = j[ "events" ];
  p.imageViewFormatReinterpretation = j[ "imageViewFormatReinterpretation" ];
  p.imageViewFormatSwizzle = j[ "imageViewFormatSwizzle" ];
  p.imageView2DOn3DImage = j[ "imageView2DOn3DImage" ];
  p.multisampleArrayImage = j[ "multisampleArrayImage" ];
  p.mutableComparisonSamplers = j[ "mutableComparisonSamplers" ];
  p.pointPolygons = j[ "pointPolygons" ];
  p.samplerMipLodBias = j[ "samplerMipLodBias" ];
  p.separateStencilMaskRef = j[ "separateStencilMaskRef" ];
  p.shaderSampleRateInterpolationFunctions = j[ "shaderSampleRateInterpolationFunctions" ];
  p.tessellationIsolines = j[ "tessellationIsolines" ];
  p.tessellationPointMode = j[ "tessellationPointMode" ];
  p.triangleFans = j[ "triangleFans" ];
  p.vertexAttributeAccessBeyondStride = j[ "vertexAttributeAccessBeyondStride" ];
}
}
inline void from_json( const nlohmann::json &j, VkPhysicalDevicePortabilitySubsetFeaturesKHR &p ) {
  VULKAN_HPP_NAMESPACE :: PhysicalDevicePortabilitySubsetFeaturesKHR temp;
  from_json( j, temp );
  p = VkPhysicalDevicePortabilitySubsetFeaturesKHR ( temp );
}
#endif


#endif
