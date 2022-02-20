/* Copyright 2018 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef TENSORFLOW_LITE_MICRO_EXAMPLES_MICRO_SPEECH_MICRO_FEATURES_MICRO_MODEL_SETTINGS_H_
#define TENSORFLOW_LITE_MICRO_EXAMPLES_MICRO_SPEECH_MICRO_FEATURES_MICRO_MODEL_SETTINGS_H_

// Keeping these as constant expressions allow us to allocate fixed-sized arrays
// on the stack for our working memory.

// The size of the input time series data we pass to the FFT to produce the
// frequency information. This has to be a power of two, and since we're dealing
// with 30ms of 16KHz inputs, which means 480 samples, this is the next value.
constexpr int kMaxAudioSampleSize = 0;
constexpr int kAudioSampleFrequency = 0;

// All of these values are derived from the values used during model training,
// if you change your model you'll need to update these constants.
// # of features in 1 slice
constexpr int kFeatureSliceSize = 0;
// # of slices
constexpr int kFeatureSliceCount = 0;
// # of total features
constexpr int kFeatureElementCount = (kFeatureSliceSize * kFeatureSliceCount);
// slice stride
constexpr int kFeatureSliceStrideMs = 0;
// Duration in millis of a slide
constexpr int kFeatureSliceDurationMs = 0;

// # of identifiable classes
constexpr int kCategoryCount = 0;
constexpr int kSilenceIndex = 0;
constexpr int kUnknownIndex = 0;
extern const char* kCategoryLabels[kCategoryCount];

#endif  // TENSORFLOW_LITE_MICRO_EXAMPLES_MICRO_SPEECH_MICRO_FEATURES_MICRO_MODEL_SETTINGS_H_