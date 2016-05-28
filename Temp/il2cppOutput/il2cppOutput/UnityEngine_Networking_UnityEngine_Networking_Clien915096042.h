﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController>
struct List_1_t3095992575;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t2182631957;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,UnityEngine.Networking.NetworkIdentity>
struct Dictionary_2_t1925264217;
// UnityEngine.Networking.NetworkScene
struct NetworkScene_t3860729255;
// UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage
struct ObjectSpawnSceneMessage_t939703061;
// UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage
struct ObjectSpawnFinishedMessage_t2852618231;
// UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage
struct ObjectDestroyMessage_t2901066666;
// UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage
struct ObjectSpawnMessage_t2899898569;
// UnityEngine.Networking.NetworkSystem.OwnerMessage
struct OwnerMessage_t1788635570;
// UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage
struct ClientAuthorityMessage_t2112400653;
// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[]
struct PeerInfoMessageU5BU5D_t744059576;
// System.Collections.Generic.List`1<UnityEngine.Networking.ClientScene/PendingOwner>
struct List_1_t1109775477;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.ClientScene
struct  ClientScene_t915096042  : public Il2CppObject
{
public:

public:
};

struct ClientScene_t915096042_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.PlayerController> UnityEngine.Networking.ClientScene::s_LocalPlayers
	List_1_t3095992575 * ___s_LocalPlayers_2;
	// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.ClientScene::s_ReadyConnection
	NetworkConnection_t2182631957 * ___s_ReadyConnection_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkSceneId,UnityEngine.Networking.NetworkIdentity> UnityEngine.Networking.ClientScene::s_SpawnableObjects
	Dictionary_2_t1925264217 * ___s_SpawnableObjects_4;
	// System.Boolean UnityEngine.Networking.ClientScene::s_IsReady
	bool ___s_IsReady_5;
	// System.Boolean UnityEngine.Networking.ClientScene::s_IsSpawnFinished
	bool ___s_IsSpawnFinished_6;
	// UnityEngine.Networking.NetworkScene UnityEngine.Networking.ClientScene::s_NetworkScene
	NetworkScene_t3860729255 * ___s_NetworkScene_7;
	// UnityEngine.Networking.NetworkSystem.ObjectSpawnSceneMessage UnityEngine.Networking.ClientScene::s_ObjectSpawnSceneMessage
	ObjectSpawnSceneMessage_t939703061 * ___s_ObjectSpawnSceneMessage_8;
	// UnityEngine.Networking.NetworkSystem.ObjectSpawnFinishedMessage UnityEngine.Networking.ClientScene::s_ObjectSpawnFinishedMessage
	ObjectSpawnFinishedMessage_t2852618231 * ___s_ObjectSpawnFinishedMessage_9;
	// UnityEngine.Networking.NetworkSystem.ObjectDestroyMessage UnityEngine.Networking.ClientScene::s_ObjectDestroyMessage
	ObjectDestroyMessage_t2901066666 * ___s_ObjectDestroyMessage_10;
	// UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage UnityEngine.Networking.ClientScene::s_ObjectSpawnMessage
	ObjectSpawnMessage_t2899898569 * ___s_ObjectSpawnMessage_11;
	// UnityEngine.Networking.NetworkSystem.OwnerMessage UnityEngine.Networking.ClientScene::s_OwnerMessage
	OwnerMessage_t1788635570 * ___s_OwnerMessage_12;
	// UnityEngine.Networking.NetworkSystem.ClientAuthorityMessage UnityEngine.Networking.ClientScene::s_ClientAuthorityMessage
	ClientAuthorityMessage_t2112400653 * ___s_ClientAuthorityMessage_13;
	// System.Int32 UnityEngine.Networking.ClientScene::s_ReconnectId
	int32_t ___s_ReconnectId_14;
	// UnityEngine.Networking.NetworkSystem.PeerInfoMessage[] UnityEngine.Networking.ClientScene::s_Peers
	PeerInfoMessageU5BU5D_t744059576* ___s_Peers_15;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ClientScene/PendingOwner> UnityEngine.Networking.ClientScene::s_PendingOwnerIds
	List_1_t1109775477 * ___s_PendingOwnerIds_16;

