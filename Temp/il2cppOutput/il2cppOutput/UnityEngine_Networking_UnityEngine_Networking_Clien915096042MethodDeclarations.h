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

// UnityEngine.Networking.ClientScene
struct ClientScene_t915096042;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[]
struct PeerInfoMessageU5BU5D_t744059576;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController>
struct List_1_t3095992575;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t2182631957;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity>
struct Dictionary_2_t2512141248;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.GameObject>
struct Dictionary_2_t899772856;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,UnityEngine.Networking.NetworkIdentity>
struct Dictionary_2_t1925264217;
// UnityEngine.Networking.PlayerController
struct PlayerController_t2299033606;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t1320523637;
// UnityEngine.Networking.MessageBase
struct MessageBase_t226723297;
// UnityEngine.Networking.NetworkClient
struct NetworkClient_t3113766402;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Networking.SpawnDelegate
struct SpawnDelegate_t1933801609;
// UnityEngine.Networking.UnSpawnDelegate
struct UnSpawnDelegate_t1449812592;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1976735906;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Play2299033606.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1320523637.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2182631957.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Messa226723297.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2936457058.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3113766402.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1719292676.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Spaw1933801609.h"
#include "UnityEngine_Networking_UnityEngine_Networking_UnSp1449812592.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3860307911.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1976735906.h"

