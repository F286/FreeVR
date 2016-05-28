﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Networking.NetworkServer modreq(System.Runtime.CompilerServices.IsVolatile)
struct NetworkServer_t3565652346;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection>
struct List_1_t2979590926;
// UnityEngine.Networking.ULocalConnectionToClient
struct ULocalConnectionToClient_t1215416419;
// UnityEngine.Networking.NetworkScene
struct NetworkScene_t3860729255;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t1251136162;
// UnityEngine.Networking.NetworkServer/ServerSimpleWrapper
struct ServerSimpleWrapper_t904063966;
// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId>
struct HashSet_1_t2264029286;
// UnityEngine.Networking.NetworkSystem.RemovePlayerMessage
struct RemovePlayerMessage_t2726720352;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkServer
struct  NetworkServer_t3565652346  : public Il2CppObject
{
public:
	// System.Boolean UnityEngine.Networking.NetworkServer::m_LocalClientActive
	bool ___m_LocalClientActive_5;
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.NetworkServer::m_LocalConnectionsFakeList
	List_1_t2979590926 * ___m_LocalConnectionsFakeList_6;
	// UnityEngine.Networking.ULocalConnectionToClient UnityEngine.Networking.NetworkServer::m_LocalConnection
	ULocalConnectionToClient_t1215416419 * ___m_LocalConnection_7;
	// UnityEngine.Networking.NetworkScene UnityEngine.Networking.NetworkServer::m_NetworkScene
	NetworkScene_t3860729255 * ___m_NetworkScene_8;
	// System.Collections.Generic.HashSet`1<System.Int32> UnityEngine.Networking.NetworkServer::m_ExternalConnections
	HashSet_1_t1251136162 * ___m_ExternalConnections_9;
	// UnityEngine.Networking.NetworkServer/ServerSimpleWrapper UnityEngine.Networking.NetworkServer::m_SimpleServerSimple
	ServerSimpleWrapper_t904063966 * ___m_SimpleServerSimple_10;
	// System.Single UnityEngine.Networking.NetworkServer::m_MaxDelay
	float ___m_MaxDelay_11;
	// System.Collections.Generic.HashSet`1<UnityEngine.Networking.NetworkInstanceId> UnityEngine.Networking.NetworkServer::m_RemoveList
	HashSet_1_t2264029286 * ___m_RemoveList_12;
	// System.Int32 UnityEngine.Networking.NetworkServer::m_RemoveListCount
	int32_t ___m_RemoveListCount_13;

public:
	inline static int32_t get_offset_of_m_LocalClientActive_5() { return static_cast<int32_t>(offsetof(NetworkServer_t3565652346, ___m_LocalClientActive_5)); }
	inline bool get_m_LocalClientActive_5() const { return ___m_LocalClientActive_5; }
	inline bool* get_address_of_m_LocalClientActive_5() { return &___m_LocalClientActive_5; }
	inline void set_m_LocalClientActive_5(bool value)
	{
		___m_LocalClientActive_5 = value;
	}

