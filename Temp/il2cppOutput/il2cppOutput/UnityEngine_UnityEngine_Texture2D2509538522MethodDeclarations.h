﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// UnityEngine.Color[]
struct ColorU5BU5D_t3477081137;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextureFormat2239483167.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C"  void Texture2D__ctor_m1883511258 (Texture2D_t2509538522 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
extern "C"  void Texture2D__ctor_m1918985003 (Texture2D_t2509538522 * __this, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, bool ___linear, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
extern "C"  void Texture2D_Internal_Create_m457592211 (Il2CppObject * __this /* static, unused */, Texture2D_t2509538522 * ___mono, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, bool ___linear, IntPtr_t ___nativeTex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
extern "C"  Texture2D_t2509538522 * Texture2D_get_whiteTexture_m1214146742 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
extern "C"  void Texture2D_SetPixel_m378278602 (Texture2D_t2509538522 * __this, int32_t ___x, int32_t ___y, Color_t1588175760  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::INTERNAL_CALL_SetPixel(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.Color&)
extern "C"  void Texture2D_INTERNAL_CALL_SetPixel_m40008491 (Il2CppObject * __this /* static, unused */, Texture2D_t2509538522 * ___self, int32_t ___x, int32_t ___y, Color_t1588175760 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
extern "C"  Color_t1588175760  Texture2D_GetPixelBilinear_m2169326019 (Texture2D_t2509538522 * __this, float ___u, float ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::INTERNAL_CALL_GetPixelBilinear(UnityEngine.Texture2D,System.Single,System.Single,UnityEngine.Color&)
extern "C"  void Texture2D_INTERNAL_CALL_GetPixelBilinear_m2056702809 (Il2CppObject * __this /* static, unused */, Texture2D_t2509538522 * ___self, float ___u, float ___v, Color_t1588175760 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
extern "C"  ColorU5BU5D_t3477081137* Texture2D_GetPixels_m1759701362 (Texture2D_t2509538522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32)
extern "C"  ColorU5BU5D_t3477081137* Texture2D_GetPixels_m3014919107 (Texture2D_t2509538522 * __this, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  ColorU5BU5D_t3477081137* Texture2D_GetPixels_m871852803 (Texture2D_t2509538522 * __this, int32_t ___x, int32_t ___y, int32_t ___blockWidth, int32_t ___blockHeight, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
extern "C"  void Texture2D_Apply_m2754532430 (Texture2D_t2509538522 * __this, bool ___updateMipmaps, bool ___makeNoLongerReadable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply()
extern "C"  void Texture2D_Apply_m1364130776 (Texture2D_t2509538522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;