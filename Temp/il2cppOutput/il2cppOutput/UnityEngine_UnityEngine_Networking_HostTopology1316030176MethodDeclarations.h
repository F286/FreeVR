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

// UnityEngine.Networking.HostTopology
struct HostTopology_t1316030176;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t3291140713;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_ConnectionConfi3291140713.h"

// System.Void UnityEngine.Networking.HostTopology::.ctor(UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C"  void HostTopology__ctor_m1444034768 (HostTopology_t1316030176 * __this, ConnectionConfig_t3291140713 * ___defaultConfig, int32_t ___maxDefaultConnections, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.HostTopology::.ctor()
extern "C"  void HostTopology__ctor_m1912184936 (HostTopology_t1316030176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::get_DefaultConfig()
extern "C"  ConnectionConfig_t3291140713 * HostTopology_get_DefaultConfig_m3534679088 (HostTopology_t1316030176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.HostTopology::get_MaxDefaultConnections()
extern "C"  int32_t HostTopology_get_MaxDefaultConnections_m1407421045 (HostTopology_t1316030176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.HostTopology::get_SpecialConnectionConfigsCount()
extern "C"  int32_t HostTopology_get_SpecialConnectionConfigsCount_m3240782482 (HostTopology_t1316030176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::GetSpecialConnectionConfig(System.Int32)
extern "C"  ConnectionConfig_t3291140713 * HostTopology_GetSpecialConnectionConfig_m4006208288 (HostTopology_t1316030176 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.HostTopology::get_ReceivedMessagePoolSize()
extern "C"  uint16_t HostTopology_get_ReceivedMessagePoolSize_m4214250677 (HostTopology_t1316030176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.HostTopology::get_SentMessagePoolSize()
extern "C"  uint16_t HostTopology_get_SentMessagePoolSize_m3229613150 (HostTopology_t1316030176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.HostTopology::get_MessagePoolSizeGrowthFactor()
extern "C"  float HostTopology_get_MessagePoolSizeGrowthFactor_m2588109091 (HostTopology_t1316030176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
