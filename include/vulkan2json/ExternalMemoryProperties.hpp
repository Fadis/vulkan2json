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
#ifndef VULKAN2JSON_EXTERNALMEMORYPROPERTIES_HPP
#define VULKAN2JSON_EXTERNALMEMORYPROPERTIES_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#include <vulkan2json/ExternalMemoryFeatureFlags.hpp>
#include <vulkan2json/ExternalMemoryHandleTypeFlags.hpp>
#include <vulkan2json/ExternalMemoryHandleTypeFlags.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const ExternalMemoryProperties &p ) {
  j = nlohmann::json::object();
  j[ "externalMemoryFeatures" ] = p.externalMemoryFeatures;
  j[ "exportFromImportedHandleTypes" ] = p.exportFromImportedHandleTypes;
  j[ "compatibleHandleTypes" ] = p.compatibleHandleTypes;
}
}
inline void to_json( nlohmann::json &j, const VkExternalMemoryProperties &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: ExternalMemoryProperties ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, ExternalMemoryProperties &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for ExternalMemoryProperties" );
  p.externalMemoryFeatures = ExternalMemoryFeatureFlags ( j[ "externalMemoryFeatures" ] );
  p.exportFromImportedHandleTypes = ExternalMemoryHandleTypeFlags ( j[ "exportFromImportedHandleTypes" ] );
  p.compatibleHandleTypes = ExternalMemoryHandleTypeFlags ( j[ "compatibleHandleTypes" ] );
}
}
inline void from_json( const nlohmann::json &j, VkExternalMemoryProperties &p ) {
  VULKAN_HPP_NAMESPACE :: ExternalMemoryProperties temp;
  from_json( j, temp );
  p = VkExternalMemoryProperties ( temp );
}


#endif
