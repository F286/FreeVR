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

// UnityStandardAssets.ImageEffects.DepthOfField
struct DepthOfField_t1254256384;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture12905170.h"

// System.Void UnityStandardAssets.ImageEffects.DepthOfField::.ctor()
extern "C"  void DepthOfField__ctor_m3676412873 (DepthOfField_t1254256384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.DepthOfField::CheckResources()
extern "C"  bool DepthOfField_CheckResources_m754426236 (DepthOfField_t1254256384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::OnEnable()
extern "C"  void DepthOfField_OnEnable_m126462749 (DepthOfField_t1254256384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::OnDisable()
extern "C"  void DepthOfField_OnDisable_m66315184 (DepthOfField_t1254256384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::ReleaseComputeResources()
extern "C"  void DepthOfField_ReleaseComputeResources_m1506874364 (DepthOfField_t1254256384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::CreateComputeResources()
extern "C"  void DepthOfField_CreateComputeResources_m3901265957 (DepthOfField_t1254256384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.ImageEffects.DepthOfField::FocalDistance01(System.Single)
extern "C"  float DepthOfField_FocalDistance01_m2080139005 (DepthOfField_t1254256384 * __this, float ___worldDist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::WriteCoc(UnityEngine.RenderTexture,System.Boolean)
extern "C"  void DepthOfField_WriteCoc_m3783700300 (DepthOfField_t1254256384 * __this, RenderTexture_t12905170 * ___fromTo, bool ___fgDilate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.DepthOfField::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void DepthOfField_OnRenderImage_m3964743413 (DepthOfField_t1254256384 * __this, RenderTexture_t12905170 * ___source, RenderTexture_t12905170 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
