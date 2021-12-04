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
#ifndef VULKAN2JSON_QUERYRESULTSTATUSKHR_HPP
#define VULKAN2JSON_QUERYRESULTSTATUSKHR_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_KHR_VIDEO_QUEUE_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const QueryResultStatusKHR &p ) {
  if( QueryResultStatusKHR :: eError == p ) {
    j = "Error";
    return;
  }
  if( QueryResultStatusKHR :: eNotReady == p ) {
    j = "NotReady";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkQueryResultStatusKHR &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: QueryResultStatusKHR ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, QueryResultStatusKHR &p ) {
  if( j.is_string() ) {
    if( "Error" == j.get< std::string >() ) {
      p = QueryResultStatusKHR :: eError ;
      return;
    }
    if( "eError" == j.get< std::string >() ) {
      p = QueryResultStatusKHR :: eError ;
      return;
    }
    if( "VK_QUERY_RESULT_STATUS_ERROR_KHR" == j.get< std::string >() ) {
      p = QueryResultStatusKHR :: eError ;
      return;
    }
    if( "NotReady" == j.get< std::string >() ) {
      p = QueryResultStatusKHR :: eNotReady ;
      return;
    }
    if( "eNotReady" == j.get< std::string >() ) {
      p = QueryResultStatusKHR :: eNotReady ;
      return;
    }
    if( "VK_QUERY_RESULT_STATUS_NOT_READY_KHR" == j.get< std::string >() ) {
      p = QueryResultStatusKHR :: eNotReady ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for QueryResultStatusKHR" );
  }
  if( j.is_number() ) {
    p = QueryResultStatusKHR ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for QueryResultStatusKHR" );
}
}
inline void from_json( const nlohmann::json &j, VkQueryResultStatusKHR &p ) {
  VULKAN_HPP_NAMESPACE :: QueryResultStatusKHR temp;
  from_json( j, temp );
  p = VkQueryResultStatusKHR ( temp );
}
#endif


#endif
