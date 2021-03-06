#ifndef SINC_INTERPOLATION_H
#define SINC_INTERPOLATION_H

#include <libraries/math_neon/math_neon.h>
#include <cmath>
#include "utility.h"
#undef NDEBUG
#include <assert.h>

float normalizedSinc(float x);
float getBlackman(float x, float M);
float getBlackmanFast(float x, float M);
void initializeWindowedSincTable();
float interpolateFromRingBuffer(float index, float *ringBuffer, int ringBufferSize);

#endif