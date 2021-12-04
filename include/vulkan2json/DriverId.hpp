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
#ifndef VULKAN2JSON_DRIVERID_HPP
#define VULKAN2JSON_DRIVERID_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_VERSION_1_2
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const DriverId &p ) {
  if( DriverId :: eAmdProprietary == p ) {
    j = "AmdProprietary";
    return;
  }
  if( DriverId :: eAmdOpenSource == p ) {
    j = "AmdOpenSource";
    return;
  }
  if( DriverId :: eMesaRadv == p ) {
    j = "MesaRadv";
    return;
  }
  if( DriverId :: eNvidiaProprietary == p ) {
    j = "NvidiaProprietary";
    return;
  }
  if( DriverId :: eIntelProprietaryWindows == p ) {
    j = "IntelProprietaryWindows";
    return;
  }
  if( DriverId :: eIntelOpenSourceMESA == p ) {
    j = "IntelOpenSourceMESA";
    return;
  }
  if( DriverId :: eImaginationProprietary == p ) {
    j = "ImaginationProprietary";
    return;
  }
  if( DriverId :: eQualcommProprietary == p ) {
    j = "QualcommProprietary";
    return;
  }
  if( DriverId :: eArmProprietary == p ) {
    j = "ArmProprietary";
    return;
  }
  if( DriverId :: eGoogleSwiftshader == p ) {
    j = "GoogleSwiftshader";
    return;
  }
  if( DriverId :: eGgpProprietary == p ) {
    j = "GgpProprietary";
    return;
  }
  if( DriverId :: eBroadcomProprietary == p ) {
    j = "BroadcomProprietary";
    return;
  }
  if( DriverId :: eMesaLlvmpipe == p ) {
    j = "MesaLlvmpipe";
    return;
  }
  if( DriverId :: eMoltenvk == p ) {
    j = "Moltenvk";
    return;
  }
  if( DriverId :: eCoreaviProprietary == p ) {
    j = "CoreaviProprietary";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkDriverId &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: DriverId ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, DriverId &p ) {
  if( j.is_string() ) {
    if( "AmdProprietary" == j.get< std::string >() ) {
      p = DriverId :: eAmdProprietary ;
      return;
    }
    if( "eAmdProprietary" == j.get< std::string >() ) {
      p = DriverId :: eAmdProprietary ;
      return;
    }
    if( "VK_DRIVER_ID_AMD_PROPRIETARY" == j.get< std::string >() ) {
      p = DriverId :: eAmdProprietary ;
      return;
    }
    if( "AmdOpenSource" == j.get< std::string >() ) {
      p = DriverId :: eAmdOpenSource ;
      return;
    }
    if( "eAmdOpenSource" == j.get< std::string >() ) {
      p = DriverId :: eAmdOpenSource ;
      return;
    }
    if( "VK_DRIVER_ID_AMD_OPEN_SOURCE" == j.get< std::string >() ) {
      p = DriverId :: eAmdOpenSource ;
      return;
    }
    if( "MesaRadv" == j.get< std::string >() ) {
      p = DriverId :: eMesaRadv ;
      return;
    }
    if( "eMesaRadv" == j.get< std::string >() ) {
      p = DriverId :: eMesaRadv ;
      return;
    }
    if( "VK_DRIVER_ID_MESA_RADV" == j.get< std::string >() ) {
      p = DriverId :: eMesaRadv ;
      return;
    }
    if( "NvidiaProprietary" == j.get< std::string >() ) {
      p = DriverId :: eNvidiaProprietary ;
      return;
    }
    if( "eNvidiaProprietary" == j.get< std::string >() ) {
      p = DriverId :: eNvidiaProprietary ;
      return;
    }
    if( "VK_DRIVER_ID_NVIDIA_PROPRIETARY" == j.get< std::string >() ) {
      p = DriverId :: eNvidiaProprietary ;
      return;
    }
    if( "IntelProprietaryWindows" == j.get< std::string >() ) {
      p = DriverId :: eIntelProprietaryWindows ;
      return;
    }
    if( "eIntelProprietaryWindows" == j.get< std::string >() ) {
      p = DriverId :: eIntelProprietaryWindows ;
      return;
    }
    if( "VK_DRIVER_ID_INTEL_PROPRIETARY_WINDOWS" == j.get< std::string >() ) {
      p = DriverId :: eIntelProprietaryWindows ;
      return;
    }
    if( "IntelOpenSourceMESA" == j.get< std::string >() ) {
      p = DriverId :: eIntelOpenSourceMESA ;
      return;
    }
    if( "eIntelOpenSourceMESA" == j.get< std::string >() ) {
      p = DriverId :: eIntelOpenSourceMESA ;
      return;
    }
    if( "VK_DRIVER_ID_INTEL_OPEN_SOURCE_MESA" == j.get< std::string >() ) {
      p = DriverId :: eIntelOpenSourceMESA ;
      return;
    }
    if( "ImaginationProprietary" == j.get< std::string >() ) {
      p = DriverId :: eImaginationProprietary ;
      return;
    }
    if( "eImaginationProprietary" == j.get< std::string >() ) {
      p = DriverId :: eImaginationProprietary ;
      return;
    }
    if( "VK_DRIVER_ID_IMAGINATION_PROPRIETARY" == j.get< std::string >() ) {
      p = DriverId :: eImaginationProprietary ;
      return;
    }
    if( "QualcommProprietary" == j.get< std::string >() ) {
      p = DriverId :: eQualcommProprietary ;
      return;
    }
    if( "eQualcommProprietary" == j.get< std::string >() ) {
      p = DriverId :: eQualcommProprietary ;
      return;
    }
    if( "VK_DRIVER_ID_QUALCOMM_PROPRIETARY" == j.get< std::string >() ) {
      p = DriverId :: eQualcommProprietary ;
      return;
    }
    if( "ArmProprietary" == j.get< std::string >() ) {
      p = DriverId :: eArmProprietary ;
      return;
    }
    if( "eArmProprietary" == j.get< std::string >() ) {
      p = DriverId :: eArmProprietary ;
      return;
    }
    if( "VK_DRIVER_ID_ARM_PROPRIETARY" == j.get< std::string >() ) {
      p = DriverId :: eArmProprietary ;
      return;
    }
    if( "GoogleSwiftshader" == j.get< std::string >() ) {
      p = DriverId :: eGoogleSwiftshader ;
      return;
    }
    if( "eGoogleSwiftshader" == j.get< std::string >() ) {
      p = DriverId :: eGoogleSwiftshader ;
      return;
    }
    if( "VK_DRIVER_ID_GOOGLE_SWIFTSHADER" == j.get< std::string >() ) {
      p = DriverId :: eGoogleSwiftshader ;
      return;
    }
    if( "GgpProprietary" == j.get< std::string >() ) {
      p = DriverId :: eGgpProprietary ;
      return;
    }
    if( "eGgpProprietary" == j.get< std::string >() ) {
      p = DriverId :: eGgpProprietary ;
      return;
    }
    if( "VK_DRIVER_ID_GGP_PROPRIETARY" == j.get< std::string >() ) {
      p = DriverId :: eGgpProprietary ;
      return;
    }
    if( "BroadcomProprietary" == j.get< std::string >() ) {
      p = DriverId :: eBroadcomProprietary ;
      return;
    }
    if( "eBroadcomProprietary" == j.get< std::string >() ) {
      p = DriverId :: eBroadcomProprietary ;
      return;
    }
    if( "VK_DRIVER_ID_BROADCOM_PROPRIETARY" == j.get< std::string >() ) {
      p = DriverId :: eBroadcomProprietary ;
      return;
    }
    if( "MesaLlvmpipe" == j.get< std::string >() ) {
      p = DriverId :: eMesaLlvmpipe ;
      return;
    }
    if( "eMesaLlvmpipe" == j.get< std::string >() ) {
      p = DriverId :: eMesaLlvmpipe ;
      return;
    }
    if( "VK_DRIVER_ID_MESA_LLVMPIPE" == j.get< std::string >() ) {
      p = DriverId :: eMesaLlvmpipe ;
      return;
    }
    if( "Moltenvk" == j.get< std::string >() ) {
      p = DriverId :: eMoltenvk ;
      return;
    }
    if( "eMoltenvk" == j.get< std::string >() ) {
      p = DriverId :: eMoltenvk ;
      return;
    }
    if( "VK_DRIVER_ID_MOLTENVK" == j.get< std::string >() ) {
      p = DriverId :: eMoltenvk ;
      return;
    }
    if( "CoreaviProprietary" == j.get< std::string >() ) {
      p = DriverId :: eCoreaviProprietary ;
      return;
    }
    if( "eCoreaviProprietary" == j.get< std::string >() ) {
      p = DriverId :: eCoreaviProprietary ;
      return;
    }
    if( "VK_DRIVER_ID_COREAVI_PROPRIETARY" == j.get< std::string >() ) {
      p = DriverId :: eCoreaviProprietary ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for DriverId" );
  }
  if( j.is_number() ) {
    p = DriverId ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for DriverId" );
}
}
inline void from_json( const nlohmann::json &j, VkDriverId &p ) {
  VULKAN_HPP_NAMESPACE :: DriverId temp;
  from_json( j, temp );
  p = VkDriverId ( temp );
}
#endif


#endif
