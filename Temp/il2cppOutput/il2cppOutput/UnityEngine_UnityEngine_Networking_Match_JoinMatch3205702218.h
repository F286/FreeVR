﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_Networking_Match_Request2117242181.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID3752984187.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.JoinMatchRequest
struct  JoinMatchRequest_t3205702218  : public Request_t2117242181
{
public:
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchRequest::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_4;
	// System.String UnityEngine.Networking.Match.JoinMatchRequest::<password>k__BackingField
	String_t* ___U3CpasswordU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CnetworkIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(JoinMatchRequest_t3205702218, ___U3CnetworkIdU3Ek__BackingField_4)); }
	inline uint64_t get_U3CnetworkIdU3Ek__BackingField_4() const { return ___U3CnetworkIdU3Ek__BackingField_4; }
	inline uint64_t* get_address_of_U3CnetworkIdU3Ek__BackingField_4() { return &___U3CnetworkIdU3Ek__BackingField_4; }
	inline void set_U3CnetworkIdU3Ek__BackingField_4(uint64_t value)
	{
		___U3CnetworkIdU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CpasswordU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(JoinMatchRequest_t3205702218, ___U3CpasswordU3Ek__BackingField_5)); }
	inline String_t* get_U3CpasswordU3Ek__BackingField_5() const { return ___U3CpasswordU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CpasswordU3Ek__BackingField_5() { return &___U3CpasswordU3Ek__BackingField_5; }
	inline void set_U3CpasswordU3Ek__BackingField_5(String_t* value)
	{
		___U3CpasswordU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpasswordU3Ek__BackingField_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
