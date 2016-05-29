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

// UnityEngine.Networking.HostTopologyInternal
struct HostTopologyInternal_t2462378685;
// UnityEngine.Networking.HostTopology
struct HostTopology_t1316030176;
// UnityEngine.Networking.ConnectionConfigInternal
struct ConnectionConfigInternal_t3693288774;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_HostTopology1316030176.h"
#include "UnityEngine_UnityEngine_Networking_ConnectionConfi3693288774.h"

// System.Void UnityEngine.Networking.HostTopologyInternal::.ctor(UnityEngine.Networking.HostTopology)
extern "C"  void HostTopologyInternal__ctor_m1734042925 (HostTopologyInternal_t2462378685 * __this, HostTopology_t1316030176 * ___topology, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.HostTopologyInternal::InitWrapper(UnityEngine.Networking.ConnectionConfigInternal,System.Int32)
extern "C"  void HostTopologyInternal_InitWrapper_m1734159729 (HostTopologyInternal_t2462378685 * __this, ConnectionConfigInternal_t3693288774 * ___config, int32_t ___maxDefaultConnections, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.HostTopologyInternal::AddSpecialConnectionConfig(UnityEngine.Networking.ConnectionConfigInternal)
extern "C"  int32_t HostTopologyInternal_AddSpecialConnectionConfig_m1406390401 (HostTopologyInternal_t2462378685 * __this, ConnectionConfigInternal_t3693288774 * ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.HostTopologyInternal::AddSpecialConnectionConfigWrapper(UnityEngine.Networking.ConnectionConfigInternal)
extern "C"  int32_t HostTopologyInternal_AddSpecialConnectionConfigWrapper_m3163529806 (HostTopologyInternal_t2462378685 * __this, ConnectionConfigInternal_t3693288774 * ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.HostTopologyInternal::InitOtherParameters(UnityEngine.Networking.HostTopology)
extern "C"  void HostTopologyInternal_InitOtherParameters_m376097189 (HostTopologyInternal_t2462378685 * __this, HostTopology_t1316030176 * ___topology, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.HostTopologyInternal::InitReceivedPoolSize(System.UInt16)
extern "C"  void HostTopologyInternal_InitReceivedPoolSize_m334695853 (HostTopologyInternal_t2462378685 * __this, uint16_t ___pool, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.HostTopologyInternal::InitSentMessagePoolSize(System.UInt16)
extern "C"  void HostTopologyInternal_InitSentMessagePoolSize_m232135503 (HostTopologyInternal_t2462378685 * __this, uint16_t ___pool, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.HostTopologyInternal::InitMessagePoolSizeGrowthFactor(System.Single)
extern "C"  void HostTopologyInternal_InitMessagePoolSizeGrowthFactor_m1691772536 (HostTopologyInternal_t2462378685 * __this, float ___factor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.HostTopologyInternal::Dispose()
extern "C"  void HostTopologyInternal_Dispose_m2830104232 (HostTopologyInternal_t2462378685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.HostTopologyInternal::Finalize()
extern "C"  void HostTopologyInternal_Finalize_m794649431 (HostTopologyInternal_t2462378685 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
