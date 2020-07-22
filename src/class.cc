// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "class.h"

namespace libwebp {

Thumbnailer::Thumbnailer() {}
Thumbnailer::~Thumbnailer() {}

// Let's implement stuff !
// TODO: to create an animation:
//       - create a WebPAnimEncoderOptions  config
//       - set the quality to something in your search space
bool Thumbnailer::AddFrame(const WebPPicture& pic, int timestamp_ms) {}

//       - call WebPAnimEncoderNew, then fill the animation with WebPPicture
//         using WebPAnimEncoderAdd
//       - finalize with WebPAnimEncoderAssemble
bool Thumbnailer::GenerateAnimation(WebPPicture* const output) {}

}  // namespace libwebp
