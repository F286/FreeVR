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

// UnityEngine.Networking.NetworkServer
struct NetworkServer_t3565652346;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection>
struct List_1_t2979590926;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.NetworkConnection>
struct ReadOnlyCollection_1_t1050810009;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate>
struct Dictionary_2_t2200959304;
// UnityEngine.Networking.HostTopology
struct HostTopology_t1316030176;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity>
struct Dictionary_2_t2512141248;
// System.Type
struct Type_t;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t3291140713;
// UnityEngine.Networking.Match.MatchInfo
struct MatchInfo_t1974561481;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkClient
struct NetworkClient_t3113766402;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[]
struct PeerInfoMessageU5BU5D_t744059576;
// UnityEngine.Networking.LocalClient
struct LocalClient_t2051778943;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t2182631957;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Networking.MessageBase
struct MessageBase_t226723297;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// UnityEngine.Networking.NetworkMessageDelegate
struct NetworkMessageDelegate_t4139233607;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t1320523637;
// UnityEngine.Networking.PlayerController
struct PlayerController_t2299033606;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1976735906;
// UnityEngine.Networking.ULocalConnectionToServer
struct ULocalConnectionToServer_t1667302363;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat>
struct Dictionary_2_t210528029;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_ConnectionConfi3291140713.h"
#include "UnityEngine_UnityEngine_Networking_HostTopology1316030176.h"
#include "UnityEngine_UnityEngine_Networking_Match_MatchInfo1974561481.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID3752984187.h"
#include "UnityEngine_UnityEngine_Networking_Types_SourceID1497205096.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID2024896911.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3113766402.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Loca2051778943.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2182631957.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3860307911.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Messa226723297.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw4139233607.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1719292676.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1320523637.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Play2299033606.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1976735906.h"
#include "UnityEngine_Networking_UnityEngine_Networking_ULoc1667302363.h"

