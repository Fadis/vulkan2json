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

import re
import json
import copy
from enum import Enum
from vulkan_header_parser.vulkan_class_name import vulkan_class_name
from vulkan_header_parser.to_extension_name_def import to_extension_name_def

e_rule = re.compile( '^e(.*)' )

class vulkan_enum:
  def __init__( self, name_, ext_, defs_ ):
    self.name = vulkan_class_name( name_ )
    self.ext = ext_
    self.ext_def = to_extension_name_def( self.ext )
    self.defs = copy.deepcopy( defs_ )
    self.from_table = []
    self.to_table = []
  def add( self, name_, cname_, defs_ ):
    xor_defs = {}
    for d in defs_.keys():
      if not d in self.defs:
        xor_defs[ d ] = defs_[ d ]
    e_match = re.match( e_rule, name_ )
    if e_match:
      self.from_table.append(
        ( e_match.group( 1 ), name_, xor_defs )
      )
      self.from_table.append(
        ( name_, name_, xor_defs )
      )
      self.from_table.append(
        ( cname_, name_, xor_defs )
      )
      self.to_table.append(
        ( name_, e_match.group( 1 ), xor_defs )
      )
  def __str__( self ):
    return json.dumps(
      {
        "ext_suffix" : self.name.ext_suffix,
        "version_suffix" : self.name.version_suffix,
        "name" : self.name.get_enum(),
        "ext" : self.ext,
        "ext_def" : self.ext_def,
        "from_table": [ [ v[ 0 ], v[ 1 ] ] for v in self.from_table ],
        "to_table": [ [ v[ 0 ], v[ 1 ] ] for v in self.to_table ]
      },
      indent=2
    )
  def generate_impl( self ):
    name = self.name.get_name()
    cname = self.name.get_cname()
    m = "#ifdef %s\n" % self.ext_def
    m += "namespace VULKAN_HPP_NAMESPACE {\n"
    m += "inline void to_json( nlohmann::json &j, const %s &p ) {\n" % name
    for v in self.to_table:
      if len( v[ 2 ] ):
        m += "#if " + ' && '.join( [ 'defined('+x+')' for x in v[ 2 ].keys() ] ) + '\n'
      m += "  if( %s :: %s == p ) {\n    j = \"%s\";\n    return;\n  }\n" % ( name, v[ 0 ], v[ 1 ] )
      if len( v[ 2 ] ):
        m += "#endif\n"
    m += "}\n"
    m += "}\n"
    m += "inline void to_json( nlohmann::json &j, const %s &p ) {\n" % cname
    m += "  to_json( j, VULKAN_HPP_NAMESPACE :: %s ( p ) );\n" % name
    m += "}\n"
    m += "namespace VULKAN_HPP_NAMESPACE {\n"
    m += "inline void from_json( const nlohmann::json &j, %s &p ) {\n" % name
    m += "  if( j.is_string() ) {\n"
    for v in self.from_table:
      if len( v[ 2 ] ):
        m += "#if " + ' && '.join( [ 'defined('+x+')' for x in v[ 2 ].keys() ] ) + '\n'
      m += "    if( \"%s\" == j.get< std::string >() ) {\n      p = %s :: %s ;\n      return;\n    }\n" % ( v[ 0 ], name, v[ 1 ] )
      if len( v[ 2 ] ):
        m += "#endif\n"
    m += "    throw vulkan2json::invalid_enum_value( \"unknown enum name for %s\" );\n" % name
    m += "  }\n"
    m += "  if( j.is_number() ) {\n"
    m += "    p = %s ( j.get< std::int64_t >() );\n" % name
    m += "  }\n"
    m += "  throw vulkan2json::invalid_enum_value( \"incompatible value for %s\" );\n" % name
    m += "}\n"
    m += "}\n"
    m += "inline void from_json( const nlohmann::json &j, %s &p ) {\n" % cname
    m += "  VULKAN_HPP_NAMESPACE :: %s temp;\n" % name
    m += "  from_json( j, temp );\n"
    m += "  p = %s ( temp );\n" % cname
    m += "}\n"
    m += "#endif\n"
    return m;
  def generate_forward( self ):
    name = self.name.get_name()
    cname = self.name.get_cname()
    m = "#ifdef %s\n" % self.ext_def
    m += "namespace VULKAN_HPP_NAMESPACE {\n"
    m += "void to_json( nlohmann::json &j, const %s &p );\n" % name
    m += "}\n"
    m += "void to_json( nlohmann::json &j, const %s &p );\n" % cname
    m += "namespace VULKAN_HPP_NAMESPACE {\n"
    m += "void from_json( const nlohmann::json &j, %s &p );\n" % name
    m += "}\n"
    m += "void from_json( const nlohmann::json &j, %s &p );\n" % name
    m += "#endif\n"
    return m;


