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

// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t3291140713;
// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>
struct List_1_t292107700;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_ConnectionConfi3291140713.h"
#include "UnityEngine_UnityEngine_Networking_QosType1592524120.h"

// System.Void UnityEngine.Networking.ConnectionConfig::.ctor()
extern "C"  void ConnectionConfig__ctor_m3444257023 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor(UnityEngine.Networking.ConnectionConfig)
extern "C"  void ConnectionConfig__ctor_m921396976 (ConnectionConfig_t3291140713 * __this, ConnectionConfig_t3291140713 * ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfig::Validate(UnityEngine.Networking.ConnectionConfig)
extern "C"  void ConnectionConfig_Validate_m3089562228 (Il2CppObject * __this /* static, unused */, ConnectionConfig_t3291140713 * ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_PacketSize()
extern "C"  uint16_t ConnectionConfig_get_PacketSize_m1802127970 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_FragmentSize()
extern "C"  uint16_t ConnectionConfig_get_FragmentSize_m3318975530 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ResendTimeout()
extern "C"  uint32_t ConnectionConfig_get_ResendTimeout_m1905474613 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_DisconnectTimeout()
extern "C"  uint32_t ConnectionConfig_get_DisconnectTimeout_m248911348 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ConnectTimeout()
extern "C"  uint32_t ConnectionConfig_get_ConnectTimeout_m2161636874 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_MinUpdateTimeout()
extern "C"  uint32_t ConnectionConfig_get_MinUpdateTimeout_m702701529 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfig::set_MinUpdateTimeout(System.UInt32)
extern "C"  void ConnectionConfig_set_MinUpdateTimeout_m907216114 (ConnectionConfig_t3291140713 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_PingTimeout()
extern "C"  uint32_t ConnectionConfig_get_PingTimeout_m968482910 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_ReducedPingTimeout()
extern "C"  uint32_t ConnectionConfig_get_ReducedPingTimeout_m3883489892 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_AllCostTimeout()
extern "C"  uint32_t ConnectionConfig_get_AllCostTimeout_m2006970982 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.Networking.ConnectionConfig::get_NetworkDropThreshold()
extern "C"  uint8_t ConnectionConfig_get_NetworkDropThreshold_m2748443152 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.Networking.ConnectionConfig::get_OverflowDropThreshold()
extern "C"  uint8_t ConnectionConfig_get_OverflowDropThreshold_m2018655770 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.Networking.ConnectionConfig::get_MaxConnectionAttempt()
extern "C"  uint8_t ConnectionConfig_get_MaxConnectionAttempt_m1132259629 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_AckDelay()
extern "C"  uint32_t ConnectionConfig_get_AckDelay_m1369416749 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageSize()
extern "C"  uint16_t ConnectionConfig_get_MaxCombinedReliableMessageSize_m3549336942 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageCount()
extern "C"  uint16_t ConnectionConfig_get_MaxCombinedReliableMessageCount_m1507604260 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxSentMessageQueueSize()
extern "C"  uint16_t ConnectionConfig_get_MaxSentMessageQueueSize_m2804347632 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ConnectionConfig::get_IsAcksLong()
extern "C"  bool ConnectionConfig_get_IsAcksLong_m1409954680 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ConnectionConfig::get_UsePlatformSpecificProtocols()
extern "C"  bool ConnectionConfig_get_UsePlatformSpecificProtocols_m3690597847 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfig::set_UsePlatformSpecificProtocols(System.Boolean)
extern "C"  void ConnectionConfig_set_UsePlatformSpecificProtocols_m371961256 (ConnectionConfig_t3291140713 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ConnectionConfig::get_ChannelCount()
extern "C"  int32_t ConnectionConfig_get_ChannelCount_m3845377210 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.Networking.ConnectionConfig::AddChannel(UnityEngine.Networking.QosType)
extern "C"  uint8_t ConnectionConfig_AddChannel_m2926087471 (ConnectionConfig_t3291140713 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.QosType UnityEngine.Networking.ConnectionConfig::GetChannel(System.Byte)
extern "C"  int32_t ConnectionConfig_GetChannel_m2732139676 (ConnectionConfig_t3291140713 * __this, uint8_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS> UnityEngine.Networking.ConnectionConfig::get_Channels()
extern "C"  List_1_t292107700 * ConnectionConfig_get_Channels_m814037302 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
