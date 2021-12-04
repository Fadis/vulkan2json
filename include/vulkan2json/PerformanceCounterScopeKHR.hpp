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
#ifndef VULKAN2JSON_PERFORMANCECOUNTERSCOPEKHR_HPP
#define VULKAN2JSON_PERFORMANCECOUNTERSCOPEKHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_KHR_PERFORMANCE_QUERY_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const PerformanceCounterScopeKHR &p ) {
  if( PerformanceCounterScopeKHR :: eCommandBuffer == p ) {
    j = "CommandBuffer";
    return;
  }
  if( PerformanceCounterScopeKHR :: eRenderPass == p ) {
    j = "RenderPass";
    return;
  }
  if( PerformanceCounterScopeKHR :: eCommand == p ) {
    j = "Command";
    return;
  }
  if( PerformanceCounterScopeKHR :: eVkQueryScopeCommandBuffer == p ) {
    j = "VkQueryScopeCommandBuffer";
    return;
  }
  if( PerformanceCounterScopeKHR :: eVkQueryScopeCommand == p ) {
    j = "VkQueryScopeCommand";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkPerformanceCounterScopeKHR &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: PerformanceCounterScopeKHR ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, PerformanceCounterScopeKHR &p ) {
  if( j.is_string() ) {
    if( "CommandBuffer" == j.get< std::string >() ) {
      p = PerformanceCounterScopeKHR :: eCommandBuffer ;
      return;
    }
    if( "eCommandBuffer" == j.get< std::string >() ) {
      p = PerformanceCounterScopeKHR :: eCommandBuffer ;
      return;
    }
    if( "VK_PERFORMANCE_COUNTER_SCOPE_COMMAND_BUFFER_KHR" == j.get< std::string >() ) {
      p = PerformanceCounterScopeKHR :: eCommandBuffer ;
      return;
    }
    if( "RenderPass" == j.get< std::string >() ) {
      p = PerformanceCounterScopeKHR :: eRenderPass ;
      return;
    }
    if( "eRenderPass" == j.get< std::string >() ) {
      p = PerformanceCounterScopeKHR :: eRenderPass ;
      return;
    }
    if( "VK_PERFORMANCE_COUNTER_SCOPE_RENDER_PASS_KHR" == j.get< std::string >() ) {
      p = PerformanceCounterScopeKHR :: eRenderPass ;
      return;
    }
    if( "Command" == j.get< std::string >() ) {
      p = PerformanceCounterScopeKHR :: eCommand ;
      return;
    }
    if( "eCommand" == j.get< std::string >() ) {
      p = PerformanceCounterScopeKHR :: eCommand ;
      return;
    }
    if( "VK_PERFORMANCE_COUNTER_SCOPE_COMMAND_KHR" == j.get< std::string >() ) {
      p = PerformanceCounterScopeKHR :: eCommand ;
      return;
    }
    if( "VkQueryScopeCommandBuffer" == j.get< std::string >() ) {
      p = PerformanceCounterScopeKHR :: eVkQueryScopeCommandBuffer ;
      return;
    }
    if( "eVkQueryScopeCommandBuffer" == j.get< std::string >() ) {
      p = PerformanceCounterScopeKHR :: eVkQueryScopeCommandBuffer ;
      return;
    }
    if( "VK_QUERY_SCOPE_COMMAND_BUFFER_KHR" == j.get< std::string >() ) {
      p = PerformanceCounterScopeKHR :: eVkQueryScopeCommandBuffer ;
      return;
    }
    if( "VkQueryScopeCommand" == j.get< std::string >() ) {
      p = PerformanceCounterScopeKHR :: eVkQueryScopeCommand ;
      return;
    }
    if( "eVkQueryScopeCommand" == j.get< std::string >() ) {
      p = PerformanceCounterScopeKHR :: eVkQueryScopeCommand ;
      return;
    }
    if( "VK_QUERY_SCOPE_COMMAND_KHR" == j.get< std::string >() ) {
      p = PerformanceCounterScopeKHR :: eVkQueryScopeCommand ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for PerformanceCounterScopeKHR" );
  }
  if( j.is_number() ) {
    p = PerformanceCounterScopeKHR ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for PerformanceCounterScopeKHR" );
}
}
inline void from_json( const nlohmann::json &j, VkPerformanceCounterScopeKHR &p ) {
  VULKAN_HPP_NAMESPACE :: PerformanceCounterScopeKHR temp;
  from_json( j, temp );
  p = VkPerformanceCounterScopeKHR ( temp );
}
#endif


#endif