class vulkan_flag:
  def __init__( self, name_, ext_, defs_, has_cname_ ):
    self.name = vulkan_class_name( name_ )
    self.name.remove_flagbits()
    self.ext = ext_
    self.ext_def = to_extension_name_def( self.ext )
    self.defs = defs_
    self.from_table = []
    self.to_table = []
    self.has_cname = has_cname_
  def add( self, name_, cname_, defs_ ):
    xor_defs = {}
    for d in defs_.keys():
      if d in self.defs:
        xor_defs[ d ] = defs_[ d ]
    e_match = re.match( e_rule, name_ )
    if e_match:
      self.from_table.append(
        ( e_match.group( 1 ), name_, xor_defs )
      )
      self.from_table.append(
        ( name_, name_, xor_defs )
      )
      self.from_table.append(
        ( cname_, name_, xor_defs )
      )
      self.to_table.append(
        ( name_, e_match.group( 1 ), xor_defs )
      )
  def __str__( self ):
    return json.dumps(
      {
        "ext_suffix" : self.name.ext_suffix,
        "version_suffix" : self.name.version_suffix,
        "name" : self.name.name,
        "ext" : self.ext,
        "ext_def" : self.ext_def,
        "has_cname" : self.has_cname,
        "from_table": [ [ v[ 0 ], v[ 1 ] ] for v in self.from_table ],
        "to_table": [ [ v[ 0 ], v[ 1 ] ] for v in self.to_table ]
      },
      indent=2
    )
  def generate_impl( self ):
    flagbits = self.name.get_flagbits()
    flags = self.name.get_flags()
    m = "#ifdef %s\n" % self.ext_def
    m += "namespace VULKAN_HPP_NAMESPACE {\n"
    m += "inline void to_json( nlohmann::json &j, const %s &p ) {\n" % flagbits
    for v in self.to_table:
      if len( v[ 2 ] ):
        m += "#if " + ' && '.join( [ 'defined('+x+')' for x in v[ 2 ].keys() ] ) + '\n'
      m += "  if( %s :: %s == p ) {\n    j = \"%s\";\n    return;\n  }\n" % ( flagbits, v[ 0 ], v[ 1 ] )
      if len( v[ 2 ] ):
        m += "#endif\n"
    m += "}\n"
    m += "inline void from_json( const nlohmann::json &j, %s &p ) {\n" % flagbits
    m += "  if( j.is_string() ) {\n"
    for v in self.from_table:
      if len( v[ 2 ] ):
        m += "#if " + ' && '.join( [ 'defined('+x+')' for x in v[ 2 ].keys() ] ) + '\n'
      m += "    if( \"%s\" == j.get< std::string >() ) {\n      p = %s :: %s ;\n      return;\n    }\n" % ( v[ 0 ], flagbits, v[ 1 ] )
      if len( v[ 2 ] ):
        m += "#endif\n"
    m += "    throw vulkan2json::invalid_enum_value( \"unknown enum name for %s\" );\n" % flagbits
    m += "  }\n"
    m += "  if( j.is_number() ) {\n"
    m += "    p = %s ( j.get< std::int64_t >() );\n" % flagbits
    m += "  }\n"
    m += "  throw vulkan2json::invalid_enum_value( \"incompatible value for %s\" );\n" % flagbits
    m += "}\n"
    m += "inline void to_json( nlohmann::json &j, const %s &p ) {\n" % flags
    m += "  j = nlohmann::json::array();\n"
    m += "  for( unsigned int n = 0u; n != sizeof( %s ) * 8u; ++n ) {\n" % flagbits
    m += "    if( p & %s ( 1 << n ) ) {\n" % flags
    m += "      nlohmann::json temp;\n"
    m += "      to_json( temp, %s ( 1 << n ) );\n" % flagbits
    m += "      j.push_back( temp );\n"
    m += "    }\n"
    m += "  }\n"
    m += "}\n"
    m += "inline void from_json( const nlohmann::json &j, %s &p ) {\n" % flags
    m += "  if( j.is_array() ) {\n"
    m += "    p = %s ( 0 );\n" % flags
    m += "    for( auto &e:  j ) {\n"
    m += "      %s temp;\n" % flagbits
    m += "      from_json( e, temp );\n"
    m += "      p |= temp;\n"
    m += "    }\n"
    m += "  }\n"
    m += "  else throw vulkan2json::invalid_flag_value( \"incompatible value for %s\" );\n" % flags
    m += "}\n"
    m += "}\n"
    m += "#endif\n"
    return m;
  def generate_forward( self ):
    flagbits = self.name.get_flagbits()
    flags = self.name.get_flags()
    m = "#ifdef %s\n" % self.ext_def
    m += "void to_json( nlohmann::json &j, const %s &p );\n" % flagbits
    m += "void to_json( nlohmann::json &j, const %s &p );\n" % flags
    m += "void from_json( const nlohmann::json &j, %s &p );\n" % flagbits
    m += "void from_json( const nlohmann::json &j, %s &p );\n" % flags
    m += "#endif\n"
    return m;


