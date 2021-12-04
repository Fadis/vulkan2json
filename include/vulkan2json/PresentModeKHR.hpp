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
#ifndef VULKAN2JSON_PRESENTMODEKHR_HPP
#define VULKAN2JSON_PRESENTMODEKHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_KHR_SURFACE_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PresentModeKHR &p ) {
  if( PresentModeKHR :: eImmediate == p ) {
    j = "Immediate";
    return;
  }
  if( PresentModeKHR :: eMailbox == p ) {
    j = "Mailbox";
    return;
  }
  if( PresentModeKHR :: eFifo == p ) {
    j = "Fifo";
    return;
  }
  if( PresentModeKHR :: eFifoRelaxed == p ) {
    j = "FifoRelaxed";
    return;
  }
  if( PresentModeKHR :: eSharedDemandRefresh == p ) {
    j = "SharedDemandRefresh";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkPresentModeKHR &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PresentModeKHR ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PresentModeKHR &p ) {
  if( j.is_string() ) {
    if( "Immediate" == j.get< std::string >() ) {
      p = PresentModeKHR :: eImmediate ;
      return;
    }
    if( "eImmediate" == j.get< std::string >() ) {
      p = PresentModeKHR :: eImmediate ;
      return;
    }
    if( "VK_PRESENT_MODE_IMMEDIATE_KHR" == j.get< std::string >() ) {
      p = PresentModeKHR :: eImmediate ;
      return;
    }
    if( "Mailbox" == j.get< std::string >() ) {
      p = PresentModeKHR :: eMailbox ;
      return;
    }
    if( "eMailbox" == j.get< std::string >() ) {
      p = PresentModeKHR :: eMailbox ;
      return;
    }
    if( "VK_PRESENT_MODE_MAILBOX_KHR" == j.get< std::string >() ) {
      p = PresentModeKHR :: eMailbox ;
      return;
    }
    if( "Fifo" == j.get< std::string >() ) {
      p = PresentModeKHR :: eFifo ;
      return;
    }
    if( "eFifo" == j.get< std::string >() ) {
      p = PresentModeKHR :: eFifo ;
      return;
    }
    if( "VK_PRESENT_MODE_FIFO_KHR" == j.get< std::string >() ) {
      p = PresentModeKHR :: eFifo ;
      return;
    }
    if( "FifoRelaxed" == j.get< std::string >() ) {
      p = PresentModeKHR :: eFifoRelaxed ;
      return;
    }
    if( "eFifoRelaxed" == j.get< std::string >() ) {
      p = PresentModeKHR :: eFifoRelaxed ;
      return;
    }
    if( "VK_PRESENT_MODE_FIFO_RELAXED_KHR" == j.get< std::string >() ) {
      p = PresentModeKHR :: eFifoRelaxed ;
      return;
    }
    if( "SharedDemandRefresh" == j.get< std::string >() ) {
      p = PresentModeKHR :: eSharedDemandRefresh ;
      return;
    }
    if( "eSharedDemandRefresh" == j.get< std::string >() ) {
      p = PresentModeKHR :: eSharedDemandRefresh ;
      return;
    }
    if( "VK_PRESENT_MODE_SHARED_DEMAND_REFRESH_KHR" == j.get< std::string >() ) {
      p = PresentModeKHR :: eSharedDemandRefresh ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for PresentModeKHR" );
  }
  if( j.is_number() ) {
    p = PresentModeKHR ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for PresentModeKHR" );
}
}
inline void from_json( const nlohmann::json &j, VkPresentModeKHR &p ) {
  VULKAN_HPP_NAMESPACE :: PresentModeKHR temp;
  from_json( j, temp );
  p = VkPresentModeKHR ( temp );
}
#endif


#endif