	inline static int32_t get_offset_of_m_LocalConnectionsFakeList_6() { return static_cast<int32_t>(offsetof(NetworkServer_t3565652346, ___m_LocalConnectionsFakeList_6)); }
	inline List_1_t2979590926 * get_m_LocalConnectionsFakeList_6() const { return ___m_LocalConnectionsFakeList_6; }
	inline List_1_t2979590926 ** get_address_of_m_LocalConnectionsFakeList_6() { return &___m_LocalConnectionsFakeList_6; }
	inline void set_m_LocalConnectionsFakeList_6(List_1_t2979590926 * value)
	{
		___m_LocalConnectionsFakeList_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_LocalConnectionsFakeList_6, value);
	}

	inline static int32_t get_offset_of_m_LocalConnection_7() { return static_cast<int32_t>(offsetof(NetworkServer_t3565652346, ___m_LocalConnection_7)); }
	inline ULocalConnectionToClient_t1215416419 * get_m_LocalConnection_7() const { return ___m_LocalConnection_7; }
	inline ULocalConnectionToClient_t1215416419 ** get_address_of_m_LocalConnection_7() { return &___m_LocalConnection_7; }
	inline void set_m_LocalConnection_7(ULocalConnectionToClient_t1215416419 * value)
	{
		___m_LocalConnection_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_LocalConnection_7, value);
	}

	inline static int32_t get_offset_of_m_NetworkScene_8() { return static_cast<int32_t>(offsetof(NetworkServer_t3565652346, ___m_NetworkScene_8)); }
	inline NetworkScene_t3860729255 * get_m_NetworkScene_8() const { return ___m_NetworkScene_8; }
	inline NetworkScene_t3860729255 ** get_address_of_m_NetworkScene_8() { return &___m_NetworkScene_8; }
	inline void set_m_NetworkScene_8(NetworkScene_t3860729255 * value)
	{
		___m_NetworkScene_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_NetworkScene_8, value);
	}

	inline static int32_t get_offset_of_m_ExternalConnections_9() { return static_cast<int32_t>(offsetof(NetworkServer_t3565652346, ___m_ExternalConnections_9)); }
	inline HashSet_1_t1251136162 * get_m_ExternalConnections_9() const { return ___m_ExternalConnections_9; }
	inline HashSet_1_t1251136162 ** get_address_of_m_ExternalConnections_9() { return &___m_ExternalConnections_9; }
	inline void set_m_ExternalConnections_9(HashSet_1_t1251136162 * value)
	{
		___m_ExternalConnections_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_ExternalConnections_9, value);
	}

	inline static int32_t get_offset_of_m_SimpleServerSimple_10() { return static_cast<int32_t>(offsetof(NetworkServer_t3565652346, ___m_SimpleServerSimple_10)); }
	inline ServerSimpleWrapper_t904063966 * get_m_SimpleServerSimple_10() const { return ___m_SimpleServerSimple_10; }
	inline ServerSimpleWrapper_t904063966 ** get_address_of_m_SimpleServerSimple_10() { return &___m_SimpleServerSimple_10; }
	inline void set_m_SimpleServerSimple_10(ServerSimpleWrapper_t904063966 * value)
	{
		___m_SimpleServerSimple_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_SimpleServerSimple_10, value);
	}

	inline static int32_t get_offset_of_m_MaxDelay_11() { return static_cast<int32_t>(offsetof(NetworkServer_t3565652346, ___m_MaxDelay_11)); }
	inline float get_m_MaxDelay_11() const { return ___m_MaxDelay_11; }
	inline float* get_address_of_m_MaxDelay_11() { return &___m_MaxDelay_11; }
	inline void set_m_MaxDelay_11(float value)
	{
		___m_MaxDelay_11 = value;
	}

	inline static int32_t get_offset_of_m_RemoveList_12() { return static_cast<int32_t>(offsetof(NetworkServer_t3565652346, ___m_RemoveList_12)); }
	inline HashSet_1_t2264029286 * get_m_RemoveList_12() const { return ___m_RemoveList_12; }
	inline HashSet_1_t2264029286 ** get_address_of_m_RemoveList_12() { return &___m_RemoveList_12; }
	inline void set_m_RemoveList_12(HashSet_1_t2264029286 * value)
	{
		___m_RemoveList_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_RemoveList_12, value);
	}

	inline static int32_t get_offset_of_m_RemoveListCount_13() { return static_cast<int32_t>(offsetof(NetworkServer_t3565652346, ___m_RemoveListCount_13)); }
	inline int32_t get_m_RemoveListCount_13() const { return ___m_RemoveListCount_13; }
	inline int32_t* get_address_of_m_RemoveListCount_13() { return &___m_RemoveListCount_13; }
	inline void set_m_RemoveListCount_13(int32_t value)
	{
		___m_RemoveListCount_13 = value;
	}
};