class parse_state_t(Enum):
  namespace = 0
  enum_name = 1
  in_enum = 2

def get_enum_class_name( filename ):
  class_names = set()
  multi_line_enum_rule = re.compile( "^\s*enum\s+class\s*$" );
  enum_rule = re.compile( "^\s*enum\s+class\s+(\S+)\s*$" );
  enum_name_rule = re.compile( "^\s*(\S+)\s*$" );
  flags_rule = re.compile( "^\s*enum\s+class\s+(\S+)\s+:\s*(\S+)\s*$" );
  flags_name_rule = re.compile( "^\s*(\S+)\s+:\s*(\S+)\s*$" );
  end_rule = re.compile( "^\s*};\s*$" );
  parse_state = parse_state_t.namespace
  with open( filename, 'r' ) as fd:
    for line in fd:
      if parse_state == parse_state_t.namespace:
        multi_line_enum_match = re.match( multi_line_enum_rule, line.rstrip() )
        if multi_line_enum_match:
          parse_state = parse_state_t.enum_name
        enum_match = re.match( enum_rule, line.rstrip() )
        if enum_match:
          names = vulkan_class_name( enum_match.group( 1 ) )
          class_names.add( names.get_name() )
          parse_state = parse_state_t.in_enum
        flags_match = re.match( flags_rule, line.rstrip() )
        if flags_match:
          names = vulkan_class_name( flags_match.group( 1 ) )
          names.remove_flagbits()
          class_names.add( names.get_flagbits() )
          class_names.add( names.get_flags() )
          parse_state = parse_state_t.in_enum
        continue
      elif parse_state == parse_state_t.enum_name:
        enum_name_match = re.match( enum_name_rule, line.rstrip() )
        if enum_name_match:
          names = vulkan_class_name( enum_name_match.group( 1 ) )
          class_names.add( names.get_name() )
          parse_state = parse_state_t.in_enum
        flags_name_match = re.match( flags_name_rule, line.rstrip() )
        if flags_name_match:
          names = vulkan_class_name( flags_name_match.group( 1 ) )
          names.remove_flagbits()
          class_names.add( names.get_flagbits() )
          class_names.add( names.get_flags() )
          parse_state = parse_state_t.in_enum
        continue
      elif parse_state == parse_state_t.in_enum:
        end_match = re.match( end_rule, line.rstrip() )
        if end_match:
          parse_state = parse_state_t.namespace
        continue



