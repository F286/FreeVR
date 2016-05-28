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

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
struct ResponseDelegate_1_t561644984;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void ResponseDelegate_1__ctor_m100065721_gshared (ResponseDelegate_1_t561644984 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define ResponseDelegate_1__ctor_m100065721(__this, ___object, ___method, method) ((  void (*) (ResponseDelegate_1_t561644984 *, Il2CppObject *, IntPtr_t, const MethodInfo*))ResponseDelegate_1__ctor_m100065721_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::Invoke(T)
extern "C"  void ResponseDelegate_1_Invoke_m2859641963_gshared (ResponseDelegate_1_t561644984 * __this, Il2CppObject * ___response, const MethodInfo* method);
#define ResponseDelegate_1_Invoke_m2859641963(__this, ___response, method) ((  void (*) (ResponseDelegate_1_t561644984 *, Il2CppObject *, const MethodInfo*))ResponseDelegate_1_Invoke_m2859641963_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ResponseDelegate_1_BeginInvoke_m1325125056_gshared (ResponseDelegate_1_t561644984 * __this, Il2CppObject * ___response, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define ResponseDelegate_1_BeginInvoke_m1325125056(__this, ___response, ___callback, ___object, method) ((  Il2CppObject * (*) (ResponseDelegate_1_t561644984 *, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))ResponseDelegate_1_BeginInvoke_m1325125056_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void ResponseDelegate_1_EndInvoke_m48896073_gshared (ResponseDelegate_1_t561644984 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define ResponseDelegate_1_EndInvoke_m48896073(__this, ___result, method) ((  void (*) (ResponseDelegate_1_t561644984 *, Il2CppObject *, const MethodInfo*))ResponseDelegate_1_EndInvoke_m48896073_gshared)(__this, ___result, method)
