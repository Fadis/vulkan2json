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

version_rule = re.compile( 'VK_VERSION' )
number_rule = re.compile( '([0-9]+)' )

def to_extension_name_def( ext ):
  if re.match( version_rule, ext ):
    return ext
  temp = number_rule.sub( r'_\1', ext )
  temp = temp.upper()
  temp = temp.replace( 'WIN_32', 'WIN32' )
  temp = temp.replace( 'H_264', 'H264' )
  temp = temp.replace( 'H_265', 'H265' )
  return temp+"_EXTENSION_NAME"