def get_enum( filename ):
  ext_rule = re.compile( "\s*//===\s*(\S+)\s*===\s*" );
  ifdef_rule = re.compile( "^#\s*if\s+defined\(\s*(\S+)\s*\)\s*$" );
  endif_rule = re.compile( "^#\s*endif\s+/\*\s*(\S+)\s*\*/\s*$" );

  multi_line_enum_rule = re.compile( "^\s*enum\s+class\s*$" );
  enum_rule = re.compile( "^\s*enum\s+class\s+(\S+)\s*$" );
  enum_name_rule = re.compile( "^\s*(\S+)\s*$" );
  flags_rule = re.compile( "^\s*enum\s+class\s+(\S+)\s+:\s*(\S+)\s*$" );
  flags_name_rule = re.compile( "^\s*(\S+)\s+:\s*(\S+)\s*$" );
  end_rule = re.compile( "^\s*};\s*$" );
  
  flagbits_rule = re.compile( "\S+?FlagBits.*" );
  assign_rule = re.compile( "^\s*(\S+?)\s*=\s*(\S+?)\s*,\s*$" );
  
  parse_state = parse_state_t.namespace

  ifdef = {}
  current_ext = "VK_VERSION_1_0"
  vulkan_enums = {}
  current_enum = ''
  vulkan_flags = {}
  current_flag = ''


  with open( filename, 'r' ) as fd:
    for line in fd:
      ext_match = re.match( ext_rule, line.rstrip() )
      if ext_match:
        current_ext = ext_match.group( 1 )
      ifdef_match = re.match( ifdef_rule, line.rstrip() )
      if ifdef_match:
        if ifdef_match.group( 1 ) in ifdef:
          ifdef[ ifdef_match.group( 1 ) ] += 1
        else:
          ifdef[ ifdef_match.group( 1 ) ] = 1
        continue
      endif_match = re.match( endif_rule, line.rstrip() )
      if endif_match:
        if endif_match.group( 1 ) in ifdef:
          if ifdef[ endif_match.group( 1 ) ] > 1:
            ifdef[ endif_match.group( 1 ) ] -= 1
          else:
            del ifdef[ endif_match.group( 1 ) ]
        continue
      if parse_state == parse_state_t.namespace:
        multi_line_enum_match = re.match( multi_line_enum_rule, line.rstrip() )
        if multi_line_enum_match:
          parse_state = parse_state_t.enum_name
        enum_match = re.match( enum_rule, line.rstrip() )
        if enum_match:
          if re.match( flagbits_rule, enum_match.group( 1 ) ):
            vulkan_flags[ enum_match.group( 1 ) ] = vulkan_flag( enum_match.group( 1 ), current_ext, ifdef, False )
            current_flag = enum_match.group( 1 )
          else:
            vulkan_enums[ enum_match.group( 1 ) ] = vulkan_enum( enum_match.group( 1 ), current_ext, ifdef )
            current_enum = enum_match.group( 1 )
          parse_state = parse_state_t.in_enum
          continue
        flags_match = re.match( flags_rule, line.rstrip() )
        if flags_match:
          vulkan_flags[ flags_match.group( 1 ) ] = vulkan_flag( flags_match.group( 1 ), current_ext, ifdef, True )
          current_flag = flags_match.group( 1 )
          parse_state = parse_state_t.in_enum
          continue
      elif parse_state == parse_state_t.enum_name:
        enum_match = re.match( enum_name_rule, line.rstrip() )
        if enum_match:
          if re.match( flagbits_rule, enum_match.group( 1 ) ):
            vulkan_flags[ enum_match.group( 1 ) ] = vulkan_flag( enum_match.group( 1 ), current_ext, ifdef, False )
            current_flag = enum_match.group( 1 )
          else:
            vulkan_enums[ enum_match.group( 1 ) ] = vulkan_enum( enum_match.group( 1 ), current_ext, ifdef )
            current_enum = enum_match.group( 1 )
          parse_state = parse_state_t.in_enum
          continue
        flags_match = re.match( flags_name_rule, line.rstrip() )
        if flags_match:
          vulkan_flags[ flags_match.group( 1 ) ] = vulkan_flag( flags_match.group( 1 ), current_ext, ifdef, True )
          current_flag = flags_match.group( 1 )
          parse_state = parse_state_t.in_enum
          continue
      elif parse_state == parse_state_t.in_enum:
        assign_match = re.match( assign_rule, line.rstrip() )
        if assign_match:
          if current_enum != '':
            vulkan_enums[ current_enum ].add( assign_match.group( 1 ), assign_match.group( 2 ), ifdef )
          elif current_flag != '':
            vulkan_flags[ current_flag ].add( assign_match.group( 1 ), assign_match.group( 2 ), ifdef )
        end_match = re.match( end_rule, line.rstrip() )
        if end_match:
          current_enum = ''
          current_flag = ''
          parse_state = parse_state_t.namespace
        continue
    return ( vulkan_enums, vulkan_flags )

