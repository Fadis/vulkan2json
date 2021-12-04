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
#ifndef VULKAN2JSON_LOGICOP_HPP
#define VULKAN2JSON_LOGICOP_HPP

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
inline void to_json( nlohmann::json &j, const LogicOp &p ) {
  if( LogicOp :: eClear == p ) {
    j = "Clear";
    return;
  }
  if( LogicOp :: eAnd == p ) {
    j = "And";
    return;
  }
  if( LogicOp :: eAndReverse == p ) {
    j = "AndReverse";
    return;
  }
  if( LogicOp :: eCopy == p ) {
    j = "Copy";
    return;
  }
  if( LogicOp :: eAndInverted == p ) {
    j = "AndInverted";
    return;
  }
  if( LogicOp :: eNoOp == p ) {
    j = "NoOp";
    return;
  }
  if( LogicOp :: eXor == p ) {
    j = "Xor";
    return;
  }
  if( LogicOp :: eOr == p ) {
    j = "Or";
    return;
  }
  if( LogicOp :: eNor == p ) {
    j = "Nor";
    return;
  }
  if( LogicOp :: eEquivalent == p ) {
    j = "Equivalent";
    return;
  }
  if( LogicOp :: eInvert == p ) {
    j = "Invert";
    return;
  }
  if( LogicOp :: eOrReverse == p ) {
    j = "OrReverse";
    return;
  }
  if( LogicOp :: eCopyInverted == p ) {
    j = "CopyInverted";
    return;
  }
  if( LogicOp :: eOrInverted == p ) {
    j = "OrInverted";
    return;
  }
  if( LogicOp :: eNand == p ) {
    j = "Nand";
    return;
  }
}
}
inline void to_json( nlohmann::json &j, const VkLogicOp &p ) {
  to_json( j, VULKAN_HPP_NAMESPACE :: LogicOp ( p ) );
}
namespace VULKAN_HPP_NAMESPACE {
inline void from_json( const nlohmann::json &j, LogicOp &p ) {
  if( j.is_string() ) {
    if( "Clear" == j.get< std::string >() ) {
      p = LogicOp :: eClear ;
      return;
    }
    if( "eClear" == j.get< std::string >() ) {
      p = LogicOp :: eClear ;
      return;
    }
    if( "VK_LOGIC_OP_CLEAR" == j.get< std::string >() ) {
      p = LogicOp :: eClear ;
      return;
    }
    if( "And" == j.get< std::string >() ) {
      p = LogicOp :: eAnd ;
      return;
    }
    if( "eAnd" == j.get< std::string >() ) {
      p = LogicOp :: eAnd ;
      return;
    }
    if( "VK_LOGIC_OP_AND" == j.get< std::string >() ) {
      p = LogicOp :: eAnd ;
      return;
    }
    if( "AndReverse" == j.get< std::string >() ) {
      p = LogicOp :: eAndReverse ;
      return;
    }
    if( "eAndReverse" == j.get< std::string >() ) {
      p = LogicOp :: eAndReverse ;
      return;
    }
    if( "VK_LOGIC_OP_AND_REVERSE" == j.get< std::string >() ) {
      p = LogicOp :: eAndReverse ;
      return;
    }
    if( "Copy" == j.get< std::string >() ) {
      p = LogicOp :: eCopy ;
      return;
    }
    if( "eCopy" == j.get< std::string >() ) {
      p = LogicOp :: eCopy ;
      return;
    }
    if( "VK_LOGIC_OP_COPY" == j.get< std::string >() ) {
      p = LogicOp :: eCopy ;
      return;
    }
    if( "AndInverted" == j.get< std::string >() ) {
      p = LogicOp :: eAndInverted ;
      return;
    }
    if( "eAndInverted" == j.get< std::string >() ) {
      p = LogicOp :: eAndInverted ;
      return;
    }
    if( "VK_LOGIC_OP_AND_INVERTED" == j.get< std::string >() ) {
      p = LogicOp :: eAndInverted ;
      return;
    }
    if( "NoOp" == j.get< std::string >() ) {
      p = LogicOp :: eNoOp ;
      return;
    }
    if( "eNoOp" == j.get< std::string >() ) {
      p = LogicOp :: eNoOp ;
      return;
    }
    if( "VK_LOGIC_OP_NO_OP" == j.get< std::string >() ) {
      p = LogicOp :: eNoOp ;
      return;
    }
    if( "Xor" == j.get< std::string >() ) {
      p = LogicOp :: eXor ;
      return;
    }
    if( "eXor" == j.get< std::string >() ) {
      p = LogicOp :: eXor ;
      return;
    }
    if( "VK_LOGIC_OP_XOR" == j.get< std::string >() ) {
      p = LogicOp :: eXor ;
      return;
    }
    if( "Or" == j.get< std::string >() ) {
      p = LogicOp :: eOr ;
      return;
    }
    if( "eOr" == j.get< std::string >() ) {
      p = LogicOp :: eOr ;
      return;
    }
    if( "VK_LOGIC_OP_OR" == j.get< std::string >() ) {
      p = LogicOp :: eOr ;
      return;
    }
    if( "Nor" == j.get< std::string >() ) {
      p = LogicOp :: eNor ;
      return;
    }
    if( "eNor" == j.get< std::string >() ) {
      p = LogicOp :: eNor ;
      return;
    }
    if( "VK_LOGIC_OP_NOR" == j.get< std::string >() ) {
      p = LogicOp :: eNor ;
      return;
    }
    if( "Equivalent" == j.get< std::string >() ) {
      p = LogicOp :: eEquivalent ;
      return;
    }
    if( "eEquivalent" == j.get< std::string >() ) {
      p = LogicOp :: eEquivalent ;
      return;
    }
    if( "VK_LOGIC_OP_EQUIVALENT" == j.get< std::string >() ) {
      p = LogicOp :: eEquivalent ;
      return;
    }
    if( "Invert" == j.get< std::string >() ) {
      p = LogicOp :: eInvert ;
      return;
    }
    if( "eInvert" == j.get< std::string >() ) {
      p = LogicOp :: eInvert ;
      return;
    }
    if( "VK_LOGIC_OP_INVERT" == j.get< std::string >() ) {
      p = LogicOp :: eInvert ;
      return;
    }
    if( "OrReverse" == j.get< std::string >() ) {
      p = LogicOp :: eOrReverse ;
      return;
    }
    if( "eOrReverse" == j.get< std::string >() ) {
      p = LogicOp :: eOrReverse ;
      return;
    }
    if( "VK_LOGIC_OP_OR_REVERSE" == j.get< std::string >() ) {
      p = LogicOp :: eOrReverse ;
      return;
    }
    if( "CopyInverted" == j.get< std::string >() ) {
      p = LogicOp :: eCopyInverted ;
      return;
    }
    if( "eCopyInverted" == j.get< std::string >() ) {
      p = LogicOp :: eCopyInverted ;
      return;
    }
    if( "VK_LOGIC_OP_COPY_INVERTED" == j.get< std::string >() ) {
      p = LogicOp :: eCopyInverted ;
      return;
    }
    if( "OrInverted" == j.get< std::string >() ) {
      p = LogicOp :: eOrInverted ;
      return;
    }
    if( "eOrInverted" == j.get< std::string >() ) {
      p = LogicOp :: eOrInverted ;
      return;
    }
    if( "VK_LOGIC_OP_OR_INVERTED" == j.get< std::string >() ) {
      p = LogicOp :: eOrInverted ;
      return;
    }
    if( "Nand" == j.get< std::string >() ) {
      p = LogicOp :: eNand ;
      return;
    }
    if( "eNand" == j.get< std::string >() ) {
      p = LogicOp :: eNand ;
      return;
    }
    if( "VK_LOGIC_OP_NAND" == j.get< std::string >() ) {
      p = LogicOp :: eNand ;
      return;
    }
    throw vulkan2json::invalid_enum_value( "unknown enum name for LogicOp" );
  }
  if( j.is_number() ) {
    p = LogicOp ( j.get< std::int64_t >() );
  }
  throw vulkan2json::invalid_enum_value( "incompatible value for LogicOp" );
}
}
inline void from_json( const nlohmann::json &j, VkLogicOp &p ) {
  VULKAN_HPP_NAMESPACE :: LogicOp temp;
  from_json( j, temp );
  p = VkLogicOp ( temp );
}
#endif


#endif
