#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Networking.LocalClient/InternalMsg>
struct List_1_t384031837;
// System.Collections.Generic.Stack`1<UnityEngine.Networking.LocalClient/InternalMsg>
struct Stack_1_t2157478903;
// UnityEngine.Networking.NetworkServer
struct NetworkServer_t3565652346;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1976735906;

#include "UnityEngine_Networking_UnityEngine_Networking_Netw3113766402.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.LocalClient
struct  LocalClient_t2051778943  : public NetworkClient_t3113766402
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.LocalClient/InternalMsg> UnityEngine.Networking.LocalClient::m_InternalMsgs
	List_1_t384031837 * ___m_InternalMsgs_22;
	// System.Collections.Generic.List`1<UnityEngine.Networking.LocalClient/InternalMsg> UnityEngine.Networking.LocalClient::m_InternalMsgs2
	List_1_t384031837 * ___m_InternalMsgs2_23;
	// System.Collections.Generic.Stack`1<UnityEngine.Networking.LocalClient/InternalMsg> UnityEngine.Networking.LocalClient::m_FreeMessages
	Stack_1_t2157478903 * ___m_FreeMessages_24;
	// UnityEngine.Networking.NetworkServer UnityEngine.Networking.LocalClient::m_LocalServer
	NetworkServer_t3565652346 * ___m_LocalServer_25;
	// System.Boolean UnityEngine.Networking.LocalClient::m_Connected
	bool ___m_Connected_26;
	// UnityEngine.Networking.NetworkMessage UnityEngine.Networking.LocalClient::s_InternalMessage
	NetworkMessage_t1976735906 * ___s_InternalMessage_27;

public:
	inline static int32_t get_offset_of_m_InternalMsgs_22() { return static_cast<int32_t>(offsetof(LocalClient_t2051778943, ___m_InternalMsgs_22)); }
	inline List_1_t384031837 * get_m_InternalMsgs_22() const { return ___m_InternalMsgs_22; }
	inline List_1_t384031837 ** get_address_of_m_InternalMsgs_22() { return &___m_InternalMsgs_22; }
	inline void set_m_InternalMsgs_22(List_1_t384031837 * value)
	{
		___m_InternalMsgs_22 = value;
		Il2CppCodeGenWriteBarrier(&___m_InternalMsgs_22, value);
	}

	inline static int32_t get_offset_of_m_InternalMsgs2_23() { return static_cast<int32_t>(offsetof(LocalClient_t2051778943, ___m_InternalMsgs2_23)); }
	inline List_1_t384031837 * get_m_InternalMsgs2_23() const { return ___m_InternalMsgs2_23; }
	inline List_1_t384031837 ** get_address_of_m_InternalMsgs2_23() { return &___m_InternalMsgs2_23; }
	inline void set_m_InternalMsgs2_23(List_1_t384031837 * value)
	{
		___m_InternalMsgs2_23 = value;
		Il2CppCodeGenWriteBarrier(&___m_InternalMsgs2_23, value);
	}

	inline static int32_t get_offset_of_m_FreeMessages_24() { return static_cast<int32_t>(offsetof(LocalClient_t2051778943, ___m_FreeMessages_24)); }
	inline Stack_1_t2157478903 * get_m_FreeMessages_24() const { return ___m_FreeMessages_24; }
	inline Stack_1_t2157478903 ** get_address_of_m_FreeMessages_24() { return &___m_FreeMessages_24; }
	inline void set_m_FreeMessages_24(Stack_1_t2157478903 * value)
	{
		___m_FreeMessages_24 = value;
		Il2CppCodeGenWriteBarrier(&___m_FreeMessages_24, value);
	}

	inline static int32_t get_offset_of_m_LocalServer_25() { return static_cast<int32_t>(offsetof(LocalClient_t2051778943, ___m_LocalServer_25)); }
	inline NetworkServer_t3565652346 * get_m_LocalServer_25() const { return ___m_LocalServer_25; }
	inline NetworkServer_t3565652346 ** get_address_of_m_LocalServer_25() { return &___m_LocalServer_25; }
	inline void set_m_LocalServer_25(NetworkServer_t3565652346 * value)
	{
		___m_LocalServer_25 = value;
		Il2CppCodeGenWriteBarrier(&___m_LocalServer_25, value);
	}

	inline static int32_t get_offset_of_m_Connected_26() { return static_cast<int32_t>(offsetof(LocalClient_t2051778943, ___m_Connected_26)); }
	inline bool get_m_Connected_26() const { return ___m_Connected_26; }
	inline bool* get_address_of_m_Connected_26() { return &___m_Connected_26; }
	inline void set_m_Connected_26(bool value)
	{
		___m_Connected_26 = value;
	}

	inline static int32_t get_offset_of_s_InternalMessage_27() { return static_cast<int32_t>(offsetof(LocalClient_t2051778943, ___s_InternalMessage_27)); }
	inline NetworkMessage_t1976735906 * get_s_InternalMessage_27() const { return ___s_InternalMessage_27; }
	inline NetworkMessage_t1976735906 ** get_address_of_s_InternalMessage_27() { return &___s_InternalMessage_27; }
	inline void set_s_InternalMessage_27(NetworkMessage_t1976735906 * value)
	{
		___s_InternalMessage_27 = value;
		Il2CppCodeGenWriteBarrier(&___s_InternalMessage_27, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
