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

// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Boolean>
struct SyncListChanged_t3120783845;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Sync2698297041.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UnityEngine.Networking.SyncList`1/SyncListChanged<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void SyncListChanged__ctor_m749131270_gshared (SyncListChanged_t3120783845 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define SyncListChanged__ctor_m749131270(__this, ___object, ___method, method) ((  void (*) (SyncListChanged_t3120783845 *, Il2CppObject *, IntPtr_t, const MethodInfo*))SyncListChanged__ctor_m749131270_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.SyncList`1/SyncListChanged<System.Boolean>::Invoke(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32)
extern "C"  void SyncListChanged_Invoke_m867323736_gshared (SyncListChanged_t3120783845 * __this, int32_t ___op, int32_t ___itemIndex, const MethodInfo* method);
#define SyncListChanged_Invoke_m867323736(__this, ___op, ___itemIndex, method) ((  void (*) (SyncListChanged_t3120783845 *, int32_t, int32_t, const MethodInfo*))SyncListChanged_Invoke_m867323736_gshared)(__this, ___op, ___itemIndex, method)
// System.IAsyncResult UnityEngine.Networking.SyncList`1/SyncListChanged<System.Boolean>::BeginInvoke(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SyncListChanged_BeginInvoke_m2377199609_gshared (SyncListChanged_t3120783845 * __this, int32_t ___op, int32_t ___itemIndex, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define SyncListChanged_BeginInvoke_m2377199609(__this, ___op, ___itemIndex, ___callback, ___object, method) ((  Il2CppObject * (*) (SyncListChanged_t3120783845 *, int32_t, int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))SyncListChanged_BeginInvoke_m2377199609_gshared)(__this, ___op, ___itemIndex, ___callback, ___object, method)
// System.Void UnityEngine.Networking.SyncList`1/SyncListChanged<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  void SyncListChanged_EndInvoke_m2737978134_gshared (SyncListChanged_t3120783845 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define SyncListChanged_EndInvoke_m2737978134(__this, ___result, method) ((  void (*) (SyncListChanged_t3120783845 *, Il2CppObject *, const MethodInfo*))SyncListChanged_EndInvoke_m2737978134_gshared)(__this, ___result, method)
