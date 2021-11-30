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

def get_end_of_typename( line ):
  init = True
  depth = 0
  index = 0
  prefix_end = 0
  end_candidate = 0
  keywords=set( [ 'struct', 'const', 'volatile', 'static', '*', '&', '&&' ] )
  for c in line.rstrip():
    if not c.isspace() and init:
      init = False
    elif c.isspace() and depth == 0 and not init:
      if line[prefix_end:index].lstrip().rstrip() in keywords:
        if end_candidate != 0:
          end_candidate = index
        prefix_end = index
        init = True
      elif end_candidate == 0:
        end_candidate = index
        prefix_end = index
        init = True
      else:
        return end_candidate
    elif c == '<':
      depth += 1
    elif c == '>':
      depth -= 1
    index += 1
  if line[prefix_end:index].lstrip().rstrip() in keywords:
    return index
  elif end_candidate == 0:
    return index
  else:
    return end_candidate

