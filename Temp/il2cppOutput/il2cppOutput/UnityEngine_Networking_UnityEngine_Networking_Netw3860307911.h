﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3860307911.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkInstanceId
struct  NetworkInstanceId_t3860307911 
{
public:
	// System.UInt32 UnityEngine.Networking.NetworkInstanceId::m_Value
	uint32_t ___m_Value_0;

public:
	inline static int32_t get_offset_of_m_Value_0() { return static_cast<int32_t>(offsetof(NetworkInstanceId_t3860307911, ___m_Value_0)); }
	inline uint32_t get_m_Value_0() const { return ___m_Value_0; }
	inline uint32_t* get_address_of_m_Value_0() { return &___m_Value_0; }
	inline void set_m_Value_0(uint32_t value)
	{
		___m_Value_0 = value;
	}
};

struct NetworkInstanceId_t3860307911_StaticFields
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkInstanceId::Invalid
	NetworkInstanceId_t3860307911  ___Invalid_1;
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkInstanceId::Zero
	NetworkInstanceId_t3860307911  ___Zero_2;

public:
	inline static int32_t get_offset_of_Invalid_1() { return static_cast<int32_t>(offsetof(NetworkInstanceId_t3860307911_StaticFields, ___Invalid_1)); }
	inline NetworkInstanceId_t3860307911  get_Invalid_1() const { return ___Invalid_1; }
	inline NetworkInstanceId_t3860307911 * get_address_of_Invalid_1() { return &___Invalid_1; }
	inline void set_Invalid_1(NetworkInstanceId_t3860307911  value)
	{
		___Invalid_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(NetworkInstanceId_t3860307911_StaticFields, ___Zero_2)); }
	inline NetworkInstanceId_t3860307911  get_Zero_2() const { return ___Zero_2; }
	inline NetworkInstanceId_t3860307911 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(NetworkInstanceId_t3860307911  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.Networking.NetworkInstanceId
struct NetworkInstanceId_t3860307911_marshaled
{
	uint32_t ___m_Value_0;
};