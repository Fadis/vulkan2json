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
#ifndef VULKAN2JSON_BLENDFACTOR_HPP
#define VULKAN2JSON_BLENDFACTOR_HPP

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
inline void to_json( nlohmann::json &j, const BlendFactor &p ) {
  if( BlendFactor :: eZero == p ) {
    j = "Zero";
    return;
  }
  if( BlendFactor :: eOne == p ) {
    j = "One";
    return;
  }
  if( BlendFactor :: eSrcColor == p ) {
    j = "SrcColor";
    return;
  }
  if( BlendFactor :: eOneMinusSrcColor == p ) {
    j = "OneMinusSrcColor";
    return;
  }
  if( BlendFactor :: eDstColor == p ) {
    j = "DstColor";
    return;
  }
  if( BlendFactor :: eOneMinusDstColor == p ) {
    j = "OneMinusDstColor";
    return;
  }
  if( BlendFactor :: eSrcAlpha == p ) {
    j = "SrcAlpha";
    return;
  }
  if( BlendFactor :: eOneMinusSrcAlpha == p ) {
    j = "OneMinusSrcAlpha";
    return;
  }
  if( BlendFactor :: eDstAlpha == p ) {
    j = "DstAlpha";
    return;
  }
  if( BlendFactor :: eOneMinusDstAlpha == p ) {
    j = "OneMinusDstAlpha";
    return;
  }
  if( BlendFactor :: eConstantColor == p ) {
    j = "ConstantColor";
    return;
  }
  if( BlendFactor :: eOneMinusConstantColor == p ) {
    j = "OneMinusConstantColor";
    return;
  }
  if( BlendFactor :: eConstantAlpha == p ) {
    j = "ConstantAlpha";
    return;
  }
  if( BlendFactor :: eOneMinusConstantAlpha == p ) {
    j = "OneMinusConstantAlpha";
    return;
  }
  if( BlendFactor :: eSrcAlphaSaturate == p ) {
    j = "SrcAlphaSaturate";
    return;
  }
  if( BlendFactor :: eSrc1Color == p ) {
    j = "Src1Color";
    return;
  }
  if( BlendFactor :: eOneMinusSrc1Color == p ) {
    j = "OneMinusSrc1Color";
    return;
  }
  if( BlendFactor :: eSrc1Alpha == p ) {
    j = "Src1Alpha";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkBlendFactor &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: BlendFactor ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, BlendFactor &p ) {
  if( j.is_string() ) {
    if( "Zero" == j.get< std::string >() ) {
      p = BlendFactor :: eZero ;
      return;
    }
    if( "eZero" == j.get< std::string >() ) {
      p = BlendFactor :: eZero ;
      return;
    }
    if( "VK_BLEND_FACTOR_ZERO" == j.get< std::string >() ) {
      p = BlendFactor :: eZero ;
      return;
    }
    if( "One" == j.get< std::string >() ) {
      p = BlendFactor :: eOne ;
      return;
    }
    if( "eOne" == j.get< std::string >() ) {
      p = BlendFactor :: eOne ;
      return;
    }
    if( "VK_BLEND_FACTOR_ONE" == j.get< std::string >() ) {
      p = BlendFactor :: eOne ;
      return;
    }
    if( "SrcColor" == j.get< std::string >() ) {
      p = BlendFactor :: eSrcColor ;
      return;
    }
    if( "eSrcColor" == j.get< std::string >() ) {
      p = BlendFactor :: eSrcColor ;
      return;
    }
    if( "VK_BLEND_FACTOR_SRC_COLOR" == j.get< std::string >() ) {
      p = BlendFactor :: eSrcColor ;
      return;
    }
    if( "OneMinusSrcColor" == j.get< std::string >() ) {
      p = BlendFactor :: eOneMinusSrcColor ;
      return;
    }
    if( "eOneMinusSrcColor" == j.get< std::string >() ) {
      p = BlendFactor :: eOneMinusSrcColor ;
      return;
    }
    if( "VK_BLEND_FACTOR_ONE_MINUS_SRC_COLOR" == j.get< std::string >() ) {
      p = BlendFactor :: eOneMinusSrcColor ;
      return;
    }
    if( "DstColor" == j.get< std::string >() ) {
      p = BlendFactor :: eDstColor ;
      return;
    }
    if( "eDstColor" == j.get< std::string >() ) {
      p = BlendFactor :: eDstColor ;
      return;
    }
    if( "VK_BLEND_FACTOR_DST_COLOR" == j.get< std::string >() ) {
      p = BlendFactor :: eDstColor ;
      return;
    }
    if( "OneMinusDstColor" == j.get< std::string >() ) {
      p = BlendFactor :: eOneMinusDstColor ;
      return;
    }
    if( "eOneMinusDstColor" == j.get< std::string >() ) {
      p = BlendFactor :: eOneMinusDstColor ;
      return;
    }
    if( "VK_BLEND_FACTOR_ONE_MINUS_DST_COLOR" == j.get< std::string >() ) {
      p = BlendFactor :: eOneMinusDstColor ;
      return;
    }
    if( "SrcAlpha" == j.get< std::string >() ) {
      p = BlendFactor :: eSrcAlpha ;
      return;
    }
    if( "eSrcAlpha" == j.get< std::string >() ) {
      p = BlendFactor :: eSrcAlpha ;
      return;
    }
    if( "VK_BLEND_FACTOR_SRC_ALPHA" == j.get< std::string >() ) {
      p = BlendFactor :: eSrcAlpha ;
      return;
    }
    if( "OneMinusSrcAlpha" == j.get< std::string >() ) {
      p = BlendFactor :: eOneMinusSrcAlpha ;
      return;
    }
    if( "eOneMinusSrcAlpha" == j.get< std::string >() ) {
      p = BlendFactor :: eOneMinusSrcAlpha ;
      return;
    }
    if( "VK_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA" == j.get< std::string >() ) {
      p = BlendFactor :: eOneMinusSrcAlpha ;
      return;
    }
    if( "DstAlpha" == j.get< std::string >() ) {
      p = BlendFactor :: eDstAlpha ;
      return;
    }
    if( "eDstAlpha" == j.get< std::string >() ) {
      p = BlendFactor :: eDstAlpha ;
      return;
    }
    if( "VK_BLEND_FACTOR_DST_ALPHA" == j.get< std::string >() ) {
      p = BlendFactor :: eDstAlpha ;
      return;
    }
    if( "OneMinusDstAlpha" == j.get< std::string >() ) {
      p = BlendFactor :: eOneMinusDstAlpha ;
      return;
    }
    if( "eOneMinusDstAlpha" == j.get< std::string >() ) {
      p = BlendFactor :: eOneMinusDstAlpha ;
      return;
    }
    if( "VK_BLEND_FACTOR_ONE_MINUS_DST_ALPHA" == j.get< std::string >() ) {
      p = BlendFactor :: eOneMinusDstAlpha ;
      return;
    }
    if( "ConstantColor" == j.get< std::string >() ) {
      p = BlendFactor :: eConstantColor ;
      return;
    }
    if( "eConstantColor" == j.get< std::string >() ) {
      p = BlendFactor :: eConstantColor ;
      return;
    }
    if( "VK_BLEND_FACTOR_CONSTANT_COLOR" == j.get< std::string >() ) {
      p = BlendFactor :: eConstantColor ;
      return;
    }
    if( "OneMinusConstantColor" == j.get< std::string >() ) {
      p = BlendFactor :: eOneMinusConstantColor ;
      return;
    }
    if( "eOneMinusConstantColor" == j.get< std::string >() ) {
      p = BlendFactor :: eOneMinusConstantColor ;
      return;
    }
    if( "VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR" == j.get< std::string >() ) {
      p = BlendFactor :: eOneMinusConstantColor ;
      return;
    }
    if( "ConstantAlpha" == j.get< std::string >() ) {
      p = BlendFactor :: eConstantAlpha ;
      return;
    }
    if( "eConstantAlpha" == j.get< std::string >() ) {
      p = BlendFactor :: eConstantAlpha ;
      return;
    }
    if( "VK_BLEND_FACTOR_CONSTANT_ALPHA" == j.get< std::string >() ) {
      p = BlendFactor :: eConstantAlpha ;
      return;
    }
    if( "OneMinusConstantAlpha" == j.get< std::string >() ) {
      p = BlendFactor :: eOneMinusConstantAlpha ;
      return;
    }
    if( "eOneMinusConstantAlpha" == j.get< std::string >() ) {
      p = BlendFactor :: eOneMinusConstantAlpha ;
      return;
    }
    if( "VK_BLEND_FACTOR_ONE_MINUS_CONSTANT_ALPHA" == j.get< std::string >() ) {
      p = BlendFactor :: eOneMinusConstantAlpha ;
      return;
    }
    if( "SrcAlphaSaturate" == j.get< std::string >() ) {
      p = BlendFactor :: eSrcAlphaSaturate ;
      return;
    }
    if( "eSrcAlphaSaturate" == j.get< std::string >() ) {
      p = BlendFactor :: eSrcAlphaSaturate ;
      return;
    }
    if( "VK_BLEND_FACTOR_SRC_ALPHA_SATURATE" == j.get< std::string >() ) {
      p = BlendFactor :: eSrcAlphaSaturate ;
      return;
    }
    if( "Src1Color" == j.get< std::string >() ) {
      p = BlendFactor :: eSrc1Color ;
      return;
    }
    if( "eSrc1Color" == j.get< std::string >() ) {
      p = BlendFactor :: eSrc1Color ;
      return;
    }
    if( "VK_BLEND_FACTOR_SRC1_COLOR" == j.get< std::string >() ) {
      p = BlendFactor :: eSrc1Color ;
      return;
    }
    if( "OneMinusSrc1Color" == j.get< std::string >() ) {
      p = BlendFactor :: eOneMinusSrc1Color ;
      return;
    }
    if( "eOneMinusSrc1Color" == j.get< std::string >() ) {
      p = BlendFactor :: eOneMinusSrc1Color ;
      return;
    }
    if( "VK_BLEND_FACTOR_ONE_MINUS_SRC1_COLOR" == j.get< std::string >() ) {
      p = BlendFactor :: eOneMinusSrc1Color ;
      return;
    }
    if( "Src1Alpha" == j.get< std::string >() ) {
      p = BlendFactor :: eSrc1Alpha ;
      return;
    }
    if( "eSrc1Alpha" == j.get< std::string >() ) {
      p = BlendFactor :: eSrc1Alpha ;
      return;
    }
    if( "VK_BLEND_FACTOR_SRC1_ALPHA" == j.get< std::string >() ) {
      p = BlendFactor :: eSrc1Alpha ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for BlendFactor" );
  }
  if( j.is_number() ) {
    p = BlendFactor ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for BlendFactor" );
}
}
inline void from_json( const nlohmann::json &j, VkBlendFactor &p ) {
  VULKAN_HPP_NAMESPACE :: BlendFactor temp;
  from_json( j, temp );
  p = VkBlendFactor ( temp );
}
#endif


#endif
