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
#ifndef VULKAN2JSON_COMMANDBUFFERUSAGEFLAGS_HPP
#define VULKAN2JSON_COMMANDBUFFERUSAGEFLAGS_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_VERSION_1_0
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const CommandBufferUsageFlagBits &p ) {
  if( CommandBufferUsageFlagBits :: eOneTimeSubmit == p ) {
    j = "OneTimeSubmit";
    return;
  }
  if( CommandBufferUsageFlagBits :: eRenderPassContinue == p ) {
    j = "RenderPassContinue";
    return;
  }
}
inline void from_json( const nlohmann::json &j, CommandBufferUsageFlagBits &p ) {
  if( j.is_string() ) {
    if( "OneTimeSubmit" == j.get< std::string >() ) {
      p = CommandBufferUsageFlagBits :: eOneTimeSubmit ;
      return;
    }
    if( "eOneTimeSubmit" == j.get< std::string >() ) {
      p = CommandBufferUsageFlagBits :: eOneTimeSubmit ;
      return;
    }
    if( "VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT" == j.get< std::string >() ) {
      p = CommandBufferUsageFlagBits :: eOneTimeSubmit ;
      return;
    }
    if( "RenderPassContinue" == j.get< std::string >() ) {
      p = CommandBufferUsageFlagBits :: eRenderPassContinue ;
      return;
    }
    if( "eRenderPassContinue" == j.get< std::string >() ) {
      p = CommandBufferUsageFlagBits :: eRenderPassContinue ;
      return;
    }
    if( "VK_COMMAND_BUFFER_USAGE_RENDER_PASS_CONTINUE_BIT" == j.get< std::string >() ) {
      p = CommandBufferUsageFlagBits :: eRenderPassContinue ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for CommandBufferUsageFlagBits" );
  }
  if( j.is_number() ) {
    p = CommandBufferUsageFlagBits ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for CommandBufferUsageFlagBits" );
}
inline void to_json( nlohmann::json &j, const CommandBufferUsageFlags &p ) {
  j = nlohmann::json::array();
  for( unsigned int n = 0u; n != sizeof( CommandBufferUsageFlagBits ) * 8u; ++n ) {
    if( p & CommandBufferUsageFlags ( 1 << n ) ) {
      nlohmann::json temp;
      to_json( temp, CommandBufferUsageFlagBits ( 1 << n ) );
      j.push_back( temp );
    }
  }
}
inline void from_json( const nlohmann::json &j, CommandBufferUsageFlags &p ) {
  if( j.is_array() ) {
    p = CommandBufferUsageFlags ( 0 );
    for( auto &e:  j ) {
      CommandBufferUsageFlagBits temp;
      from_json( e, temp );
      p |= temp;
    }
  }
  else throw vulkan2json::invalid_flag_value( "incompatible value for CommandBufferUsageFlags" );
}
}
#endif


#endif
