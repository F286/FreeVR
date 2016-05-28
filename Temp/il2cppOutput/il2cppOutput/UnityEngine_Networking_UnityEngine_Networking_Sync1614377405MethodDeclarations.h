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

// UnityEngine.Networking.SyncList`1<System.Boolean>
struct SyncList_1_t1614377405;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Boolean>
struct SyncListChanged_t3120783845;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t1633744088;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// System.Boolean[]
struct BooleanU5BU5D_t3804927312;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_t1694111789;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1633744088.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Sync2698297041.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"

// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::.ctor()
extern "C"  void SyncList_1__ctor_m2962181512_gshared (SyncList_1_t1614377405 * __this, const MethodInfo* method);
#define SyncList_1__ctor_m2962181512(__this, method) ((  void (*) (SyncList_1_t1614377405 *, const MethodInfo*))SyncList_1__ctor_m2962181512_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * SyncList_1_System_Collections_IEnumerable_GetEnumerator_m1498878335_gshared (SyncList_1_t1614377405 * __this, const MethodInfo* method);
#define SyncList_1_System_Collections_IEnumerable_GetEnumerator_m1498878335(__this, method) ((  Il2CppObject * (*) (SyncList_1_t1614377405 *, const MethodInfo*))SyncList_1_System_Collections_IEnumerable_GetEnumerator_m1498878335_gshared)(__this, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.Boolean>::get_Count()
extern "C"  int32_t SyncList_1_get_Count_m2082540404_gshared (SyncList_1_t1614377405 * __this, const MethodInfo* method);
#define SyncList_1_get_Count_m2082540404(__this, method) ((  int32_t (*) (SyncList_1_t1614377405 *, const MethodInfo*))SyncList_1_get_Count_m2082540404_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Boolean>::get_IsReadOnly()
extern "C"  bool SyncList_1_get_IsReadOnly_m3565187555_gshared (SyncList_1_t1614377405 * __this, const MethodInfo* method);
#define SyncList_1_get_IsReadOnly_m3565187555(__this, method) ((  bool (*) (SyncList_1_t1614377405 *, const MethodInfo*))SyncList_1_get_IsReadOnly_m3565187555_gshared)(__this, method)
// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.Boolean>::get_Callback()
extern "C"  SyncListChanged_t3120783845 * SyncList_1_get_Callback_m2422093696_gshared (SyncList_1_t1614377405 * __this, const MethodInfo* method);
#define SyncList_1_get_Callback_m2422093696(__this, method) ((  SyncListChanged_t3120783845 * (*) (SyncList_1_t1614377405 *, const MethodInfo*))SyncList_1_get_Callback_m2422093696_gshared)(__this, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::set_Callback(UnityEngine.Networking.SyncList`1/SyncListChanged<T>)
extern "C"  void SyncList_1_set_Callback_m3022961969_gshared (SyncList_1_t1614377405 * __this, SyncListChanged_t3120783845 * ___value, const MethodInfo* method);
#define SyncList_1_set_Callback_m3022961969(__this, ___value, method) ((  void (*) (SyncList_1_t1614377405 *, SyncListChanged_t3120783845 *, const MethodInfo*))SyncList_1_set_Callback_m3022961969_gshared)(__this, ___value, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
extern "C"  void SyncList_1_InitializeBehaviour_m3657538250_gshared (SyncList_1_t1614377405 * __this, NetworkBehaviour_t1633744088 * ___beh, int32_t ___cmdHash, const MethodInfo* method);
#define SyncList_1_InitializeBehaviour_m3657538250(__this, ___beh, ___cmdHash, method) ((  void (*) (SyncList_1_t1614377405 *, NetworkBehaviour_t1633744088 *, int32_t, const MethodInfo*))SyncList_1_InitializeBehaviour_m3657538250_gshared)(__this, ___beh, ___cmdHash, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32,T)
extern "C"  void SyncList_1_SendMsg_m2116293425_gshared (SyncList_1_t1614377405 * __this, int32_t ___op, int32_t ___itemIndex, bool ___item, const MethodInfo* method);
#define SyncList_1_SendMsg_m2116293425(__this, ___op, ___itemIndex, ___item, method) ((  void (*) (SyncList_1_t1614377405 *, int32_t, int32_t, bool, const MethodInfo*))SyncList_1_SendMsg_m2116293425_gshared)(__this, ___op, ___itemIndex, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32)
extern "C"  void SyncList_1_SendMsg_m3725103065_gshared (SyncList_1_t1614377405 * __this, int32_t ___op, int32_t ___itemIndex, const MethodInfo* method);
#define SyncList_1_SendMsg_m3725103065(__this, ___op, ___itemIndex, method) ((  void (*) (SyncList_1_t1614377405 *, int32_t, int32_t, const MethodInfo*))SyncList_1_SendMsg_m3725103065_gshared)(__this, ___op, ___itemIndex, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::HandleMsg(UnityEngine.Networking.NetworkReader)
extern "C"  void SyncList_1_HandleMsg_m3655635377_gshared (SyncList_1_t1614377405 * __this, NetworkReader_t3536499450 * ___reader, const MethodInfo* method);
#define SyncList_1_HandleMsg_m3655635377(__this, ___reader, method) ((  void (*) (SyncList_1_t1614377405 *, NetworkReader_t3536499450 *, const MethodInfo*))SyncList_1_HandleMsg_m3655635377_gshared)(__this, ___reader, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::AddInternal(T)
extern "C"  void SyncList_1_AddInternal_m1129436154_gshared (SyncList_1_t1614377405 * __this, bool ___item, const MethodInfo* method);
#define SyncList_1_AddInternal_m1129436154(__this, ___item, method) ((  void (*) (SyncList_1_t1614377405 *, bool, const MethodInfo*))SyncList_1_AddInternal_m1129436154_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Add(T)
extern "C"  void SyncList_1_Add_m639885815_gshared (SyncList_1_t1614377405 * __this, bool ___item, const MethodInfo* method);
#define SyncList_1_Add_m639885815(__this, ___item, method) ((  void (*) (SyncList_1_t1614377405 *, bool, const MethodInfo*))SyncList_1_Add_m639885815_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Clear()
extern "C"  void SyncList_1_Clear_m368314803_gshared (SyncList_1_t1614377405 * __this, const MethodInfo* method);
#define SyncList_1_Clear_m368314803(__this, method) ((  void (*) (SyncList_1_t1614377405 *, const MethodInfo*))SyncList_1_Clear_m368314803_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Boolean>::Contains(T)
extern "C"  bool SyncList_1_Contains_m109066737_gshared (SyncList_1_t1614377405 * __this, bool ___item, const MethodInfo* method);
#define SyncList_1_Contains_m109066737(__this, ___item, method) ((  bool (*) (SyncList_1_t1614377405 *, bool, const MethodInfo*))SyncList_1_Contains_m109066737_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::CopyTo(T[],System.Int32)
extern "C"  void SyncList_1_CopyTo_m4292336167_gshared (SyncList_1_t1614377405 * __this, BooleanU5BU5D_t3804927312* ___array, int32_t ___index, const MethodInfo* method);
#define SyncList_1_CopyTo_m4292336167(__this, ___array, ___index, method) ((  void (*) (SyncList_1_t1614377405 *, BooleanU5BU5D_t3804927312*, int32_t, const MethodInfo*))SyncList_1_CopyTo_m4292336167_gshared)(__this, ___array, ___index, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.Boolean>::IndexOf(T)
extern "C"  int32_t SyncList_1_IndexOf_m2566924007_gshared (SyncList_1_t1614377405 * __this, bool ___item, const MethodInfo* method);
#define SyncList_1_IndexOf_m2566924007(__this, ___item, method) ((  int32_t (*) (SyncList_1_t1614377405 *, bool, const MethodInfo*))SyncList_1_IndexOf_m2566924007_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Insert(System.Int32,T)
extern "C"  void SyncList_1_Insert_m3726921310_gshared (SyncList_1_t1614377405 * __this, int32_t ___index, bool ___item, const MethodInfo* method);
#define SyncList_1_Insert_m3726921310(__this, ___index, ___item, method) ((  void (*) (SyncList_1_t1614377405 *, int32_t, bool, const MethodInfo*))SyncList_1_Insert_m3726921310_gshared)(__this, ___index, ___item, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Boolean>::Remove(T)
extern "C"  bool SyncList_1_Remove_m2645344812_gshared (SyncList_1_t1614377405 * __this, bool ___item, const MethodInfo* method);
#define SyncList_1_Remove_m2645344812(__this, ___item, method) ((  bool (*) (SyncList_1_t1614377405 *, bool, const MethodInfo*))SyncList_1_Remove_m2645344812_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::RemoveAt(System.Int32)
extern "C"  void SyncList_1_RemoveAt_m1600774180_gshared (SyncList_1_t1614377405 * __this, int32_t ___index, const MethodInfo* method);
#define SyncList_1_RemoveAt_m1600774180(__this, ___index, method) ((  void (*) (SyncList_1_t1614377405 *, int32_t, const MethodInfo*))SyncList_1_RemoveAt_m1600774180_gshared)(__this, ___index, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::Dirty(System.Int32)
extern "C"  void SyncList_1_Dirty_m180497225_gshared (SyncList_1_t1614377405 * __this, int32_t ___index, const MethodInfo* method);
#define SyncList_1_Dirty_m180497225(__this, ___index, method) ((  void (*) (SyncList_1_t1614377405 *, int32_t, const MethodInfo*))SyncList_1_Dirty_m180497225_gshared)(__this, ___index, method)
// T UnityEngine.Networking.SyncList`1<System.Boolean>::get_Item(System.Int32)
extern "C"  bool SyncList_1_get_Item_m4008368522_gshared (SyncList_1_t1614377405 * __this, int32_t ___i, const MethodInfo* method);
#define SyncList_1_get_Item_m4008368522(__this, ___i, method) ((  bool (*) (SyncList_1_t1614377405 *, int32_t, const MethodInfo*))SyncList_1_get_Item_m4008368522_gshared)(__this, ___i, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Boolean>::set_Item(System.Int32,T)
extern "C"  void SyncList_1_set_Item_m1378250677_gshared (SyncList_1_t1614377405 * __this, int32_t ___i, bool ___value, const MethodInfo* method);
#define SyncList_1_set_Item_m1378250677(__this, ___i, ___value, method) ((  void (*) (SyncList_1_t1614377405 *, int32_t, bool, const MethodInfo*))SyncList_1_set_Item_m1378250677_gshared)(__this, ___i, ___value, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.Boolean>::GetEnumerator()
extern "C"  Il2CppObject* SyncList_1_GetEnumerator_m4275287804_gshared (SyncList_1_t1614377405 * __this, const MethodInfo* method);
#define SyncList_1_GetEnumerator_m4275287804(__this, method) ((  Il2CppObject* (*) (SyncList_1_t1614377405 *, const MethodInfo*))SyncList_1_GetEnumerator_m4275287804_gshared)(__this, method)
