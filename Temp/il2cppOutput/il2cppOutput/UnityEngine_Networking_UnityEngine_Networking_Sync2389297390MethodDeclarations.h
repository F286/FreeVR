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

// UnityEngine.Networking.SyncList`1<System.UInt32>
struct SyncList_1_t2389297390;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.UInt32>
struct SyncListChanged_t3895703830;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t1633744088;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// System.UInt32[]
struct UInt32U5BU5D_t2133601851;
// System.Collections.Generic.IEnumerator`1<System.UInt32>
struct IEnumerator_1_t2469031774;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1633744088.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Sync3473217026.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"

// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::.ctor()
extern "C"  void SyncList_1__ctor_m3929765155_gshared (SyncList_1_t2389297390 * __this, const MethodInfo* method);
#define SyncList_1__ctor_m3929765155(__this, method) ((  void (*) (SyncList_1_t2389297390 *, const MethodInfo*))SyncList_1__ctor_m3929765155_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.UInt32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * SyncList_1_System_Collections_IEnumerable_GetEnumerator_m813888264_gshared (SyncList_1_t2389297390 * __this, const MethodInfo* method);
#define SyncList_1_System_Collections_IEnumerable_GetEnumerator_m813888264(__this, method) ((  Il2CppObject * (*) (SyncList_1_t2389297390 *, const MethodInfo*))SyncList_1_System_Collections_IEnumerable_GetEnumerator_m813888264_gshared)(__this, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.UInt32>::get_Count()
extern "C"  int32_t SyncList_1_get_Count_m2762677439_gshared (SyncList_1_t2389297390 * __this, const MethodInfo* method);
#define SyncList_1_get_Count_m2762677439(__this, method) ((  int32_t (*) (SyncList_1_t2389297390 *, const MethodInfo*))SyncList_1_get_Count_m2762677439_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.UInt32>::get_IsReadOnly()
extern "C"  bool SyncList_1_get_IsReadOnly_m3335162500_gshared (SyncList_1_t2389297390 * __this, const MethodInfo* method);
#define SyncList_1_get_IsReadOnly_m3335162500(__this, method) ((  bool (*) (SyncList_1_t2389297390 *, const MethodInfo*))SyncList_1_get_IsReadOnly_m3335162500_gshared)(__this, method)
// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.UInt32>::get_Callback()
extern "C"  SyncListChanged_t3895703830 * SyncList_1_get_Callback_m3743687769_gshared (SyncList_1_t2389297390 * __this, const MethodInfo* method);
#define SyncList_1_get_Callback_m3743687769(__this, method) ((  SyncListChanged_t3895703830 * (*) (SyncList_1_t2389297390 *, const MethodInfo*))SyncList_1_get_Callback_m3743687769_gshared)(__this, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::set_Callback(UnityEngine.Networking.SyncList`1/SyncListChanged<T>)
extern "C"  void SyncList_1_set_Callback_m3075102902_gshared (SyncList_1_t2389297390 * __this, SyncListChanged_t3895703830 * ___value, const MethodInfo* method);
#define SyncList_1_set_Callback_m3075102902(__this, ___value, method) ((  void (*) (SyncList_1_t2389297390 *, SyncListChanged_t3895703830 *, const MethodInfo*))SyncList_1_set_Callback_m3075102902_gshared)(__this, ___value, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
extern "C"  void SyncList_1_InitializeBehaviour_m2158882725_gshared (SyncList_1_t2389297390 * __this, NetworkBehaviour_t1633744088 * ___beh, int32_t ___cmdHash, const MethodInfo* method);
#define SyncList_1_InitializeBehaviour_m2158882725(__this, ___beh, ___cmdHash, method) ((  void (*) (SyncList_1_t2389297390 *, NetworkBehaviour_t1633744088 *, int32_t, const MethodInfo*))SyncList_1_InitializeBehaviour_m2158882725_gshared)(__this, ___beh, ___cmdHash, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32,T)
extern "C"  void SyncList_1_SendMsg_m189555766_gshared (SyncList_1_t2389297390 * __this, int32_t ___op, int32_t ___itemIndex, uint32_t ___item, const MethodInfo* method);
#define SyncList_1_SendMsg_m189555766(__this, ___op, ___itemIndex, ___item, method) ((  void (*) (SyncList_1_t2389297390 *, int32_t, int32_t, uint32_t, const MethodInfo*))SyncList_1_SendMsg_m189555766_gshared)(__this, ___op, ___itemIndex, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32)
extern "C"  void SyncList_1_SendMsg_m2292932126_gshared (SyncList_1_t2389297390 * __this, int32_t ___op, int32_t ___itemIndex, const MethodInfo* method);
#define SyncList_1_SendMsg_m2292932126(__this, ___op, ___itemIndex, method) ((  void (*) (SyncList_1_t2389297390 *, int32_t, int32_t, const MethodInfo*))SyncList_1_SendMsg_m2292932126_gshared)(__this, ___op, ___itemIndex, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::HandleMsg(UnityEngine.Networking.NetworkReader)
extern "C"  void SyncList_1_HandleMsg_m2199372364_gshared (SyncList_1_t2389297390 * __this, NetworkReader_t3536499450 * ___reader, const MethodInfo* method);
#define SyncList_1_HandleMsg_m2199372364(__this, ___reader, method) ((  void (*) (SyncList_1_t2389297390 *, NetworkReader_t3536499450 *, const MethodInfo*))SyncList_1_HandleMsg_m2199372364_gshared)(__this, ___reader, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::AddInternal(T)
extern "C"  void SyncList_1_AddInternal_m1129445375_gshared (SyncList_1_t2389297390 * __this, uint32_t ___item, const MethodInfo* method);
#define SyncList_1_AddInternal_m1129445375(__this, ___item, method) ((  void (*) (SyncList_1_t2389297390 *, uint32_t, const MethodInfo*))SyncList_1_AddInternal_m1129445375_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Add(T)
extern "C"  void SyncList_1_Add_m2195118844_gshared (SyncList_1_t2389297390 * __this, uint32_t ___item, const MethodInfo* method);
#define SyncList_1_Add_m2195118844(__this, ___item, method) ((  void (*) (SyncList_1_t2389297390 *, uint32_t, const MethodInfo*))SyncList_1_Add_m2195118844_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Clear()
extern "C"  void SyncList_1_Clear_m1335898446_gshared (SyncList_1_t2389297390 * __this, const MethodInfo* method);
#define SyncList_1_Clear_m1335898446(__this, method) ((  void (*) (SyncList_1_t2389297390 *, const MethodInfo*))SyncList_1_Clear_m1335898446_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.UInt32>::Contains(T)
extern "C"  bool SyncList_1_Contains_m3703537840_gshared (SyncList_1_t2389297390 * __this, uint32_t ___item, const MethodInfo* method);
#define SyncList_1_Contains_m3703537840(__this, ___item, method) ((  bool (*) (SyncList_1_t2389297390 *, uint32_t, const MethodInfo*))SyncList_1_Contains_m3703537840_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::CopyTo(T[],System.Int32)
extern "C"  void SyncList_1_CopyTo_m292715500_gshared (SyncList_1_t2389297390 * __this, UInt32U5BU5D_t2133601851* ___array, int32_t ___index, const MethodInfo* method);
#define SyncList_1_CopyTo_m292715500(__this, ___array, ___index, method) ((  void (*) (SyncList_1_t2389297390 *, UInt32U5BU5D_t2133601851*, int32_t, const MethodInfo*))SyncList_1_CopyTo_m292715500_gshared)(__this, ___array, ___index, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.UInt32>::IndexOf(T)
extern "C"  int32_t SyncList_1_IndexOf_m3281600572_gshared (SyncList_1_t2389297390 * __this, uint32_t ___item, const MethodInfo* method);
#define SyncList_1_IndexOf_m3281600572(__this, ___item, method) ((  int32_t (*) (SyncList_1_t2389297390 *, uint32_t, const MethodInfo*))SyncList_1_IndexOf_m3281600572_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Insert(System.Int32,T)
extern "C"  void SyncList_1_Insert_m1662426467_gshared (SyncList_1_t2389297390 * __this, int32_t ___index, uint32_t ___item, const MethodInfo* method);
#define SyncList_1_Insert_m1662426467(__this, ___index, ___item, method) ((  void (*) (SyncList_1_t2389297390 *, int32_t, uint32_t, const MethodInfo*))SyncList_1_Insert_m1662426467_gshared)(__this, ___index, ___item, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.UInt32>::Remove(T)
extern "C"  bool SyncList_1_Remove_m3627855019_gshared (SyncList_1_t2389297390 * __this, uint32_t ___item, const MethodInfo* method);
#define SyncList_1_Remove_m3627855019(__this, ___item, method) ((  bool (*) (SyncList_1_t2389297390 *, uint32_t, const MethodInfo*))SyncList_1_Remove_m3627855019_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::RemoveAt(System.Int32)
extern "C"  void SyncList_1_RemoveAt_m3831246633_gshared (SyncList_1_t2389297390 * __this, int32_t ___index, const MethodInfo* method);
#define SyncList_1_RemoveAt_m3831246633(__this, ___index, method) ((  void (*) (SyncList_1_t2389297390 *, int32_t, const MethodInfo*))SyncList_1_RemoveAt_m3831246633_gshared)(__this, ___index, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::Dirty(System.Int32)
extern "C"  void SyncList_1_Dirty_m2176893540_gshared (SyncList_1_t2389297390 * __this, int32_t ___index, const MethodInfo* method);
#define SyncList_1_Dirty_m2176893540(__this, ___index, method) ((  void (*) (SyncList_1_t2389297390 *, int32_t, const MethodInfo*))SyncList_1_Dirty_m2176893540_gshared)(__this, ___index, method)
// T UnityEngine.Networking.SyncList`1<System.UInt32>::get_Item(System.Int32)
extern "C"  uint32_t SyncList_1_get_Item_m381942061_gshared (SyncList_1_t2389297390 * __this, int32_t ___i, const MethodInfo* method);
#define SyncList_1_get_Item_m381942061(__this, ___i, method) ((  uint32_t (*) (SyncList_1_t2389297390 *, int32_t, const MethodInfo*))SyncList_1_get_Item_m381942061_gshared)(__this, ___i, method)
// System.Void UnityEngine.Networking.SyncList`1<System.UInt32>::set_Item(System.Int32,T)
extern "C"  void SyncList_1_set_Item_m1673597306_gshared (SyncList_1_t2389297390 * __this, int32_t ___i, uint32_t ___value, const MethodInfo* method);
#define SyncList_1_set_Item_m1673597306(__this, ___i, ___value, method) ((  void (*) (SyncList_1_t2389297390 *, int32_t, uint32_t, const MethodInfo*))SyncList_1_set_Item_m1673597306_gshared)(__this, ___i, ___value, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.UInt32>::GetEnumerator()
extern "C"  Il2CppObject* SyncList_1_GetEnumerator_m1807597535_gshared (SyncList_1_t2389297390 * __this, const MethodInfo* method);
#define SyncList_1_GetEnumerator_m1807597535(__this, method) ((  Il2CppObject* (*) (SyncList_1_t2389297390 *, const MethodInfo*))SyncList_1_GetEnumerator_m1807597535_gshared)(__this, method)