// System.Void UnityEngine.Networking.NetworkServer::.ctor()
extern "C"  void NetworkServer__ctor_m3885950026 (NetworkServer_t3565652346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::.cctor()
extern "C"  void NetworkServer__cctor_m4018237603 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkServer::get_localConnections()
extern "C"  List_1_t2979590926 * NetworkServer_get_localConnections_m3175890665 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkServer::get_listenPort()
extern "C"  int32_t NetworkServer_get_listenPort_m3868826995 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkServer::get_serverHostId()
extern "C"  int32_t NetworkServer_get_serverHostId_m1334920849 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkServer::get_connections()
extern "C"  ReadOnlyCollection_1_t1050810009 * NetworkServer_get_connections_m400512615 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate> UnityEngine.Networking.NetworkServer::get_handlers()
extern "C"  Dictionary_2_t2200959304 * NetworkServer_get_handlers_m244410896 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.HostTopology UnityEngine.Networking.NetworkServer::get_hostTopology()
extern "C"  HostTopology_t1316030176 * NetworkServer_get_hostTopology_m1387968627 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity> UnityEngine.Networking.NetworkServer::get_objects()
extern "C"  Dictionary_2_t2512141248 * NetworkServer_get_objects_m1868020773 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::get_sendPeerInfo()
extern "C"  bool NetworkServer_get_sendPeerInfo_m1962101833 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::set_sendPeerInfo(System.Boolean)
extern "C"  void NetworkServer_set_sendPeerInfo_m1959433638 (Il2CppObject * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::get_dontListen()
extern "C"  bool NetworkServer_get_dontListen_m1008379945 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::set_dontListen(System.Boolean)
extern "C"  void NetworkServer_set_dontListen_m3725417222 (Il2CppObject * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::get_useWebSockets()
extern "C"  bool NetworkServer_get_useWebSockets_m2153331748 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::set_useWebSockets(System.Boolean)
extern "C"  void NetworkServer_set_useWebSockets_m364285877 (Il2CppObject * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkServer UnityEngine.Networking.NetworkServer::get_instance()
extern "C"  NetworkServer_t3565652346 * NetworkServer_get_instance_m2852254241 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::get_active()
extern "C"  bool NetworkServer_get_active_m3598980855 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::get_localClientActive()
extern "C"  bool NetworkServer_get_localClientActive_m1343007053 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkServer::get_numChannels()
extern "C"  int32_t NetworkServer_get_numChannels_m2373151405 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkServer::get_maxDelay()
extern "C"  float NetworkServer_get_maxDelay_m1752883182 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::set_maxDelay(System.Single)
extern "C"  void NetworkServer_set_maxDelay_m2805085205 (Il2CppObject * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type UnityEngine.Networking.NetworkServer::get_networkConnectionClass()
extern "C"  Type_t * NetworkServer_get_networkConnectionClass_m508138089 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::Configure(UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C"  bool NetworkServer_Configure_m166395944 (Il2CppObject * __this /* static, unused */, ConnectionConfig_t3291140713 * ___config, int32_t ___maxConnections, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::Configure(UnityEngine.Networking.HostTopology)
extern "C"  bool NetworkServer_Configure_m3655449208 (Il2CppObject * __this /* static, unused */, HostTopology_t1316030176 * ___topology, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::Reset()
extern "C"  void NetworkServer_Reset_m1532382967 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::Shutdown()
extern "C"  void NetworkServer_Shutdown_m2212879376 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::Listen(UnityEngine.Networking.Match.MatchInfo,System.Int32)
extern "C"  bool NetworkServer_Listen_m560096655 (Il2CppObject * __this /* static, unused */, MatchInfo_t1974561481 * ___matchInfo, int32_t ___listenPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::RegisterMessageHandlers()
extern "C"  void NetworkServer_RegisterMessageHandlers_m413517013 (NetworkServer_t3565652346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::ListenRelay(System.String,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID)
extern "C"  void NetworkServer_ListenRelay_m1684213091 (Il2CppObject * __this /* static, unused */, String_t* ___relayIp, int32_t ___relayPort, uint64_t ___netGuid, uint64_t ___sourceId, uint16_t ___nodeId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::InternalListenRelay(System.String,System.Int32,UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.SourceID,UnityEngine.Networking.Types.NodeID)
extern "C"  void NetworkServer_InternalListenRelay_m2388621376 (NetworkServer_t3565652346 * __this, String_t* ___relayIp, int32_t ___relayPort, uint64_t ___netGuid, uint64_t ___sourceId, uint16_t ___nodeId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::Listen(System.Int32)
extern "C"  bool NetworkServer_Listen_m975666464 (Il2CppObject * __this /* static, unused */, int32_t ___serverPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::Listen(System.String,System.Int32)
extern "C"  bool NetworkServer_Listen_m1580458660 (Il2CppObject * __this /* static, unused */, String_t* ___ipAddress, int32_t ___serverPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::InternalListen(System.String,System.Int32)
extern "C"  bool NetworkServer_InternalListen_m4254580545 (NetworkServer_t3565652346 * __this, String_t* ___ipAddress, int32_t ___serverPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkServer::BecomeHost(UnityEngine.Networking.NetworkClient,System.Int32,UnityEngine.Networking.Match.MatchInfo,System.Int32,UnityEngine.Networking.NetworkSystem.PeerInfoMessage[])
extern "C"  NetworkClient_t3113766402 * NetworkServer_BecomeHost_m2281691910 (Il2CppObject * __this /* static, unused */, NetworkClient_t3113766402 * ___oldClient, int32_t ___port, MatchInfo_t1974561481 * ___matchInfo, int32_t ___oldConnectionId, PeerInfoMessageU5BU5D_t744059576* ___peers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.NetworkServer::BecomeHostInternal(UnityEngine.Networking.NetworkClient,System.Int32,UnityEngine.Networking.Match.MatchInfo,System.Int32,UnityEngine.Networking.NetworkSystem.PeerInfoMessage[])
extern "C"  NetworkClient_t3113766402 * NetworkServer_BecomeHostInternal_m407854115 (NetworkServer_t3565652346 * __this, NetworkClient_t3113766402 * ___oldClient, int32_t ___port, MatchInfo_t1974561481 * ___matchInfo, int32_t ___oldConnectionId, PeerInfoMessageU5BU5D_t744059576* ___peers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::InternalSetMaxDelay(System.Single)
extern "C"  void NetworkServer_InternalSetMaxDelay_m565090047 (NetworkServer_t3565652346 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkServer::AddLocalClient(UnityEngine.Networking.LocalClient)
extern "C"  int32_t NetworkServer_AddLocalClient_m2698248900 (NetworkServer_t3565652346 * __this, LocalClient_t2051778943 * ___localClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::RemoveLocalClient(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_RemoveLocalClient_m3104749233 (NetworkServer_t3565652346 * __this, NetworkConnection_t2182631957 * ___localClientConnection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SetLocalObjectOnServer(UnityEngine.Networking.NetworkInstanceId,UnityEngine.GameObject)
extern "C"  void NetworkServer_SetLocalObjectOnServer_m2742434453 (NetworkServer_t3565652346 * __this, NetworkInstanceId_t3860307911  ___netId, GameObject_t4012695102 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::ActivateLocalClientScene()
extern "C"  void NetworkServer_ActivateLocalClientScene_m250925347 (NetworkServer_t3565652346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SendToAll(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkServer_SendToAll_m2460079118 (Il2CppObject * __this /* static, unused */, int16_t ___msgType, MessageBase_t226723297 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SendToObservers(UnityEngine.GameObject,System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkServer_SendToObservers_m1577690156 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___contextObj, int16_t ___msgType, MessageBase_t226723297 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SendToReady(UnityEngine.GameObject,System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkServer_SendToReady_m3416263282 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___contextObj, int16_t ___msgType, MessageBase_t226723297 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SendWriterToReady(UnityEngine.GameObject,UnityEngine.Networking.NetworkWriter,System.Int32)
extern "C"  void NetworkServer_SendWriterToReady_m3551183964 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___contextObj, NetworkWriter_t3691904682 * ___writer, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SendBytesToReady(UnityEngine.GameObject,System.Byte[],System.Int32,System.Int32)
extern "C"  void NetworkServer_SendBytesToReady_m3044467066 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___contextObj, ByteU5BU5D_t58506160* ___buffer, int32_t ___numBytes, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SendBytesToPlayer(UnityEngine.GameObject,System.Byte[],System.Int32,System.Int32)
extern "C"  void NetworkServer_SendBytesToPlayer_m2151195938 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___player, ByteU5BU5D_t58506160* ___buffer, int32_t ___numBytes, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SendUnreliableToAll(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkServer_SendUnreliableToAll_m1128023825 (Il2CppObject * __this /* static, unused */, int16_t ___msgType, MessageBase_t226723297 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SendUnreliableToReady(UnityEngine.GameObject,System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkServer_SendUnreliableToReady_m3257462991 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___contextObj, int16_t ___msgType, MessageBase_t226723297 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SendByChannelToAll(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C"  bool NetworkServer_SendByChannelToAll_m1670953979 (Il2CppObject * __this /* static, unused */, int16_t ___msgType, MessageBase_t226723297 * ___msg, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SendByChannelToReady(UnityEngine.GameObject,System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C"  bool NetworkServer_SendByChannelToReady_m802272115 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___contextObj, int16_t ___msgType, MessageBase_t226723297 * ___msg, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::DisconnectAll()
extern "C"  void NetworkServer_DisconnectAll_m803946637 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::InternalDisconnectAll()
extern "C"  void NetworkServer_InternalDisconnectAll_m3140872464 (NetworkServer_t3565652346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::Update()
extern "C"  void NetworkServer_Update_m1932228611 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::UpdateServerObjects()
extern "C"  void NetworkServer_UpdateServerObjects_m1450834224 (NetworkServer_t3565652346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::CheckForNullObjects()
extern "C"  void NetworkServer_CheckForNullObjects_m2038564436 (NetworkServer_t3565652346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::InternalUpdate()
extern "C"  void NetworkServer_InternalUpdate_m737545440 (NetworkServer_t3565652346 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::OnConnected(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_OnConnected_m626668009 (NetworkServer_t3565652346 * __this, NetworkConnection_t2182631957 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::OnDisconnected(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_OnDisconnected_m2275435019 (NetworkServer_t3565652346 * __this, NetworkConnection_t2182631957 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::OnData(UnityEngine.Networking.NetworkConnection,System.Int32,System.Int32)
extern "C"  void NetworkServer_OnData_m2962366874 (NetworkServer_t3565652346 * __this, NetworkConnection_t2182631957 * ___conn, int32_t ___receivedSize, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::GenerateConnectError(System.Int32)
extern "C"  void NetworkServer_GenerateConnectError_m2196468766 (NetworkServer_t3565652346 * __this, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::GenerateDataError(UnityEngine.Networking.NetworkConnection,System.Int32)
extern "C"  void NetworkServer_GenerateDataError_m3107118415 (NetworkServer_t3565652346 * __this, NetworkConnection_t2182631957 * ___conn, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::GenerateDisconnectError(UnityEngine.Networking.NetworkConnection,System.Int32)
extern "C"  void NetworkServer_GenerateDisconnectError_m2713763009 (NetworkServer_t3565652346 * __this, NetworkConnection_t2182631957 * ___conn, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::GenerateError(UnityEngine.Networking.NetworkConnection,System.Int32)
extern "C"  void NetworkServer_GenerateError_m406879109 (NetworkServer_t3565652346 * __this, NetworkConnection_t2182631957 * ___conn, int32_t ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::RegisterHandler(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkServer_RegisterHandler_m3861464773 (Il2CppObject * __this /* static, unused */, int16_t ___msgType, NetworkMessageDelegate_t4139233607 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::UnregisterHandler(System.Int16)
extern "C"  void NetworkServer_UnregisterHandler_m3479388193 (Il2CppObject * __this /* static, unused */, int16_t ___msgType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::ClearHandlers()
extern "C"  void NetworkServer_ClearHandlers_m630285502 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::ClearSpawners()
extern "C"  void NetworkServer_ClearSpawners_m4274819552 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::GetStatsOut(System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern "C"  void NetworkServer_GetStatsOut_m819520749 (Il2CppObject * __this /* static, unused */, int32_t* ___numMsgs, int32_t* ___numBufferedMsgs, int32_t* ___numBytes, int32_t* ___lastBufferedPerSecond, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::GetStatsIn(System.Int32&,System.Int32&)
extern "C"  void NetworkServer_GetStatsIn_m1878254280 (Il2CppObject * __this /* static, unused */, int32_t* ___numMsgs, int32_t* ___numBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SendToClientOfPlayer(UnityEngine.GameObject,System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  void NetworkServer_SendToClientOfPlayer_m941965912 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___player, int16_t ___msgType, MessageBase_t226723297 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SendToClient(System.Int32,System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  void NetworkServer_SendToClient_m704147321 (Il2CppObject * __this /* static, unused */, int32_t ___connectionId, int16_t ___msgType, MessageBase_t226723297 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::ReplacePlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int16,UnityEngine.Networking.NetworkHash128)
extern "C"  bool NetworkServer_ReplacePlayerForConnection_m2521203794 (Il2CppObject * __this /* static, unused */, NetworkConnection_t2182631957 * ___conn, GameObject_t4012695102 * ___player, int16_t ___playerControllerId, NetworkHash128_t1719292676  ___assetId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::ReplacePlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int16)
extern "C"  bool NetworkServer_ReplacePlayerForConnection_m4004857604 (Il2CppObject * __this /* static, unused */, NetworkConnection_t2182631957 * ___conn, GameObject_t4012695102 * ___player, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::AddPlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int16,UnityEngine.Networking.NetworkHash128)
extern "C"  bool NetworkServer_AddPlayerForConnection_m3891369285 (Il2CppObject * __this /* static, unused */, NetworkConnection_t2182631957 * ___conn, GameObject_t4012695102 * ___player, int16_t ___playerControllerId, NetworkHash128_t1719292676  ___assetId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::AddPlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int16)
extern "C"  bool NetworkServer_AddPlayerForConnection_m1550997047 (Il2CppObject * __this /* static, unused */, NetworkConnection_t2182631957 * ___conn, GameObject_t4012695102 * ___player, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::InternalAddPlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int16)
extern "C"  bool NetworkServer_InternalAddPlayerForConnection_m588781460 (NetworkServer_t3565652346 * __this, NetworkConnection_t2182631957 * ___conn, GameObject_t4012695102 * ___playerGameObject, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::CheckPlayerControllerIdForConnection(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  bool NetworkServer_CheckPlayerControllerIdForConnection_m1291353099 (Il2CppObject * __this /* static, unused */, NetworkConnection_t2182631957 * ___conn, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SetupLocalPlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.NetworkIdentity,UnityEngine.Networking.PlayerController)
extern "C"  bool NetworkServer_SetupLocalPlayerForConnection_m3371874144 (NetworkServer_t3565652346 * __this, NetworkConnection_t2182631957 * ___conn, NetworkIdentity_t1320523637 * ___uv, PlayerController_t2299033606 * ___newPlayerController, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::FinishPlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.Networking.NetworkIdentity,UnityEngine.GameObject)
extern "C"  void NetworkServer_FinishPlayerForConnection_m2201271795 (Il2CppObject * __this /* static, unused */, NetworkConnection_t2182631957 * ___conn, NetworkIdentity_t1320523637 * ___uv, GameObject_t4012695102 * ___playerGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::InternalReplacePlayerForConnection(UnityEngine.Networking.NetworkConnection,UnityEngine.GameObject,System.Int16)
extern "C"  bool NetworkServer_InternalReplacePlayerForConnection_m2142310881 (NetworkServer_t3565652346 * __this, NetworkConnection_t2182631957 * ___conn, GameObject_t4012695102 * ___playerGameObject, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::GetNetworkIdentity(UnityEngine.GameObject,UnityEngine.Networking.NetworkIdentity&)
extern "C"  bool NetworkServer_GetNetworkIdentity_m3815239685 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___go, NetworkIdentity_t1320523637 ** ___view, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SetClientReady(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_SetClientReady_m2446023719 (Il2CppObject * __this /* static, unused */, NetworkConnection_t2182631957 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SetClientReadyInternal(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_SetClientReadyInternal_m542532548 (NetworkServer_t3565652346 * __this, NetworkConnection_t2182631957 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::ShowForConnection(UnityEngine.Networking.NetworkIdentity,UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_ShowForConnection_m1603743764 (Il2CppObject * __this /* static, unused */, NetworkIdentity_t1320523637 * ___uv, NetworkConnection_t2182631957 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::HideForConnection(UnityEngine.Networking.NetworkIdentity,UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_HideForConnection_m2244084633 (Il2CppObject * __this /* static, unused */, NetworkIdentity_t1320523637 * ___uv, NetworkConnection_t2182631957 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SetAllClientsNotReady()
extern "C"  void NetworkServer_SetAllClientsNotReady_m2916729345 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SetClientNotReady(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_SetClientNotReady_m1020083580 (Il2CppObject * __this /* static, unused */, NetworkConnection_t2182631957 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::InternalSetClientNotReady(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_InternalSetClientNotReady_m553610623 (NetworkServer_t3565652346 * __this, NetworkConnection_t2182631957 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::OnClientReadyMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkServer_OnClientReadyMessage_m2156479854 (Il2CppObject * __this /* static, unused */, NetworkMessage_t1976735906 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::OnRemovePlayerMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkServer_OnRemovePlayerMessage_m835718155 (Il2CppObject * __this /* static, unused */, NetworkMessage_t1976735906 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::OnCommandMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkServer_OnCommandMessage_m677833441 (Il2CppObject * __this /* static, unused */, NetworkMessage_t1976735906 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SpawnObject(UnityEngine.GameObject)
extern "C"  void NetworkServer_SpawnObject_m1003130426 (NetworkServer_t3565652346 * __this, GameObject_t4012695102 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SendSpawnMessage(UnityEngine.Networking.NetworkIdentity,UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_SendSpawnMessage_m1014596760 (NetworkServer_t3565652346 * __this, NetworkIdentity_t1320523637 * ___uv, NetworkConnection_t2182631957 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::DestroyPlayersForConnection(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_DestroyPlayersForConnection_m1466869966 (Il2CppObject * __this /* static, unused */, NetworkConnection_t2182631957 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::UnSpawnObject(UnityEngine.GameObject)
extern "C"  void NetworkServer_UnSpawnObject_m3256032033 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::UnSpawnObject(UnityEngine.Networking.NetworkIdentity)
extern "C"  void NetworkServer_UnSpawnObject_m3806991648 (Il2CppObject * __this /* static, unused */, NetworkIdentity_t1320523637 * ___uv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::DestroyObject(UnityEngine.GameObject)
extern "C"  void NetworkServer_DestroyObject_m756954297 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::DestroyObject(UnityEngine.Networking.NetworkIdentity,System.Boolean)
extern "C"  void NetworkServer_DestroyObject_m1727860165 (Il2CppObject * __this /* static, unused */, NetworkIdentity_t1320523637 * ___uv, bool ___destroyServerObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::ClearLocalObjects()
extern "C"  void NetworkServer_ClearLocalObjects_m1400444798 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::Spawn(UnityEngine.GameObject)
extern "C"  void NetworkServer_Spawn_m1915170139 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SpawnWithClientAuthority(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C"  bool NetworkServer_SpawnWithClientAuthority_m892846087 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___obj, GameObject_t4012695102 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SpawnWithClientAuthority(UnityEngine.GameObject,UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkServer_SpawnWithClientAuthority_m1157863718 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___obj, NetworkConnection_t2182631957 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SpawnWithClientAuthority(UnityEngine.GameObject,UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkServer_SpawnWithClientAuthority_m4044073432 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___obj, NetworkHash128_t1719292676  ___assetId, NetworkConnection_t2182631957 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::Spawn(UnityEngine.GameObject,UnityEngine.Networking.NetworkHash128)
extern "C"  void NetworkServer_Spawn_m711979369 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___obj, NetworkHash128_t1719292676  ___assetId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::Destroy(UnityEngine.GameObject)
extern "C"  void NetworkServer_Destroy_m3135069978 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::UnSpawn(UnityEngine.GameObject)
extern "C"  void NetworkServer_UnSpawn_m3380163458 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::InvokeBytes(UnityEngine.Networking.ULocalConnectionToServer,System.Byte[],System.Int32,System.Int32)
extern "C"  bool NetworkServer_InvokeBytes_m673502835 (NetworkServer_t3565652346 * __this, ULocalConnectionToServer_t1667302363 * ___conn, ByteU5BU5D_t58506160* ___buffer, int32_t ___numBytes, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::InvokeHandlerOnServer(UnityEngine.Networking.ULocalConnectionToServer,System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C"  bool NetworkServer_InvokeHandlerOnServer_m1499872744 (NetworkServer_t3565652346 * __this, ULocalConnectionToServer_t1667302363 * ___conn, int16_t ___msgType, MessageBase_t226723297 * ___msg, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.NetworkServer::FindLocalObject(UnityEngine.Networking.NetworkInstanceId)
extern "C"  GameObject_t4012695102 * NetworkServer_FindLocalObject_m1082358575 (Il2CppObject * __this /* static, unused */, NetworkInstanceId_t3860307911  ___netId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat> UnityEngine.Networking.NetworkServer::GetConnectionStats()
extern "C"  Dictionary_2_t210528029 * NetworkServer_GetConnectionStats_m3824352042 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::ResetConnectionStats()
extern "C"  void NetworkServer_ResetConnectionStats_m1482255436 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::AddExternalConnection(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkServer_AddExternalConnection_m4208791611 (Il2CppObject * __this /* static, unused */, NetworkConnection_t2182631957 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::AddExternalConnectionInternal(UnityEngine.Networking.NetworkConnection)
extern "C"  bool NetworkServer_AddExternalConnectionInternal_m2613887960 (NetworkServer_t3565652346 * __this, NetworkConnection_t2182631957 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::RemoveExternalConnection(System.Int32)
extern "C"  void NetworkServer_RemoveExternalConnection_m2712786296 (Il2CppObject * __this /* static, unused */, int32_t ___connectionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::RemoveExternalConnectionInternal(System.Int32)
extern "C"  bool NetworkServer_RemoveExternalConnectionInternal_m1320741347 (NetworkServer_t3565652346 * __this, int32_t ___connectionId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkServer::SpawnObjects()
extern "C"  bool NetworkServer_SpawnObjects_m3756094433 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SendCrc(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_SendCrc_m3919259691 (Il2CppObject * __this /* static, unused */, NetworkConnection_t2182631957 * ___targetConnection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkServer::SendNetworkInfo(UnityEngine.Networking.NetworkConnection)
extern "C"  void NetworkServer_SendNetworkInfo_m3489165651 (NetworkServer_t3565652346 * __this, NetworkConnection_t2182631957 * ___targetConnection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
