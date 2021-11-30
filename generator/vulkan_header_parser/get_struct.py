#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
# Copyright (c) 2021 Naomasa Matsubayashi
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.
#


import json
import re
import copy
from enum import Enum
from vulkan_header_parser.vulkan_class_name import vulkan_class_name
from vulkan_header_parser.to_extension_name_def import to_extension_name_def
from vulkan_header_parser.get_end_of_typename import get_end_of_typename

e_rule = re.compile( '^e(.*)' )
const_char_pointer_rule = re.compile( '^\s*const\s+char\s+(const\s+)?\*\s*$' )
array_1d_rule = re.compile( '^\s*ArrayWrapper1D<\s*(\S+?)\s*,.*$' )
array_2d_rule = re.compile( '^\s*ArrayWrapper2D<\s*(\S+?)\s*,.*$' )

class member_type_t(Enum):
  ignored = 0
  vulkan_struct_type = 1
  vulkan_struct = 2
  vulkan_type = 3
  vulkan_handler = 4
  vulkan_c_struct = 5
  vulkan_c_handler = 6
  boolean = 7
  numeric = 8
  string = 9
  string_pointer = 10
  pointer = 11
  pointoid = 12
  array1d_of_numeric = 13
  array1d_of_vulkan_struct = 14
  array1d_of_vulkan_handler = 15
  array2d_of_numeric = 16
  array2d_of_vulkan_struct = 17
  array2d_of_vulkan_handler = 18

class vulkan_struct_member:
  def __init__( self, member_type, value_type, name, xor_defs ):
    self.member_type = member_type
    self.value_type = value_type
    self.name = name
    self.xor_defs = xor_defs

