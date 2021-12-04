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
#ifndef VULKAN2JSON_INDIRECTCOMMANDSTOKENTYPENV_HPP
#define VULKAN2JSON_INDIRECTCOMMANDSTOKENTYPENV_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_NV_DEVICE_GENERATED_COMMANDS_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const IndirectCommandsTokenTypeNV &p ) {
  if( IndirectCommandsTokenTypeNV :: eShaderGroup == p ) {
    j = "ShaderGroup";
    return;
  }
  if( IndirectCommandsTokenTypeNV :: eStateFlags == p ) {
    j = "StateFlags";
    return;
  }
  if( IndirectCommandsTokenTypeNV :: eIndexBuffer == p ) {
    j = "IndexBuffer";
    return;
  }
  if( IndirectCommandsTokenTypeNV :: eVertexBuffer == p ) {
    j = "VertexBuffer";
    return;
  }
  if( IndirectCommandsTokenTypeNV :: ePushConstant == p ) {
    j = "PushConstant";
    return;
  }
  if( IndirectCommandsTokenTypeNV :: eDrawIndexed == p ) {
    j = "DrawIndexed";
    return;
  }
  if( IndirectCommandsTokenTypeNV :: eDraw == p ) {
    j = "Draw";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkIndirectCommandsTokenTypeNV &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: IndirectCommandsTokenTypeNV ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, IndirectCommandsTokenTypeNV &p ) {
  if( j.is_string() ) {
    if( "ShaderGroup" == j.get< std::string >() ) {
      p = IndirectCommandsTokenTypeNV :: eShaderGroup ;
      return;
    }
    if( "eShaderGroup" == j.get< std::string >() ) {
      p = IndirectCommandsTokenTypeNV :: eShaderGroup ;
      return;
    }
    if( "VK_INDIRECT_COMMANDS_TOKEN_TYPE_SHADER_GROUP_NV" == j.get< std::string >() ) {
      p = IndirectCommandsTokenTypeNV :: eShaderGroup ;
      return;
    }
    if( "StateFlags" == j.get< std::string >() ) {
      p = IndirectCommandsTokenTypeNV :: eStateFlags ;
      return;
    }
    if( "eStateFlags" == j.get< std::string >() ) {
      p = IndirectCommandsTokenTypeNV :: eStateFlags ;
      return;
    }
    if( "VK_INDIRECT_COMMANDS_TOKEN_TYPE_STATE_FLAGS_NV" == j.get< std::string >() ) {
      p = IndirectCommandsTokenTypeNV :: eStateFlags ;
      return;
    }
    if( "IndexBuffer" == j.get< std::string >() ) {
      p = IndirectCommandsTokenTypeNV :: eIndexBuffer ;
      return;
    }
    if( "eIndexBuffer" == j.get< std::string >() ) {
      p = IndirectCommandsTokenTypeNV :: eIndexBuffer ;
      return;
    }
    if( "VK_INDIRECT_COMMANDS_TOKEN_TYPE_INDEX_BUFFER_NV" == j.get< std::string >() ) {
      p = IndirectCommandsTokenTypeNV :: eIndexBuffer ;
      return;
    }
    if( "VertexBuffer" == j.get< std::string >() ) {
      p = IndirectCommandsTokenTypeNV :: eVertexBuffer ;
      return;
    }
    if( "eVertexBuffer" == j.get< std::string >() ) {
      p = IndirectCommandsTokenTypeNV :: eVertexBuffer ;
      return;
    }
    if( "VK_INDIRECT_COMMANDS_TOKEN_TYPE_VERTEX_BUFFER_NV" == j.get< std::string >() ) {
      p = IndirectCommandsTokenTypeNV :: eVertexBuffer ;
      return;
    }
    if( "PushConstant" == j.get< std::string >() ) {
      p = IndirectCommandsTokenTypeNV :: ePushConstant ;
      return;
    }
    if( "ePushConstant" == j.get< std::string >() ) {
      p = IndirectCommandsTokenTypeNV :: ePushConstant ;
      return;
    }
    if( "VK_INDIRECT_COMMANDS_TOKEN_TYPE_PUSH_CONSTANT_NV" == j.get< std::string >() ) {
      p = IndirectCommandsTokenTypeNV :: ePushConstant ;
      return;
    }
    if( "DrawIndexed" == j.get< std::string >() ) {
      p = IndirectCommandsTokenTypeNV :: eDrawIndexed ;
      return;
    }
    if( "eDrawIndexed" == j.get< std::string >() ) {
      p = IndirectCommandsTokenTypeNV :: eDrawIndexed ;
      return;
    }
    if( "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_INDEXED_NV" == j.get< std::string >() ) {
      p = IndirectCommandsTokenTypeNV :: eDrawIndexed ;
      return;
    }
    if( "Draw" == j.get< std::string >() ) {
      p = IndirectCommandsTokenTypeNV :: eDraw ;
      return;
    }
    if( "eDraw" == j.get< std::string >() ) {
      p = IndirectCommandsTokenTypeNV :: eDraw ;
      return;
    }
    if( "VK_INDIRECT_COMMANDS_TOKEN_TYPE_DRAW_NV" == j.get< std::string >() ) {
      p = IndirectCommandsTokenTypeNV :: eDraw ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for IndirectCommandsTokenTypeNV" );
  }
  if( j.is_number() ) {
    p = IndirectCommandsTokenTypeNV ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for IndirectCommandsTokenTypeNV" );
}
}
inline void from_json( const nlohmann::json &j, VkIndirectCommandsTokenTypeNV &p ) {
  VULKAN_HPP_NAMESPACE :: IndirectCommandsTokenTypeNV temp;
  from_json( j, temp );
  p = VkIndirectCommandsTokenTypeNV ( temp );
}
#endif


#endif
