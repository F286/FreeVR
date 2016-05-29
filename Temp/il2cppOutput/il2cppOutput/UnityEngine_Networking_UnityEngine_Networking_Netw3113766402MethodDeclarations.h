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

// UnityEngine.Networking.NetworkClient
struct NetworkClient_t3113766402;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t2182631957;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkClient>
struct List_1_t3910725371;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[]
struct PeerInfoMessageU5BU5D_t744059576;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate>
struct Dictionary_2_t2200959304;
// UnityEngine.Networking.HostTopology
struct HostTopology_t1316030176;
// System.Type
struct Type_t;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t3291140713;
// UnityEngine.Networking.Match.MatchInfo
struct MatchInfo_t1974561481;
// System.Net.EndPoint
struct EndPoint_t1294049535;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// UnityEngine.Networking.MessageBase
struct MessageBase_t226723297;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat>
struct Dictionary_2_t210528029;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1976735906;
// UnityEngine.Networking.NetworkMessageDelegate
struct NetworkMessageDelegate_t4139233607;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2182631957.h"
#include "UnityEngine_UnityEngine_Networking_ConnectionConfi3291140713.h"
#include "UnityEngine_UnityEngine_Networking_HostTopology1316030176.h"
#include "UnityEngine_UnityEngine_Networking_Match_MatchInfo1974561481.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Net_EndPoint1294049535.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Messa226723297.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1976735906.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw4139233607.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3113766402.h"

