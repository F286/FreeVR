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

// UnityEngine.Networking.SyncList`1<System.Int32>
struct SyncList_1_t4250786851;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Int32>
struct SyncListChanged_t1462225995;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t1633744088;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t35553939;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1633744088.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Sync1039739191.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"

// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::.ctor()
extern "C"  void SyncList_1__ctor_m3794768686_gshared (SyncList_1_t4250786851 * __this, const MethodInfo* method);
#define SyncList_1__ctor_m3794768686(__this, method) ((  void (*) (SyncList_1_t4250786851 *, const MethodInfo*))SyncList_1__ctor_m3794768686_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * SyncList_1_System_Collections_IEnumerable_GetEnumerator_m4112719001_gshared (SyncList_1_t4250786851 * __this, const MethodInfo* method);
#define SyncList_1_System_Collections_IEnumerable_GetEnumerator_m4112719001(__this, method) ((  Il2CppObject * (*) (SyncList_1_t4250786851 *, const MethodInfo*))SyncList_1_System_Collections_IEnumerable_GetEnumerator_m4112719001_gshared)(__this, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.Int32>::get_Count()
extern "C"  int32_t SyncList_1_get_Count_m3955189786_gshared (SyncList_1_t4250786851 * __this, const MethodInfo* method);
#define SyncList_1_get_Count_m3955189786(__this, method) ((  int32_t (*) (SyncList_1_t4250786851 *, const MethodInfo*))SyncList_1_get_Count_m3955189786_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Int32>::get_IsReadOnly()
extern "C"  bool SyncList_1_get_IsReadOnly_m527137661_gshared (SyncList_1_t4250786851 * __this, const MethodInfo* method);
#define SyncList_1_get_IsReadOnly_m527137661(__this, method) ((  bool (*) (SyncList_1_t4250786851 *, const MethodInfo*))SyncList_1_get_IsReadOnly_m527137661_gshared)(__this, method)
// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.Int32>::get_Callback()
extern "C"  SyncListChanged_t1462225995 * SyncList_1_get_Callback_m1314062490_gshared (SyncList_1_t4250786851 * __this, const MethodInfo* method);
#define SyncList_1_get_Callback_m1314062490(__this, method) ((  SyncListChanged_t1462225995 * (*) (SyncList_1_t4250786851 *, const MethodInfo*))SyncList_1_get_Callback_m1314062490_gshared)(__this, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::set_Callback(UnityEngine.Networking.SyncList`1/SyncListChanged<T>)
extern "C"  void SyncList_1_set_Callback_m3939841995_gshared (SyncList_1_t4250786851 * __this, SyncListChanged_t1462225995 * ___value, const MethodInfo* method);
#define SyncList_1_set_Callback_m3939841995(__this, ___value, method) ((  void (*) (SyncList_1_t4250786851 *, SyncListChanged_t1462225995 *, const MethodInfo*))SyncList_1_set_Callback_m3939841995_gshared)(__this, ___value, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
extern "C"  void SyncList_1_InitializeBehaviour_m3379748592_gshared (SyncList_1_t4250786851 * __this, NetworkBehaviour_t1633744088 * ___beh, int32_t ___cmdHash, const MethodInfo* method);
#define SyncList_1_InitializeBehaviour_m3379748592(__this, ___beh, ___cmdHash, method) ((  void (*) (SyncList_1_t4250786851 *, NetworkBehaviour_t1633744088 *, int32_t, const MethodInfo*))SyncList_1_InitializeBehaviour_m3379748592_gshared)(__this, ___beh, ___cmdHash, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32,T)
extern "C"  void SyncList_1_SendMsg_m2977411275_gshared (SyncList_1_t4250786851 * __this, int32_t ___op, int32_t ___itemIndex, int32_t ___item, const MethodInfo* method);
#define SyncList_1_SendMsg_m2977411275(__this, ___op, ___itemIndex, ___item, method) ((  void (*) (SyncList_1_t4250786851 *, int32_t, int32_t, int32_t, const MethodInfo*))SyncList_1_SendMsg_m2977411275_gshared)(__this, ___op, ___itemIndex, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32)
extern "C"  void SyncList_1_SendMsg_m83545075_gshared (SyncList_1_t4250786851 * __this, int32_t ___op, int32_t ___itemIndex, const MethodInfo* method);
#define SyncList_1_SendMsg_m83545075(__this, ___op, ___itemIndex, method) ((  void (*) (SyncList_1_t4250786851 *, int32_t, int32_t, const MethodInfo*))SyncList_1_SendMsg_m83545075_gshared)(__this, ___op, ___itemIndex, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::HandleMsg(UnityEngine.Networking.NetworkReader)
extern "C"  void SyncList_1_HandleMsg_m1190639959_gshared (SyncList_1_t4250786851 * __this, NetworkReader_t3536499450 * ___reader, const MethodInfo* method);
#define SyncList_1_HandleMsg_m1190639959(__this, ___reader, method) ((  void (*) (SyncList_1_t4250786851 *, NetworkReader_t3536499450 *, const MethodInfo*))SyncList_1_HandleMsg_m1190639959_gshared)(__this, ___reader, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::AddInternal(T)
extern "C"  void SyncList_1_AddInternal_m181208980_gshared (SyncList_1_t4250786851 * __this, int32_t ___item, const MethodInfo* method);
#define SyncList_1_AddInternal_m181208980(__this, ___item, method) ((  void (*) (SyncList_1_t4250786851 *, int32_t, const MethodInfo*))SyncList_1_AddInternal_m181208980_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Add(T)
extern "C"  void SyncList_1_Add_m4130426769_gshared (SyncList_1_t4250786851 * __this, int32_t ___item, const MethodInfo* method);
#define SyncList_1_Add_m4130426769(__this, ___item, method) ((  void (*) (SyncList_1_t4250786851 *, int32_t, const MethodInfo*))SyncList_1_Add_m4130426769_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Clear()
extern "C"  void SyncList_1_Clear_m1200901977_gshared (SyncList_1_t4250786851 * __this, const MethodInfo* method);
#define SyncList_1_Clear_m1200901977(__this, method) ((  void (*) (SyncList_1_t4250786851 *, const MethodInfo*))SyncList_1_Clear_m1200901977_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Int32>::Contains(T)
extern "C"  bool SyncList_1_Contains_m279451671_gshared (SyncList_1_t4250786851 * __this, int32_t ___item, const MethodInfo* method);
#define SyncList_1_Contains_m279451671(__this, ___item, method) ((  bool (*) (SyncList_1_t4250786851 *, int32_t, const MethodInfo*))SyncList_1_Contains_m279451671_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C"  void SyncList_1_CopyTo_m180540737_gshared (SyncList_1_t4250786851 * __this, Int32U5BU5D_t1809983122* ___array, int32_t ___index, const MethodInfo* method);
#define SyncList_1_CopyTo_m180540737(__this, ___array, ___index, method) ((  void (*) (SyncList_1_t4250786851 *, Int32U5BU5D_t1809983122*, int32_t, const MethodInfo*))SyncList_1_CopyTo_m180540737_gshared)(__this, ___array, ___index, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.Int32>::IndexOf(T)
extern "C"  int32_t SyncList_1_IndexOf_m4151352705_gshared (SyncList_1_t4250786851 * __this, int32_t ___item, const MethodInfo* method);
#define SyncList_1_IndexOf_m4151352705(__this, ___item, method) ((  int32_t (*) (SyncList_1_t4250786851 *, int32_t, const MethodInfo*))SyncList_1_IndexOf_m4151352705_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Insert(System.Int32,T)
extern "C"  void SyncList_1_Insert_m3454486520_gshared (SyncList_1_t4250786851 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define SyncList_1_Insert_m3454486520(__this, ___index, ___item, method) ((  void (*) (SyncList_1_t4250786851 *, int32_t, int32_t, const MethodInfo*))SyncList_1_Insert_m3454486520_gshared)(__this, ___index, ___item, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Int32>::Remove(T)
extern "C"  bool SyncList_1_Remove_m2153902546_gshared (SyncList_1_t4250786851 * __this, int32_t ___item, const MethodInfo* method);
#define SyncList_1_Remove_m2153902546(__this, ___item, method) ((  bool (*) (SyncList_1_t4250786851 *, int32_t, const MethodInfo*))SyncList_1_Remove_m2153902546_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::RemoveAt(System.Int32)
extern "C"  void SyncList_1_RemoveAt_m1328339390_gshared (SyncList_1_t4250786851 * __this, int32_t ___index, const MethodInfo* method);
#define SyncList_1_RemoveAt_m1328339390(__this, ___index, method) ((  void (*) (SyncList_1_t4250786851 *, int32_t, const MethodInfo*))SyncList_1_RemoveAt_m1328339390_gshared)(__this, ___index, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::Dirty(System.Int32)
extern "C"  void SyncList_1_Dirty_m3323537391_gshared (SyncList_1_t4250786851 * __this, int32_t ___index, const MethodInfo* method);
#define SyncList_1_Dirty_m3323537391(__this, ___index, method) ((  void (*) (SyncList_1_t4250786851 *, int32_t, const MethodInfo*))SyncList_1_Dirty_m3323537391_gshared)(__this, ___index, method)
// T UnityEngine.Networking.SyncList`1<System.Int32>::get_Item(System.Int32)
extern "C"  int32_t SyncList_1_get_Item_m3093448548_gshared (SyncList_1_t4250786851 * __this, int32_t ___i, const MethodInfo* method);
#define SyncList_1_get_Item_m3093448548(__this, ___i, method) ((  int32_t (*) (SyncList_1_t4250786851 *, int32_t, const MethodInfo*))SyncList_1_get_Item_m3093448548_gshared)(__this, ___i, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Int32>::set_Item(System.Int32,T)
extern "C"  void SyncList_1_set_Item_m1561422543_gshared (SyncList_1_t4250786851 * __this, int32_t ___i, int32_t ___value, const MethodInfo* method);
#define SyncList_1_set_Item_m1561422543(__this, ___i, ___value, method) ((  void (*) (SyncList_1_t4250786851 *, int32_t, int32_t, const MethodInfo*))SyncList_1_set_Item_m1561422543_gshared)(__this, ___i, ___value, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.Int32>::GetEnumerator()
extern "C"  Il2CppObject* SyncList_1_GetEnumerator_m3367259554_gshared (SyncList_1_t4250786851 * __this, const MethodInfo* method);
#define SyncList_1_GetEnumerator_m3367259554(__this, method) ((  Il2CppObject* (*) (SyncList_1_t4250786851 *, const MethodInfo*))SyncList_1_GetEnumerator_m3367259554_gshared)(__this, method)
