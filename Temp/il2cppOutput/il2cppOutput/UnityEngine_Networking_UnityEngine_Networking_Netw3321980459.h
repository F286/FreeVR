﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate>
struct Dictionary_2_t2200959304;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkMessageHandlers
struct  NetworkMessageHandlers_t3321980459  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int16,UnityEngine.Networking.NetworkMessageDelegate> UnityEngine.Networking.NetworkMessageHandlers::m_MsgHandlers
	Dictionary_2_t2200959304 * ___m_MsgHandlers_0;

public:
	inline static int32_t get_offset_of_m_MsgHandlers_0() { return static_cast<int32_t>(offsetof(NetworkMessageHandlers_t3321980459, ___m_MsgHandlers_0)); }
	inline Dictionary_2_t2200959304 * get_m_MsgHandlers_0() const { return ___m_MsgHandlers_0; }
	inline Dictionary_2_t2200959304 ** get_address_of_m_MsgHandlers_0() { return &___m_MsgHandlers_0; }
	inline void set_m_MsgHandlers_0(Dictionary_2_t2200959304 * value)
	{
		___m_MsgHandlers_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_MsgHandlers_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif