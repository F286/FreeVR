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

// System.Comparison`1<System.Boolean>
struct Comparison_1_t2914680217;
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

// System.Void System.Comparison`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m761669728_gshared (Comparison_1_t2914680217 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m761669728(__this, ___object, ___method, method) ((  void (*) (Comparison_1_t2914680217 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m761669728_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Boolean>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m507392152_gshared (Comparison_1_t2914680217 * __this, bool ___x, bool ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m507392152(__this, ___x, ___y, method) ((  int32_t (*) (Comparison_1_t2914680217 *, bool, bool, const MethodInfo*))Comparison_1_Invoke_m507392152_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Boolean>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Comparison_1_BeginInvoke_m2260788193_gshared (Comparison_1_t2914680217 * __this, bool ___x, bool ___y, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m2260788193(__this, ___x, ___y, ___callback, ___object, method) ((  Il2CppObject * (*) (Comparison_1_t2914680217 *, bool, bool, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Comparison_1_BeginInvoke_m2260788193_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m1567770836_gshared (Comparison_1_t2914680217 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m1567770836(__this, ___result, method) ((  int32_t (*) (Comparison_1_t2914680217 *, Il2CppObject *, const MethodInfo*))Comparison_1_EndInvoke_m1567770836_gshared)(__this, ___result, method)
