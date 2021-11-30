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

#define BOOST_TEST_MAIN
#include <vector>
#include <iostream>
#include <boost/test/included/unit_test.hpp>
#include <vulkan/vulkan.hpp>
#include <vulkan2json/vulkan2json.hpp>

BOOST_AUTO_TEST_CASE(ImageCreateInfo) {
  vk::ImageCreateInfo image_create_info;
  image_create_info
    .setImageType( vk::ImageType::e2D )
    .setFormat( vk::Format::eR8G8B8A8Unorm )
    .setExtent(
      vk::Extent3D()
        .setWidth( 640 )
        .setHeight( 480 )
        .setDepth( 1 )
    )
    .setMipLevels( 1 )
    .setArrayLayers( 2 )
    .setSamples( vk::SampleCountFlagBits::e1 )
    .setTiling( vk::ImageTiling::eOptimal )
    .setUsage( vk::ImageUsageFlagBits::eColorAttachment )
    .setSharingMode( vk::SharingMode::eExclusive );
  nlohmann::json serialized = image_create_info;
  const auto expected =
    "{\"arrayLayers\": 2,\"extent\": {\"depth\": 1,\"height\": 480,\"width\": 640},\"flags\": [],\"format\": \"R8G8B8A8Unorm\",\"imageType\": \"2D\",\"initialLayout\": \"Undefined\",\"mipLevels\": 1,\"pNext\": 0,\"pQueueFamilyIndices\": 0,\"queueFamilyIndexCount\": 0,\"sType\": \"ImageCreateInfo\",\"samples\": \"1\",\"sharingMode\": \"Exclusive\",\"tiling\": \"Optimal\",\"usage\": [\"ColorAttachment\"]}"_json;
  BOOST_CHECK_EQUAL( serialized, expected );
  vk::ImageCreateInfo copied = image_create_info;
  vk::ImageCreateInfo deserialized = serialized;
  BOOST_CHECK( copied == deserialized );
}

