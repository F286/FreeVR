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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Int32>
struct Transform_1_t425946331;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw4106042041.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3009601419_gshared (Transform_1_t425946331 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m3009601419(__this, ___object, ___method, method) ((  void (*) (Transform_1_t425946331 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3009601419_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Int32>::Invoke(TKey,TValue)
extern "C"  int32_t Transform_1_Invoke_m3560515857_gshared (Transform_1_t425946331 * __this, int32_t ___key, ConnectionPendingPlayers_t4106042041  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m3560515857(__this, ___key, ___value, method) ((  int32_t (*) (Transform_1_t425946331 *, int32_t, ConnectionPendingPlayers_t4106042041 , const MethodInfo*))Transform_1_Invoke_m3560515857_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3225934448_gshared (Transform_1_t425946331 * __this, int32_t ___key, ConnectionPendingPlayers_t4106042041  ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3225934448(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t425946331 *, int32_t, ConnectionPendingPlayers_t4106042041 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3225934448_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Networking.NetworkMigrationManager/ConnectionPendingPlayers,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Transform_1_EndInvoke_m2132398809_gshared (Transform_1_t425946331 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m2132398809(__this, ___result, method) ((  int32_t (*) (Transform_1_t425946331 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2132398809_gshared)(__this, ___result, method)
