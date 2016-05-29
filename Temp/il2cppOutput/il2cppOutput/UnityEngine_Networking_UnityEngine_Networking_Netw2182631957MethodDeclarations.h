﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t2182631957;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkIdentity>
struct HashSet_1_t4019212308;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController>
struct List_1_t3095992575;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId>
struct HashSet_1_t2264029286;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat>
struct Dictionary_2_t210528029;
// System.String
struct String_t;
// UnityEngine.Networking.HostTopology
struct HostTopology_t1316030176;
// UnityEngine.Networking.NetworkMessageHandlers
struct NetworkMessageHandlers_t3321980459;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1976735906;
// UnityEngine.Networking.NetworkMessageDelegate
struct NetworkMessageDelegate_t4139233607;
// UnityEngine.Networking.PlayerController
struct PlayerController_t2299033606;
// UnityEngine.Networking.MessageBase
struct MessageBase_t226723297;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t1320523637;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Networking_HostTopology1316030176.h"
#include "UnityEngine_UnityEngine_Networking_QosType1592524120.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Chan1550307777.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3321980459.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1976735906.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw4139233607.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Play2299033606.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Messa226723297.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1320523637.h"

// System.Void UnityEngine.Networking.NetworkConnection::.ctor()
extern "C"  void NetworkConnection__ctor_m3300462095 (NetworkConnection_t2182631957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkIdentity> UnityEngine.Networking.NetworkConnection::get_visList()
extern "C"  HashSet_1_t4019212308 * NetworkConnection_get_visList_m1732321882 (NetworkConnection_t2182631957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController> UnityEngine.Networking.NetworkConnection::get_playerControllers()
extern "C"  List_1_t3095992575 * NetworkConnection_get_playerControllers_m3547687999 (NetworkConnection_t2182631957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId> UnityEngine.Networking.NetworkConnection::get_clientOwnedObjects()
extern "C"  HashSet_1_t2264029286 * NetworkConnection_get_clientOwnedObjects_m305972178 (NetworkConnection_t2182631957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::get_isConnected()
extern "C"  bool NetworkConnection_get_isConnected_m4016156245 (NetworkConnection_t2182631957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkConnection/PacketStat> UnityEngine.Networking.NetworkConnection::get_packetStats()
extern "C"  Dictionary_2_t210528029 * NetworkConnection_get_packetStats_m3856874294 (NetworkConnection_t2182631957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::Initialize(System.String,System.Int32,System.Int32,UnityEngine.Networking.HostTopology)
extern "C"  void NetworkConnection_Initialize_m1325597135 (NetworkConnection_t2182631957 * __this, String_t* ___networkAddress, int32_t ___networkHostId, int32_t ___networkConnectionId, HostTopology_t1316030176 * ___hostTopology, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::Finalize()
extern "C"  void NetworkConnection_Finalize_m3777438707 (NetworkConnection_t2182631957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::Dispose()
extern "C"  void NetworkConnection_Dispose_m1956491916 (NetworkConnection_t2182631957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::Dispose(System.Boolean)
extern "C"  void NetworkConnection_Dispose_m1411580675 (NetworkConnection_t2182631957 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::IsReliableQoS(UnityEngine.Networking.QosType)
extern "C"  bool NetworkConnection_IsReliableQoS_m2560968468 (Il2CppObject * __this /* static, unused */, int32_t ___qos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::SetChannelOption(System.Int32,UnityEngine.Networking.ChannelOption,System.Int32)
extern "C"  bool NetworkConnection_SetChannelOption_m350743376 (NetworkConnection_t2182631957 * __this, int32_t ___channelId, int32_t ___option, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::Disconnect()
extern "C"  void NetworkConnection_Disconnect_m1044853745 (NetworkConnection_t2182631957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::SetHandlers(UnityEngine.Networking.NetworkMessageHandlers)
extern "C"  void NetworkConnection_SetHandlers_m3184655221 (NetworkConnection_t2182631957 * __this, NetworkMessageHandlers_t3321980459 * ___handlers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::CheckHandler(System.Int16)
extern "C"  bool NetworkConnection_CheckHandler_m2085430288 (NetworkConnection_t2182631957 * __this, int16_t ___msgType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::InvokeHandlerNoData(System.Int16)
extern "C"  bool NetworkConnection_InvokeHandlerNoData_m3675158407 (NetworkConnection_t2182631957 * __this, int16_t ___msgType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::InvokeHandler(System.Int16,UnityEngine.Networking.NetworkReader,System.Int32)
extern "C"  bool NetworkConnection_InvokeHandler_m2138164699 (NetworkConnection_t2182631957 * __this, int16_t ___msgType, NetworkReader_t3536499450 * ___reader, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::InvokeHandler(UnityEngine.Networking.NetworkMessage)
extern "C"  bool NetworkConnection_InvokeHandler_m737675525 (NetworkConnection_t2182631957 * __this, NetworkMessage_t1976735906 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::RegisterHandler(System.Int16,UnityEngine.Networking.NetworkMessageDelegate)
extern "C"  void NetworkConnection_RegisterHandler_m2583846410 (NetworkConnection_t2182631957 * __this, int16_t ___msgType, NetworkMessageDelegate_t4139233607 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::UnregisterHandler(System.Int16)
extern "C"  void NetworkConnection_UnregisterHandler_m4093487846 (NetworkConnection_t2182631957 * __this, int16_t ___msgType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::SetPlayerController(UnityEngine.Networking.PlayerController)
extern "C"  void NetworkConnection_SetPlayerController_m101256454 (NetworkConnection_t2182631957 * __this, PlayerController_t2299033606 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::RemovePlayerController(System.Int16)
extern "C"  void NetworkConnection_RemovePlayerController_m3429375841 (NetworkConnection_t2182631957 * __this, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::GetPlayerController(System.Int16,UnityEngine.Networking.PlayerController&)
extern "C"  bool NetworkConnection_GetPlayerController_m3599500259 (NetworkConnection_t2182631957 * __this, int16_t ___playerControllerId, PlayerController_t2299033606 ** ___playerController, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::FlushChannels()
extern "C"  void NetworkConnection_FlushChannels_m483596577 (NetworkConnection_t2182631957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::SetMaxDelay(System.Single)
extern "C"  void NetworkConnection_SetMaxDelay_m776981885 (NetworkConnection_t2182631957 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::Send(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkConnection_Send_m3939588315 (NetworkConnection_t2182631957 * __this, int16_t ___msgType, MessageBase_t226723297 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::SendUnreliable(System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool NetworkConnection_SendUnreliable_m3332984248 (NetworkConnection_t2182631957 * __this, int16_t ___msgType, MessageBase_t226723297 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::SendByChannel(System.Int16,UnityEngine.Networking.MessageBase,System.Int32)
extern "C"  bool NetworkConnection_SendByChannel_m3637838420 (NetworkConnection_t2182631957 * __this, int16_t ___msgType, MessageBase_t226723297 * ___msg, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::SendBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  bool NetworkConnection_SendBytes_m2998509575 (NetworkConnection_t2182631957 * __this, ByteU5BU5D_t58506160* ___bytes, int32_t ___numBytes, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::SendWriter(UnityEngine.Networking.NetworkWriter,System.Int32)
extern "C"  bool NetworkConnection_SendWriter_m217860599 (NetworkConnection_t2182631957 * __this, NetworkWriter_t3691904682 * ___writer, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::LogSend(System.Byte[])
extern "C"  void NetworkConnection_LogSend_m4278337104 (NetworkConnection_t2182631957 * __this, ByteU5BU5D_t58506160* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::CheckChannel(System.Int32)
extern "C"  bool NetworkConnection_CheckChannel_m1425561871 (NetworkConnection_t2182631957 * __this, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::ResetStats()
extern "C"  void NetworkConnection_ResetStats_m4229848805 (NetworkConnection_t2182631957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::HandleBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  void NetworkConnection_HandleBytes_m770431321 (NetworkConnection_t2182631957 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___receivedSize, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::HandleReader(UnityEngine.Networking.NetworkReader,System.Int32,System.Int32)
extern "C"  void NetworkConnection_HandleReader_m2519346578 (NetworkConnection_t2182631957 * __this, NetworkReader_t3536499450 * ___reader, int32_t ___receivedSize, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::GetStatsOut(System.Int32&,System.Int32&,System.Int32&,System.Int32&)
extern "C"  void NetworkConnection_GetStatsOut_m3723182408 (NetworkConnection_t2182631957 * __this, int32_t* ___numMsgs, int32_t* ___numBufferedMsgs, int32_t* ___numBytes, int32_t* ___lastBufferedPerSecond, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::GetStatsIn(System.Int32&,System.Int32&)
extern "C"  void NetworkConnection_GetStatsIn_m3375216781 (NetworkConnection_t2182631957 * __this, int32_t* ___numMsgs, int32_t* ___numBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkConnection::ToString()
extern "C"  String_t* NetworkConnection_ToString_m3974355108 (NetworkConnection_t2182631957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::AddToVisList(UnityEngine.Networking.NetworkIdentity)
extern "C"  void NetworkConnection_AddToVisList_m3240810830 (NetworkConnection_t2182631957 * __this, NetworkIdentity_t1320523637 * ___uv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::RemoveFromVisList(UnityEngine.Networking.NetworkIdentity,System.Boolean)
extern "C"  void NetworkConnection_RemoveFromVisList_m2556397417 (NetworkConnection_t2182631957 * __this, NetworkIdentity_t1320523637 * ___uv, bool ___isDestroyed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::RemoveObservers()
extern "C"  void NetworkConnection_RemoveObservers_m4099474982 (NetworkConnection_t2182631957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::TransportRecieve(System.Byte[],System.Int32,System.Int32)
extern "C"  void NetworkConnection_TransportRecieve_m1771390274 (NetworkConnection_t2182631957 * __this, ByteU5BU5D_t58506160* ___bytes, int32_t ___numBytes, int32_t ___channelId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkConnection::TransportSend(System.Byte[],System.Int32,System.Int32,System.Byte&)
extern "C"  bool NetworkConnection_TransportSend_m789750702 (NetworkConnection_t2182631957 * __this, ByteU5BU5D_t58506160* ___bytes, int32_t ___numBytes, int32_t ___channelId, uint8_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::AddOwnedObject(UnityEngine.Networking.NetworkIdentity)
extern "C"  void NetworkConnection_AddOwnedObject_m58540015 (NetworkConnection_t2182631957 * __this, NetworkIdentity_t1320523637 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkConnection::RemoveOwnedObject(UnityEngine.Networking.NetworkIdentity)
extern "C"  void NetworkConnection_RemoveOwnedObject_m2602740228 (NetworkConnection_t2182631957 * __this, NetworkIdentity_t1320523637 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;