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

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,UnityEngine.Networking.Types.NetworkID>
struct Transform_1_t590974852;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID3752984187.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,UnityEngine.Networking.Types.NetworkID>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m344022315_gshared (Transform_1_t590974852 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m344022315(__this, ___object, ___method, method) ((  void (*) (Transform_1_t590974852 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m344022315_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,UnityEngine.Networking.Types.NetworkID>::Invoke(TKey,TValue)
extern "C"  uint64_t Transform_1_Invoke_m2102724849_gshared (Transform_1_t590974852 * __this, uint64_t ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m2102724849(__this, ___key, ___value, method) ((  uint64_t (*) (Transform_1_t590974852 *, uint64_t, Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m2102724849_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,UnityEngine.Networking.Types.NetworkID>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m798285264_gshared (Transform_1_t590974852 * __this, uint64_t ___key, Il2CppObject * ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m798285264(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t590974852 *, uint64_t, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m798285264_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,UnityEngine.Networking.Types.NetworkID>::EndInvoke(System.IAsyncResult)
extern "C"  uint64_t Transform_1_EndInvoke_m563955449_gshared (Transform_1_t590974852 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m563955449(__this, ___result, method) ((  uint64_t (*) (Transform_1_t590974852 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m563955449_gshared)(__this, ___result, method)
