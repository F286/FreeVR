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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Networking.NetworkBroadcastResult,System.Object>
struct Transform_1_t3756134389;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3925257945.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Networking.NetworkBroadcastResult,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m958377550_gshared (Transform_1_t3756134389 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m958377550(__this, ___object, ___method, method) ((  void (*) (Transform_1_t3756134389 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m958377550_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Networking.NetworkBroadcastResult,System.Object>::Invoke(TKey,TValue)
extern "C"  Il2CppObject * Transform_1_Invoke_m1501917870_gshared (Transform_1_t3756134389 * __this, Il2CppObject * ___key, NetworkBroadcastResult_t3925257945  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1501917870(__this, ___key, ___value, method) ((  Il2CppObject * (*) (Transform_1_t3756134389 *, Il2CppObject *, NetworkBroadcastResult_t3925257945 , const MethodInfo*))Transform_1_Invoke_m1501917870_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Networking.NetworkBroadcastResult,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3430895885_gshared (Transform_1_t3756134389 * __this, Il2CppObject * ___key, NetworkBroadcastResult_t3925257945  ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3430895885(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t3756134389 *, Il2CppObject *, NetworkBroadcastResult_t3925257945 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3430895885_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Networking.NetworkBroadcastResult,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Transform_1_EndInvoke_m1382569244_gshared (Transform_1_t3756134389 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1382569244(__this, ___result, method) ((  Il2CppObject * (*) (Transform_1_t3756134389 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1382569244_gshared)(__this, ___result, method)
