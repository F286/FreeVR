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

// UnityEngine.Networking.ChannelPacket
struct  ChannelPacket_t1564579284 
{
public:
	// System.Int32 UnityEngine.Networking.ChannelPacket::m_Position
	int32_t ___m_Position_0;
	// System.Byte[] UnityEngine.Networking.ChannelPacket::m_Buffer
	ByteU5BU5D_t58506160* ___m_Buffer_1;
	// System.Boolean UnityEngine.Networking.ChannelPacket::m_IsReliable
	bool ___m_IsReliable_2;

public:
	inline static int32_t get_offset_of_m_Position_0() { return static_cast<int32_t>(offsetof(ChannelPacket_t1564579284, ___m_Position_0)); }
	inline int32_t get_m_Position_0() const { return ___m_Position_0; }
	inline int32_t* get_address_of_m_Position_0() { return &___m_Position_0; }
	inline void set_m_Position_0(int32_t value)
	{
		___m_Position_0 = value;
	}

	inline static int32_t get_offset_of_m_Buffer_1() { return static_cast<int32_t>(offsetof(ChannelPacket_t1564579284, ___m_Buffer_1)); }
	inline ByteU5BU5D_t58506160* get_m_Buffer_1() const { return ___m_Buffer_1; }
	inline ByteU5BU5D_t58506160** get_address_of_m_Buffer_1() { return &___m_Buffer_1; }
	inline void set_m_Buffer_1(ByteU5BU5D_t58506160* value)
	{
		___m_Buffer_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Buffer_1, value);
	}

	inline static int32_t get_offset_of_m_IsReliable_2() { return static_cast<int32_t>(offsetof(ChannelPacket_t1564579284, ___m_IsReliable_2)); }
	inline bool get_m_IsReliable_2() const { return ___m_IsReliable_2; }
	inline bool* get_address_of_m_IsReliable_2() { return &___m_IsReliable_2; }
	inline void set_m_IsReliable_2(bool value)
	{
		___m_IsReliable_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.Networking.ChannelPacket
struct ChannelPacket_t1564579284_marshaled
{
	int32_t ___m_Position_0;
	uint8_t* ___m_Buffer_1;
	int32_t ___m_IsReliable_2;
};