// System.Void UnityEngine.Networking.NetworkClient::.ctor()
extern "C"  void NetworkClient__ctor_m3056515266 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::.ctor(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkClient__ctor_m3218144537 (NetworkClient_t3113766402 * __this, NetworkConnection_t2182631957 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::.cctor()
extern "C"  void NetworkClient__cctor_m4075563819 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkClient> UnityEngine.Networking.NetworkClient::get_allClients()
extern "C"  List_1_t3910725371 * NetworkClient_get_allClients_m3758041691 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::get_active()
extern "C"  bool NetworkClient_get_active_m1501449599 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::SetHandlers(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkClient_SetHandlers_m450307106 (NetworkClient_t3113766402 * __this, NetworkConnection_t2182631957 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkClient::get_serverIp()
extern "C"  String_t* NetworkClient_get_serverIp_m877817560 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkClient::get_serverPort()
extern "C"  int32_t NetworkClient_get_serverPort_m1193698423 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.NetworkClient::get_connection()
extern "C"  NetworkConnection_t2182631957 * NetworkClient_get_connection_m743904375 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[] UnityEngine.Networking.NetworkClient::get_peers()
extern "C"  PeerInfoMessageU5BU5D_t744059576* NetworkClient_get_peers_m2989967254 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkClient::get_hostId()
extern "C"  int32_t NetworkClient_get_hostId_m2013719606 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate> UnityEngine.Networking.NetworkClient::get_handlers()
extern "C"  Dictionary_2_t2200959304 * NetworkClient_get_handlers_m3151503000 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkClient::get_numChannels()
extern "C"  int32_t NetworkClient_get_numChannels_m3833465125 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.HostTopology UnityEngine.Networking.NetworkClient::get_hostTopology()
extern "C"  HostTopology_t1316030176 * NetworkClient_get_hostTopology_m3708020987 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::get_isConnected()
extern "C"  bool NetworkClient_get_isConnected_m1433706056 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityEngine.Networking.NetworkClient::get_networkConnectionClass()
extern "C"  Type_t * NetworkClient_get_networkConnectionClass_m475379953 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::Configure(UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C"  bool NetworkClient_Configure_m340987040 (NetworkClient_t3113766402 * __this, ConnectionConfig_t3291140713 * ___config, int32_t ___maxConnections, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::Configure(UnityEngine.Networking.HostTopology)
extern "C"  bool NetworkClient_Configure_m2046054144 (NetworkClient_t3113766402 * __this, HostTopology_t1316030176 * ___topology, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::Connect(UnityEngine.Networking.Match.MatchInfo)
extern "C"  void NetworkClient_Connect_m1782442563 (NetworkClient_t3113766402 * __this, MatchInfo_t1974561481 * ___matchInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::ReconnectToNewHost(System.String,System.Int32)
extern "C"  bool NetworkClient_ReconnectToNewHost_m321563963 (NetworkClient_t3113766402 * __this, String_t* ___serverIp, int32_t ___serverPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::ConnectWithSimulator(System.String,System.Int32,System.Int32,System.Single)
extern "C"  void NetworkClient_ConnectWithSimulator_m672318641 (NetworkClient_t3113766402 * __this, String_t* ___serverIp, int32_t ___serverPort, int32_t ___latency, float ___packetLoss, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::IsValidIpV6(System.String)
extern "C"  bool NetworkClient_IsValidIpV6_m348105335 (Il2CppObject * __this /* static, unused */, String_t* ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::Connect(System.String,System.Int32)
extern "C"  void NetworkClient_Connect_m358203679 (NetworkClient_t3113766402 * __this, String_t* ___serverIp, int32_t ___serverPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::Connect(System.Net.EndPoint)
extern "C"  void NetworkClient_Connect_m373424803 (NetworkClient_t3113766402 * __this, EndPoint_t1294049535 * ___secureTunnelEndPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::PrepareForConnect()
extern "C"  void NetworkClient_PrepareForConnect_m3398279592 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::PrepareForConnect(System.Boolean)
extern "C"  void NetworkClient_PrepareForConnect_m3355726111 (NetworkClient_t3113766402 * __this, bool ___usePlatformSpecificProtocols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GetHostAddressesCallback(System.IAsyncResult)
extern "C"  void NetworkClient_GetHostAddressesCallback_m3122730232 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___ar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::ContinueConnect()
extern "C"  void NetworkClient_ContinueConnect_m2872113315 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::ConnectWithRelay(UnityEngine.Networking.Match.MatchInfo)
extern "C"  void NetworkClient_ConnectWithRelay_m2130065692 (NetworkClient_t3113766402 * __this, MatchInfo_t1974561481 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::Disconnect()
extern "C"  void NetworkClient_Disconnect_m926892318 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::Send(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkClient_Send_m2259061582 (NetworkClient_t3113766402 * __this, int16_t ___msgType, MessageBase_t226723297 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::SendWriter(UnityEngine.Networking.NetworkWriter,System.Int32)
extern "C"  bool NetworkClient_SendWriter_m4231879018 (NetworkClient_t3113766402 * __this, NetworkWriter_t3691904682 * ___writer, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::SendBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  bool NetworkClient_SendBytes_m2217196148 (NetworkClient_t3113766402 * __this, ByteU5BU5D_t58506160* ___data, int32_t ___numBytes, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::SendUnreliable(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkClient_SendUnreliable_m3924053099 (NetworkClient_t3113766402 * __this, int16_t ___msgType, MessageBase_t226723297 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::SendByChannel(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C"  bool NetworkClient_SendByChannel_m3139472519 (NetworkClient_t3113766402 * __this, int16_t ___msgType, MessageBase_t226723297 * ___msg, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::SetMaxDelay(System.Single)
extern "C"  void NetworkClient_SetMaxDelay_m88000490 (NetworkClient_t3113766402 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::Shutdown()
extern "C"  void NetworkClient_Shutdown_m1468798104 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::Update()
extern "C"  void NetworkClient_Update_m1989554827 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GenerateConnectError(System.Int32)
extern "C"  void NetworkClient_GenerateConnectError_m252875942 (NetworkClient_t3113766402 * __this, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GenerateDataError(System.Int32)
extern "C"  void NetworkClient_GenerateDataError_m494621562 (NetworkClient_t3113766402 * __this, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GenerateDisconnectError(System.Int32)
extern "C"  void NetworkClient_GenerateDisconnectError_m4192758216 (NetworkClient_t3113766402 * __this, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GenerateError(System.Int32)
extern "C"  void NetworkClient_GenerateError_m1276535940 (NetworkClient_t3113766402 * __this, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GetStatsOut(System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern "C"  void NetworkClient_GetStatsOut_m2925388661 (NetworkClient_t3113766402 * __this, int32_t* ___numMsgs, int32_t* ___numBufferedMsgs, int32_t* ___numBytes, int32_t* ___lastBufferedPerSecond, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::GetStatsIn(System.Int32&,System.Int32&)
extern "C"  void NetworkClient_GetStatsIn_m3881031488 (NetworkClient_t3113766402 * __this, int32_t* ___numMsgs, int32_t* ___numBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat> UnityEngine.Networking.NetworkClient::GetConnectionStats()
extern "C"  Dictionary_2_t210528029 * NetworkClient_GetConnectionStats_m11676082 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::ResetConnectionStats()
extern "C"  void NetworkClient_ResetConnectionStats_m1107761364 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkClient::GetRTT()
extern "C"  int32_t NetworkClient_GetRTT_m2506054182 (NetworkClient_t3113766402 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::RegisterSystemHandlers(System.Boolean)
extern "C"  void NetworkClient_RegisterSystemHandlers_m663487796 (NetworkClient_t3113766402 * __this, bool ___localClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::OnCRC(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkClient_OnCRC_m3425837121 (NetworkClient_t3113766402 * __this, NetworkMessage_t1976735906 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::RegisterHandler(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkClient_RegisterHandler_m2253020989 (NetworkClient_t3113766402 * __this, int16_t ___msgType, NetworkMessageDelegate_t4139233607 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::RegisterHandlerSafe(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkClient_RegisterHandlerSafe_m1919751786 (NetworkClient_t3113766402 * __this, int16_t ___msgType, NetworkMessageDelegate_t4139233607 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::UnregisterHandler(System.Int16)
extern "C"  void NetworkClient_UnregisterHandler_m2539334809 (NetworkClient_t3113766402 * __this, int16_t ___msgType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat> UnityEngine.Networking.NetworkClient::GetTotalConnectionStats()
extern "C"  Dictionary_2_t210528029 * NetworkClient_GetTotalConnectionStats_m2828683182 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::AddClient(UnityEngine.Networking.NetworkClient)
extern "C"  void NetworkClient_AddClient_m4010452534 (Il2CppObject * __this /* static, unused */, NetworkClient_t3113766402 * ___client, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkClient::RemoveClient(UnityEngine.Networking.NetworkClient)
extern "C"  bool NetworkClient_RemoveClient_m3970244809 (Il2CppObject * __this /* static, unused */, NetworkClient_t3113766402 * ___client, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::UpdateClients()
extern "C"  void NetworkClient_UpdateClients_m2934156319 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::ShutdownAll()
extern "C"  void NetworkClient_ShutdownAll_m4157661003 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkClient::SetActive(System.Boolean)
extern "C"  void NetworkClient_SetActive_m2219534815 (Il2CppObject * __this /* static, unused */, bool ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
