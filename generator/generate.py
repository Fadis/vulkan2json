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


import os
from enum import Enum

from vulkan_header_parser.get_enum import get_enum
from vulkan_header_parser.header import get_header
from vulkan_header_parser.footer import get_footer
from vulkan_header_parser.get_struct import get_struct
from vulkan_header_parser.get_class_name import get_class_name, get_handle_name

vulkan_header_path = '/usr/include/vulkan'

(enums,flags) = get_enum( os.path.join( vulkan_header_path, 'vulkan_enums.hpp' ) )
class_names = get_class_name( vulkan_header_path )
handle_names = get_handle_name( vulkan_header_path )
structs = get_struct( os.path.join( vulkan_header_path, 'vulkan_structs.hpp' ), handle_names, class_names )


outdir = '../include/vulkan2json'

for v in enums.values():
  with open( os.path.join( outdir, v.name.get_include_name()+'.hpp' ), 'w' ) as fd:
    out = get_header( v.name.get_include_name() )
    out += v.generate_impl()
    out += get_footer()
    fd.write( out )

for v in flags.values():
  with open( os.path.join( outdir, v.name.get_include_name()+'.hpp' ), 'w' ) as fd:
    out = get_header( v.name.get_include_name() )
    out += v.generate_impl()
    out += get_footer()
    fd.write( out )

for v in structs.values():
  with open( os.path.join( outdir, v.name.get_include_name()+'.hpp' ), 'w' ) as fd:
    out = get_header( v.name.get_include_name() )
    out += v.generate_includes()
    out += v.generate_impl()
    out += get_footer()
    fd.write( out )

