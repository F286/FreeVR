﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Networking.NetworkSystem.AddPlayerMessage
struct AddPlayerMessage_t546326179;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"

// System.Void UnityEngine.Networking.NetworkSystem.AddPlayerMessage::.ctor()
extern "C"  void AddPlayerMessage__ctor_m2114744789 (AddPlayerMessage_t546326179 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.AddPlayerMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void AddPlayerMessage_Deserialize_m1658222404 (AddPlayerMessage_t546326179 * __this, NetworkReader_t3536499450 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.AddPlayerMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void AddPlayerMessage_Serialize_m1313394869 (AddPlayerMessage_t546326179 * __this, NetworkWriter_t3691904682 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;