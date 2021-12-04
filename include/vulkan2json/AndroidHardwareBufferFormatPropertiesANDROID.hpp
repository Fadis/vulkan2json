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
#ifndef VULKAN2JSON_ANDROIDHARDWAREBUFFERFORMATPROPERTIESANDROID_HPP
#define VULKAN2JSON_ANDROIDHARDWAREBUFFERFORMATPROPERTIESANDROID_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

static_assert( VK_HEADER_VERSION == 182, "Wrong VK_HEADER_VERSION!" );

#include <vulkan2json/StructureType.hpp>
#include <vulkan2json/Format.hpp>
#include <vulkan2json/FormatFeatureFlags.hpp>
#include <vulkan2json/ComponentMapping.hpp>
#include <vulkan2json/SamplerYcbcrModelConversion.hpp>
#include <vulkan2json/SamplerYcbcrRange.hpp>
#include <vulkan2json/ChromaLocation.hpp>
#include <vulkan2json/ChromaLocation.hpp>
#include <vulkan2json/StructureType.hpp>
#include <vulkan2json/Format.hpp>
#include <vulkan2json/FormatFeatureFlags.hpp>
#include <vulkan2json/ComponentMapping.hpp>
#include <vulkan2json/SamplerYcbcrModelConversion.hpp>
#include <vulkan2json/SamplerYcbcrRange.hpp>
#include <vulkan2json/ChromaLocation.hpp>
#include <vulkan2json/ChromaLocation.hpp>
#if defined( VK_USE_PLATFORM_ANDROID_KHR )
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const AndroidHardwareBufferFormatPropertiesANDROID &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "format" ] = p.format;
  j[ "externalFormat" ] = p.externalFormat;
  j[ "formatFeatures" ] = p.formatFeatures;
  j[ "samplerYcbcrConversionComponents" ] = p.samplerYcbcrConversionComponents;
  j[ "suggestedYcbcrModel" ] = p.suggestedYcbcrModel;
  j[ "suggestedYcbcrRange" ] = p.suggestedYcbcrRange;
  j[ "suggestedXChromaOffset" ] = p.suggestedXChromaOffset;
  j[ "suggestedYChromaOffset" ] = p.suggestedYChromaOffset;
}
}
inline void to_json( nlohmann::json &j, const VkAndroidHardwareBufferFormatPropertiesANDROID &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: AndroidHardwareBufferFormatPropertiesANDROID ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, AndroidHardwareBufferFormatPropertiesANDROID &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for AndroidHardwareBufferFormatPropertiesANDROID" );
  if( j.find( "format" ) != j.end() ) {
    p.format = Format ( j[ "format" ] );
  }
  if( j.find( "externalFormat" ) != j.end() ) {
    p.externalFormat = j[ "externalFormat" ];
  }
  if( j.find( "formatFeatures" ) != j.end() ) {
    p.formatFeatures = FormatFeatureFlags ( j[ "formatFeatures" ] );
  }
  if( j.find( "samplerYcbcrConversionComponents" ) != j.end() ) {
    p.samplerYcbcrConversionComponents = ComponentMapping ( j[ "samplerYcbcrConversionComponents" ] );
  }
  if( j.find( "suggestedYcbcrModel" ) != j.end() ) {
    p.suggestedYcbcrModel = SamplerYcbcrModelConversion ( j[ "suggestedYcbcrModel" ] );
  }
  if( j.find( "suggestedYcbcrRange" ) != j.end() ) {
    p.suggestedYcbcrRange = SamplerYcbcrRange ( j[ "suggestedYcbcrRange" ] );
  }
  if( j.find( "suggestedXChromaOffset" ) != j.end() ) {
    p.suggestedXChromaOffset = ChromaLocation ( j[ "suggestedXChromaOffset" ] );
  }
  if( j.find( "suggestedYChromaOffset" ) != j.end() ) {
    p.suggestedYChromaOffset = ChromaLocation ( j[ "suggestedYChromaOffset" ] );
  }
}
}
inline void from_json( const nlohmann::json &j, VkAndroidHardwareBufferFormatPropertiesANDROID &p ) {
  VULKAN_HPP_NAMESPACE :: AndroidHardwareBufferFormatPropertiesANDROID temp;
  from_json( j, temp );
  p = VkAndroidHardwareBufferFormatPropertiesANDROID ( temp );
}
#endif


#endif
