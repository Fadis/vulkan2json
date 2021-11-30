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
from enum import Enum
from vulkan_header_parser.vulkan_class_name import vulkan_class_name

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
  using_rule = re.compile( "^\s*using\s+(\S+)\s*=\s*(\S+?)\s*;\s*$" );
  flagbits_rule = re.compile( "\S+?FlagBits.*" );
  parse_state = parse_state_t.namespace
  with open( filename, 'r' ) as fd:
    for line in fd:
      if parse_state == parse_state_t.namespace:
        multi_line_enum_match = re.match( multi_line_enum_rule, line.rstrip() )
        if multi_line_enum_match:
          parse_state = parse_state_t.enum_name
          continue
        enum_match = re.match( enum_rule, line.rstrip() )
        if enum_match:
          if re.match( flagbits_rule, enum_match.group( 1 ) ):
            names = vulkan_class_name( enum_match.group( 1 ) )
            names.remove_flagbits()
            class_names.add( names.get_flagbits() )
            class_names.add( names.get_flags() )
            parse_state = parse_state_t.in_enum
          else:
            names = vulkan_class_name( enum_match.group( 1 ) )
            class_names.add( names.get_name() )
            parse_state = parse_state_t.in_enum
          continue
        flags_match = re.match( flags_rule, line.rstrip() )
        if flags_match:
          names = vulkan_class_name( flags_match.group( 1 ) )
          names.remove_flagbits()
          class_names.add( names.get_flagbits() )
          class_names.add( names.get_flags() )
          parse_state = parse_state_t.in_enum
          continue
        using_match = re.match( using_rule, line.rstrip() )
        if using_match:
          if re.match( flagbits_rule, using_match.group( 1 ) ):
            names = vulkan_class_name( using_match.group( 1 ) )
            names.remove_flagbits()
            class_names.add( names.get_flagbits() )
            class_names.add( names.get_flags() )
          else:
            names = vulkan_class_name( using_match.group( 1 ) )
            class_names.add( names.get_name() )
            names.remove_flagbits()
          continue
      elif parse_state == parse_state_t.enum_name:
        enum_name_match = re.match( enum_name_rule, line.rstrip() )
        if enum_name_match:
          names = vulkan_class_name( enum_name_match.group( 1 ) )
          class_names.add( names.get_name() )
          continue
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
  return class_names
