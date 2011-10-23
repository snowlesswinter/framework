// Copyright (c) 2011 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is automatically generated.

#ifndef UI_GFX_GL_GL_BINDINGS_AUTOGEN_EGL_H_
#define UI_GFX_GL_GL_BINDINGS_AUTOGEN_EGL_H_

namespace gfx {

void InitializeGLBindingsEGL();
void InitializeDebugGLBindingsEGL();

typedef EGLint (GL_BINDING_CALL *eglGetErrorProc)(void);
typedef EGLDisplay (GL_BINDING_CALL *eglGetDisplayProc)(EGLNativeDisplayType display_id);
typedef EGLBoolean (GL_BINDING_CALL *eglInitializeProc)(EGLDisplay dpy, EGLint* major, EGLint* minor);
typedef EGLBoolean (GL_BINDING_CALL *eglTerminateProc)(EGLDisplay dpy);
typedef const char* (GL_BINDING_CALL *eglQueryStringProc)(EGLDisplay dpy, EGLint name);
typedef EGLBoolean (GL_BINDING_CALL *eglGetConfigsProc)(EGLDisplay dpy, EGLConfig* configs, EGLint config_size, EGLint* num_config);
typedef EGLBoolean (GL_BINDING_CALL *eglChooseConfigProc)(EGLDisplay dpy, const EGLint* attrib_list, EGLConfig* configs, EGLint config_size, EGLint* num_config);
typedef EGLBoolean (GL_BINDING_CALL *eglGetConfigAttribProc)(EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint* value);
typedef EGLImageKHR (GL_BINDING_CALL *eglCreateImageKHRProc)(EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint* attrib_list);
typedef EGLBoolean (GL_BINDING_CALL *eglDestroyImageKHRProc)(EGLDisplay dpy, EGLImageKHR image);
typedef EGLSurface (GL_BINDING_CALL *eglCreateWindowSurfaceProc)(EGLDisplay dpy, EGLConfig config, EGLNativeWindowType win, const EGLint* attrib_list);
typedef EGLSurface (GL_BINDING_CALL *eglCreatePbufferSurfaceProc)(EGLDisplay dpy, EGLConfig config, const EGLint* attrib_list);
typedef EGLSurface (GL_BINDING_CALL *eglCreatePixmapSurfaceProc)(EGLDisplay dpy, EGLConfig config, EGLNativePixmapType pixmap, const EGLint* attrib_list);
typedef EGLBoolean (GL_BINDING_CALL *eglDestroySurfaceProc)(EGLDisplay dpy, EGLSurface surface);
typedef EGLBoolean (GL_BINDING_CALL *eglQuerySurfaceProc)(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint* value);
typedef EGLBoolean (GL_BINDING_CALL *eglBindAPIProc)(EGLenum api);
typedef EGLenum (GL_BINDING_CALL *eglQueryAPIProc)(void);
typedef EGLBoolean (GL_BINDING_CALL *eglWaitClientProc)(void);
typedef EGLBoolean (GL_BINDING_CALL *eglReleaseThreadProc)(void);
typedef EGLSurface (GL_BINDING_CALL *eglCreatePbufferFromClientBufferProc)(EGLDisplay dpy, EGLenum buftype, void* buffer, EGLConfig config, const EGLint* attrib_list);
typedef EGLBoolean (GL_BINDING_CALL *eglSurfaceAttribProc)(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value);
typedef EGLBoolean (GL_BINDING_CALL *eglBindTexImageProc)(EGLDisplay dpy, EGLSurface surface, EGLint buffer);
typedef EGLBoolean (GL_BINDING_CALL *eglReleaseTexImageProc)(EGLDisplay dpy, EGLSurface surface, EGLint buffer);
typedef EGLBoolean (GL_BINDING_CALL *eglSwapIntervalProc)(EGLDisplay dpy, EGLint interval);
typedef EGLContext (GL_BINDING_CALL *eglCreateContextProc)(EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint* attrib_list);
typedef EGLBoolean (GL_BINDING_CALL *eglDestroyContextProc)(EGLDisplay dpy, EGLContext ctx);
typedef EGLBoolean (GL_BINDING_CALL *eglMakeCurrentProc)(EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx);
typedef EGLContext (GL_BINDING_CALL *eglGetCurrentContextProc)(void);
typedef EGLSurface (GL_BINDING_CALL *eglGetCurrentSurfaceProc)(EGLint readdraw);
typedef EGLDisplay (GL_BINDING_CALL *eglGetCurrentDisplayProc)(void);
typedef EGLBoolean (GL_BINDING_CALL *eglQueryContextProc)(EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint* value);
typedef EGLBoolean (GL_BINDING_CALL *eglWaitGLProc)(void);
typedef EGLBoolean (GL_BINDING_CALL *eglWaitNativeProc)(EGLint engine);
typedef EGLBoolean (GL_BINDING_CALL *eglSwapBuffersProc)(EGLDisplay dpy, EGLSurface surface);
typedef EGLBoolean (GL_BINDING_CALL *eglCopyBuffersProc)(EGLDisplay dpy, EGLSurface surface, EGLNativePixmapType target);
typedef __eglMustCastToProperFunctionPointerType (GL_BINDING_CALL *eglGetProcAddressProc)(const char* procname);

GL_EXPORT extern eglGetErrorProc g_eglGetError;
GL_EXPORT extern eglGetDisplayProc g_eglGetDisplay;
GL_EXPORT extern eglInitializeProc g_eglInitialize;
GL_EXPORT extern eglTerminateProc g_eglTerminate;
GL_EXPORT extern eglQueryStringProc g_eglQueryString;
GL_EXPORT extern eglGetConfigsProc g_eglGetConfigs;
GL_EXPORT extern eglChooseConfigProc g_eglChooseConfig;
GL_EXPORT extern eglGetConfigAttribProc g_eglGetConfigAttrib;
GL_EXPORT extern eglCreateImageKHRProc g_eglCreateImageKHR;
GL_EXPORT extern eglDestroyImageKHRProc g_eglDestroyImageKHR;
GL_EXPORT extern eglCreateWindowSurfaceProc g_eglCreateWindowSurface;
GL_EXPORT extern eglCreatePbufferSurfaceProc g_eglCreatePbufferSurface;
GL_EXPORT extern eglCreatePixmapSurfaceProc g_eglCreatePixmapSurface;
GL_EXPORT extern eglDestroySurfaceProc g_eglDestroySurface;
GL_EXPORT extern eglQuerySurfaceProc g_eglQuerySurface;
GL_EXPORT extern eglBindAPIProc g_eglBindAPI;
GL_EXPORT extern eglQueryAPIProc g_eglQueryAPI;
GL_EXPORT extern eglWaitClientProc g_eglWaitClient;
GL_EXPORT extern eglReleaseThreadProc g_eglReleaseThread;
GL_EXPORT extern eglCreatePbufferFromClientBufferProc g_eglCreatePbufferFromClientBuffer;
GL_EXPORT extern eglSurfaceAttribProc g_eglSurfaceAttrib;
GL_EXPORT extern eglBindTexImageProc g_eglBindTexImage;
GL_EXPORT extern eglReleaseTexImageProc g_eglReleaseTexImage;
GL_EXPORT extern eglSwapIntervalProc g_eglSwapInterval;
GL_EXPORT extern eglCreateContextProc g_eglCreateContext;
GL_EXPORT extern eglDestroyContextProc g_eglDestroyContext;
GL_EXPORT extern eglMakeCurrentProc g_eglMakeCurrent;
GL_EXPORT extern eglGetCurrentContextProc g_eglGetCurrentContext;
GL_EXPORT extern eglGetCurrentSurfaceProc g_eglGetCurrentSurface;
GL_EXPORT extern eglGetCurrentDisplayProc g_eglGetCurrentDisplay;
GL_EXPORT extern eglQueryContextProc g_eglQueryContext;
GL_EXPORT extern eglWaitGLProc g_eglWaitGL;
GL_EXPORT extern eglWaitNativeProc g_eglWaitNative;
GL_EXPORT extern eglSwapBuffersProc g_eglSwapBuffers;
GL_EXPORT extern eglCopyBuffersProc g_eglCopyBuffers;
GL_EXPORT extern eglGetProcAddressProc g_eglGetProcAddress;

}  // namespace gfx

