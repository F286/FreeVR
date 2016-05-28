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

// System.Net.EndPoint
struct EndPoint_t1294049535;
// UnityEngine.Networking.GlobalConfig
struct GlobalConfig_t2769223534;
// UnityEngine.Networking.GlobalConfigInternal
struct GlobalConfigInternal_t2246079819;
// System.String
struct String_t;
// UnityEngine.Networking.HostTopologyInternal
struct HostTopologyInternal_t2462378685;
// UnityEngine.Networking.HostTopology
struct HostTopology_t1316030176;
// UnityEngine.Networking.ConnectionSimulatorConfig
struct ConnectionSimulatorConfig_t650485777;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_EndPoint1294049535.h"
#include "UnityEngine_UnityEngine_Networking_GlobalConfig2769223534.h"
#include "UnityEngine_UnityEngine_Networking_GlobalConfigInt2246079819.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID3752984187.h"
#include "UnityEngine_UnityEngine_Networking_Types_SourceID1497205096.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID2024896911.h"
#include "UnityEngine_UnityEngine_Networking_NetworkEventTyp2071524623.h"
#include "UnityEngine_UnityEngine_Networking_HostTopologyInt2462378685.h"
#include "UnityEngine_UnityEngine_Networking_HostTopology1316030176.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Networking_ConnectionSimula650485777.h"

