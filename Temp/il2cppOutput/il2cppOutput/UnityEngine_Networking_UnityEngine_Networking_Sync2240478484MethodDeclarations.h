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

// UnityEngine.Networking.SyncList`1<System.Object>
struct SyncList_1_t2240478484;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.Networking.SyncList`1/SyncListChanged<System.Object>
struct SyncListChanged_t3746884924;
// UnityEngine.Networking.NetworkBehaviour
struct NetworkBehaviour_t1633744088;
// System.Object
struct Il2CppObject;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2320212868;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1633744088.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Sync3324398120.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"

// System.Void UnityEngine.Networking.SyncList`1<System.Object>::.ctor()
extern "C"  void SyncList_1__ctor_m3126735305_gshared (SyncList_1_t2240478484 * __this, const MethodInfo* method);
#define SyncList_1__ctor_m3126735305(__this, method) ((  void (*) (SyncList_1_t2240478484 *, const MethodInfo*))SyncList_1__ctor_m3126735305_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.Networking.SyncList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * SyncList_1_System_Collections_IEnumerable_GetEnumerator_m3631146914_gshared (SyncList_1_t2240478484 * __this, const MethodInfo* method);
#define SyncList_1_System_Collections_IEnumerable_GetEnumerator_m3631146914(__this, method) ((  Il2CppObject * (*) (SyncList_1_t2240478484 *, const MethodInfo*))SyncList_1_System_Collections_IEnumerable_GetEnumerator_m3631146914_gshared)(__this, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.Object>::get_Count()
extern "C"  int32_t SyncList_1_get_Count_m4130543205_gshared (SyncList_1_t2240478484 * __this, const MethodInfo* method);
#define SyncList_1_get_Count_m4130543205(__this, method) ((  int32_t (*) (SyncList_1_t2240478484 *, const MethodInfo*))SyncList_1_get_Count_m4130543205_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Object>::get_IsReadOnly()
extern "C"  bool SyncList_1_get_IsReadOnly_m1402644638_gshared (SyncList_1_t2240478484 * __this, const MethodInfo* method);
#define SyncList_1_get_IsReadOnly_m1402644638(__this, method) ((  bool (*) (SyncList_1_t2240478484 *, const MethodInfo*))SyncList_1_get_IsReadOnly_m1402644638_gshared)(__this, method)
// UnityEngine.Networking.SyncList`1/SyncListChanged<T> UnityEngine.Networking.SyncList`1<System.Object>::get_Callback()
extern "C"  SyncListChanged_t3746884924 * SyncList_1_get_Callback_m3183018227_gshared (SyncList_1_t2240478484 * __this, const MethodInfo* method);
#define SyncList_1_get_Callback_m3183018227(__this, method) ((  SyncListChanged_t3746884924 * (*) (SyncList_1_t2240478484 *, const MethodInfo*))SyncList_1_get_Callback_m3183018227_gshared)(__this, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::set_Callback(UnityEngine.Networking.SyncList`1/SyncListChanged<T>)
extern "C"  void SyncList_1_set_Callback_m2578971728_gshared (SyncList_1_t2240478484 * __this, SyncListChanged_t3746884924 * ___value, const MethodInfo* method);
#define SyncList_1_set_Callback_m2578971728(__this, ___value, method) ((  void (*) (SyncList_1_t2240478484 *, SyncListChanged_t3746884924 *, const MethodInfo*))SyncList_1_set_Callback_m2578971728_gshared)(__this, ___value, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::InitializeBehaviour(UnityEngine.Networking.NetworkBehaviour,System.Int32)
extern "C"  void SyncList_1_InitializeBehaviour_m1453845195_gshared (SyncList_1_t2240478484 * __this, NetworkBehaviour_t1633744088 * ___beh, int32_t ___cmdHash, const MethodInfo* method);
#define SyncList_1_InitializeBehaviour_m1453845195(__this, ___beh, ___cmdHash, method) ((  void (*) (SyncList_1_t2240478484 *, NetworkBehaviour_t1633744088 *, int32_t, const MethodInfo*))SyncList_1_InitializeBehaviour_m1453845195_gshared)(__this, ___beh, ___cmdHash, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32,T)
extern "C"  void SyncList_1_SendMsg_m4037716688_gshared (SyncList_1_t2240478484 * __this, int32_t ___op, int32_t ___itemIndex, Il2CppObject * ___item, const MethodInfo* method);
#define SyncList_1_SendMsg_m4037716688(__this, ___op, ___itemIndex, ___item, method) ((  void (*) (SyncList_1_t2240478484 *, int32_t, int32_t, Il2CppObject *, const MethodInfo*))SyncList_1_SendMsg_m4037716688_gshared)(__this, ___op, ___itemIndex, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::SendMsg(UnityEngine.Networking.SyncList`1/Operation<T>,System.Int32)
extern "C"  void SyncList_1_SendMsg_m2252243768_gshared (SyncList_1_t2240478484 * __this, int32_t ___op, int32_t ___itemIndex, const MethodInfo* method);
#define SyncList_1_SendMsg_m2252243768(__this, ___op, ___itemIndex, method) ((  void (*) (SyncList_1_t2240478484 *, int32_t, int32_t, const MethodInfo*))SyncList_1_SendMsg_m2252243768_gshared)(__this, ___op, ___itemIndex, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::HandleMsg(UnityEngine.Networking.NetworkReader)
extern "C"  void SyncList_1_HandleMsg_m3635044594_gshared (SyncList_1_t2240478484 * __this, NetworkReader_t3536499450 * ___reader, const MethodInfo* method);
#define SyncList_1_HandleMsg_m3635044594(__this, ___reader, method) ((  void (*) (SyncList_1_t2240478484 *, NetworkReader_t3536499450 *, const MethodInfo*))SyncList_1_HandleMsg_m3635044594_gshared)(__this, ___reader, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::AddInternal(T)
extern "C"  void SyncList_1_AddInternal_m568775833_gshared (SyncList_1_t2240478484 * __this, Il2CppObject * ___item, const MethodInfo* method);
#define SyncList_1_AddInternal_m568775833(__this, ___item, method) ((  void (*) (SyncList_1_t2240478484 *, Il2CppObject *, const MethodInfo*))SyncList_1_AddInternal_m568775833_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Add(T)
extern "C"  void SyncList_1_Add_m783741334_gshared (SyncList_1_t2240478484 * __this, Il2CppObject * ___item, const MethodInfo* method);
#define SyncList_1_Add_m783741334(__this, ___item, method) ((  void (*) (SyncList_1_t2240478484 *, Il2CppObject *, const MethodInfo*))SyncList_1_Add_m783741334_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Clear()
extern "C"  void SyncList_1_Clear_m532868596_gshared (SyncList_1_t2240478484 * __this, const MethodInfo* method);
#define SyncList_1_Clear_m532868596(__this, method) ((  void (*) (SyncList_1_t2240478484 *, const MethodInfo*))SyncList_1_Clear_m532868596_gshared)(__this, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Object>::Contains(T)
extern "C"  bool SyncList_1_Contains_m776436310_gshared (SyncList_1_t2240478484 * __this, Il2CppObject * ___item, const MethodInfo* method);
#define SyncList_1_Contains_m776436310(__this, ___item, method) ((  bool (*) (SyncList_1_t2240478484 *, Il2CppObject *, const MethodInfo*))SyncList_1_Contains_m776436310_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::CopyTo(T[],System.Int32)
extern "C"  void SyncList_1_CopyTo_m3795312646_gshared (SyncList_1_t2240478484 * __this, ObjectU5BU5D_t11523773* ___array, int32_t ___index, const MethodInfo* method);
#define SyncList_1_CopyTo_m3795312646(__this, ___array, ___index, method) ((  void (*) (SyncList_1_t2240478484 *, ObjectU5BU5D_t11523773*, int32_t, const MethodInfo*))SyncList_1_CopyTo_m3795312646_gshared)(__this, ___array, ___index, method)
// System.Int32 UnityEngine.Networking.SyncList`1<System.Object>::IndexOf(T)
extern "C"  int32_t SyncList_1_IndexOf_m3187177942_gshared (SyncList_1_t2240478484 * __this, Il2CppObject * ___item, const MethodInfo* method);
#define SyncList_1_IndexOf_m3187177942(__this, ___item, method) ((  int32_t (*) (SyncList_1_t2240478484 *, Il2CppObject *, const MethodInfo*))SyncList_1_IndexOf_m3187177942_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Insert(System.Int32,T)
extern "C"  void SyncList_1_Insert_m1849311229_gshared (SyncList_1_t2240478484 * __this, int32_t ___index, Il2CppObject * ___item, const MethodInfo* method);
#define SyncList_1_Insert_m1849311229(__this, ___index, ___item, method) ((  void (*) (SyncList_1_t2240478484 *, int32_t, Il2CppObject *, const MethodInfo*))SyncList_1_Insert_m1849311229_gshared)(__this, ___index, ___item, method)
// System.Boolean UnityEngine.Networking.SyncList`1<System.Object>::Remove(T)
extern "C"  bool SyncList_1_Remove_m715315153_gshared (SyncList_1_t2240478484 * __this, Il2CppObject * ___item, const MethodInfo* method);
#define SyncList_1_Remove_m715315153(__this, ___item, method) ((  bool (*) (SyncList_1_t2240478484 *, Il2CppObject *, const MethodInfo*))SyncList_1_Remove_m715315153_gshared)(__this, ___item, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::RemoveAt(System.Int32)
extern "C"  void SyncList_1_RemoveAt_m4018131395_gshared (SyncList_1_t2240478484 * __this, int32_t ___index, const MethodInfo* method);
#define SyncList_1_RemoveAt_m4018131395(__this, ___index, method) ((  void (*) (SyncList_1_t2240478484 *, int32_t, const MethodInfo*))SyncList_1_RemoveAt_m4018131395_gshared)(__this, ___index, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::Dirty(System.Int32)
extern "C"  void SyncList_1_Dirty_m278902282_gshared (SyncList_1_t2240478484 * __this, int32_t ___index, const MethodInfo* method);
#define SyncList_1_Dirty_m278902282(__this, ___index, method) ((  void (*) (SyncList_1_t2240478484 *, int32_t, const MethodInfo*))SyncList_1_Dirty_m278902282_gshared)(__this, ___index, method)
// T UnityEngine.Networking.SyncList`1<System.Object>::get_Item(System.Int32)
extern "C"  Il2CppObject * SyncList_1_get_Item_m568826823_gshared (SyncList_1_t2240478484 * __this, int32_t ___i, const MethodInfo* method);
#define SyncList_1_get_Item_m568826823(__this, ___i, method) ((  Il2CppObject * (*) (SyncList_1_t2240478484 *, int32_t, const MethodInfo*))SyncList_1_get_Item_m568826823_gshared)(__this, ___i, method)
// System.Void UnityEngine.Networking.SyncList`1<System.Object>::set_Item(System.Int32,T)
extern "C"  void SyncList_1_set_Item_m881227156_gshared (SyncList_1_t2240478484 * __this, int32_t ___i, Il2CppObject * ___value, const MethodInfo* method);
#define SyncList_1_set_Item_m881227156(__this, ___i, ___value, method) ((  void (*) (SyncList_1_t2240478484 *, int32_t, Il2CppObject *, const MethodInfo*))SyncList_1_set_Item_m881227156_gshared)(__this, ___i, ___value, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.Networking.SyncList`1<System.Object>::GetEnumerator()
extern "C"  Il2CppObject* SyncList_1_GetEnumerator_m1606710917_gshared (SyncList_1_t2240478484 * __this, const MethodInfo* method);
#define SyncList_1_GetEnumerator_m1606710917(__this, method) ((  Il2CppObject* (*) (SyncList_1_t2240478484 *, const MethodInfo*))SyncList_1_GetEnumerator_m1606710917_gshared)(__this, method)
