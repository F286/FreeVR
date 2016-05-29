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

// CONTENT_PlayerNetwork
struct CONTENT_PlayerNetwork_t4058659463;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"

// System.Void CONTENT_PlayerNetwork::.ctor()
extern "C"  void CONTENT_PlayerNetwork__ctor_m1327015620 (CONTENT_PlayerNetwork_t4058659463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CONTENT_PlayerNetwork::OnStartLocalPlayer()
extern "C"  void CONTENT_PlayerNetwork_OnStartLocalPlayer_m432721385 (CONTENT_PlayerNetwork_t4058659463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CONTENT_PlayerNetwork::Update()
extern "C"  void CONTENT_PlayerNetwork_Update_m4209640649 (CONTENT_PlayerNetwork_t4058659463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CONTENT_PlayerNetwork::UNetVersion()
extern "C"  void CONTENT_PlayerNetwork_UNetVersion_m2436966898 (CONTENT_PlayerNetwork_t4058659463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CONTENT_PlayerNetwork::OnSerialize(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C"  bool CONTENT_PlayerNetwork_OnSerialize_m1208483108 (CONTENT_PlayerNetwork_t4058659463 * __this, NetworkWriter_t3691904682 * ___writer, bool ___forceAll, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CONTENT_PlayerNetwork::OnDeserialize(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void CONTENT_PlayerNetwork_OnDeserialize_m2683950057 (CONTENT_PlayerNetwork_t4058659463 * __this, NetworkReader_t3536499450 * ___reader, bool ___initialState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
