﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.LocalClient/InternalMsg
struct  InternalMsg_t3882040164 
{
public:
	// System.Byte[] UnityEngine.Networking.LocalClient/InternalMsg::buffer
	ByteU5BU5D_t58506160* ___buffer_0;
	// System.Int32 UnityEngine.Networking.LocalClient/InternalMsg::channelId
	int32_t ___channelId_1;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(InternalMsg_t3882040164, ___buffer_0)); }
	inline ByteU5BU5D_t58506160* get_buffer_0() const { return ___buffer_0; }
	inline ByteU5BU5D_t58506160** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ByteU5BU5D_t58506160* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_0, value);
	}

	inline static int32_t get_offset_of_channelId_1() { return static_cast<int32_t>(offsetof(InternalMsg_t3882040164, ___channelId_1)); }
	inline int32_t get_channelId_1() const { return ___channelId_1; }
	inline int32_t* get_address_of_channelId_1() { return &___channelId_1; }
	inline void set_channelId_1(int32_t value)
	{
		___channelId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.Networking.LocalClient/InternalMsg
struct InternalMsg_t3882040164_marshaled
{
	uint8_t* ___buffer_0;
	int32_t ___channelId_1;
};
