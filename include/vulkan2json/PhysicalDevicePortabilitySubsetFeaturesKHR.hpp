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

static_assert( VK_HEADER_VERSION == 189, "Wrong VK_HEADER_VERSION!" );

#include <vulkan2json/StructureType.hpp>
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
  if( j.find( "constantAlphaColorBlendFactors" ) != j.end() ) {
    p.constantAlphaColorBlendFactors = j[ "constantAlphaColorBlendFactors" ];
  }
  if( j.find( "events" ) != j.end() ) {
    p.events = j[ "events" ];
  }
  if( j.find( "imageViewFormatReinterpretation" ) != j.end() ) {
    p.imageViewFormatReinterpretation = j[ "imageViewFormatReinterpretation" ];
  }
  if( j.find( "imageViewFormatSwizzle" ) != j.end() ) {
    p.imageViewFormatSwizzle = j[ "imageViewFormatSwizzle" ];
  }
  if( j.find( "imageView2DOn3DImage" ) != j.end() ) {
    p.imageView2DOn3DImage = j[ "imageView2DOn3DImage" ];
  }
  if( j.find( "multisampleArrayImage" ) != j.end() ) {
    p.multisampleArrayImage = j[ "multisampleArrayImage" ];
  }
  if( j.find( "mutableComparisonSamplers" ) != j.end() ) {
    p.mutableComparisonSamplers = j[ "mutableComparisonSamplers" ];
  }
  if( j.find( "pointPolygons" ) != j.end() ) {
    p.pointPolygons = j[ "pointPolygons" ];
  }
  if( j.find( "samplerMipLodBias" ) != j.end() ) {
    p.samplerMipLodBias = j[ "samplerMipLodBias" ];
  }
  if( j.find( "separateStencilMaskRef" ) != j.end() ) {
    p.separateStencilMaskRef = j[ "separateStencilMaskRef" ];
  }
  if( j.find( "shaderSampleRateInterpolationFunctions" ) != j.end() ) {
    p.shaderSampleRateInterpolationFunctions = j[ "shaderSampleRateInterpolationFunctions" ];
  }
  if( j.find( "tessellationIsolines" ) != j.end() ) {
    p.tessellationIsolines = j[ "tessellationIsolines" ];
  }
  if( j.find( "tessellationPointMode" ) != j.end() ) {
    p.tessellationPointMode = j[ "tessellationPointMode" ];
  }
  if( j.find( "triangleFans" ) != j.end() ) {
    p.triangleFans = j[ "triangleFans" ];
  }
  if( j.find( "vertexAttributeAccessBeyondStride" ) != j.end() ) {
    p.vertexAttributeAccessBeyondStride = j[ "vertexAttributeAccessBeyondStride" ];
  }
}
}
inline void from_json( const nlohmann::json &j, VkPhysicalDevicePortabilitySubsetFeaturesKHR &p ) {
  VULKAN_HPP_NAMESPACE :: PhysicalDevicePortabilitySubsetFeaturesKHR temp;
  from_json( j, temp );
  p = VkPhysicalDevicePortabilitySubsetFeaturesKHR ( temp );
}
#endif


#endif
