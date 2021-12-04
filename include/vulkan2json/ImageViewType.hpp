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
#ifndef VULKAN2JSON_IMAGEVIEWTYPE_HPP
#define VULKAN2JSON_IMAGEVIEWTYPE_HPP

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
inline void to_json( nlohmann::json &j, const ImageViewType &p ) {
  if( ImageViewType :: e1D == p ) {
    j = "1D";
    return;
  }
  if( ImageViewType :: e2D == p ) {
    j = "2D";
    return;
  }
  if( ImageViewType :: e3D == p ) {
    j = "3D";
    return;
  }
  if( ImageViewType :: eCube == p ) {
    j = "Cube";
    return;
  }
  if( ImageViewType :: e1DArray == p ) {
    j = "1DArray";
    return;
  }
  if( ImageViewType :: e2DArray == p ) {
    j = "2DArray";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkImageViewType &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: ImageViewType ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, ImageViewType &p ) {
  if( j.is_string() ) {
    if( "1D" == j.get< std::string >() ) {
      p = ImageViewType :: e1D ;
      return;
    }
    if( "e1D" == j.get< std::string >() ) {
      p = ImageViewType :: e1D ;
      return;
    }
    if( "VK_IMAGE_VIEW_TYPE_1D" == j.get< std::string >() ) {
      p = ImageViewType :: e1D ;
      return;
    }
    if( "2D" == j.get< std::string >() ) {
      p = ImageViewType :: e2D ;
      return;
    }
    if( "e2D" == j.get< std::string >() ) {
      p = ImageViewType :: e2D ;
      return;
    }
    if( "VK_IMAGE_VIEW_TYPE_2D" == j.get< std::string >() ) {
      p = ImageViewType :: e2D ;
      return;
    }
    if( "3D" == j.get< std::string >() ) {
      p = ImageViewType :: e3D ;
      return;
    }
    if( "e3D" == j.get< std::string >() ) {
      p = ImageViewType :: e3D ;
      return;
    }
    if( "VK_IMAGE_VIEW_TYPE_3D" == j.get< std::string >() ) {
      p = ImageViewType :: e3D ;
      return;
    }
    if( "Cube" == j.get< std::string >() ) {
      p = ImageViewType :: eCube ;
      return;
    }
    if( "eCube" == j.get< std::string >() ) {
      p = ImageViewType :: eCube ;
      return;
    }
    if( "VK_IMAGE_VIEW_TYPE_CUBE" == j.get< std::string >() ) {
      p = ImageViewType :: eCube ;
      return;
    }
    if( "1DArray" == j.get< std::string >() ) {
      p = ImageViewType :: e1DArray ;
      return;
    }
    if( "e1DArray" == j.get< std::string >() ) {
      p = ImageViewType :: e1DArray ;
      return;
    }
    if( "VK_IMAGE_VIEW_TYPE_1D_ARRAY" == j.get< std::string >() ) {
      p = ImageViewType :: e1DArray ;
      return;
    }
    if( "2DArray" == j.get< std::string >() ) {
      p = ImageViewType :: e2DArray ;
      return;
    }
    if( "e2DArray" == j.get< std::string >() ) {
      p = ImageViewType :: e2DArray ;
      return;
    }
    if( "VK_IMAGE_VIEW_TYPE_2D_ARRAY" == j.get< std::string >() ) {
      p = ImageViewType :: e2DArray ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ImageViewType" );
  }
  if( j.is_number() ) {
    p = ImageViewType ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ImageViewType" );
}
}
inline void from_json( const nlohmann::json &j, VkImageViewType &p ) {
  VULKAN_HPP_NAMESPACE :: ImageViewType temp;
  from_json( j, temp );
  p = VkImageViewType ( temp );
}
#endif


#endif
