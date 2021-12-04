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
#ifndef VULKAN2JSON_VALIDATIONFEATUREDISABLEEXT_HPP
#define VULKAN2JSON_VALIDATIONFEATUREDISABLEEXT_HPP

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
inline void to_json( nlohmann::json &j, const ValidationFeatureDisableEXT &p ) {
  if( ValidationFeatureDisableEXT :: eAll == p ) {
    j = "All";
    return;
  }
  if( ValidationFeatureDisableEXT :: eShaders == p ) {
    j = "Shaders";
    return;
  }
  if( ValidationFeatureDisableEXT :: eThreadSafety == p ) {
    j = "ThreadSafety";
    return;
  }
  if( ValidationFeatureDisableEXT :: eApiParameters == p ) {
    j = "ApiParameters";
    return;
  }
  if( ValidationFeatureDisableEXT :: eObjectLifetimes == p ) {
    j = "ObjectLifetimes";
    return;
  }
  if( ValidationFeatureDisableEXT :: eCoreChecks == p ) {
    j = "CoreChecks";
    return;
  }
  if( ValidationFeatureDisableEXT :: eUniqueHandles == p ) {
    j = "UniqueHandles";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkValidationFeatureDisableEXT &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: ValidationFeatureDisableEXT ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, ValidationFeatureDisableEXT &p ) {
  if( j.is_string() ) {
    if( "All" == j.get< std::string >() ) {
      p = ValidationFeatureDisableEXT :: eAll ;
      return;
    }
    if( "eAll" == j.get< std::string >() ) {
      p = ValidationFeatureDisableEXT :: eAll ;
      return;
    }
    if( "VK_VALIDATION_FEATURE_DISABLE_ALL_EXT" == j.get< std::string >() ) {
      p = ValidationFeatureDisableEXT :: eAll ;
      return;
    }
    if( "Shaders" == j.get< std::string >() ) {
      p = ValidationFeatureDisableEXT :: eShaders ;
      return;
    }
    if( "eShaders" == j.get< std::string >() ) {
      p = ValidationFeatureDisableEXT :: eShaders ;
      return;
    }
    if( "VK_VALIDATION_FEATURE_DISABLE_SHADERS_EXT" == j.get< std::string >() ) {
      p = ValidationFeatureDisableEXT :: eShaders ;
      return;
    }
    if( "ThreadSafety" == j.get< std::string >() ) {
      p = ValidationFeatureDisableEXT :: eThreadSafety ;
      return;
    }
    if( "eThreadSafety" == j.get< std::string >() ) {
      p = ValidationFeatureDisableEXT :: eThreadSafety ;
      return;
    }
    if( "VK_VALIDATION_FEATURE_DISABLE_THREAD_SAFETY_EXT" == j.get< std::string >() ) {
      p = ValidationFeatureDisableEXT :: eThreadSafety ;
      return;
    }
    if( "ApiParameters" == j.get< std::string >() ) {
      p = ValidationFeatureDisableEXT :: eApiParameters ;
      return;
    }
    if( "eApiParameters" == j.get< std::string >() ) {
      p = ValidationFeatureDisableEXT :: eApiParameters ;
      return;
    }
    if( "VK_VALIDATION_FEATURE_DISABLE_API_PARAMETERS_EXT" == j.get< std::string >() ) {
      p = ValidationFeatureDisableEXT :: eApiParameters ;
      return;
    }
    if( "ObjectLifetimes" == j.get< std::string >() ) {
      p = ValidationFeatureDisableEXT :: eObjectLifetimes ;
      return;
    }
    if( "eObjectLifetimes" == j.get< std::string >() ) {
      p = ValidationFeatureDisableEXT :: eObjectLifetimes ;
      return;
    }
    if( "VK_VALIDATION_FEATURE_DISABLE_OBJECT_LIFETIMES_EXT" == j.get< std::string >() ) {
      p = ValidationFeatureDisableEXT :: eObjectLifetimes ;
      return;
    }
    if( "CoreChecks" == j.get< std::string >() ) {
      p = ValidationFeatureDisableEXT :: eCoreChecks ;
      return;
    }
    if( "eCoreChecks" == j.get< std::string >() ) {
      p = ValidationFeatureDisableEXT :: eCoreChecks ;
      return;
    }
    if( "VK_VALIDATION_FEATURE_DISABLE_CORE_CHECKS_EXT" == j.get< std::string >() ) {
      p = ValidationFeatureDisableEXT :: eCoreChecks ;
      return;
    }
    if( "UniqueHandles" == j.get< std::string >() ) {
      p = ValidationFeatureDisableEXT :: eUniqueHandles ;
      return;
    }
    if( "eUniqueHandles" == j.get< std::string >() ) {
      p = ValidationFeatureDisableEXT :: eUniqueHandles ;
      return;
    }
    if( "VK_VALIDATION_FEATURE_DISABLE_UNIQUE_HANDLES_EXT" == j.get< std::string >() ) {
      p = ValidationFeatureDisableEXT :: eUniqueHandles ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for ValidationFeatureDisableEXT" );
  }
  if( j.is_number() ) {
    p = ValidationFeatureDisableEXT ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for ValidationFeatureDisableEXT" );
}
}
inline void from_json( const nlohmann::json &j, VkValidationFeatureDisableEXT &p ) {
  VULKAN_HPP_NAMESPACE :: ValidationFeatureDisableEXT temp;
  from_json( j, temp );
  p = VkValidationFeatureDisableEXT ( temp );
}
#endif


#endif
