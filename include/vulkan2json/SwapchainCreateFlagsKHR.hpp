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
#ifndef VULKAN2JSON_SWAPCHAINCREATEFLAGSKHR_HPP
#define VULKAN2JSON_SWAPCHAINCREATEFLAGSKHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_KHR_SWAPCHAIN_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const SwapchainCreateFlagBitsKHR &p ) {
  if( SwapchainCreateFlagBitsKHR :: eSplitInstanceBindRegions == p ) {
    j = "SplitInstanceBindRegions";
    return;
  }
  if( SwapchainCreateFlagBitsKHR :: eProtected == p ) {
    j = "Protected";
    return;
  }
}
inline void from_json( const nlohmann::json &j, SwapchainCreateFlagBitsKHR &p ) {
  if( j.is_string() ) {
    if( "SplitInstanceBindRegions" == j.get< std::string >() ) {
      p = SwapchainCreateFlagBitsKHR :: eSplitInstanceBindRegions ;
      return;
    }
    if( "eSplitInstanceBindRegions" == j.get< std::string >() ) {
      p = SwapchainCreateFlagBitsKHR :: eSplitInstanceBindRegions ;
      return;
    }
    if( "VK_SWAPCHAIN_CREATE_SPLIT_INSTANCE_BIND_REGIONS_BIT_KHR" == j.get< std::string >() ) {
      p = SwapchainCreateFlagBitsKHR :: eSplitInstanceBindRegions ;
      return;
    }
    if( "Protected" == j.get< std::string >() ) {
      p = SwapchainCreateFlagBitsKHR :: eProtected ;
      return;
    }
    if( "eProtected" == j.get< std::string >() ) {
      p = SwapchainCreateFlagBitsKHR :: eProtected ;
      return;
    }
    if( "VK_SWAPCHAIN_CREATE_PROTECTED_BIT_KHR" == j.get< std::string >() ) {
      p = SwapchainCreateFlagBitsKHR :: eProtected ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for SwapchainCreateFlagBitsKHR" );
  }
  if( j.is_number() ) {
    p = SwapchainCreateFlagBitsKHR ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for SwapchainCreateFlagBitsKHR" );
}
inline void to_json( nlohmann::json &j, const SwapchainCreateFlagsKHR &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( SwapchainCreateFlagBitsKHR ) * 8u; ++n ) {
    if( p & SwapchainCreateFlagsKHR ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, SwapchainCreateFlagBitsKHR ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, SwapchainCreateFlagsKHR &p ) {
  if( j.is_array() ) {
    p = SwapchainCreateFlagsKHR ( 0 );
    for( auto &e:  j ) {
      SwapchainCreateFlagBitsKHR temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for SwapchainCreateFlagsKHR" );
}
}
#endif


#endif