#define eglGetError ::gfx::g_eglGetError
#define eglGetDisplay ::gfx::g_eglGetDisplay
#define eglInitialize ::gfx::g_eglInitialize
#define eglTerminate ::gfx::g_eglTerminate
#define eglQueryString ::gfx::g_eglQueryString
#define eglGetConfigs ::gfx::g_eglGetConfigs
#define eglChooseConfig ::gfx::g_eglChooseConfig
#define eglGetConfigAttrib ::gfx::g_eglGetConfigAttrib
#define eglCreateImageKHR ::gfx::g_eglCreateImageKHR
#define eglDestroyImageKHR ::gfx::g_eglDestroyImageKHR
#define eglCreateWindowSurface ::gfx::g_eglCreateWindowSurface
#define eglCreatePbufferSurface ::gfx::g_eglCreatePbufferSurface
#define eglCreatePixmapSurface ::gfx::g_eglCreatePixmapSurface
#define eglDestroySurface ::gfx::g_eglDestroySurface
#define eglQuerySurface ::gfx::g_eglQuerySurface
#define eglBindAPI ::gfx::g_eglBindAPI
#define eglQueryAPI ::gfx::g_eglQueryAPI
#define eglWaitClient ::gfx::g_eglWaitClient
#define eglReleaseThread ::gfx::g_eglReleaseThread
#define eglCreatePbufferFromClientBuffer ::gfx::g_eglCreatePbufferFromClientBuffer
#define eglSurfaceAttrib ::gfx::g_eglSurfaceAttrib
#define eglBindTexImage ::gfx::g_eglBindTexImage
#define eglReleaseTexImage ::gfx::g_eglReleaseTexImage
#define eglSwapInterval ::gfx::g_eglSwapInterval
#define eglCreateContext ::gfx::g_eglCreateContext
#define eglDestroyContext ::gfx::g_eglDestroyContext
#define eglMakeCurrent ::gfx::g_eglMakeCurrent
#define eglGetCurrentContext ::gfx::g_eglGetCurrentContext
#define eglGetCurrentSurface ::gfx::g_eglGetCurrentSurface
#define eglGetCurrentDisplay ::gfx::g_eglGetCurrentDisplay
#define eglQueryContext ::gfx::g_eglQueryContext
#define eglWaitGL ::gfx::g_eglWaitGL
#define eglWaitNative ::gfx::g_eglWaitNative
#define eglSwapBuffers ::gfx::g_eglSwapBuffers
#define eglCopyBuffers ::gfx::g_eglCopyBuffers
#define eglGetProcAddress ::gfx::g_eglGetProcAddress

#endif  //  UI_GFX_GL_GL_BINDINGS_AUTOGEN_EGL_H_