// System.Boolean UnityEngine.Networking.NetworkTransport::DoesEndPointUsePlatformProtocols(System.Net.EndPoint)
extern "C"  bool NetworkTransport_DoesEndPointUsePlatformProtocols_m885513828 (Il2CppObject * __this /* static, unused */, EndPoint_t1294049535 * ___endPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::ConnectEndPoint(System.Int32,System.Net.EndPoint,System.Int32,System.Byte&)
extern "C"  int32_t NetworkTransport_ConnectEndPoint_m3025611817 (Il2CppObject * __this /* static, unused */, int32_t ___hostId, EndPoint_t1294049535 * ___endPoint, int32_t ___exceptionConnectionId, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::Init()
extern "C"  void NetworkTransport_Init_m4205164368 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::Init(UnityEngine.Networking.GlobalConfig)
extern "C"  void NetworkTransport_Init_m2442450458 (Il2CppObject * __this /* static, unused */, GlobalConfig_t2769223534 * ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::InitWithNoParameters()
extern "C"  void NetworkTransport_InitWithNoParameters_m2525386657 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::InitWithParameters(UnityEngine.Networking.GlobalConfigInternal)
extern "C"  void NetworkTransport_InitWithParameters_m2286165677 (Il2CppObject * __this /* static, unused */, GlobalConfigInternal_t2246079819 * ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::Shutdown()
extern "C"  void NetworkTransport_Shutdown_m2443208598 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::ConnectAsNetworkHost(System.Int32,System.String,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID,System.Byte&)
extern "C"  void NetworkTransport_ConnectAsNetworkHost_m414745677 (Il2CppObject * __this /* static, unused */, int32_t ___hostId, String_t* ___address, int32_t ___port, uint64_t ___network, uint64_t ___source, uint16_t ___node, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkEventType UnityEngine.Networking.NetworkTransport::ReceiveRelayEventFromHost(System.Int32,System.Byte&)
extern "C"  int32_t NetworkTransport_ReceiveRelayEventFromHost_m4234015948 (Il2CppObject * __this /* static, unused */, int32_t ___hostId, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::ConnectToNetworkPeer(System.Int32,System.String,System.Int32,System.Int32,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID,System.Int32,System.Single,System.Byte&)
extern "C"  int32_t NetworkTransport_ConnectToNetworkPeer_m854362358 (Il2CppObject * __this /* static, unused */, int32_t ___hostId, String_t* ___address, int32_t ___port, int32_t ___exceptionConnectionId, int32_t ___relaySlotId, uint64_t ___network, uint64_t ___source, uint16_t ___node, int32_t ___bytesPerSec, float ___bucketSizeFactor, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::ConnectToNetworkPeer(System.Int32,System.String,System.Int32,System.Int32,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID,System.Byte&)
extern "C"  int32_t NetworkTransport_ConnectToNetworkPeer_m255385212 (Il2CppObject * __this /* static, unused */, int32_t ___hostId, String_t* ___address, int32_t ___port, int32_t ___exceptionConnectionId, int32_t ___relaySlotId, uint64_t ___network, uint64_t ___source, uint16_t ___node, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::GetCurrentRtt(System.Int32,System.Int32,System.Byte&)
extern "C"  int32_t NetworkTransport_GetCurrentRtt_m1132321970 (Il2CppObject * __this /* static, unused */, int32_t ___hostId, int32_t ___connectionId, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::GetConnectionInfo(System.Int32,System.Int32,System.String&,System.Int32&,UnityEngine.Networking.Types.NetworkID&,UnityEngine.Networking.Types.NodeID&,System.Byte&)
extern "C"  void NetworkTransport_GetConnectionInfo_m2410450444 (Il2CppObject * __this /* static, unused */, int32_t ___hostId, int32_t ___connectionId, String_t** ___address, int32_t* ___port, uint64_t* ___network, uint16_t* ___dstNode, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkTransport::GetConnectionInfo(System.Int32,System.Int32,System.Int32&,System.UInt64&,System.UInt16&,System.Byte&)
extern "C"  String_t* NetworkTransport_GetConnectionInfo_m1339913196 (Il2CppObject * __this /* static, unused */, int32_t ___hostId, int32_t ___connectionId, int32_t* ___port, uint64_t* ___network, uint16_t* ___dstNode, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddWsHostWrapper(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32)
extern "C"  int32_t NetworkTransport_AddWsHostWrapper_m1168384174 (Il2CppObject * __this /* static, unused */, HostTopologyInternal_t2462378685 * ___topologyInt, String_t* ___ip, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddWsHostWrapperWithoutIp(UnityEngine.Networking.HostTopologyInternal,System.Int32)
extern "C"  int32_t NetworkTransport_AddWsHostWrapperWithoutIp_m413354655 (Il2CppObject * __this /* static, unused */, HostTopologyInternal_t2462378685 * ___topologyInt, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddWebsocketHost(UnityEngine.Networking.HostTopology,System.Int32)
extern "C"  int32_t NetworkTransport_AddWebsocketHost_m482650189 (Il2CppObject * __this /* static, unused */, HostTopology_t1316030176 * ___topology, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddWebsocketHost(UnityEngine.Networking.HostTopology,System.Int32,System.String)
extern "C"  int32_t NetworkTransport_AddWebsocketHost_m2331428297 (Il2CppObject * __this /* static, unused */, HostTopology_t1316030176 * ___topology, int32_t ___port, String_t* ___ip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWrapper(UnityEngine.Networking.HostTopologyInternal,System.String,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t NetworkTransport_AddHostWrapper_m2215682442 (Il2CppObject * __this /* static, unused */, HostTopologyInternal_t2462378685 * ___topologyInt, String_t* ___ip, int32_t ___port, int32_t ___minTimeout, int32_t ___maxTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWrapperWithoutIp(UnityEngine.Networking.HostTopologyInternal,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t NetworkTransport_AddHostWrapperWithoutIp_m3633975491 (Il2CppObject * __this /* static, unused */, HostTopologyInternal_t2462378685 * ___topologyInt, int32_t ___port, int32_t ___minTimeout, int32_t ___maxTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32)
extern "C"  int32_t NetworkTransport_AddHost_m639728426 (Il2CppObject * __this /* static, unused */, HostTopology_t1316030176 * ___topology, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32,System.String)
extern "C"  int32_t NetworkTransport_AddHost_m2464600550 (Il2CppObject * __this /* static, unused */, HostTopology_t1316030176 * ___topology, int32_t ___port, String_t* ___ip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWithSimulator(UnityEngine.Networking.HostTopology,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t NetworkTransport_AddHostWithSimulator_m1608577268 (Il2CppObject * __this /* static, unused */, HostTopology_t1316030176 * ___topology, int32_t ___minTimeout, int32_t ___maxTimeout, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHostWithSimulator(UnityEngine.Networking.HostTopology,System.Int32,System.Int32,System.Int32,System.String)
extern "C"  int32_t NetworkTransport_AddHostWithSimulator_m2165792304 (Il2CppObject * __this /* static, unused */, HostTopology_t1316030176 * ___topology, int32_t ___minTimeout, int32_t ___maxTimeout, int32_t ___port, String_t* ___ip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransport::RemoveHost(System.Int32)
extern "C"  bool NetworkTransport_RemoveHost_m4142727543 (Il2CppObject * __this /* static, unused */, int32_t ___hostId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransport::get_IsStarted()
extern "C"  bool NetworkTransport_get_IsStarted_m2236951126 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::Connect(System.Int32,System.String,System.Int32,System.Int32,System.Byte&)
extern "C"  int32_t NetworkTransport_Connect_m16029358 (Il2CppObject * __this /* static, unused */, int32_t ___hostId, String_t* ___address, int32_t ___port, int32_t ___exeptionConnectionId, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::Internal_ConnectEndPoint(System.Int32,System.IntPtr,System.Int32,System.Int32,System.Byte&)
extern "C"  int32_t NetworkTransport_Internal_ConnectEndPoint_m2234403243 (Il2CppObject * __this /* static, unused */, int32_t ___hostId, IntPtr_t ___sockAddrStorage, int32_t ___sockAddrStorageLen, int32_t ___exceptionConnectionId, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransport::ConnectWithSimulator(System.Int32,System.String,System.Int32,System.Int32,System.Byte&,UnityEngine.Networking.ConnectionSimulatorConfig)
extern "C"  int32_t NetworkTransport_ConnectWithSimulator_m317164795 (Il2CppObject * __this /* static, unused */, int32_t ___hostId, String_t* ___address, int32_t ___port, int32_t ___exeptionConnectionId, uint8_t* ___error, ConnectionSimulatorConfig_t650485777 * ___conf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransport::Disconnect(System.Int32,System.Int32,System.Byte&)
extern "C"  bool NetworkTransport_Disconnect_m1220901079 (Il2CppObject * __this /* static, unused */, int32_t ___hostId, int32_t ___connectionId, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransport::Send(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
extern "C"  bool NetworkTransport_Send_m693132326 (Il2CppObject * __this /* static, unused */, int32_t ___hostId, int32_t ___connectionId, int32_t ___channelId, ByteU5BU5D_t58506160* ___buffer, int32_t ___size, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransport::SendWrapper(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
extern "C"  bool NetworkTransport_SendWrapper_m351008951 (Il2CppObject * __this /* static, unused */, int32_t ___hostId, int32_t ___connectionId, int32_t ___channelId, ByteU5BU5D_t58506160* ___buffer, int32_t ___size, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkEventType UnityEngine.Networking.NetworkTransport::ReceiveFromHost(System.Int32,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
extern "C"  int32_t NetworkTransport_ReceiveFromHost_m3433888570 (Il2CppObject * __this /* static, unused */, int32_t ___hostId, int32_t* ___connectionId, int32_t* ___channelId, ByteU5BU5D_t58506160* ___buffer, int32_t ___bufferSize, int32_t* ___receivedSize, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransport::StartBroadcastDiscovery(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Int32,System.Byte&)
extern "C"  bool NetworkTransport_StartBroadcastDiscovery_m3640504762 (Il2CppObject * __this /* static, unused */, int32_t ___hostId, int32_t ___broadcastPort, int32_t ___key, int32_t ___version, int32_t ___subversion, ByteU5BU5D_t58506160* ___buffer, int32_t ___size, int32_t ___timeout, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::StopBroadcastDiscovery()
extern "C"  void NetworkTransport_StopBroadcastDiscovery_m1711182289 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::SetBroadcastCredentials(System.Int32,System.Int32,System.Int32,System.Int32,System.Byte&)
extern "C"  void NetworkTransport_SetBroadcastCredentials_m3016945440 (Il2CppObject * __this /* static, unused */, int32_t ___hostId, int32_t ___key, int32_t ___version, int32_t ___subversion, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkTransport::GetBroadcastConnectionInfo(System.Int32,System.Int32&,System.Byte&)
extern "C"  String_t* NetworkTransport_GetBroadcastConnectionInfo_m1548702413 (Il2CppObject * __this /* static, unused */, int32_t ___hostId, int32_t* ___port, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::GetBroadcastConnectionInfo(System.Int32,System.String&,System.Int32&,System.Byte&)
extern "C"  void NetworkTransport_GetBroadcastConnectionInfo_m1149228074 (Il2CppObject * __this /* static, unused */, int32_t ___hostId, String_t** ___address, int32_t* ___port, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransport::GetBroadcastConnectionMessage(System.Int32,System.Byte[],System.Int32,System.Int32&,System.Byte&)
extern "C"  void NetworkTransport_GetBroadcastConnectionMessage_m2563651727 (Il2CppObject * __this /* static, unused */, int32_t ___hostId, ByteU5BU5D_t58506160* ___buffer, int32_t ___bufferSize, int32_t* ___receivedSize, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
