#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.Networking.NetworkManager
struct NetworkManager_t1857071176;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CONTENT_NetworkManager
struct  CONTENT_NetworkManager_t2739649125  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject CONTENT_NetworkManager::hud
	GameObject_t4012695102 * ___hud_2;
	// UnityEngine.UI.Text CONTENT_NetworkManager::ipAddress
	Text_t3286458198 * ___ipAddress_3;
	// UnityEngine.Networking.NetworkManager CONTENT_NetworkManager::manager
	NetworkManager_t1857071176 * ___manager_4;
	// System.Boolean CONTENT_NetworkManager::showGUI
	bool ___showGUI_5;
	// System.Int32 CONTENT_NetworkManager::offsetX
	int32_t ___offsetX_6;
	// System.Int32 CONTENT_NetworkManager::offsetY
	int32_t ___offsetY_7;

public:
	inline static int32_t get_offset_of_hud_2() { return static_cast<int32_t>(offsetof(CONTENT_NetworkManager_t2739649125, ___hud_2)); }
	inline GameObject_t4012695102 * get_hud_2() const { return ___hud_2; }
	inline GameObject_t4012695102 ** get_address_of_hud_2() { return &___hud_2; }
	inline void set_hud_2(GameObject_t4012695102 * value)
	{
		___hud_2 = value;
		Il2CppCodeGenWriteBarrier(&___hud_2, value);
	}

	inline static int32_t get_offset_of_ipAddress_3() { return static_cast<int32_t>(offsetof(CONTENT_NetworkManager_t2739649125, ___ipAddress_3)); }
	inline Text_t3286458198 * get_ipAddress_3() const { return ___ipAddress_3; }
	inline Text_t3286458198 ** get_address_of_ipAddress_3() { return &___ipAddress_3; }
	inline void set_ipAddress_3(Text_t3286458198 * value)
	{
		___ipAddress_3 = value;
		Il2CppCodeGenWriteBarrier(&___ipAddress_3, value);
	}

	inline static int32_t get_offset_of_manager_4() { return static_cast<int32_t>(offsetof(CONTENT_NetworkManager_t2739649125, ___manager_4)); }
	inline NetworkManager_t1857071176 * get_manager_4() const { return ___manager_4; }
	inline NetworkManager_t1857071176 ** get_address_of_manager_4() { return &___manager_4; }
	inline void set_manager_4(NetworkManager_t1857071176 * value)
	{
		___manager_4 = value;
		Il2CppCodeGenWriteBarrier(&___manager_4, value);
	}

	inline static int32_t get_offset_of_showGUI_5() { return static_cast<int32_t>(offsetof(CONTENT_NetworkManager_t2739649125, ___showGUI_5)); }
	inline bool get_showGUI_5() const { return ___showGUI_5; }
	inline bool* get_address_of_showGUI_5() { return &___showGUI_5; }
	inline void set_showGUI_5(bool value)
	{
		___showGUI_5 = value;
	}

	inline static int32_t get_offset_of_offsetX_6() { return static_cast<int32_t>(offsetof(CONTENT_NetworkManager_t2739649125, ___offsetX_6)); }
	inline int32_t get_offsetX_6() const { return ___offsetX_6; }
	inline int32_t* get_address_of_offsetX_6() { return &___offsetX_6; }
	inline void set_offsetX_6(int32_t value)
	{
		___offsetX_6 = value;
	}

	inline static int32_t get_offset_of_offsetY_7() { return static_cast<int32_t>(offsetof(CONTENT_NetworkManager_t2739649125, ___offsetY_7)); }
	inline int32_t get_offsetY_7() const { return ___offsetY_7; }
	inline int32_t* get_address_of_offsetY_7() { return &___offsetY_7; }
	inline void set_offsetY_7(int32_t value)
	{
		___offsetY_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
