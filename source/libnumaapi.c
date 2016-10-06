// Copyright (c) 2016, libnumaapi authors
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to
// deal in the Software without restriction, including without limitation the
// rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
// sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
//
// Author: Sergey Sharybin (sergey.vfx@gmail.com)

#include "libnumaapi.h"

// Stub implementation for platforms which doesn't have NUMA support.

#if !defined(__linux__) && !defined(_WIN32)

NUMAPIResult numaApiInitialize(void) {
  return LIBNUMAAPI_INAVAILABLE;
}

int numaApiGetNumNodes(void) {
  return 0;
}

int numApiIsNodeAvailable(int node) {
  (void) node;
  return 0;
}

void* numaApiAllocateOnNode(size_t size, int node) {
  (void) size;
  (void) node;
  return 0;
}

void* numaApiAllocateLocal(size_t size) {
  (void) size;
  return NULL;
}

void numaApiFree(void* start, size_t size) {
  (void) start;
  (void) size;
}

#endif
