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
#ifndef VULKAN2JSON_PHYSICALDEVICEFRAGMENTSHADINGRATEPROPERTIESKHR_HPP
#define VULKAN2JSON_PHYSICALDEVICEFRAGMENTSHADINGRATEPROPERTIESKHR_HPP

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
#include <vulkan2json/Extent2D.hpp>
#include <vulkan2json/Extent2D.hpp>
#include <vulkan2json/Extent2D.hpp>
#include <vulkan2json/SampleCountFlags.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PhysicalDeviceFragmentShadingRatePropertiesKHR &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "minFragmentShadingRateAttachmentTexelSize" ] = p.minFragmentShadingRateAttachmentTexelSize;
  j[ "maxFragmentShadingRateAttachmentTexelSize" ] = p.maxFragmentShadingRateAttachmentTexelSize;
  j[ "maxFragmentShadingRateAttachmentTexelSizeAspectRatio" ] = p.maxFragmentShadingRateAttachmentTexelSizeAspectRatio;
  j[ "primitiveFragmentShadingRateWithMultipleViewports" ] = bool( p.primitiveFragmentShadingRateWithMultipleViewports );
  j[ "layeredShadingRateAttachments" ] = bool( p.layeredShadingRateAttachments );
  j[ "fragmentShadingRateNonTrivialCombinerOps" ] = bool( p.fragmentShadingRateNonTrivialCombinerOps );
  j[ "maxFragmentSize" ] = p.maxFragmentSize;
  j[ "maxFragmentSizeAspectRatio" ] = p.maxFragmentSizeAspectRatio;
  j[ "maxFragmentShadingRateCoverageSamples" ] = p.maxFragmentShadingRateCoverageSamples;
  j[ "maxFragmentShadingRateRasterizationSamples" ] = p.maxFragmentShadingRateRasterizationSamples;
  j[ "fragmentShadingRateWithShaderDepthStencilWrites" ] = bool( p.fragmentShadingRateWithShaderDepthStencilWrites );
  j[ "fragmentShadingRateWithSampleMask" ] = bool( p.fragmentShadingRateWithSampleMask );
  j[ "fragmentShadingRateWithShaderSampleMask" ] = bool( p.fragmentShadingRateWithShaderSampleMask );
  j[ "fragmentShadingRateWithConservativeRasterization" ] = bool( p.fragmentShadingRateWithConservativeRasterization );
  j[ "fragmentShadingRateWithFragmentShaderInterlock" ] = bool( p.fragmentShadingRateWithFragmentShaderInterlock );
  j[ "fragmentShadingRateWithCustomSampleLocations" ] = bool( p.fragmentShadingRateWithCustomSampleLocations );
  j[ "fragmentShadingRateStrictMultiplyCombiner" ] = bool( p.fragmentShadingRateStrictMultiplyCombiner );
}
}
inline void to_json( nlohmann::json &j, const VkPhysicalDeviceFragmentShadingRatePropertiesKHR &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PhysicalDeviceFragmentShadingRatePropertiesKHR ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PhysicalDeviceFragmentShadingRatePropertiesKHR &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for PhysicalDeviceFragmentShadingRatePropertiesKHR" );
  p.minFragmentShadingRateAttachmentTexelSize = Extent2D ( j[ "minFragmentShadingRateAttachmentTexelSize" ] );
  p.maxFragmentShadingRateAttachmentTexelSize = Extent2D ( j[ "maxFragmentShadingRateAttachmentTexelSize" ] );
  p.maxFragmentShadingRateAttachmentTexelSizeAspectRatio = j[ "maxFragmentShadingRateAttachmentTexelSizeAspectRatio" ];
  p.primitiveFragmentShadingRateWithMultipleViewports = j[ "primitiveFragmentShadingRateWithMultipleViewports" ];
  p.layeredShadingRateAttachments = j[ "layeredShadingRateAttachments" ];
  p.fragmentShadingRateNonTrivialCombinerOps = j[ "fragmentShadingRateNonTrivialCombinerOps" ];
  p.maxFragmentSize = Extent2D ( j[ "maxFragmentSize" ] );
  p.maxFragmentSizeAspectRatio = j[ "maxFragmentSizeAspectRatio" ];
  p.maxFragmentShadingRateCoverageSamples = j[ "maxFragmentShadingRateCoverageSamples" ];
  p.maxFragmentShadingRateRasterizationSamples = SampleCountFlagBits ( j[ "maxFragmentShadingRateRasterizationSamples" ] );
  p.fragmentShadingRateWithShaderDepthStencilWrites = j[ "fragmentShadingRateWithShaderDepthStencilWrites" ];
  p.fragmentShadingRateWithSampleMask = j[ "fragmentShadingRateWithSampleMask" ];
  p.fragmentShadingRateWithShaderSampleMask = j[ "fragmentShadingRateWithShaderSampleMask" ];
  p.fragmentShadingRateWithConservativeRasterization = j[ "fragmentShadingRateWithConservativeRasterization" ];
  p.fragmentShadingRateWithFragmentShaderInterlock = j[ "fragmentShadingRateWithFragmentShaderInterlock" ];
  p.fragmentShadingRateWithCustomSampleLocations = j[ "fragmentShadingRateWithCustomSampleLocations" ];
  p.fragmentShadingRateStrictMultiplyCombiner = j[ "fragmentShadingRateStrictMultiplyCombiner" ];
}
}
inline void from_json( const nlohmann::json &j, VkPhysicalDeviceFragmentShadingRatePropertiesKHR &p ) {
  VULKAN_HPP_NAMESPACE :: PhysicalDeviceFragmentShadingRatePropertiesKHR temp;
  from_json( j, temp );
  p = VkPhysicalDeviceFragmentShadingRatePropertiesKHR ( temp );
}


#endif
