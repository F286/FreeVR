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

// System.Predicate`1<UnityEngine.Networking.QosType>
struct Predicate_1_t2163488018;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Networking_QosType1592524120.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Predicate`1<UnityEngine.Networking.QosType>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m795118383_gshared (Predicate_1_t2163488018 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m795118383(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t2163488018 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m795118383_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Networking.QosType>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m2320374387_gshared (Predicate_1_t2163488018 * __this, int32_t ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m2320374387(__this, ___obj, method) ((  bool (*) (Predicate_1_t2163488018 *, int32_t, const MethodInfo*))Predicate_1_Invoke_m2320374387_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Networking.QosType>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m534379522_gshared (Predicate_1_t2163488018 * __this, int32_t ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m534379522(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Predicate_1_t2163488018 *, int32_t, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m534379522_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Networking.QosType>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m3561832257_gshared (Predicate_1_t2163488018 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m3561832257(__this, ___result, method) ((  bool (*) (Predicate_1_t2163488018 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m3561832257_gshared)(__this, ___result, method)
