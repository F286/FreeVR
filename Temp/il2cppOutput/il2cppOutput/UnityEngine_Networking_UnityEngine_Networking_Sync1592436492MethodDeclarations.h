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

// UnityEngine.Networking.SyncListBool
struct SyncListBool_t1592436492;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Sync1592436492.h"

// System.Void UnityEngine.Networking.SyncListBool::.ctor()
extern "C"  void SyncListBool__ctor_m4001810632 (SyncListBool_t1592436492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListBool::SerializeItem(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C"  void SyncListBool_SerializeItem_m2267339522 (SyncListBool_t1592436492 * __this, NetworkWriter_t3691904682 * ___writer, bool ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.SyncListBool::DeserializeItem(UnityEngine.Networking.NetworkReader)
extern "C"  bool SyncListBool_DeserializeItem_m4189425976 (SyncListBool_t1592436492 * __this, NetworkReader_t3536499450 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.SyncListBool UnityEngine.Networking.SyncListBool::ReadInstance(UnityEngine.Networking.NetworkReader)
extern "C"  SyncListBool_t1592436492 * SyncListBool_ReadInstance_m2408265420 (Il2CppObject * __this /* static, unused */, NetworkReader_t3536499450 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListBool::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListBool)
extern "C"  void SyncListBool_ReadReference_m2520594003 (Il2CppObject * __this /* static, unused */, NetworkReader_t3536499450 * ___reader, SyncListBool_t1592436492 * ___syncList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListBool::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListBool)
extern "C"  void SyncListBool_WriteInstance_m1558565154 (Il2CppObject * __this /* static, unused */, NetworkWriter_t3691904682 * ___writer, SyncListBool_t1592436492 * ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
