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

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkHash128,System.Object,System.Object>
struct Transform_1_t567725726;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1719292676.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkHash128,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m404497731_gshared (Transform_1_t567725726 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m404497731(__this, ___object, ___method, method) ((  void (*) (Transform_1_t567725726 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m404497731_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkHash128,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C"  Il2CppObject * Transform_1_Invoke_m3771773529_gshared (Transform_1_t567725726 * __this, NetworkHash128_t1719292676  ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m3771773529(__this, ___key, ___value, method) ((  Il2CppObject * (*) (Transform_1_t567725726 *, NetworkHash128_t1719292676 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m3771773529_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkHash128,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m4042580920_gshared (Transform_1_t567725726 * __this, NetworkHash128_t1719292676  ___key, Il2CppObject * ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m4042580920(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t567725726 *, NetworkHash128_t1719292676 , Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m4042580920_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkHash128,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Transform_1_EndInvoke_m3113823377_gshared (Transform_1_t567725726 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m3113823377(__this, ___result, method) ((  Il2CppObject * (*) (Transform_1_t567725726 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m3113823377_gshared)(__this, ___result, method)
