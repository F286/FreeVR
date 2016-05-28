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

// UnityEngine.Networking.SyncListFloat
struct SyncListFloat_t1969415788;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Sync1969415788.h"

// System.Void UnityEngine.Networking.SyncListFloat::.ctor()
extern "C"  void SyncListFloat__ctor_m1597503384 (SyncListFloat_t1969415788 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListFloat::SerializeItem(UnityEngine.Networking.NetworkWriter,System.Single)
extern "C"  void SyncListFloat_SerializeItem_m2898692496 (SyncListFloat_t1969415788 * __this, NetworkWriter_t3691904682 * ___writer, float ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.SyncListFloat::DeserializeItem(UnityEngine.Networking.NetworkReader)
extern "C"  float SyncListFloat_DeserializeItem_m1430319278 (SyncListFloat_t1969415788 * __this, NetworkReader_t3536499450 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.SyncListFloat UnityEngine.Networking.SyncListFloat::ReadInstance(UnityEngine.Networking.NetworkReader)
extern "C"  SyncListFloat_t1969415788 * SyncListFloat_ReadInstance_m1110221632 (Il2CppObject * __this /* static, unused */, NetworkReader_t3536499450 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListFloat::ReadReference(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.SyncListFloat)
extern "C"  void SyncListFloat_ReadReference_m4172897065 (Il2CppObject * __this /* static, unused */, NetworkReader_t3536499450 * ___reader, SyncListFloat_t1969415788 * ___syncList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.SyncListFloat::WriteInstance(UnityEngine.Networking.NetworkWriter,UnityEngine.Networking.SyncListFloat)
extern "C"  void SyncListFloat_WriteInstance_m119806522 (Il2CppObject * __this /* static, unused */, NetworkWriter_t3691904682 * ___writer, SyncListFloat_t1969415788 * ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
