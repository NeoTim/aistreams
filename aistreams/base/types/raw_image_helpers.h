/*
 * Copyright 2020 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef AISTREAMS_BASE_TYPES_RAW_IMAGE_HELPERS_H_
#define AISTREAMS_BASE_TYPES_RAW_IMAGE_HELPERS_H_

#include "aistreams/port/status.h"
#include "aistreams/proto/types/raw_image.pb.h"

namespace aistreams {
namespace base {

// Get the number of channels for the given image format.
int GetNumChannels(const RawImageFormat& format);

// Get the expected buffer size specified by the given descriptor.
size_t GetBufferSize(const RawImageDescriptor& desc);

// Validate the given descriptor.
Status Validate(const RawImageDescriptor& desc);

}  // namespace base
}  // namespace aistreams

#endif  // AISTREAMS_BASE_TYPES_RAW_IMAGE_HELPERS_H_