struct NetworkServer_t3565652346_StaticFields
{
public:
	// System.Boolean UnityEngine.Networking.NetworkServer::s_Active
	bool ___s_Active_1;
	// UnityEngine.Networking.NetworkServer modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngine.Networking.NetworkServer::s_Instance
	NetworkServer_t3565652346 * ___s_Instance_2;
	// System.Object UnityEngine.Networking.NetworkServer::s_Sync
	Il2CppObject * ___s_Sync_3;
	// System.Boolean UnityEngine.Networking.NetworkServer::m_DontListen
	bool ___m_DontListen_4;
	// System.UInt16 UnityEngine.Networking.NetworkServer::maxPacketSize
	uint16_t ___maxPacketSize_14;
	// UnityEngine.Networking.NetworkSystem.RemovePlayerMessage UnityEngine.Networking.NetworkServer::s_RemovePlayerMessage
	RemovePlayerMessage_t2726720352 * ___s_RemovePlayerMessage_15;

public:
	inline static int32_t get_offset_of_s_Active_1() { return static_cast<int32_t>(offsetof(NetworkServer_t3565652346_StaticFields, ___s_Active_1)); }
	inline bool get_s_Active_1() const { return ___s_Active_1; }
	inline bool* get_address_of_s_Active_1() { return &___s_Active_1; }
	inline void set_s_Active_1(bool value)
	{
		___s_Active_1 = value;
	}

	inline static int32_t get_offset_of_s_Instance_2() { return static_cast<int32_t>(offsetof(NetworkServer_t3565652346_StaticFields, ___s_Instance_2)); }
	inline NetworkServer_t3565652346 * get_s_Instance_2() const { return ___s_Instance_2; }
	inline NetworkServer_t3565652346 ** get_address_of_s_Instance_2() { return &___s_Instance_2; }
	inline void set_s_Instance_2(NetworkServer_t3565652346 * value)
	{
		___s_Instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_Instance_2, value);
	}

	inline static int32_t get_offset_of_s_Sync_3() { return static_cast<int32_t>(offsetof(NetworkServer_t3565652346_StaticFields, ___s_Sync_3)); }
	inline Il2CppObject * get_s_Sync_3() const { return ___s_Sync_3; }
	inline Il2CppObject ** get_address_of_s_Sync_3() { return &___s_Sync_3; }
	inline void set_s_Sync_3(Il2CppObject * value)
	{
		___s_Sync_3 = value;
		Il2CppCodeGenWriteBarrier(&___s_Sync_3, value);
	}

	inline static int32_t get_offset_of_m_DontListen_4() { return static_cast<int32_t>(offsetof(NetworkServer_t3565652346_StaticFields, ___m_DontListen_4)); }
	inline bool get_m_DontListen_4() const { return ___m_DontListen_4; }
	inline bool* get_address_of_m_DontListen_4() { return &___m_DontListen_4; }
	inline void set_m_DontListen_4(bool value)
	{
		___m_DontListen_4 = value;
	}

	inline static int32_t get_offset_of_maxPacketSize_14() { return static_cast<int32_t>(offsetof(NetworkServer_t3565652346_StaticFields, ___maxPacketSize_14)); }
	inline uint16_t get_maxPacketSize_14() const { return ___maxPacketSize_14; }
	inline uint16_t* get_address_of_maxPacketSize_14() { return &___maxPacketSize_14; }
	inline void set_maxPacketSize_14(uint16_t value)
	{
		___maxPacketSize_14 = value;
	}

	inline static int32_t get_offset_of_s_RemovePlayerMessage_15() { return static_cast<int32_t>(offsetof(NetworkServer_t3565652346_StaticFields, ___s_RemovePlayerMessage_15)); }
	inline RemovePlayerMessage_t2726720352 * get_s_RemovePlayerMessage_15() const { return ___s_RemovePlayerMessage_15; }
	inline RemovePlayerMessage_t2726720352 ** get_address_of_s_RemovePlayerMessage_15() { return &___s_RemovePlayerMessage_15; }
	inline void set_s_RemovePlayerMessage_15(RemovePlayerMessage_t2726720352 * value)
	{
		___s_RemovePlayerMessage_15 = value;
		Il2CppCodeGenWriteBarrier(&___s_RemovePlayerMessage_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
