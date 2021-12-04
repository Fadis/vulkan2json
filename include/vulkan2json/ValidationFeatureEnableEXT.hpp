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
#ifndef VULKAN2JSON_VALIDATIONFEATUREENABLEEXT_HPP
#define VULKAN2JSON_VALIDATIONFEATUREENABLEEXT_HPP

#include <cstddef>
#include <cstdint>
#include <utility>
#include <cstring>
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/exceptions.hpp>

#ifdef VK_EXT_VALIDATION_FEATURES_EXTENSION_NAME
namespace VULKAN_HPP_NAMESPACE {
inline void to_json( nlohmann::json &j, const ValidationFeatureEnableEXT &p ) {
  if( ValidationFeatureEnableEXT :: eGpuAssisted == p ) {
    j = "GpuAssisted";
    return;
  }
  if( ValidationFeatureEnableEXT :: eGpuAssistedReserveBindingSlot == p ) {
    j = "GpuAssistedReserveBindingSlot";
    return;
  }
  if( ValidationFeatureEnableEXT :: eBestPractices == p ) {
    j = "BestPractices";
    return;
  }
  if( ValidationFeatureEnableEXT :: eDebugPrintf == p ) {
    j = "DebugPrintf";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkValidationFeatureEnableEXT &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: ValidationFeatureEnableEXT ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, ValidationFeatureEnableEXT &p ) {
  if( j.is_string() ) {
    if( "GpuAssisted" == j.get< std::string >() ) {
      p = ValidationFeatureEnableEXT :: eGpuAssisted ;
      return;
    }
    if( "eGpuAssisted" == j.get< std::string >() ) {
      p = ValidationFeatureEnableEXT :: eGpuAssisted ;
      return;
    }
    if( "VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_EXT" == j.get< std::string >() ) {
      p = ValidationFeatureEnableEXT :: eGpuAssisted ;
      return;
    }
    if( "GpuAssistedReserveBindingSlot" == j.get< std::string >() ) {
      p = ValidationFeatureEnableEXT :: eGpuAssistedReserveBindingSlot ;
      return;
    }
    if( "eGpuAssistedReserveBindingSlot" == j.get< std::string >() ) {
      p = ValidationFeatureEnableEXT :: eGpuAssistedReserveBindingSlot ;
      return;
    }
    if( "VK_VALIDATION_FEATURE_ENABLE_GPU_ASSISTED_RESERVE_BINDING_SLOT_EXT" == j.get< std::string >() ) {
      p = ValidationFeatureEnableEXT :: eGpuAssistedReserveBindingSlot ;
      return;
    }
    if( "BestPractices" == j.get< std::string >() ) {
      p = ValidationFeatureEnableEXT :: eBestPractices ;
      return;
    }
    if( "eBestPractices" == j.get< std::string >() ) {
      p = ValidationFeatureEnableEXT :: eBestPractices ;
      return;
    }
    if( "VK_VALIDATION_FEATURE_ENABLE_BEST_PRACTICES_EXT" == j.get< std::string >() ) {
      p = ValidationFeatureEnableEXT :: eBestPractices ;
      return;
    }
    if( "DebugPrintf" == j.get< std::string >() ) {
      p = ValidationFeatureEnableEXT :: eDebugPrintf ;
      return;
    }
    if( "eDebugPrintf" == j.get< std::string >() ) {
      p = ValidationFeatureEnableEXT :: eDebugPrintf ;
      return;
    }
    if( "VK_VALIDATION_FEATURE_ENABLE_DEBUG_PRINTF_EXT" == j.get< std::string >() ) {
      p = ValidationFeatureEnableEXT :: eDebugPrintf ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ValidationFeatureEnableEXT" );
  }
  if( j.is_number() ) {
    p = ValidationFeatureEnableEXT ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ValidationFeatureEnableEXT" );
}
}
inline void from_json( const nlohmann::json &j, VkValidationFeatureEnableEXT &p ) {
  VULKAN_HPP_NAMESPACE :: ValidationFeatureEnableEXT temp;
  from_json( j, temp );
  p = VkValidationFeatureEnableEXT ( temp );
}
#endif


#endif
