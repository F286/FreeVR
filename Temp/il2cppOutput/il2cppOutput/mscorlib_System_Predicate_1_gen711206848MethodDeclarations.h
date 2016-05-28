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

// System.Predicate`1<UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo>
struct Predicate_1_t711206848;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo140242950.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Predicate`1<UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m3656443450_gshared (Predicate_1_t711206848 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m3656443450(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t711206848 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m3656443450_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m1026576776_gshared (Predicate_1_t711206848 * __this, PendingPlayerInfo_t140242950  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m1026576776(__this, ___obj, method) ((  bool (*) (Predicate_1_t711206848 *, PendingPlayerInfo_t140242950 , const MethodInfo*))Predicate_1_Invoke_m1026576776_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m1764936343_gshared (Predicate_1_t711206848 * __this, PendingPlayerInfo_t140242950  ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m1764936343(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Predicate_1_t711206848 *, PendingPlayerInfo_t140242950 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m1764936343_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Networking.NetworkMigrationManager/PendingPlayerInfo>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m3871061836_gshared (Predicate_1_t711206848 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m3871061836(__this, ___result, method) ((  bool (*) (Predicate_1_t711206848 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m3871061836_gshared)(__this, ___result, method)
