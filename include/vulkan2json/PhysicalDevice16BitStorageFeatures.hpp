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
#ifndef VULKAN2JSON_PHYSICALDEVICE16BITSTORAGEFEATURES_HPP
#define VULKAN2JSON_PHYSICALDEVICE16BITSTORAGEFEATURES_HPP

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
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PhysicalDevice16BitStorageFeatures &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "storageBuffer16BitAccess" ] = bool( p.storageBuffer16BitAccess );
  j[ "uniformAndStorageBuffer16BitAccess" ] = bool( p.uniformAndStorageBuffer16BitAccess );
  j[ "storagePushConstant16" ] = bool( p.storagePushConstant16 );
  j[ "storageInputOutput16" ] = bool( p.storageInputOutput16 );
}
}
inline void to_json( nlohmann::json &j, const VkPhysicalDevice16BitStorageFeatures &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PhysicalDevice16BitStorageFeatures ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PhysicalDevice16BitStorageFeatures &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for PhysicalDevice16BitStorageFeatures" );
  p.storageBuffer16BitAccess = j[ "storageBuffer16BitAccess" ];
  p.uniformAndStorageBuffer16BitAccess = j[ "uniformAndStorageBuffer16BitAccess" ];
  p.storagePushConstant16 = j[ "storagePushConstant16" ];
  p.storageInputOutput16 = j[ "storageInputOutput16" ];
}
}
inline void from_json( const nlohmann::json &j, VkPhysicalDevice16BitStorageFeatures &p ) {
  VULKAN_HPP_NAMESPACE :: PhysicalDevice16BitStorageFeatures temp;
  from_json( j, temp );
  p = VkPhysicalDevice16BitStorageFeatures ( temp );
}


#endif
