﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Attribute498693649.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSettingsAttribute
struct  NetworkSettingsAttribute_t1590210516  : public Attribute_t498693649
{
public:
	// System.Int32 UnityEngine.Networking.NetworkSettingsAttribute::channel
	int32_t ___channel_0;
	// System.Single UnityEngine.Networking.NetworkSettingsAttribute::sendInterval
	float ___sendInterval_1;

public:
	inline static int32_t get_offset_of_channel_0() { return static_cast<int32_t>(offsetof(NetworkSettingsAttribute_t1590210516, ___channel_0)); }
	inline int32_t get_channel_0() const { return ___channel_0; }
	inline int32_t* get_address_of_channel_0() { return &___channel_0; }
	inline void set_channel_0(int32_t value)
	{
		___channel_0 = value;
	}

	inline static int32_t get_offset_of_sendInterval_1() { return static_cast<int32_t>(offsetof(NetworkSettingsAttribute_t1590210516, ___sendInterval_1)); }
	inline float get_sendInterval_1() const { return ___sendInterval_1; }
	inline float* get_address_of_sendInterval_1() { return &___sendInterval_1; }
	inline void set_sendInterval_1(float value)
	{
		___sendInterval_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif