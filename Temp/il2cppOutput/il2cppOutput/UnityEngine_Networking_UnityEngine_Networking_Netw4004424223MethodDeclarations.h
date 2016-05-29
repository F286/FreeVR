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

// UnityEngine.Networking.NetworkBehaviour/EventDelegate
struct EventDelegate_t4004424223;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<System.Delegate>
struct List_1_t162565683;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void UnityEngine.Networking.NetworkBehaviour/EventDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void EventDelegate__ctor_m2855823414 (EventDelegate_t4004424223 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour/EventDelegate::Invoke(System.Collections.Generic.List`1<System.Delegate>,UnityEngine.Networking.NetworkReader)
extern "C"  void EventDelegate_Invoke_m185017568 (EventDelegate_t4004424223 * __this, List_1_t162565683 * ___targets, NetworkReader_t3536499450 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.Networking.NetworkBehaviour/EventDelegate::BeginInvoke(System.Collections.Generic.List`1<System.Delegate>,UnityEngine.Networking.NetworkReader,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EventDelegate_BeginInvoke_m3522164881 (EventDelegate_t4004424223 * __this, List_1_t162565683 * ___targets, NetworkReader_t3536499450 * ___reader, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkBehaviour/EventDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void EventDelegate_EndInvoke_m658793798 (EventDelegate_t4004424223 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
