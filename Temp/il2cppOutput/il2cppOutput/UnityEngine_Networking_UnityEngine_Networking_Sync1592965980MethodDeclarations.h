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

// UnityEngine.Networking.SyncListUInt
struct SyncListUInt_t1592965980;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Sync1592965980.h"

// System.Void UnityEngine.Networking.SyncListUInt::.ctor()
extern "C"  void SyncListUInt__ctor_m2336788088 (SyncListUInt_t1592965980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListUInt::SerializeItem(UnityEngine.Networking.NetworkWriter,System.UInt32)
extern "C"  void SyncListUInt_SerializeItem_m4246288319 (SyncListUInt_t1592965980 * __this, NetworkWriter_t3691904682 * ___writer, uint32_t ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.SyncListUInt::DeserializeItem(UnityEngine.Networking.NetworkReader)
extern "C"  uint32_t SyncListUInt_DeserializeItem_m2199175861 (SyncListUInt_t1592965980 * __this, NetworkReader_t3536499450 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.SyncListUInt UnityEngine.Networking.SyncListUInt::ReadInstance(UnityEngine.Networking.NetworkReader)
extern "C"  SyncListUInt_t1592965980 * SyncListUInt_ReadInstance_m1772250988 (Il2CppObject * __this /* static, unused */, NetworkReader_t3536499450 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListUInt::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListUInt)
extern "C"  void SyncListUInt_ReadReference_m3163722163 (Il2CppObject * __this /* static, unused */, NetworkReader_t3536499450 * ___reader, SyncListUInt_t1592965980 * ___syncList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListUInt::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListUInt)
extern "C"  void SyncListUInt_WriteInstance_m2201693314 (Il2CppObject * __this /* static, unused */, NetworkWriter_t3691904682 * ___writer, SyncListUInt_t1592965980 * ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
