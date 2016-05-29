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

// System.Predicate`1<UnityEngine.Networking.NetworkLobbyManager/PendingPlayer>
struct Predicate_1_t1696443122;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1125479224.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Predicate`1<UnityEngine.Networking.NetworkLobbyManager/PendingPlayer>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m2171114320_gshared (Predicate_1_t1696443122 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m2171114320(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t1696443122 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m2171114320_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Networking.NetworkLobbyManager/PendingPlayer>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m2306647474_gshared (Predicate_1_t1696443122 * __this, PendingPlayer_t1125479224  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m2306647474(__this, ___obj, method) ((  bool (*) (Predicate_1_t1696443122 *, PendingPlayer_t1125479224 , const MethodInfo*))Predicate_1_Invoke_m2306647474_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Networking.NetworkLobbyManager/PendingPlayer>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m2409581249_gshared (Predicate_1_t1696443122 * __this, PendingPlayer_t1125479224  ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m2409581249(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Predicate_1_t1696443122 *, PendingPlayer_t1125479224 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m2409581249_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Networking.NetworkLobbyManager/PendingPlayer>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m1964802402_gshared (Predicate_1_t1696443122 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m1964802402(__this, ___result, method) ((  bool (*) (Predicate_1_t1696443122 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m1964802402_gshared)(__this, ___result, method)