// System.Void UnityEngine.Networking.ClientScene::.ctor()
extern "C"  void ClientScene__ctor_m2953883610 (ClientScene_t915096042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::.cctor()
extern "C"  void ClientScene__cctor_m893982483 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::SetReconnectId(System.Int32,UnityEngine.Networking.NetworkSystem.PeerInfoMessage[])
extern "C"  void ClientScene_SetReconnectId_m4130785494 (Il2CppObject * __this /* static, unused */, int32_t ___newReconnectId, PeerInfoMessageU5BU5D_t744059576* ___peers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::SetNotReady()
extern "C"  void ClientScene_SetNotReady_m575056970 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController> UnityEngine.Networking.ClientScene::get_localPlayers()
extern "C"  List_1_t3095992575 * ClientScene_get_localPlayers_m1390619029 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ClientScene::get_ready()
extern "C"  bool ClientScene_get_ready_m2062577540 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.ClientScene::get_readyConnection()
extern "C"  NetworkConnection_t2182631957 * ClientScene_get_readyConnection_m1071402530 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ClientScene::get_reconnectId()
extern "C"  int32_t ClientScene_get_reconnectId_m2332417689 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity> UnityEngine.Networking.ClientScene::get_objects()
extern "C"  Dictionary_2_t2512141248 * ClientScene_get_objects_m2375372853 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.GameObject> UnityEngine.Networking.ClientScene::get_prefabs()
extern "C"  Dictionary_2_t899772856 * ClientScene_get_prefabs_m2334696846 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,UnityEngine.Networking.NetworkIdentity> UnityEngine.Networking.ClientScene::get_spawnableObjects()
extern "C"  Dictionary_2_t1925264217 * ClientScene_get_spawnableObjects_m1715261861 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::Shutdown()
extern "C"  void ClientScene_Shutdown_m1985848960 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ClientScene::GetPlayerController(System.Int16,UnityEngine.Networking.PlayerController&)
extern "C"  bool ClientScene_GetPlayerController_m1765553336 (Il2CppObject * __this /* static, unused */, int16_t ___playerControllerId, PlayerController_t2299033606 ** ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::InternalAddPlayer(UnityEngine.Networking.NetworkIdentity,System.Int16)
extern "C"  void ClientScene_InternalAddPlayer_m1675219645 (Il2CppObject * __this /* static, unused */, NetworkIdentity_t1320523637 * ___view, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ClientScene::AddPlayer(System.Int16)
extern "C"  bool ClientScene_AddPlayer_m2804582679 (Il2CppObject * __this /* static, unused */, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ClientScene::AddPlayer(UnityEngine.Networking.NetworkConnection,System.Int16)
extern "C"  bool ClientScene_AddPlayer_m748316558 (Il2CppObject * __this /* static, unused */, NetworkConnection_t2182631957 * ___readyConn, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ClientScene::AddPlayer(UnityEngine.Networking.NetworkConnection,System.Int16,UnityEngine.Networking.MessageBase)
extern "C"  bool ClientScene_AddPlayer_m3358983235 (Il2CppObject * __this /* static, unused */, NetworkConnection_t2182631957 * ___readyConn, int16_t ___playerControllerId, MessageBase_t226723297 * ___extraMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ClientScene::RemovePlayer(System.Int16)
extern "C"  bool ClientScene_RemovePlayer_m562578696 (Il2CppObject * __this /* static, unused */, int16_t ___playerControllerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ClientScene::Ready(UnityEngine.Networking.NetworkConnection)
extern "C"  bool ClientScene_Ready_m1441059108 (Il2CppObject * __this /* static, unused */, NetworkConnection_t2182631957 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.ClientScene::ConnectLocalServer()
extern "C"  NetworkClient_t3113766402 * ClientScene_ConnectLocalServer_m1143649359 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkClient UnityEngine.Networking.ClientScene::ReconnectLocalServer()
extern "C"  NetworkClient_t3113766402 * ClientScene_ReconnectLocalServer_m4052652162 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::ClearLocalPlayers()
extern "C"  void ClientScene_ClearLocalPlayers_m4084881452 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::HandleClientDisconnect(UnityEngine.Networking.NetworkConnection)
extern "C"  void ClientScene_HandleClientDisconnect_m1570817168 (Il2CppObject * __this /* static, unused */, NetworkConnection_t2182631957 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::PrepareToSpawnSceneObjects()
extern "C"  void ClientScene_PrepareToSpawnSceneObjects_m828382571 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkIdentity UnityEngine.Networking.ClientScene::SpawnSceneObject(UnityEngine.Networking.NetworkSceneId)
extern "C"  NetworkIdentity_t1320523637 * ClientScene_SpawnSceneObject_m1817560206 (Il2CppObject * __this /* static, unused */, NetworkSceneId_t2936457058  ___sceneId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::RegisterSystemHandlers(UnityEngine.Networking.NetworkClient,System.Boolean)
extern "C"  void ClientScene_RegisterSystemHandlers_m2359860910 (Il2CppObject * __this /* static, unused */, NetworkClient_t3113766402 * ___client, bool ___localClient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.ClientScene::GetStringForAssetId(UnityEngine.Networking.NetworkHash128)
extern "C"  String_t* ClientScene_GetStringForAssetId_m1425273814 (Il2CppObject * __this /* static, unused */, NetworkHash128_t1719292676  ___assetId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::RegisterPrefab(UnityEngine.GameObject,UnityEngine.Networking.NetworkHash128)
extern "C"  void ClientScene_RegisterPrefab_m3785197943 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, NetworkHash128_t1719292676  ___newAssetId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::RegisterPrefab(UnityEngine.GameObject)
extern "C"  void ClientScene_RegisterPrefab_m1204887529 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::RegisterPrefab(UnityEngine.GameObject,UnityEngine.Networking.SpawnDelegate,UnityEngine.Networking.UnSpawnDelegate)
extern "C"  void ClientScene_RegisterPrefab_m3619266882 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, SpawnDelegate_t1933801609 * ___spawnHandler, UnSpawnDelegate_t1449812592 * ___unspawnHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::UnregisterPrefab(UnityEngine.GameObject)
extern "C"  void ClientScene_UnregisterPrefab_m1002622338 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::RegisterSpawnHandler(UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.SpawnDelegate,UnityEngine.Networking.UnSpawnDelegate)
extern "C"  void ClientScene_RegisterSpawnHandler_m1599502385 (Il2CppObject * __this /* static, unused */, NetworkHash128_t1719292676  ___assetId, SpawnDelegate_t1933801609 * ___spawnHandler, UnSpawnDelegate_t1449812592 * ___unspawnHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::UnregisterSpawnHandler(UnityEngine.Networking.NetworkHash128)
extern "C"  void ClientScene_UnregisterSpawnHandler_m3126434143 (Il2CppObject * __this /* static, unused */, NetworkHash128_t1719292676  ___assetId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::ClearSpawners()
extern "C"  void ClientScene_ClearSpawners_m1891749232 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::DestroyAllClientObjects()
extern "C"  void ClientScene_DestroyAllClientObjects_m619999098 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::SetLocalObject(UnityEngine.Networking.NetworkInstanceId,UnityEngine.GameObject)
extern "C"  void ClientScene_SetLocalObject_m3627752199 (Il2CppObject * __this /* static, unused */, NetworkInstanceId_t3860307911  ___netId, GameObject_t4012695102 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.ClientScene::FindLocalObject(UnityEngine.Networking.NetworkInstanceId)
extern "C"  GameObject_t4012695102 * ClientScene_FindLocalObject_m1402635007 (Il2CppObject * __this /* static, unused */, NetworkInstanceId_t3860307911  ___netId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::ApplySpawnPayload(UnityEngine.Networking.NetworkIdentity,UnityEngine.Vector3,System.Byte[],UnityEngine.Networking.NetworkInstanceId,UnityEngine.GameObject)
extern "C"  void ClientScene_ApplySpawnPayload_m3429196313 (Il2CppObject * __this /* static, unused */, NetworkIdentity_t1320523637 * ___uv, Vector3_t3525329789  ___position, ByteU5BU5D_t58506160* ___payload, NetworkInstanceId_t3860307911  ___netId, GameObject_t4012695102 * ___newGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnObjectSpawn(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnObjectSpawn_m4079415681 (Il2CppObject * __this /* static, unused */, NetworkMessage_t1976735906 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnObjectSpawnScene(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnObjectSpawnScene_m3391382973 (Il2CppObject * __this /* static, unused */, NetworkMessage_t1976735906 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnObjectSpawnFinished(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnObjectSpawnFinished_m3078308015 (Il2CppObject * __this /* static, unused */, NetworkMessage_t1976735906 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnObjectDestroy(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnObjectDestroy_m869776994 (Il2CppObject * __this /* static, unused */, NetworkMessage_t1976735906 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnLocalClientObjectDestroy(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnLocalClientObjectDestroy_m1692294728 (Il2CppObject * __this /* static, unused */, NetworkMessage_t1976735906 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnLocalClientObjectHide(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnLocalClientObjectHide_m912922054 (Il2CppObject * __this /* static, unused */, NetworkMessage_t1976735906 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnLocalClientObjectSpawn(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnLocalClientObjectSpawn_m889213671 (Il2CppObject * __this /* static, unused */, NetworkMessage_t1976735906 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnLocalClientObjectSpawnScene(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnLocalClientObjectSpawnScene_m4228772887 (Il2CppObject * __this /* static, unused */, NetworkMessage_t1976735906 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnUpdateVarsMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnUpdateVarsMessage_m1776269963 (Il2CppObject * __this /* static, unused */, NetworkMessage_t1976735906 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnRPCMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnRPCMessage_m815668107 (Il2CppObject * __this /* static, unused */, NetworkMessage_t1976735906 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnSyncEventMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnSyncEventMessage_m3032475365 (Il2CppObject * __this /* static, unused */, NetworkMessage_t1976735906 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnSyncListMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnSyncListMessage_m1579788495 (Il2CppObject * __this /* static, unused */, NetworkMessage_t1976735906 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnClientAuthority(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnClientAuthority_m3211958725 (Il2CppObject * __this /* static, unused */, NetworkMessage_t1976735906 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::OnOwnerMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void ClientScene_OnOwnerMessage_m3412535769 (Il2CppObject * __this /* static, unused */, NetworkMessage_t1976735906 * ___netMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ClientScene::CheckForOwner(UnityEngine.Networking.NetworkIdentity)
extern "C"  void ClientScene_CheckForOwner_m619717121 (Il2CppObject * __this /* static, unused */, NetworkIdentity_t1320523637 * ___uv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
