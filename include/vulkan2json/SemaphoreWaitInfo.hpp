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
#ifndef VULKAN2JSON_SEMAPHOREWAITINFO_HPP
#define VULKAN2JSON_SEMAPHOREWAITINFO_HPP

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
#include <vulkan2json/SemaphoreWaitFlags.hpp>
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const SemaphoreWaitInfo &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "flags" ] = p.flags;
  j[ "semaphoreCount" ] = p.semaphoreCount;
  j[ "pSemaphores" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pSemaphores ) );
  j[ "pValues" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pValues ) );
}
}
inline void to_json( nlohmann::json &j, const VkSemaphoreWaitInfo &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: SemaphoreWaitInfo ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, SemaphoreWaitInfo &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for SemaphoreWaitInfo" );
  p.flags = SemaphoreWaitFlags ( j[ "flags" ] );
  p.semaphoreCount = j[ "semaphoreCount" ];
}
}
inline void from_json( const nlohmann::json &j, VkSemaphoreWaitInfo &p ) {
  VULKAN_HPP_NAMESPACE :: SemaphoreWaitInfo temp;
  from_json( j, temp );
  p = VkSemaphoreWaitInfo ( temp );
}


#endif
