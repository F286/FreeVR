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

// UnityEngine.Networking.ConnectionConfigInternal
struct ConnectionConfigInternal_t3693288774;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t3291140713;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_ConnectionConfi3291140713.h"
#include "UnityEngine_UnityEngine_Networking_QosType1592524120.h"

// System.Void UnityEngine.Networking.ConnectionConfigInternal::.ctor(UnityEngine.Networking.ConnectionConfig)
extern "C"  void ConnectionConfigInternal__ctor_m2913025997 (ConnectionConfigInternal_t3693288774 * __this, ConnectionConfig_t3291140713 * ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitWrapper()
extern "C"  void ConnectionConfigInternal_InitWrapper_m2668907843 (ConnectionConfigInternal_t3693288774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.Networking.ConnectionConfigInternal::AddChannel(UnityEngine.Networking.QosType)
extern "C"  uint8_t ConnectionConfigInternal_AddChannel_m4186220684 (ConnectionConfigInternal_t3693288774 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitPacketSize(System.UInt16)
extern "C"  void ConnectionConfigInternal_InitPacketSize_m2158889273 (ConnectionConfigInternal_t3693288774 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitFragmentSize(System.UInt16)
extern "C"  void ConnectionConfigInternal_InitFragmentSize_m2556882609 (ConnectionConfigInternal_t3693288774 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitResendTimeout(System.UInt32)
extern "C"  void ConnectionConfigInternal_InitResendTimeout_m936500068 (ConnectionConfigInternal_t3693288774 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitDisconnectTimeout(System.UInt32)
extern "C"  void ConnectionConfigInternal_InitDisconnectTimeout_m54179973 (ConnectionConfigInternal_t3693288774 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitConnectTimeout(System.UInt32)
extern "C"  void ConnectionConfigInternal_InitConnectTimeout_m3887645329 (ConnectionConfigInternal_t3693288774 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMinUpdateTimeout(System.UInt32)
extern "C"  void ConnectionConfigInternal_InitMinUpdateTimeout_m2217389282 (ConnectionConfigInternal_t3693288774 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitPingTimeout(System.UInt32)
extern "C"  void ConnectionConfigInternal_InitPingTimeout_m3028882843 (ConnectionConfigInternal_t3693288774 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitReducedPingTimeout(System.UInt32)
extern "C"  void ConnectionConfigInternal_InitReducedPingTimeout_m1906190327 (ConnectionConfigInternal_t3693288774 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitAllCostTimeout(System.UInt32)
extern "C"  void ConnectionConfigInternal_InitAllCostTimeout_m3934174133 (ConnectionConfigInternal_t3693288774 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitNetworkDropThreshold(System.Byte)
extern "C"  void ConnectionConfigInternal_InitNetworkDropThreshold_m2441588555 (ConnectionConfigInternal_t3693288774 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitOverflowDropThreshold(System.Byte)
extern "C"  void ConnectionConfigInternal_InitOverflowDropThreshold_m666801953 (ConnectionConfigInternal_t3693288774 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMaxConnectionAttempt(System.Byte)
extern "C"  void ConnectionConfigInternal_InitMaxConnectionAttempt_m913771534 (ConnectionConfigInternal_t3693288774 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitAckDelay(System.UInt32)
extern "C"  void ConnectionConfigInternal_InitAckDelay_m4065575438 (ConnectionConfigInternal_t3693288774 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMaxCombinedReliableMessageSize(System.UInt16)
extern "C"  void ConnectionConfigInternal_InitMaxCombinedReliableMessageSize_m1552603181 (ConnectionConfigInternal_t3693288774 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMaxCombinedReliableMessageCount(System.UInt16)
extern "C"  void ConnectionConfigInternal_InitMaxCombinedReliableMessageCount_m1875757385 (ConnectionConfigInternal_t3693288774 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitMaxSentMessageQueueSize(System.UInt16)
extern "C"  void ConnectionConfigInternal_InitMaxSentMessageQueueSize_m576430589 (ConnectionConfigInternal_t3693288774 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitIsAcksLong(System.Boolean)
extern "C"  void ConnectionConfigInternal_InitIsAcksLong_m825252377 (ConnectionConfigInternal_t3693288774 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::InitUsePlatformSpecificProtocols(System.Boolean)
extern "C"  void ConnectionConfigInternal_InitUsePlatformSpecificProtocols_m333999032 (ConnectionConfigInternal_t3693288774 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::Dispose()
extern "C"  void ConnectionConfigInternal_Dispose_m1244853887 (ConnectionConfigInternal_t3693288774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfigInternal::Finalize()
extern "C"  void ConnectionConfigInternal_Finalize_m3191496288 (ConnectionConfigInternal_t3693288774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