class vulkan_struct:
  def __init__( self, name_, defs_ ):
    self.name = vulkan_class_name( name_ )
    self.static_defs = copy.deepcopy( defs_ )
    self.members = []
    self.has_struct_type = False
  def add( self, type_, name_, defs_, handles, non_handles ):
    numeric_types = [ 'int', 'int8_t', 'uint8_t', 'int16_t', 'uint16_t', 'int32_t', 'uint32_t', 'int64_t', 'uint64_t', 'float', 'double', 'size_t', 'DWORD' ]
    vulkan_numeric_types = [
      'DeviceSize'
    ]
    vulkan_pointoid_types = [
      'DeviceAddress', 'DeviceOrHostAddressConstKHR', 'DeviceOrHostAddressKHR'
    ]
    type_ = type_.replace( 'VULKAN_HPP_NAMESPACE::', '' )
    type_ = type_.rstrip().lstrip()
    xor_defs = {}
    for d in defs_.keys():
      if not d in self.static_defs:
        xor_defs[ d ] = defs_[ d ]
    if type_ == 'StructureType':
      self.members.append(
        vulkan_struct_member( member_type_t.vulkan_struct_type, type_, name_, xor_defs )
      )
      return
    if type_ in vulkan_pointoid_types:
      self.members.append(
        vulkan_struct_member( member_type_t.pointoid, type_, name_, xor_defs )
      )
      return
    if type_[0:4] == 'PFN_':
      self.members.append(
        vulkan_struct_member( member_type_t.pointer, type_, name_, xor_defs )
      )
      return
    if type_[0:2] == 'Vk':
      if type_[2:] in non_handles:
        self.members.append(
          vulkan_struct_member( member_type_t.vulkan_c_struct, type_, name_, xor_defs )
        )
      elif type_[2:] in handles:
        self.members.append(
          vulkan_struct_member( member_type_t.vulkan_c_handler, type_, name_, xor_defs )
        )
      else:
        self.members.append(
          vulkan_struct_member( member_type_t.ignored, type_, name_, xor_defs )
        )
      return
    if type_ in handles:
      self.members.append(
        vulkan_struct_member( member_type_t.vulkan_handler, type_, name_, xor_defs )
      )
      return
    if type_ in non_handles:
      self.members.append(
        vulkan_struct_member( member_type_t.vulkan_struct, type_, name_, xor_defs )
      )
      return
    if type_ == 'Bool32':
      self.members.append(
        vulkan_struct_member( member_type_t.boolean, type_, name_, xor_defs )
      )
      return
    if type_ in numeric_types:
      self.members.append(
        vulkan_struct_member( member_type_t.numeric, type_, name_, xor_defs )
      )
      return
    if type_ in vulkan_numeric_types:
      self.members.append(
        vulkan_struct_member( member_type_t.numeric, type_, name_, xor_defs )
      )
      return
    if type_[0:19] == 'ArrayWrapper1D<char':
      self.members.append(
        vulkan_struct_member( member_type_t.string, type_, name_, xor_defs )
      )
      return
    array_1d_match = re.match( array_1d_rule, type_ )
    if array_1d_match:
      value_type = array_1d_match.group( 1 ).lstrip().rstrip()
      if value_type in numeric_types:
        self.members.append(
          vulkan_struct_member( member_type_t.array1d_of_numeric, type_, name_, xor_defs )
        )
        return
      if value_type in vulkan_numeric_types:
        self.members.append(
          vulkan_struct_member( member_type_t.array1d_of_numeric, type_, name_, xor_defs )
        )
        return
      elif value_type in non_handles:
        self.members.append(
          vulkan_struct_member( member_type_t.array1d_of_vulkan_struct, type_, name_, xor_defs )
        )
        return
      elif value_type in handles:
        self.members.append(
          vulkan_struct_member( member_type_t.array1d_of_vulkan_handler, type_, name_, xor_defs )
        )
        return
    array_2d_match = re.match( array_2d_rule, type_ )
    if array_2d_match:
      value_type = array_2d_match.group( 1 ).lstrip().rstrip()
      if value_type in numeric_types:
        self.members.append(
          vulkan_struct_member( member_type_t.array2d_of_numeric, type_, name_, xor_defs )
        )
        return
      if value_type in vulkan_numeric_types:
        self.members.append(
          vulkan_struct_member( member_type_t.array2d_of_numeric, type_, name_, xor_defs )
        )
        return
      elif value_type in non_handles:
        self.members.append(
          vulkan_struct_member( member_type_t.array2d_of_vulkan_struct, type_, name_, xor_defs )
        )
        return
      elif value_type in handles:
        self.members.append(
          vulkan_struct_member( member_type_t.array2d_of_vulkan_handler, type_, name_, xor_defs )
        )
        return
    if re.match( const_char_pointer_rule, type_ ):
      self.members.append(
        vulkan_struct_member( member_type_t.string_pointer, type_, name_, xor_defs )
      )
      return
    if type_[-1] == '*':
      self.members.append(
        vulkan_struct_member( member_type_t.pointer, type_, name_, xor_defs )
      )
      return
    self.members.append(
      vulkan_struct_member( member_type_t.ignored, type_, name_, xor_defs )
    )
  def __str__( self ):
    return json.dumps(
      {
        "ext_suffix" : self.name.ext_suffix,
        "version_suffix" : self.name.version_suffix,
        "name" : self.name.get_name(),
        "ignored": [ [ v.value_type, v.name ] for v in self.members if v.member_type == member_type_t.ignored ],
        "vulkan_handler": [ [ v.value_type, v.name ] for v in self.members if v.member_type == member_type_t.vulkan_handler ],
        "vulkan_struct_type": [ [ v.value_type, v.name ] for v in self.members if v.member_type == member_type_t.vulkan_struct_type ],
        "vulkan_struct": [ [ v.value_type, v.name ] for v in self.members if v.member_type == member_type_t.vulkan_struct ],
        "vulkan_c_struct": [ [ v.value_type, v.name ] for v in self.members if v.member_type == member_type_t.vulkan_c_struct ],
        "vulkan_c_handler": [ [ v.value_type, v.name ] for v in self.members if v.member_type == member_type_t.vulkan_c_handler ],
        "boolean": [ [ v.value_type, v.name ] for v in self.members if v.member_type == member_type_t.boolean ],
        "numeric": [ [ v.value_type, v.name ] for v in self.members if v.member_type == member_type_t.numeric ],
        "string": [ [ v.value_type, v.name ] for v in self.members if v.member_type == member_type_t.string ],
        "string_pointer": [ [ v.value_type, v.name ] for v in self.members if v.member_type == member_type_t.string_pointer ],
        "pointer": [ [ v.value_type, v.name ] for v in self.members if v.member_type == member_type_t.pointer ],
        "array1d_of_numeric": [ [ v.value_type, v.name ] for v in self.members if v.member_type == member_type_t.array1d_of_numeric ],
        "array1d_of_vulkan_struct": [ [ v.value_type, v.name ] for v in self.members if v.member_type == member_type_t.array1d_of_vulkan_struct ],
        "array1d_of_vulkan_handler": [ [ v.value_type, v.name ] for v in self.members if v.member_type == member_type_t.array1d_of_vulkan_handler ],
        "array2d_of_numeric": [ [ v.value_type, v.name ] for v in self.members if v.member_type == member_type_t.array2d_of_numeric ],
        "array2d_of_vulkan_struct": [ [ v.value_type, v.name ] for v in self.members if v.member_type == member_type_t.array2d_of_vulkan_struct ],
        "array2d_of_vulkan_handler": [ [ v.value_type, v.name ] for v in self.members if v.member_type == member_type_t.array2d_of_vulkan_handler ],
      },
      indent=2
    )
  def generate_impl( self ):
    name = self.name.get_name()
    cname = self.name.get_cname()
    m = ''
    if len( self.static_defs ):
      m += '#if ' + ' && '.join( [ x for x in self.static_defs.keys() ] ) + '\n'
    m += "inline void to_json( nlohmann::json &j, const %s &p ) {\n" % name
    m += "  j = nlohmann::json::object();\n"
    for v in self.members:
      if len( v.xor_defs ):
        m += "#if " + ' && '.join( [ x for x in v.xor_defs.keys() ] ) + '\n'
      if v.member_type == member_type_t.vulkan_struct_type:
        m+= "  j[ \"%s\" ] = p.%s;\n" % ( v.name, v.name )
      elif v.member_type == member_type_t.vulkan_struct:
        m+= "  j[ \"%s\" ] = p.%s;\n" % ( v.name, v.name )
      elif v.member_type == member_type_t.boolean:
        m+= "  j[ \"%s\" ] = bool( p.%s );\n" % ( v.name, v.name )
      elif v.member_type == member_type_t.numeric:
        m+= "  j[ \"%s\" ] = p.%s;\n" % ( v.name, v.name )
      elif v.member_type == member_type_t.string:
        m+= "  j[ \"%s\" ] = std::string( p.%s.begin(), std::find( p.%s.begin(), p.%s.end(), '\\0' ) );\n" % ( v.name, v.name, v.name, v.name )
      elif v.member_type == member_type_t.string_pointer:
        m+= "  if( p.%s ) j[ \"%s\" ] = std::string( p.%s );\n" % ( v.name, v.name, v.name )
      elif v.member_type == member_type_t.pointer:
        m+= "  j[ \"%s\" ] = reinterpret_cast< std::uintptr_t >( reinterpret_cast< const void* >( p.%s ) );\n" % ( v.name, v.name )
      elif v.member_type == member_type_t.array1d_of_numeric:
        m+= "  j[ \"%s\" ] = nlohmann::json::array();\n" % v.name
        m+= "  std::copy( p.%s.begin(), p.%s.end(), std::back_inserter( j[ \"%s\" ] ) );\n" % ( v.name, v.name, v.name )
      elif v.member_type == member_type_t.array1d_of_vulkan_struct:
        m+= "  j[ \"%s\" ] = nlohmann::json::array();\n" % v.name
        m+= "  std::copy( p.%s.begin(), p.%s.end(), std::back_inserter( j[ \"%s\" ] ) );\n" % ( v.name, v.name, v.name )
      elif v.member_type == member_type_t.array2d_of_numeric:
        m+= "  j[ \"%s\" ] = nlohmann::json::array();\n" % v.name
        m+= "  for( auto &e: p.%s ) {\n" % v.name
        m+= "    auto temp = nlohmann::json::array();\n"
        m+= "    std::copy( e.begin(), e.end(), std::back_inserter( temp ) );\n"
        m+= "    j[ \"%s\" ].push_back( std::move( temp ) );\n" % v.name
        m+= "  }\n"
      elif v.member_type == member_type_t.array2d_of_vulkan_struct:
        m+= "  j[ \"%s\" ] = nlohmann::json::array();\n" % v.name
        m+= "  for( auto &e: p.%s ) {\n" % v.name
        m+= "    auto temp = nlohmann::json::array();\n"
        m+= "    std::copy( e.begin(), e.end(), std::back_inserter( temp ) );\n"
        m+= "    j[ \"%s\" ].push_back( std::move( temp ) );\n" % v.name
        m+= "  }\n"
      if len( v.xor_defs ):
        m += "#endif\n"
    m += "}\n"
    m += "inline void to_json( nlohmann::json &j, const %s &p ) {\n" % cname
    m += "  to_json( j, %s ( p ) );\n" % name
    m += "}\n"
    m += "inline void from_json( const nlohmann::json &j, %s &p ) {\n" % name
    m += "  if( !j.is_object() ) throw vulkan2json::invalid_object_value( \"incompatible value for %s\" );\n" % name
    for v in self.members:
      if len( v.xor_defs ):
        m += "#if " + ' && '.join( [ x for x in v.xor_defs.keys() ] ) + '\n'
      if v.member_type == member_type_t.vulkan_struct:
        m+= "  p.%s = j[ \"%s\" ];\n" % ( v.name, v.name )
      elif v.member_type == member_type_t.boolean:
        m+= "  p.%s = j[ \"%s\" ];\n" % ( v.name, v.name )
      elif v.member_type == member_type_t.numeric:
        m+= "  p.%s = j[ \"%s\" ];\n" % ( v.name, v.name )
      elif v.member_type == member_type_t.string:
        m+= "  {\n"
        m+= "    std::string s = j[ \"%s\" ];\n" % v.name
        m+= "    if( !p.%s.empty() ) {\n" % v.name
        m+= "      p.%s[ p.%s.size() - 1u ] = '\\0';\n" % ( v.name, v.name )
        m+= "      std::copy( s.begin(), std::next( s.begin(), std::min( s.size(), p.%s.size() - 1u ) ), p.%s.begin() );\n" % ( v.name, v.name )
        m+= "    }\n"
        m+= "  }\n"
      elif v.member_type == member_type_t.array1d_of_numeric:
        m+= "  if( !j[ \"%s\" ].is_array() ) throw vulkan2json::invalid_array_value( \"incompatible value for %s.%s\" );\n" % ( v.name, name, v.name )
        m+= "  if( !j[ \"%s\" ].size() > p.%s.size() ) throw vulkan2json::invalid_array_value( \"too many values in array for %s.%s\" );\n" % ( v.name, v.name, name, v.name )
        m+= "  std::fill( p.%s.begin(), p.%s.end(), 0 );\n" % ( v.name, v.name )
        m+= "  std::copy( j[ \"%s\" ].begin(), j[ \"%s\" ].end(), p.%s.begin() );\n" % ( v.name, v.name, v.name )
      elif v.member_type == member_type_t.array1d_of_vulkan_struct:
        m+= "  if( !j[ \"%s\" ].is_array() ) throw vulkan2json::invalid_array_value( \"incompatible value for %s.%s\" );\n" % ( v.name, name, v.name )
        m+= "  if( !j[ \"%s\" ].size() > p.%s.size() ) throw vulkan2json::invalid_array_value(  \"too many values in array for %s.%s\" );\n" % ( v.name, v.name, name, v.name )
        m+= "  std::fill( p.%s.begin(), p.%s.end(), std::remove_cv_t< std::remove_reference_t< decltype( *p.%s.begin() ) > >() );\n" % ( v.name, v.name, v.name )
        m+= "  std::copy( j[ \"%s\" ].begin(), j[ \"%s\" ].end(), p.%s.begin() );\n" % ( v.name, v.name, v.name )
      elif v.member_type == member_type_t.array2d_of_numeric:
        m+= "  if( !j[ \"%s\" ].is_array() ) throw vulkan2json::invalid_array_value( \"incompatible value for %s.%s\" );\n" % ( v.name, name, v.name )
        m+= "  if( !j[ \"%s\" ].size() > p.%s.size() ) throw vulkan2json::invalid_array_value( \"too many values in array for %s.%s\" );\n" % ( v.name, v.name, name, v.name )
        m+= "  for( std::size_t i = 0u; i != j[ \"%s\" ].size(); ++i ) {\n" % v.name
        m+= "    if( !j[ \"%s\" ][ i ].is_array() ) throw vulkan2json::invalid_array_value( \"incompatible value for %s.%s\" );\n" % ( v.name, name, v.name )
        m+= "    if( !j[ \"%s\" ][ i ].size() > p.%s[ i ].size() ) throw vulkan2json::invalid_array_value( \"too many values in array for %s.%s\" );\n" % ( v.name, v.name, name, v.name )
        m+= "    std::fill( p.%s[ i ].begin(), p.%s[ i ].end(), 0 );\n" % ( v.name, v.name )
        m+= "    std::copy( j[ \"%s\" ][ i ].begin(), j[ \"%s\" ][ i ].end(), p.%s[ i ].begin() );\n" % ( v.name, v.name, v.name )
        m+= "  }\n"
        m+= "  for( std::size_t i = j[ \"%s\" ].size(); i != p.%s.size(); ++i ) {\n" % ( v.name, v.name )
        m+= "    std::fill( p.%s[ i ].begin(), p.%s[ i ].end(), 0 );\n" % ( v.name, v.name )
        m+= "  }\n"
      elif v.member_type == member_type_t.array2d_of_vulkan_struct:
        m+= "  if( !j[ \"%s\" ].is_array() ) throw vulkan2json::invalid_array_value( \"incompatible value for %s.%s\" );\n" % ( v.name, name, v.name )
        m+= "  if( !j[ \"%s\" ].size() > p.%s.size() ) throw vulkan2json::invalid_array_value( \"too many values in array for %s.%s\" );\n" % ( v.name, v.name, name, v.name )
        m+= "  for( std::size_t i = 0u; i != j[ \"%s\" ].size(); ++i ) {\n" % v.name
        m+= "    if( !j[ \"%s\" ][ i ].is_array() ) throw vulkan2json::invalid_array_value( \"incompatible value for %s.%s\" );\n" % ( v.name, name, v.name )
        m+= "    if( !j[ \"%s\" ][ i ].size() > p.%s[ i ].size() ) throw vulkan2json::invalid_array_value( \"too many values in array for %s.%s\" );\n" % ( v.name, v.name, name, v.name )
        m+= "    std::fill( p.%s[ i ].begin(), p.%s[ i ].end(), std::remove_cv_t< std::remove_reference_t< decltype( *p.%s.begin() ) > >() );\n" % ( v.name, v.name )
        m+= "    std::copy( j[ \"%s\" ][ i ].begin(), j[ \"%s\" ][ i ].end(), p.%s[ i ].begin() );\n" % ( v.name, v.name, v.name )
        m+= "  }\n"
        m+= "  for( std::size_t i = j[ \"%s\" ].size(); i != p.%s.size(); ++i ) {\n" % ( v.name, v.name )
        m+= "    std::fill( p.%s[ i ].begin(), p.%s[ i ].end(), std::remove_cv_t< std::remove_reference_t< decltype( *p.%s.begin() ) > >() );\n" % ( v.name, v.name )
        m+= "  }\n"
      if len( v.xor_defs ):
        m += "#endif\n"
    m += "}\n"
    m += "inline void from_json( const nlohmann::json &j, %s &p ) {\n" % cname
    m += "  %s temp;\n" % name
    m += "  from_json( j, temp );\n"
    m += "  p = %s ( temp );\n" % cname
    m += "}\n"
    if len( self.static_defs ):
      m += '#endif\n'
    return m;
  def generate_forward( self ):
    name = self.name.get_name()
    cname = self.name.get_cname()
    m += "void to_json( nlohmann::json &j, const %s &p );\n" % name
    m += "void to_json( nlohmann::json &j, const %s &p );\n" % cname
    m += "void from_json( const nlohmann::json &j, %s &p );\n" % name
    m += "void from_json( const nlohmann::json &j, %s &p );\n" % name
    return m;

