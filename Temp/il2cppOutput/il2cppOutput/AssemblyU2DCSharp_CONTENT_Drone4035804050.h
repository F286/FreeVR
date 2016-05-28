#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CONTENT_Drone
struct  CONTENT_Drone_t4035804050  : public MonoBehaviour_t3012272455
{
public:
	// System.Single CONTENT_Drone::lift
	float ___lift_2;
	// UnityEngine.Transform CONTENT_Drone::target
	Transform_t284553113 * ___target_3;
	// System.Single CONTENT_Drone::tiltForward
	float ___tiltForward_4;
	// UnityEngine.Transform CONTENT_Drone::damp
	Transform_t284553113 * ___damp_5;

public:
	inline static int32_t get_offset_of_lift_2() { return static_cast<int32_t>(offsetof(CONTENT_Drone_t4035804050, ___lift_2)); }
	inline float get_lift_2() const { return ___lift_2; }
	inline float* get_address_of_lift_2() { return &___lift_2; }
	inline void set_lift_2(float value)
	{
		___lift_2 = value;
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(CONTENT_Drone_t4035804050, ___target_3)); }
	inline Transform_t284553113 * get_target_3() const { return ___target_3; }
	inline Transform_t284553113 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Transform_t284553113 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}

	inline static int32_t get_offset_of_tiltForward_4() { return static_cast<int32_t>(offsetof(CONTENT_Drone_t4035804050, ___tiltForward_4)); }
	inline float get_tiltForward_4() const { return ___tiltForward_4; }
	inline float* get_address_of_tiltForward_4() { return &___tiltForward_4; }
	inline void set_tiltForward_4(float value)
	{
		___tiltForward_4 = value;
	}

	inline static int32_t get_offset_of_damp_5() { return static_cast<int32_t>(offsetof(CONTENT_Drone_t4035804050, ___damp_5)); }
	inline Transform_t284553113 * get_damp_5() const { return ___damp_5; }
	inline Transform_t284553113 ** get_address_of_damp_5() { return &___damp_5; }
	inline void set_damp_5(Transform_t284553113 * value)
	{
		___damp_5 = value;
		Il2CppCodeGenWriteBarrier(&___damp_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
