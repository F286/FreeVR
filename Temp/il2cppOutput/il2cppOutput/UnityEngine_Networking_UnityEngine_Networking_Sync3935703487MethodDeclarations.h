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

// UnityEngine.Networking.SyncListInt
struct SyncListInt_t3935703487;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Sync3935703487.h"

// System.Void UnityEngine.Networking.SyncListInt::.ctor()
extern "C"  void SyncListInt__ctor_m2329534373 (SyncListInt_t3935703487 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListInt::SerializeItem(UnityEngine.Networking.NetworkWriter,System.Int32)
extern "C"  void SyncListInt_SerializeItem_m3939787103 (SyncListInt_t3935703487 * __this, NetworkWriter_t3691904682 * ___writer, int32_t ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.SyncListInt::DeserializeItem(UnityEngine.Networking.NetworkReader)
extern "C"  int32_t SyncListInt_DeserializeItem_m2321612447 (SyncListInt_t3935703487 * __this, NetworkReader_t3536499450 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.SyncListInt UnityEngine.Networking.SyncListInt::ReadInstance(UnityEngine.Networking.NetworkReader)
extern "C"  SyncListInt_t3935703487 * SyncListInt_ReadInstance_m3297948512 (Il2CppObject * __this /* static, unused */, NetworkReader_t3536499450 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListInt::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListInt)
extern "C"  void SyncListInt_ReadReference_m1287562057 (Il2CppObject * __this /* static, unused */, NetworkReader_t3536499450 * ___reader, SyncListInt_t3935703487 * ___syncList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListInt::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListInt)
extern "C"  void SyncListInt_WriteInstance_m3057644186 (Il2CppObject * __this /* static, unused */, NetworkWriter_t3691904682 * ___writer, SyncListInt_t3935703487 * ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
