#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1719292676.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnityEngine.Networking.NetworkHash128::Reset()
extern "C"  void NetworkHash128_Reset_m1514718333 (NetworkHash128_t1719292676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkHash128::IsValid()
extern "C"  bool NetworkHash128_IsValid_m3065742702 (NetworkHash128_t1719292676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkHash128::HexToNumber(System.Char)
extern "C"  int32_t NetworkHash128_HexToNumber_m3292317832 (Il2CppObject * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkHash128 UnityEngine.Networking.NetworkHash128::Parse(System.String)
extern "C"  NetworkHash128_t1719292676  NetworkHash128_Parse_m3970892332 (Il2CppObject * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkHash128::ToString()
extern "C"  String_t* NetworkHash128_ToString_m3335927901 (NetworkHash128_t1719292676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct NetworkHash128_t1719292676;
struct NetworkHash128_t1719292676_marshaled;

extern "C" void NetworkHash128_t1719292676_marshal(const NetworkHash128_t1719292676& unmarshaled, NetworkHash128_t1719292676_marshaled& marshaled);
extern "C" void NetworkHash128_t1719292676_marshal_back(const NetworkHash128_t1719292676_marshaled& marshaled, NetworkHash128_t1719292676& unmarshaled);
extern "C" void NetworkHash128_t1719292676_marshal_cleanup(NetworkHash128_t1719292676_marshaled& marshaled);
