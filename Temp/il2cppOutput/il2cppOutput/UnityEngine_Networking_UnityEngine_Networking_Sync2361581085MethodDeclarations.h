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

// UnityEngine.Networking.SyncList`1<System.Single>
struct SyncList_1_t2361581085;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Single>
struct SyncListChanged_t3867987525;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t1633744088;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// System.Single[]
struct SingleU5BU5D_t1219431280;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t2441315469;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1633744088.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Sync3445500721.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"

// System.Void UnityEngine.Networking.SyncList`1<System.Single>::.ctor()
extern "C"  void SyncList_1__ctor_m2784697234_gshared (SyncList_1_t2361581085 * __this, const MethodInfo* method);
#define SyncList_1__ctor_m2784697234(__this, method) ((  void (*) (SyncList_1_t2361581085 *, const MethodInfo*))SyncList_1__ctor_m2784697234_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * SyncList_1_System_Collections_IEnumerable_GetEnumerator_m4228906425_gshared (SyncList_1_t2361581085 * __this, const MethodInfo* method);
#define SyncList_1_System_Collections_IEnumerable_GetEnumerator_m4228906425(__this, method) ((  Il2CppObject * (*) (SyncList_1_t2361581085 *, const MethodInfo*))SyncList_1_System_Collections_IEnumerable_GetEnumerator_m4228906425_gshared)(__this, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.Single>::get_Count()
extern "C"  int32_t SyncList_1_get_Count_m2453926830_gshared (SyncList_1_t2361581085 * __this, const MethodInfo* method);
#define SyncList_1_get_Count_m2453926830(__this, method) ((  int32_t (*) (SyncList_1_t2361581085 *, const MethodInfo*))SyncList_1_get_Count_m2453926830_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Single>::get_IsReadOnly()
extern "C"  bool SyncList_1_get_IsReadOnly_m1562226933_gshared (SyncList_1_t2361581085 * __this, const MethodInfo* method);
#define SyncList_1_get_IsReadOnly_m1562226933(__this, method) ((  bool (*) (SyncList_1_t2361581085 *, const MethodInfo*))SyncList_1_get_IsReadOnly_m1562226933_gshared)(__this, method)
// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.Single>::get_Callback()
extern "C"  SyncListChanged_t3867987525 * SyncList_1_get_Callback_m1279275786_gshared (SyncList_1_t2361581085 * __this, const MethodInfo* method);
#define SyncList_1_get_Callback_m1279275786(__this, method) ((  SyncListChanged_t3867987525 * (*) (SyncList_1_t2361581085 *, const MethodInfo*))SyncList_1_get_Callback_m1279275786_gshared)(__this, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::set_Callback(UnityEngine.Networking.SyncList`1/SyncListChanged<T>)
extern "C"  void SyncList_1_set_Callback_m3920634087_gshared (SyncList_1_t2361581085 * __this, SyncListChanged_t3867987525 * ___value, const MethodInfo* method);
#define SyncList_1_set_Callback_m3920634087(__this, ___value, method) ((  void (*) (SyncList_1_t2361581085 *, SyncListChanged_t3867987525 *, const MethodInfo*))SyncList_1_set_Callback_m3920634087_gshared)(__this, ___value, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
extern "C"  void SyncList_1_InitializeBehaviour_m2412822100_gshared (SyncList_1_t2361581085 * __this, NetworkBehaviour_t1633744088 * ___beh, int32_t ___cmdHash, const MethodInfo* method);
#define SyncList_1_InitializeBehaviour_m2412822100(__this, ___beh, ___cmdHash, method) ((  void (*) (SyncList_1_t2361581085 *, NetworkBehaviour_t1633744088 *, int32_t, const MethodInfo*))SyncList_1_InitializeBehaviour_m2412822100_gshared)(__this, ___beh, ___cmdHash, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32,T)
extern "C"  void SyncList_1_SendMsg_m2285939687_gshared (SyncList_1_t2361581085 * __this, int32_t ___op, int32_t ___itemIndex, float ___item, const MethodInfo* method);
#define SyncList_1_SendMsg_m2285939687(__this, ___op, ___itemIndex, ___item, method) ((  void (*) (SyncList_1_t2361581085 *, int32_t, int32_t, float, const MethodInfo*))SyncList_1_SendMsg_m2285939687_gshared)(__this, ___op, ___itemIndex, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32)
extern "C"  void SyncList_1_SendMsg_m3099581967_gshared (SyncList_1_t2361581085 * __this, int32_t ___op, int32_t ___itemIndex, const MethodInfo* method);
#define SyncList_1_SendMsg_m3099581967(__this, ___op, ___itemIndex, method) ((  void (*) (SyncList_1_t2361581085 *, int32_t, int32_t, const MethodInfo*))SyncList_1_SendMsg_m3099581967_gshared)(__this, ___op, ___itemIndex, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::HandleMsg(UnityEngine.Networking.NetworkReader)
extern "C"  void SyncList_1_HandleMsg_m690752955_gshared (SyncList_1_t2361581085 * __this, NetworkReader_t3536499450 * ___reader, const MethodInfo* method);
#define SyncList_1_HandleMsg_m690752955(__this, ___reader, method) ((  void (*) (SyncList_1_t2361581085 *, NetworkReader_t3536499450 *, const MethodInfo*))SyncList_1_HandleMsg_m690752955_gshared)(__this, ___reader, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::AddInternal(T)
extern "C"  void SyncList_1_AddInternal_m2960000688_gshared (SyncList_1_t2361581085 * __this, float ___item, const MethodInfo* method);
#define SyncList_1_AddInternal_m2960000688(__this, ___item, method) ((  void (*) (SyncList_1_t2361581085 *, float, const MethodInfo*))SyncList_1_AddInternal_m2960000688_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Add(T)
extern "C"  void SyncList_1_Add_m2019633837_gshared (SyncList_1_t2361581085 * __this, float ___item, const MethodInfo* method);
#define SyncList_1_Add_m2019633837(__this, ___item, method) ((  void (*) (SyncList_1_t2361581085 *, float, const MethodInfo*))SyncList_1_Add_m2019633837_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Clear()
extern "C"  void SyncList_1_Clear_m190830525_gshared (SyncList_1_t2361581085 * __this, const MethodInfo* method);
#define SyncList_1_Clear_m190830525(__this, method) ((  void (*) (SyncList_1_t2361581085 *, const MethodInfo*))SyncList_1_Clear_m190830525_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Single>::Contains(T)
extern "C"  bool SyncList_1_Contains_m3394787231_gshared (SyncList_1_t2361581085 * __this, float ___item, const MethodInfo* method);
#define SyncList_1_Contains_m3394787231(__this, ___item, method) ((  bool (*) (SyncList_1_t2361581085 *, float, const MethodInfo*))SyncList_1_Contains_m3394787231_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::CopyTo(T[],System.Int32)
extern "C"  void SyncList_1_CopyTo_m1064608093_gshared (SyncList_1_t2361581085 * __this, SingleU5BU5D_t1219431280* ___array, int32_t ___index, const MethodInfo* method);
#define SyncList_1_CopyTo_m1064608093(__this, ___array, ___index, method) ((  void (*) (SyncList_1_t2361581085 *, SingleU5BU5D_t1219431280*, int32_t, const MethodInfo*))SyncList_1_CopyTo_m1064608093_gshared)(__this, ___array, ___index, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.Single>::IndexOf(T)
extern "C"  int32_t SyncList_1_IndexOf_m1193430893_gshared (SyncList_1_t2361581085 * __this, float ___item, const MethodInfo* method);
#define SyncList_1_IndexOf_m1193430893(__this, ___item, method) ((  int32_t (*) (SyncList_1_t2361581085 *, float, const MethodInfo*))SyncList_1_IndexOf_m1193430893_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Insert(System.Int32,T)
extern "C"  void SyncList_1_Insert_m898984724_gshared (SyncList_1_t2361581085 * __this, int32_t ___index, float ___item, const MethodInfo* method);
#define SyncList_1_Insert_m898984724(__this, ___index, ___item, method) ((  void (*) (SyncList_1_t2361581085 *, int32_t, float, const MethodInfo*))SyncList_1_Insert_m898984724_gshared)(__this, ___index, ___item, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Single>::Remove(T)
extern "C"  bool SyncList_1_Remove_m2729210714_gshared (SyncList_1_t2361581085 * __this, float ___item, const MethodInfo* method);
#define SyncList_1_Remove_m2729210714(__this, ___item, method) ((  bool (*) (SyncList_1_t2361581085 *, float, const MethodInfo*))SyncList_1_Remove_m2729210714_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::RemoveAt(System.Int32)
extern "C"  void SyncList_1_RemoveAt_m3067804890_gshared (SyncList_1_t2361581085 * __this, int32_t ___index, const MethodInfo* method);
#define SyncList_1_RemoveAt_m3067804890(__this, ___index, method) ((  void (*) (SyncList_1_t2361581085 *, int32_t, const MethodInfo*))SyncList_1_RemoveAt_m3067804890_gshared)(__this, ___index, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::Dirty(System.Int32)
extern "C"  void SyncList_1_Dirty_m4161223251_gshared (SyncList_1_t2361581085 * __this, int32_t ___index, const MethodInfo* method);
#define SyncList_1_Dirty_m4161223251(__this, ___index, method) ((  void (*) (SyncList_1_t2361581085 *, int32_t, const MethodInfo*))SyncList_1_Dirty_m4161223251_gshared)(__this, ___index, method)
// T UnityEngine.Networking.SyncList`1<System.Single>::get_Item(System.Int32)
extern "C"  float SyncList_1_get_Item_m3913467614_gshared (SyncList_1_t2361581085 * __this, int32_t ___i, const MethodInfo* method);
#define SyncList_1_get_Item_m3913467614(__this, ___i, method) ((  float (*) (SyncList_1_t2361581085 *, int32_t, const MethodInfo*))SyncList_1_get_Item_m3913467614_gshared)(__this, ___i, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Single>::set_Item(System.Int32,T)
extern "C"  void SyncList_1_set_Item_m2445489899_gshared (SyncList_1_t2361581085 * __this, int32_t ___i, float ___value, const MethodInfo* method);
#define SyncList_1_set_Item_m2445489899(__this, ___i, ___value, method) ((  void (*) (SyncList_1_t2361581085 *, int32_t, float, const MethodInfo*))SyncList_1_set_Item_m2445489899_gshared)(__this, ___i, ___value, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.Single>::GetEnumerator()
extern "C"  Il2CppObject* SyncList_1_GetEnumerator_m2720237390_gshared (SyncList_1_t2361581085 * __this, const MethodInfo* method);
#define SyncList_1_GetEnumerator_m2720237390(__this, method) ((  Il2CppObject* (*) (SyncList_1_t2361581085 *, const MethodInfo*))SyncList_1_GetEnumerator_m2720237390_gshared)(__this, method)
