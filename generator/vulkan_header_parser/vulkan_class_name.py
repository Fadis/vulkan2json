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

ext_suffix_rule = re.compile( '.+?([A-Z]{2,10})$' )
def get_extension_suffix( name ):
  es_match = re.match( ext_suffix_rule, name )
  if es_match:
    return es_match.group( 1 )
  else:
    return ""

version_suffix_rule = re.compile( '.+?([0-9]+)$' )
def get_version_suffix( name ):
  vs_match = re.match( version_suffix_rule, name )
  if vs_match:
    return vs_match.group( 1 )
  else:
    return ""

flags_black_list = set( [ "ValidationFlags" ] )

class vulkan_class_name:
  def __init__( self, name_ ):
    self.fullname = name_
    name_ = name_.replace( 'VULKAN_HPP_NAMESPACE::', '' )
    self.ext_suffix = get_extension_suffix( name_ )
    versioned_name = name_
    if len( self.ext_suffix ):
      versioned_name = versioned_name[ :-len( self.ext_suffix ) ]
    self.version_suffix = get_version_suffix( versioned_name )
    self.name = versioned_name
    self.include_name = self.name
    if len( self.version_suffix ):
      self.name = self.name[ :-len( self.version_suffix ) ]
    if not self.name in flags_black_list:
      if self.name[-8:] == 'FlagBits':
        self.name = self.name[:-8]
        self.include_name = self.name + 'Flags'
      elif self.name[-5:] == 'Flags':
        self.name = self.name[:-5]
        self.include_name = self.name + 'Flags'
  def remove_flagbits( self ):
    pass
  def get_flagbits( self ):
    return self.name + 'FlagBits' + self.version_suffix + self.ext_suffix
  def get_flags( self ):
    return self.name + 'Flags' + self.version_suffix + self.ext_suffix
  def get_name( self ):
    return self.name + self.version_suffix + self.ext_suffix
  def get_include_name( self ):
    return self.include_name + self.version_suffix + self.ext_suffix
  def get_cname( self ):
    return 'Vk' + self.name + self.version_suffix + self.ext_suffix

