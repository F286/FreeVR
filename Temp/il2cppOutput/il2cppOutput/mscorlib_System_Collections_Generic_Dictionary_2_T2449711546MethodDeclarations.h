#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkSceneId,System.Object,UnityEngine.Networking.NetworkSceneId>
struct Transform_1_t2449711546;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2936457058.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkSceneId,System.Object,UnityEngine.Networking.NetworkSceneId>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3261839239_gshared (Transform_1_t2449711546 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m3261839239(__this, ___object, ___method, method) ((  void (*) (Transform_1_t2449711546 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3261839239_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkSceneId,System.Object,UnityEngine.Networking.NetworkSceneId>::Invoke(TKey,TValue)
extern "C"  NetworkSceneId_t2936457058  Transform_1_Invoke_m3867343509_gshared (Transform_1_t2449711546 * __this, NetworkSceneId_t2936457058  ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m3867343509(__this, ___key, ___value, method) ((  NetworkSceneId_t2936457058  (*) (Transform_1_t2449711546 *, NetworkSceneId_t2936457058 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m3867343509_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkSceneId,System.Object,UnityEngine.Networking.NetworkSceneId>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3425530356_gshared (Transform_1_t2449711546 * __this, NetworkSceneId_t2936457058  ___key, Il2CppObject * ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3425530356(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t2449711546 *, NetworkSceneId_t2936457058 , Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3425530356_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkSceneId,System.Object,UnityEngine.Networking.NetworkSceneId>::EndInvoke(System.IAsyncResult)
extern "C"  NetworkSceneId_t2936457058  Transform_1_EndInvoke_m1422698197_gshared (Transform_1_t2449711546 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m1422698197(__this, ___result, method) ((  NetworkSceneId_t2936457058  (*) (Transform_1_t2449711546 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1422698197_gshared)(__this, ___result, method)
