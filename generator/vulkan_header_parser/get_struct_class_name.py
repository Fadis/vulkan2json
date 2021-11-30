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

class parse_state_t(Enum):
  namespace = 0
  struct_name = 1
  in_struct = 2
  in_struct_members = 3
  in_union = 4

def get_struct_class_name( filename ):
  multi_line_struct_rule = re.compile( "^\s*struct\s*$" );
  struct_name_rule = re.compile( "^\s*(\S+)\s*$" );
  struct_rule = re.compile( "^\s*struct\s*(\S+)\s*$" );
  union_rule = re.compile( "^\s*union\s*(\S+)\s*$" );
  public_rule = re.compile( "^\s*public:\s*$" );
  end_rule = re.compile( "^\s*};\s*$" );
  using_rule = re.compile( "^\s*using\s+(\S+)\s*=\s*(\S+?)\s*;\s*$" );
  struct_name = ''
  parse_state = parse_state_t.namespace
  class_names = set()
  with open( filename, 'r' ) as fd:
    for line in fd:
      if parse_state == parse_state_t.namespace:
        multi_line_struct_match = re.match( multi_line_struct_rule, line.rstrip() )
        if multi_line_struct_match:
          parse_state = parse_state_t.struct_name
          continue
        struct_match = re.match( struct_rule, line.rstrip() )
        if struct_match:
          parse_state = parse_state_t.in_struct
          class_names.add( struct_match.group( 1 ) )
          continue
        union_match = re.match( union_rule, line.rstrip() )
        if union_match:
          parse_state = parse_state_t.in_union
          continue
        using_match = re.match( using_rule, line.rstrip() )
        if using_match:
          class_names.add( using_match.group( 1 ) )
          continue
      elif parse_state == parse_state_t.struct_name:
        struct_name_match = re.match( struct_name_rule, line.rstrip() )
        if struct_name_match:
          parse_state = parse_state_t.in_struct
          class_names.add( struct_match.group( 1 ) )
          continue
      elif parse_state == parse_state_t.in_struct:
        public_match = re.match( public_rule, line.rstrip() )
        if public_match:
          parse_state = parse_state_t.in_struct_members
          continue
        end_match = re.match( end_rule, line.rstrip() )
        if end_match:
          parse_state = parse_state_t.namespace
          continue
      elif parse_state == parse_state_t.in_union:
        end_match = re.match( end_rule, line.rstrip() )
        if end_match:
          parse_state = parse_state_t.namespace
          continue
      elif parse_state == parse_state_t.in_struct_members:
        end_match = re.match( end_rule, line.rstrip() )
        if end_match:
          parse_state = parse_state_t.namespace
          continue
  return class_names
