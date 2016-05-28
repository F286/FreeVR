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

// UnityEngine.Networking.SyncListString
struct SyncListString_t1146931699;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Sync1146931699.h"

// System.Void UnityEngine.Networking.SyncListString::.ctor()
extern "C"  void SyncListString__ctor_m1906589633 (SyncListString_t1146931699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListString::SerializeItem(UnityEngine.Networking.NetworkWriter,System.String)
extern "C"  void SyncListString_SerializeItem_m2179283408 (SyncListString_t1146931699 * __this, NetworkWriter_t3691904682 * ___writer, String_t* ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.SyncListString::DeserializeItem(UnityEngine.Networking.NetworkReader)
extern "C"  String_t* SyncListString_DeserializeItem_m108999558 (SyncListString_t1146931699 * __this, NetworkReader_t3536499450 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.SyncListString UnityEngine.Networking.SyncListString::ReadInstance(UnityEngine.Networking.NetworkReader)
extern "C"  SyncListString_t1146931699 * SyncListString_ReadInstance_m1719474266 (Il2CppObject * __this /* static, unused */, NetworkReader_t3536499450 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListString::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListString)
extern "C"  void SyncListString_ReadReference_m4084716485 (Il2CppObject * __this /* static, unused */, NetworkReader_t3536499450 * ___reader, SyncListString_t1146931699 * ___syncList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListString::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListString)
extern "C"  void SyncListString_WriteInstance_m2992961236 (Il2CppObject * __this /* static, unused */, NetworkWriter_t3691904682 * ___writer, SyncListString_t1146931699 * ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
