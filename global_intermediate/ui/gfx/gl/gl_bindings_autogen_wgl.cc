// Copyright (c) 2011 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is automatically generated.

#include "ui/gfx/gl/gl_bindings.h"
#include "ui/gfx/gl/gl_implementation.h"

namespace gfx {

wglCreateContextProc g_wglCreateContext;
wglCreateLayerContextProc g_wglCreateLayerContext;
wglCopyContextProc g_wglCopyContext;
wglDeleteContextProc g_wglDeleteContext;
wglGetCurrentContextProc g_wglGetCurrentContext;
wglGetCurrentDCProc g_wglGetCurrentDC;
wglMakeCurrentProc g_wglMakeCurrent;
wglShareListsProc g_wglShareLists;
wglSwapIntervalEXTProc g_wglSwapIntervalEXT;
wglSwapLayerBuffersProc g_wglSwapLayerBuffers;
wglGetExtensionsStringARBProc g_wglGetExtensionsStringARB;
wglChoosePixelFormatARBProc g_wglChoosePixelFormatARB;
wglCreatePbufferARBProc g_wglCreatePbufferARB;
wglGetPbufferDCARBProc g_wglGetPbufferDCARB;
wglReleasePbufferDCARBProc g_wglReleasePbufferDCARB;
wglDestroyPbufferARBProc g_wglDestroyPbufferARB;
wglQueryPbufferARBProc g_wglQueryPbufferARB;

static wglCreateContextProc g_debug_wglCreateContext;
static wglCreateLayerContextProc g_debug_wglCreateLayerContext;
static wglCopyContextProc g_debug_wglCopyContext;
static wglDeleteContextProc g_debug_wglDeleteContext;
static wglGetCurrentContextProc g_debug_wglGetCurrentContext;
static wglGetCurrentDCProc g_debug_wglGetCurrentDC;
static wglMakeCurrentProc g_debug_wglMakeCurrent;
static wglShareListsProc g_debug_wglShareLists;
static wglSwapIntervalEXTProc g_debug_wglSwapIntervalEXT;
static wglSwapLayerBuffersProc g_debug_wglSwapLayerBuffers;
static wglGetExtensionsStringARBProc g_debug_wglGetExtensionsStringARB;
static wglChoosePixelFormatARBProc g_debug_wglChoosePixelFormatARB;
static wglCreatePbufferARBProc g_debug_wglCreatePbufferARB;
static wglGetPbufferDCARBProc g_debug_wglGetPbufferDCARB;
static wglReleasePbufferDCARBProc g_debug_wglReleasePbufferDCARB;
static wglDestroyPbufferARBProc g_debug_wglDestroyPbufferARB;
static wglQueryPbufferARBProc g_debug_wglQueryPbufferARB;

void InitializeGLBindingsWGL() {
  if (!g_wglCreateContext)
    g_wglCreateContext = reinterpret_cast<wglCreateContextProc>(GetGLProcAddress("wglCreateContext"));
  if (!g_wglCreateLayerContext)
    g_wglCreateLayerContext = reinterpret_cast<wglCreateLayerContextProc>(GetGLProcAddress("wglCreateLayerContext"));
  if (!g_wglCopyContext)
    g_wglCopyContext = reinterpret_cast<wglCopyContextProc>(GetGLProcAddress("wglCopyContext"));
  if (!g_wglDeleteContext)
    g_wglDeleteContext = reinterpret_cast<wglDeleteContextProc>(GetGLProcAddress("wglDeleteContext"));
  if (!g_wglGetCurrentContext)
    g_wglGetCurrentContext = reinterpret_cast<wglGetCurrentContextProc>(GetGLProcAddress("wglGetCurrentContext"));
  if (!g_wglGetCurrentDC)
    g_wglGetCurrentDC = reinterpret_cast<wglGetCurrentDCProc>(GetGLProcAddress("wglGetCurrentDC"));
  if (!g_wglMakeCurrent)
    g_wglMakeCurrent = reinterpret_cast<wglMakeCurrentProc>(GetGLProcAddress("wglMakeCurrent"));
  if (!g_wglShareLists)
    g_wglShareLists = reinterpret_cast<wglShareListsProc>(GetGLProcAddress("wglShareLists"));
  if (!g_wglSwapIntervalEXT)
    g_wglSwapIntervalEXT = reinterpret_cast<wglSwapIntervalEXTProc>(GetGLProcAddress("wglSwapIntervalEXT"));
  if (!g_wglSwapLayerBuffers)
    g_wglSwapLayerBuffers = reinterpret_cast<wglSwapLayerBuffersProc>(GetGLProcAddress("wglSwapLayerBuffers"));
  if (!g_wglGetExtensionsStringARB)
    g_wglGetExtensionsStringARB = reinterpret_cast<wglGetExtensionsStringARBProc>(GetGLProcAddress("wglGetExtensionsStringARB"));
  if (!g_wglGetExtensionsStringARB)
    g_wglGetExtensionsStringARB = reinterpret_cast<wglGetExtensionsStringARBProc>(GetGLProcAddress("wglGetExtensionsStringEXT"));
  if (!g_wglChoosePixelFormatARB)
    g_wglChoosePixelFormatARB = reinterpret_cast<wglChoosePixelFormatARBProc>(GetGLProcAddress("wglChoosePixelFormatARB"));
  if (!g_wglCreatePbufferARB)
    g_wglCreatePbufferARB = reinterpret_cast<wglCreatePbufferARBProc>(GetGLProcAddress("wglCreatePbufferARB"));
  if (!g_wglGetPbufferDCARB)
    g_wglGetPbufferDCARB = reinterpret_cast<wglGetPbufferDCARBProc>(GetGLProcAddress("wglGetPbufferDCARB"));
  if (!g_wglReleasePbufferDCARB)
    g_wglReleasePbufferDCARB = reinterpret_cast<wglReleasePbufferDCARBProc>(GetGLProcAddress("wglReleasePbufferDCARB"));
  if (!g_wglDestroyPbufferARB)
    g_wglDestroyPbufferARB = reinterpret_cast<wglDestroyPbufferARBProc>(GetGLProcAddress("wglDestroyPbufferARB"));
  if (!g_wglQueryPbufferARB)
    g_wglQueryPbufferARB = reinterpret_cast<wglQueryPbufferARBProc>(GetGLProcAddress("wglQueryPbufferARB"));
}

extern "C" {

static HGLRC GL_BINDING_CALL Debug_wglCreateContext(HDC hdc) {
  GL_SERVICE_LOG("wglCreateContext" << "("  << hdc << ")");
  HGLRC result = g_debug_wglCreateContext(hdc);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static HGLRC GL_BINDING_CALL Debug_wglCreateLayerContext(HDC hdc, int iLayerPlane) {
  GL_SERVICE_LOG("wglCreateLayerContext" << "("  << hdc << ", " << iLayerPlane << ")");
  HGLRC result = g_debug_wglCreateLayerContext(hdc, iLayerPlane);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static BOOL GL_BINDING_CALL Debug_wglCopyContext(HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask) {
  GL_SERVICE_LOG("wglCopyContext" << "("  << hglrcSrc << ", " << hglrcDst << ", " << mask << ")");
  BOOL result = g_debug_wglCopyContext(hglrcSrc, hglrcDst, mask);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static BOOL GL_BINDING_CALL Debug_wglDeleteContext(HGLRC hglrc) {
  GL_SERVICE_LOG("wglDeleteContext" << "("  << hglrc << ")");
  BOOL result = g_debug_wglDeleteContext(hglrc);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static HGLRC GL_BINDING_CALL Debug_wglGetCurrentContext() {
  GL_SERVICE_LOG("wglGetCurrentContext" << "("  << ")");
  HGLRC result = g_debug_wglGetCurrentContext();
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static HDC GL_BINDING_CALL Debug_wglGetCurrentDC() {
  GL_SERVICE_LOG("wglGetCurrentDC" << "("  << ")");
  HDC result = g_debug_wglGetCurrentDC();
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static BOOL GL_BINDING_CALL Debug_wglMakeCurrent(HDC hdc, HGLRC hglrc) {
  GL_SERVICE_LOG("wglMakeCurrent" << "("  << hdc << ", " << hglrc << ")");
  BOOL result = g_debug_wglMakeCurrent(hdc, hglrc);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static BOOL GL_BINDING_CALL Debug_wglShareLists(HGLRC hglrc1, HGLRC hglrc2) {
  GL_SERVICE_LOG("wglShareLists" << "("  << hglrc1 << ", " << hglrc2 << ")");
  BOOL result = g_debug_wglShareLists(hglrc1, hglrc2);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static BOOL GL_BINDING_CALL Debug_wglSwapIntervalEXT(int interval) {
  GL_SERVICE_LOG("wglSwapIntervalEXT" << "("  << interval << ")");
  BOOL result = g_debug_wglSwapIntervalEXT(interval);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static BOOL GL_BINDING_CALL Debug_wglSwapLayerBuffers(HDC hdc, UINT fuPlanes) {
  GL_SERVICE_LOG("wglSwapLayerBuffers" << "("  << hdc << ", " << fuPlanes << ")");
  BOOL result = g_debug_wglSwapLayerBuffers(hdc, fuPlanes);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static const char* GL_BINDING_CALL Debug_wglGetExtensionsStringARB(HDC hDC) {
  GL_SERVICE_LOG("wglGetExtensionsStringARB" << "("  << hDC << ")");
  const char* result = g_debug_wglGetExtensionsStringARB(hDC);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static BOOL GL_BINDING_CALL Debug_wglChoosePixelFormatARB(HDC dc, const int* int_attrib_list, const float* float_attrib_list, UINT max_formats, int* formats, UINT* num_formats) {
  GL_SERVICE_LOG("wglChoosePixelFormatARB" << "("  << dc << ", " << static_cast<const void*>(int_attrib_list) << ", " << static_cast<const void*>(float_attrib_list) << ", " << max_formats << ", " << static_cast<const void*>(formats) << ", " << static_cast<const void*>(num_formats) << ")");
  BOOL result = g_debug_wglChoosePixelFormatARB(dc, int_attrib_list, float_attrib_list, max_formats, formats, num_formats);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static HPBUFFERARB GL_BINDING_CALL Debug_wglCreatePbufferARB(HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int* piAttribList) {
  GL_SERVICE_LOG("wglCreatePbufferARB" << "("  << hDC << ", " << iPixelFormat << ", " << iWidth << ", " << iHeight << ", " << static_cast<const void*>(piAttribList) << ")");
  HPBUFFERARB result = g_debug_wglCreatePbufferARB(hDC, iPixelFormat, iWidth, iHeight, piAttribList);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static HDC GL_BINDING_CALL Debug_wglGetPbufferDCARB(HPBUFFERARB hPbuffer) {
  GL_SERVICE_LOG("wglGetPbufferDCARB" << "("  << hPbuffer << ")");
  HDC result = g_debug_wglGetPbufferDCARB(hPbuffer);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static int GL_BINDING_CALL Debug_wglReleasePbufferDCARB(HPBUFFERARB hPbuffer, HDC hDC) {
  GL_SERVICE_LOG("wglReleasePbufferDCARB" << "("  << hPbuffer << ", " << hDC << ")");
  int result = g_debug_wglReleasePbufferDCARB(hPbuffer, hDC);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static BOOL GL_BINDING_CALL Debug_wglDestroyPbufferARB(HPBUFFERARB hPbuffer) {
  GL_SERVICE_LOG("wglDestroyPbufferARB" << "("  << hPbuffer << ")");
  BOOL result = g_debug_wglDestroyPbufferARB(hPbuffer);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}

static BOOL GL_BINDING_CALL Debug_wglQueryPbufferARB(HPBUFFERARB hPbuffer, int iAttribute, int* piValue) {
  GL_SERVICE_LOG("wglQueryPbufferARB" << "("  << hPbuffer << ", " << iAttribute << ", " << static_cast<const void*>(piValue) << ")");
  BOOL result = g_debug_wglQueryPbufferARB(hPbuffer, iAttribute, piValue);
  GL_SERVICE_LOG("GL_RESULT: " << result);
  return result;
}
}  // extern "C"

void InitializeDebugGLBindingsWGL() {
  if (!g_debug_wglCreateContext) {
    g_debug_wglCreateContext = g_wglCreateContext;
    g_wglCreateContext = Debug_wglCreateContext;
  }
  if (!g_debug_wglCreateLayerContext) {
    g_debug_wglCreateLayerContext = g_wglCreateLayerContext;
    g_wglCreateLayerContext = Debug_wglCreateLayerContext;
  }
  if (!g_debug_wglCopyContext) {
    g_debug_wglCopyContext = g_wglCopyContext;
    g_wglCopyContext = Debug_wglCopyContext;
  }
  if (!g_debug_wglDeleteContext) {
    g_debug_wglDeleteContext = g_wglDeleteContext;
    g_wglDeleteContext = Debug_wglDeleteContext;
  }
  if (!g_debug_wglGetCurrentContext) {
    g_debug_wglGetCurrentContext = g_wglGetCurrentContext;
    g_wglGetCurrentContext = Debug_wglGetCurrentContext;
  }
  if (!g_debug_wglGetCurrentDC) {
    g_debug_wglGetCurrentDC = g_wglGetCurrentDC;
    g_wglGetCurrentDC = Debug_wglGetCurrentDC;
  }
  if (!g_debug_wglMakeCurrent) {
    g_debug_wglMakeCurrent = g_wglMakeCurrent;
    g_wglMakeCurrent = Debug_wglMakeCurrent;
  }
  if (!g_debug_wglShareLists) {
    g_debug_wglShareLists = g_wglShareLists;
    g_wglShareLists = Debug_wglShareLists;
  }
  if (!g_debug_wglSwapIntervalEXT) {
    g_debug_wglSwapIntervalEXT = g_wglSwapIntervalEXT;
    g_wglSwapIntervalEXT = Debug_wglSwapIntervalEXT;
  }
  if (!g_debug_wglSwapLayerBuffers) {
    g_debug_wglSwapLayerBuffers = g_wglSwapLayerBuffers;
    g_wglSwapLayerBuffers = Debug_wglSwapLayerBuffers;
  }
  if (!g_debug_wglGetExtensionsStringARB) {
    g_debug_wglGetExtensionsStringARB = g_wglGetExtensionsStringARB;
    g_wglGetExtensionsStringARB = Debug_wglGetExtensionsStringARB;
  }
  if (!g_debug_wglGetExtensionsStringARB) {
    g_debug_wglGetExtensionsStringARB = g_wglGetExtensionsStringARB;
    g_wglGetExtensionsStringARB = Debug_wglGetExtensionsStringARB;
  }
  if (!g_debug_wglChoosePixelFormatARB) {
    g_debug_wglChoosePixelFormatARB = g_wglChoosePixelFormatARB;
    g_wglChoosePixelFormatARB = Debug_wglChoosePixelFormatARB;
  }
  if (!g_debug_wglCreatePbufferARB) {
    g_debug_wglCreatePbufferARB = g_wglCreatePbufferARB;
    g_wglCreatePbufferARB = Debug_wglCreatePbufferARB;
  }
  if (!g_debug_wglGetPbufferDCARB) {
    g_debug_wglGetPbufferDCARB = g_wglGetPbufferDCARB;
    g_wglGetPbufferDCARB = Debug_wglGetPbufferDCARB;
  }
  if (!g_debug_wglReleasePbufferDCARB) {
    g_debug_wglReleasePbufferDCARB = g_wglReleasePbufferDCARB;
    g_wglReleasePbufferDCARB = Debug_wglReleasePbufferDCARB;
  }
  if (!g_debug_wglDestroyPbufferARB) {
    g_debug_wglDestroyPbufferARB = g_wglDestroyPbufferARB;
    g_wglDestroyPbufferARB = Debug_wglDestroyPbufferARB;
  }
  if (!g_debug_wglQueryPbufferARB) {
    g_debug_wglQueryPbufferARB = g_wglQueryPbufferARB;
    g_wglQueryPbufferARB = Debug_wglQueryPbufferARB;
  }
}

}  // namespace gfx
