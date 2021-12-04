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
#ifndef VULKAN2JSON_WIN32KEYEDMUTEXACQUIRERELEASEINFONV_HPP
#define VULKAN2JSON_WIN32KEYEDMUTEXACQUIRERELEASEINFONV_HPP

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
#include <vulkan2json/StructureType.hpp>
#if defined( VK_USE_PLATFORM_WIN32_KHR )
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const Win32KeyedMutexAcquireReleaseInfoNV &p ) {
  j = nlohmann::json::object();
  j[ "sType" ] = p.sType;
  j[ "pNext" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pNext ) );
  j[ "acquireCount" ] = p.acquireCount;
  j[ "pAcquireSyncs" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pAcquireSyncs ) );
  j[ "pAcquireKeys" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pAcquireKeys ) );
  j[ "pAcquireTimeoutMilliseconds" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pAcquireTimeoutMilliseconds ) );
  j[ "releaseCount" ] = p.releaseCount;
  j[ "pReleaseSyncs" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pReleaseSyncs ) );
  j[ "pReleaseKeys" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.pReleaseKeys ) );
}
}
inline void to_json( nlohmann::json &j, const VkWin32KeyedMutexAcquireReleaseInfoNV &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: Win32KeyedMutexAcquireReleaseInfoNV ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, Win32KeyedMutexAcquireReleaseInfoNV &p ) {
  if( !j.is_object() ) throw vulkan2json::invalid_object_value( "incompatible value for Win32KeyedMutexAcquireReleaseInfoNV" );
  if( j.find( "acquireCount" ) != j.end() ) {
    p.acquireCount = j[ "acquireCount" ];
  }
  if( j.find( "releaseCount" ) != j.end() ) {
    p.releaseCount = j[ "releaseCount" ];
  }
}
}
inline void from_json( const nlohmann::json &j, VkWin32KeyedMutexAcquireReleaseInfoNV &p ) {
  VULKAN_HPP_NAMESPACE :: Win32KeyedMutexAcquireReleaseInfoNV temp;
  from_json( j, temp );
  p = VkWin32KeyedMutexAcquireReleaseInfoNV ( temp );
}
#endif


#endif