class parse_state_t(Enum):
  namespace = 0
  in_struct = 1
  in_struct_members = 2
  in_struct_member_name = 3
  in_union = 4

def get_struct( filename, handles, non_handles ):
  ext_rule = re.compile( "\s*//===\s*(\S+)\s*===\s*" );
  if_rule = re.compile( "^#\s*if\s+(.+)$" );
  ifdef_rule = re.compile( "^#\s*ifdef\s+(.+)$" );
  endif_rule = re.compile( "^#\s*endif.*$" );
  multi_line_struct_rule = re.compile( "^\s*struct\s*$" );
  struct_name_rule = re.compile( "^\s*(\S+)\s*$" );
  struct_rule = re.compile( "^\s*struct\s*(\S+)\s*$" );
  union_rule = re.compile( "^\s*union\s*(\S+)\s*$" );
  public_rule = re.compile( "^\s*public:\s*$" );
  end_rule = re.compile( "^\s*};\s*$" );
  flagbits_rule = re.compile( "\S+?FlagBits" );
  flags_rule = re.compile( "^\s*enum\s+class\s+(\S+)\s+:\s*(\S+)\s*$" );
  end_of_def_rule = re.compile( "^\s*};\s*$" );
  assign_rule = re.compile( "^\s*(.+?)\s+(\S+)\s+=.*$" );
  multi_line_assign_rule1 = re.compile( "^\s*(\S+)\s*$" );
  multi_line_assign_rule2 = re.compile( "^\s*(\S+)\s+=.*$" );

  ifdef = {}
  ifdef_stack = []

  structs = {}
  struct_name = ''
  parse_state = parse_state_t.namespace
  assign_type = ''
  with open( filename, 'r' ) as fd:
    for line in fd:
      if_match = re.match( if_rule, line.rstrip() )
      if if_match:
        if if_match.group( 1 ) in ifdef:
          ifdef[ if_match.group( 1 ) ] += 1
        else:
          ifdef[ if_match.group( 1 ) ] = 1
        ifdef_stack.append( if_match.group( 1 ) )
        continue
      ifdef_match = re.match( ifdef_rule, line.rstrip() )
      if ifdef_match:
        if_expr = 'defined('+ifdef_match.group( 1 )+')'
        if if_expr in ifdef:
          ifdef[ if_expr ] += 1
        else:
          ifdef[ if_expr ] = 1
        ifdef_stack.append( if_expr )
        continue
      endif_match = re.match( endif_rule, line.rstrip() )
      if endif_match:
        if len( ifdef_stack ):
          closed = ifdef_stack.pop()
          if closed in ifdef:
            if ifdef[ closed ] > 1:
              ifdef[ closed ] -= 1
            else:
              del ifdef[ closed ]
        continue
      if parse_state == parse_state_t.namespace:
        struct_match = re.match( struct_rule, line.rstrip() )
        if struct_match:
          if parse_state == parse_state_t.namespace:
            parse_state = parse_state_t.in_struct
            struct_name = struct_match.group( 1 )
            structs[ struct_name ] = vulkan_struct( struct_name, ifdef )
          continue
        union_match = re.match( union_rule, line.rstrip() )
        if union_match:
          if parse_state == parse_state_t.namespace:
            parse_state = parse_state_t.in_union
          continue
      elif parse_state == parse_state_t.in_struct:
        public_match = re.match( public_rule, line.rstrip() )
        if public_match:
          parse_state = parse_state_t.in_struct_members
          continue
        end_match = re.match( end_rule, line.rstrip() )
        if end_match:
          parse_state = parse_state_t.namespace
      elif parse_state == parse_state_t.in_union:
        end_match = re.match( end_rule, line.rstrip() )
        if end_match:
          parse_state = parse_state_t.namespace
      elif parse_state == parse_state_t.in_struct_members:
        stripped = line.lstrip().rstrip()
        end_of_typename = get_end_of_typename( stripped )
        typename = stripped[0:end_of_typename]
        if end_of_typename == len( stripped ):
          if typename[-1] == ';':
            end_match = re.match( end_rule, line.rstrip() )
            if end_match:
              parse_state = parse_state_t.namespace
              continue
          else:
            assign_type = typename
            parse_state = parse_state_t.in_struct_member_name
            continue
        else:
          left = stripped[end_of_typename:].lstrip()
          name = left.split( '=' )[ 0 ].split( ':' )[ 0 ].lstrip().rstrip()
          structs[ struct_name ].add( typename, name, ifdef, handles, non_handles )
          continue
      elif parse_state == parse_state_t.in_struct_member_name:
        end_match = re.match( end_rule, line.rstrip() )
        if end_match:
          parse_state = parse_state_t.namespace
        left = line.lstrip().rstrip()
        name = left.split( '=' )[ 0 ].split( ':' )[ 0 ].lstrip().rstrip()
        structs[ struct_name ].add( assign_type, name, ifdef, handles, non_handles )
        parse_state = parse_state_t.in_struct_members
        continue

  return structs

