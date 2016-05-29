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

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkSceneId,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.NetworkSceneId,System.Object>>
struct Transform_1_t443632786;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_930378298.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2936457058.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkSceneId,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.NetworkSceneId,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m478504152_gshared (Transform_1_t443632786 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m478504152(__this, ___object, ___method, method) ((  void (*) (Transform_1_t443632786 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m478504152_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkSceneId,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.NetworkSceneId,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t930378298  Transform_1_Invoke_m1668854176_gshared (Transform_1_t443632786 * __this, NetworkSceneId_t2936457058  ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m1668854176(__this, ___key, ___value, method) ((  KeyValuePair_2_t930378298  (*) (Transform_1_t443632786 *, NetworkSceneId_t2936457058 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m1668854176_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkSceneId,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.NetworkSceneId,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3409499979_gshared (Transform_1_t443632786 * __this, NetworkSceneId_t2936457058  ___key, Il2CppObject * ___value, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3409499979(__this, ___key, ___value, ___callback, ___object, method) ((  Il2CppObject * (*) (Transform_1_t443632786 *, NetworkSceneId_t2936457058 , Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3409499979_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.NetworkSceneId,System.Object,System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.NetworkSceneId,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t930378298  Transform_1_EndInvoke_m4002458346_gshared (Transform_1_t443632786 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m4002458346(__this, ___result, method) ((  KeyValuePair_2_t930378298  (*) (Transform_1_t443632786 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m4002458346_gshared)(__this, ___result, method)
