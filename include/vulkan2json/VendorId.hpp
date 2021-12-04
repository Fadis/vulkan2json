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
#ifndef VULKAN2JSON_VENDORID_HPP
#define VULKAN2JSON_VENDORID_HPP

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
inline void to_json( nlohmann::json &j, const VendorId &p ) {
  if( VendorId :: eVIV == p ) {
    j = "VIV";
    return;
  }
  if( VendorId :: eVSI == p ) {
    j = "VSI";
    return;
  }
  if( VendorId :: eKazan == p ) {
    j = "Kazan";
    return;
  }
  if( VendorId :: eCodeplay == p ) {
    j = "Codeplay";
    return;
  }
  if( VendorId :: eMESA == p ) {
    j = "MESA";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkVendorId &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: VendorId ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, VendorId &p ) {
  if( j.is_string() ) {
    if( "VIV" == j.get< std::string >() ) {
      p = VendorId :: eVIV ;
      return;
    }
    if( "eVIV" == j.get< std::string >() ) {
      p = VendorId :: eVIV ;
      return;
    }
    if( "VK_VENDOR_ID_VIV" == j.get< std::string >() ) {
      p = VendorId :: eVIV ;
      return;
    }
    if( "VSI" == j.get< std::string >() ) {
      p = VendorId :: eVSI ;
      return;
    }
    if( "eVSI" == j.get< std::string >() ) {
      p = VendorId :: eVSI ;
      return;
    }
    if( "VK_VENDOR_ID_VSI" == j.get< std::string >() ) {
      p = VendorId :: eVSI ;
      return;
    }
    if( "Kazan" == j.get< std::string >() ) {
      p = VendorId :: eKazan ;
      return;
    }
    if( "eKazan" == j.get< std::string >() ) {
      p = VendorId :: eKazan ;
      return;
    }
    if( "VK_VENDOR_ID_KAZAN" == j.get< std::string >() ) {
      p = VendorId :: eKazan ;
      return;
    }
    if( "Codeplay" == j.get< std::string >() ) {
      p = VendorId :: eCodeplay ;
      return;
    }
    if( "eCodeplay" == j.get< std::string >() ) {
      p = VendorId :: eCodeplay ;
      return;
    }
    if( "VK_VENDOR_ID_CODEPLAY" == j.get< std::string >() ) {
      p = VendorId :: eCodeplay ;
      return;
    }
    if( "MESA" == j.get< std::string >() ) {
      p = VendorId :: eMESA ;
      return;
    }
    if( "eMESA" == j.get< std::string >() ) {
      p = VendorId :: eMESA ;
      return;
    }
    if( "VK_VENDOR_ID_MESA" == j.get< std::string >() ) {
      p = VendorId :: eMESA ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for VendorId" );
  }
  if( j.is_number() ) {
    p = VendorId ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for VendorId" );
}
}
inline void from_json( const nlohmann::json &j, VkVendorId &p ) {
  VULKAN_HPP_NAMESPACE :: VendorId temp;
  from_json( j, temp );
  p = VkVendorId ( temp );
}
#endif


#endif
