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

// System.Predicate`1<UnityEngine.Networking.LocalClient/InternalMsg>
struct Predicate_1_t158036766;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Loca3882040164.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Predicate`1<UnityEngine.Networking.LocalClient/InternalMsg>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m1605964723_gshared (Predicate_1_t158036766 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m1605964723(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t158036766 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m1605964723_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Networking.LocalClient/InternalMsg>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m3675941231_gshared (Predicate_1_t158036766 * __this, InternalMsg_t3882040164  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m3675941231(__this, ___obj, method) ((  bool (*) (Predicate_1_t158036766 *, InternalMsg_t3882040164 , const MethodInfo*))Predicate_1_Invoke_m3675941231_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Networking.LocalClient/InternalMsg>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Predicate_1_BeginInvoke_m924541694_gshared (Predicate_1_t158036766 * __this, InternalMsg_t3882040164  ___obj, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m924541694(__this, ___obj, ___callback, ___object, method) ((  Il2CppObject * (*) (Predicate_1_t158036766 *, InternalMsg_t3882040164 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Predicate_1_BeginInvoke_m924541694_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Networking.LocalClient/InternalMsg>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m1702979013_gshared (Predicate_1_t158036766 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m1702979013(__this, ___result, method) ((  bool (*) (Predicate_1_t158036766 *, Il2CppObject *, const MethodInfo*))Predicate_1_EndInvoke_m1702979013_gshared)(__this, ___result, method)
