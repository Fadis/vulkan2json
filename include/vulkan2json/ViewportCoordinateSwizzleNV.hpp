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
#ifndef VULKAN2JSON_VIEWPORTCOORDINATESWIZZLENV_HPP
#define VULKAN2JSON_VIEWPORTCOORDINATESWIZZLENV_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_NV_VIEWPORT_SWIZZLE_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const ViewportCoordinateSwizzleNV &p ) {
  if( ViewportCoordinateSwizzleNV :: ePositiveX == p ) {
    j = "PositiveX";
    return;
  }
  if( ViewportCoordinateSwizzleNV :: eNegativeX == p ) {
    j = "NegativeX";
    return;
  }
  if( ViewportCoordinateSwizzleNV :: ePositiveY == p ) {
    j = "PositiveY";
    return;
  }
  if( ViewportCoordinateSwizzleNV :: eNegativeY == p ) {
    j = "NegativeY";
    return;
  }
  if( ViewportCoordinateSwizzleNV :: ePositiveZ == p ) {
    j = "PositiveZ";
    return;
  }
  if( ViewportCoordinateSwizzleNV :: eNegativeZ == p ) {
    j = "NegativeZ";
    return;
  }
  if( ViewportCoordinateSwizzleNV :: ePositiveW == p ) {
    j = "PositiveW";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkViewportCoordinateSwizzleNV &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: ViewportCoordinateSwizzleNV ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, ViewportCoordinateSwizzleNV &p ) {
  if( j.is_string() ) {
    if( "PositiveX" == j.get< std::string >() ) {
      p = ViewportCoordinateSwizzleNV :: ePositiveX ;
      return;
    }
    if( "ePositiveX" == j.get< std::string >() ) {
      p = ViewportCoordinateSwizzleNV :: ePositiveX ;
      return;
    }
    if( "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_X_NV" == j.get< std::string >() ) {
      p = ViewportCoordinateSwizzleNV :: ePositiveX ;
      return;
    }
    if( "NegativeX" == j.get< std::string >() ) {
      p = ViewportCoordinateSwizzleNV :: eNegativeX ;
      return;
    }
    if( "eNegativeX" == j.get< std::string >() ) {
      p = ViewportCoordinateSwizzleNV :: eNegativeX ;
      return;
    }
    if( "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_X_NV" == j.get< std::string >() ) {
      p = ViewportCoordinateSwizzleNV :: eNegativeX ;
      return;
    }
    if( "PositiveY" == j.get< std::string >() ) {
      p = ViewportCoordinateSwizzleNV :: ePositiveY ;
      return;
    }
    if( "ePositiveY" == j.get< std::string >() ) {
      p = ViewportCoordinateSwizzleNV :: ePositiveY ;
      return;
    }
    if( "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Y_NV" == j.get< std::string >() ) {
      p = ViewportCoordinateSwizzleNV :: ePositiveY ;
      return;
    }
    if( "NegativeY" == j.get< std::string >() ) {
      p = ViewportCoordinateSwizzleNV :: eNegativeY ;
      return;
    }
    if( "eNegativeY" == j.get< std::string >() ) {
      p = ViewportCoordinateSwizzleNV :: eNegativeY ;
      return;
    }
    if( "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Y_NV" == j.get< std::string >() ) {
      p = ViewportCoordinateSwizzleNV :: eNegativeY ;
      return;
    }
    if( "PositiveZ" == j.get< std::string >() ) {
      p = ViewportCoordinateSwizzleNV :: ePositiveZ ;
      return;
    }
    if( "ePositiveZ" == j.get< std::string >() ) {
      p = ViewportCoordinateSwizzleNV :: ePositiveZ ;
      return;
    }
    if( "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_Z_NV" == j.get< std::string >() ) {
      p = ViewportCoordinateSwizzleNV :: ePositiveZ ;
      return;
    }
    if( "NegativeZ" == j.get< std::string >() ) {
      p = ViewportCoordinateSwizzleNV :: eNegativeZ ;
      return;
    }
    if( "eNegativeZ" == j.get< std::string >() ) {
      p = ViewportCoordinateSwizzleNV :: eNegativeZ ;
      return;
    }
    if( "VK_VIEWPORT_COORDINATE_SWIZZLE_NEGATIVE_Z_NV" == j.get< std::string >() ) {
      p = ViewportCoordinateSwizzleNV :: eNegativeZ ;
      return;
    }
    if( "PositiveW" == j.get< std::string >() ) {
      p = ViewportCoordinateSwizzleNV :: ePositiveW ;
      return;
    }
    if( "ePositiveW" == j.get< std::string >() ) {
      p = ViewportCoordinateSwizzleNV :: ePositiveW ;
      return;
    }
    if( "VK_VIEWPORT_COORDINATE_SWIZZLE_POSITIVE_W_NV" == j.get< std::string >() ) {
      p = ViewportCoordinateSwizzleNV :: ePositiveW ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ViewportCoordinateSwizzleNV" );
  }
  if( j.is_number() ) {
    p = ViewportCoordinateSwizzleNV ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ViewportCoordinateSwizzleNV" );
}
}
inline void from_json( const nlohmann::json &j, VkViewportCoordinateSwizzleNV &p ) {
  VULKAN_HPP_NAMESPACE :: ViewportCoordinateSwizzleNV temp;
  from_json( j, temp );
  p = VkViewportCoordinateSwizzleNV ( temp );
}
#endif


#endif