public:
	inline static int32_t get_offset_of_s_LocalPlayers_2() { return static_cast<int32_t>(offsetof(ClientScene_t915096042_StaticFields, ___s_LocalPlayers_2)); }
	inline List_1_t3095992575 * get_s_LocalPlayers_2() const { return ___s_LocalPlayers_2; }
	inline List_1_t3095992575 ** get_address_of_s_LocalPlayers_2() { return &___s_LocalPlayers_2; }
	inline void set_s_LocalPlayers_2(List_1_t3095992575 * value)
	{
		___s_LocalPlayers_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_LocalPlayers_2, value);
	}

	inline static int32_t get_offset_of_s_ReadyConnection_3() { return static_cast<int32_t>(offsetof(ClientScene_t915096042_StaticFields, ___s_ReadyConnection_3)); }
	inline NetworkConnection_t2182631957 * get_s_ReadyConnection_3() const { return ___s_ReadyConnection_3; }
	inline NetworkConnection_t2182631957 ** get_address_of_s_ReadyConnection_3() { return &___s_ReadyConnection_3; }
	inline void set_s_ReadyConnection_3(NetworkConnection_t2182631957 * value)
	{
		___s_ReadyConnection_3 = value;
		Il2CppCodeGenWriteBarrier(&___s_ReadyConnection_3, value);
	}

	inline static int32_t get_offset_of_s_SpawnableObjects_4() { return static_cast<int32_t>(offsetof(ClientScene_t915096042_StaticFields, ___s_SpawnableObjects_4)); }
	inline Dictionary_2_t1925264217 * get_s_SpawnableObjects_4() const { return ___s_SpawnableObjects_4; }
	inline Dictionary_2_t1925264217 ** get_address_of_s_SpawnableObjects_4() { return &___s_SpawnableObjects_4; }
	inline void set_s_SpawnableObjects_4(Dictionary_2_t1925264217 * value)
	{
		___s_SpawnableObjects_4 = value;
		Il2CppCodeGenWriteBarrier(&___s_SpawnableObjects_4, value);
	}

	inline static int32_t get_offset_of_s_IsReady_5() { return static_cast<int32_t>(offsetof(ClientScene_t915096042_StaticFields, ___s_IsReady_5)); }
	inline bool get_s_IsReady_5() const { return ___s_IsReady_5; }
	inline bool* get_address_of_s_IsReady_5() { return &___s_IsReady_5; }
	inline void set_s_IsReady_5(bool value)
	{
		___s_IsReady_5 = value;
	}

	inline static int32_t get_offset_of_s_IsSpawnFinished_6() { return static_cast<int32_t>(offsetof(ClientScene_t915096042_StaticFields, ___s_IsSpawnFinished_6)); }
	inline bool get_s_IsSpawnFinished_6() const { return ___s_IsSpawnFinished_6; }
	inline bool* get_address_of_s_IsSpawnFinished_6() { return &___s_IsSpawnFinished_6; }
	inline void set_s_IsSpawnFinished_6(bool value)
	{
		___s_IsSpawnFinished_6 = value;
	}

	inline static int32_t get_offset_of_s_NetworkScene_7() { return static_cast<int32_t>(offsetof(ClientScene_t915096042_StaticFields, ___s_NetworkScene_7)); }
	inline NetworkScene_t3860729255 * get_s_NetworkScene_7() const { return ___s_NetworkScene_7; }
	inline NetworkScene_t3860729255 ** get_address_of_s_NetworkScene_7() { return &___s_NetworkScene_7; }
	inline void set_s_NetworkScene_7(NetworkScene_t3860729255 * value)
	{
		___s_NetworkScene_7 = value;
		Il2CppCodeGenWriteBarrier(&___s_NetworkScene_7, value);
	}

	inline static int32_t get_offset_of_s_ObjectSpawnSceneMessage_8() { return static_cast<int32_t>(offsetof(ClientScene_t915096042_StaticFields, ___s_ObjectSpawnSceneMessage_8)); }
	inline ObjectSpawnSceneMessage_t939703061 * get_s_ObjectSpawnSceneMessage_8() const { return ___s_ObjectSpawnSceneMessage_8; }
	inline ObjectSpawnSceneMessage_t939703061 ** get_address_of_s_ObjectSpawnSceneMessage_8() { return &___s_ObjectSpawnSceneMessage_8; }
	inline void set_s_ObjectSpawnSceneMessage_8(ObjectSpawnSceneMessage_t939703061 * value)
	{
		___s_ObjectSpawnSceneMessage_8 = value;
		Il2CppCodeGenWriteBarrier(&___s_ObjectSpawnSceneMessage_8, value);
	}

	inline static int32_t get_offset_of_s_ObjectSpawnFinishedMessage_9() { return static_cast<int32_t>(offsetof(ClientScene_t915096042_StaticFields, ___s_ObjectSpawnFinishedMessage_9)); }
	inline ObjectSpawnFinishedMessage_t2852618231 * get_s_ObjectSpawnFinishedMessage_9() const { return ___s_ObjectSpawnFinishedMessage_9; }
	inline ObjectSpawnFinishedMessage_t2852618231 ** get_address_of_s_ObjectSpawnFinishedMessage_9() { return &___s_ObjectSpawnFinishedMessage_9; }
	inline void set_s_ObjectSpawnFinishedMessage_9(ObjectSpawnFinishedMessage_t2852618231 * value)
	{
		___s_ObjectSpawnFinishedMessage_9 = value;
		Il2CppCodeGenWriteBarrier(&___s_ObjectSpawnFinishedMessage_9, value);
	}

	inline static int32_t get_offset_of_s_ObjectDestroyMessage_10() { return static_cast<int32_t>(offsetof(ClientScene_t915096042_StaticFields, ___s_ObjectDestroyMessage_10)); }
	inline ObjectDestroyMessage_t2901066666 * get_s_ObjectDestroyMessage_10() const { return ___s_ObjectDestroyMessage_10; }
	inline ObjectDestroyMessage_t2901066666 ** get_address_of_s_ObjectDestroyMessage_10() { return &___s_ObjectDestroyMessage_10; }
	inline void set_s_ObjectDestroyMessage_10(ObjectDestroyMessage_t2901066666 * value)
	{
		___s_ObjectDestroyMessage_10 = value;
		Il2CppCodeGenWriteBarrier(&___s_ObjectDestroyMessage_10, value);
	}

	inline static int32_t get_offset_of_s_ObjectSpawnMessage_11() { return static_cast<int32_t>(offsetof(ClientScene_t915096042_StaticFields, ___s_ObjectSpawnMessage_11)); }
	inline ObjectSpawnMessage_t2899898569 * get_s_ObjectSpawnMessage_11() const { return ___s_ObjectSpawnMessage_11; }
	inline ObjectSpawnMessage_t2899898569 ** get_address_of_s_ObjectSpawnMessage_11() { return &___s_ObjectSpawnMessage_11; }
	inline void set_s_ObjectSpawnMessage_11(ObjectSpawnMessage_t2899898569 * value)
	{
		___s_ObjectSpawnMessage_11 = value;
		Il2CppCodeGenWriteBarrier(&___s_ObjectSpawnMessage_11, value);
	}

	inline static int32_t get_offset_of_s_OwnerMessage_12() { return static_cast<int32_t>(offsetof(ClientScene_t915096042_StaticFields, ___s_OwnerMessage_12)); }
	inline OwnerMessage_t1788635570 * get_s_OwnerMessage_12() const { return ___s_OwnerMessage_12; }
	inline OwnerMessage_t1788635570 ** get_address_of_s_OwnerMessage_12() { return &___s_OwnerMessage_12; }
	inline void set_s_OwnerMessage_12(OwnerMessage_t1788635570 * value)
	{
		___s_OwnerMessage_12 = value;
		Il2CppCodeGenWriteBarrier(&___s_OwnerMessage_12, value);
	}

	inline static int32_t get_offset_of_s_ClientAuthorityMessage_13() { return static_cast<int32_t>(offsetof(ClientScene_t915096042_StaticFields, ___s_ClientAuthorityMessage_13)); }
	inline ClientAuthorityMessage_t2112400653 * get_s_ClientAuthorityMessage_13() const { return ___s_ClientAuthorityMessage_13; }
	inline ClientAuthorityMessage_t2112400653 ** get_address_of_s_ClientAuthorityMessage_13() { return &___s_ClientAuthorityMessage_13; }
	inline void set_s_ClientAuthorityMessage_13(ClientAuthorityMessage_t2112400653 * value)
	{
		___s_ClientAuthorityMessage_13 = value;
		Il2CppCodeGenWriteBarrier(&___s_ClientAuthorityMessage_13, value);
	}

	inline static int32_t get_offset_of_s_ReconnectId_14() { return static_cast<int32_t>(offsetof(ClientScene_t915096042_StaticFields, ___s_ReconnectId_14)); }
	inline int32_t get_s_ReconnectId_14() const { return ___s_ReconnectId_14; }
	inline int32_t* get_address_of_s_ReconnectId_14() { return &___s_ReconnectId_14; }
	inline void set_s_ReconnectId_14(int32_t value)
	{
		___s_ReconnectId_14 = value;
	}

	inline static int32_t get_offset_of_s_Peers_15() { return static_cast<int32_t>(offsetof(ClientScene_t915096042_StaticFields, ___s_Peers_15)); }
	inline PeerInfoMessageU5BU5D_t744059576* get_s_Peers_15() const { return ___s_Peers_15; }
	inline PeerInfoMessageU5BU5D_t744059576** get_address_of_s_Peers_15() { return &___s_Peers_15; }
	inline void set_s_Peers_15(PeerInfoMessageU5BU5D_t744059576* value)
	{
		___s_Peers_15 = value;
		Il2CppCodeGenWriteBarrier(&___s_Peers_15, value);
	}

	inline static int32_t get_offset_of_s_PendingOwnerIds_16() { return static_cast<int32_t>(offsetof(ClientScene_t915096042_StaticFields, ___s_PendingOwnerIds_16)); }
	inline List_1_t1109775477 * get_s_PendingOwnerIds_16() const { return ___s_PendingOwnerIds_16; }
	inline List_1_t1109775477 ** get_address_of_s_PendingOwnerIds_16() { return &___s_PendingOwnerIds_16; }
	inline void set_s_PendingOwnerIds_16(List_1_t1109775477 * value)
	{
		___s_PendingOwnerIds_16 = value;
		Il2CppCodeGenWriteBarrier(&___s_PendingOwnerIds_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
