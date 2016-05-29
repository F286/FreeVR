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

// UnityEngine.Networking.NetworkCRC
struct NetworkCRC_t947711855;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;
// System.Reflection.Assembly
struct Assembly_t1882292308;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkSystem.CRCMessageEntry[]
struct CRCMessageEntryU5BU5D_t4012510768;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Assembly1882292308.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnityEngine.Networking.NetworkCRC::.ctor()
extern "C"  void NetworkCRC__ctor_m3222174149 (NetworkCRC_t947711855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkCRC UnityEngine.Networking.NetworkCRC::get_singleton()
extern "C"  NetworkCRC_t947711855 * NetworkCRC_get_singleton_m549672783 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.Networking.NetworkCRC::get_scripts()
extern "C"  Dictionary_2_t190145395 * NetworkCRC_get_scripts_m2664711655 (NetworkCRC_t947711855 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkCRC::get_scriptCRCCheck()
extern "C"  bool NetworkCRC_get_scriptCRCCheck_m1129142457 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkCRC::set_scriptCRCCheck(System.Boolean)
extern "C"  void NetworkCRC_set_scriptCRCCheck_m741265522 (Il2CppObject * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkCRC::ReinitializeScriptCRCs(System.Reflection.Assembly)
extern "C"  void NetworkCRC_ReinitializeScriptCRCs_m1666251874 (Il2CppObject * __this /* static, unused */, Assembly_t1882292308 * ___callingAssembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkCRC::RegisterBehaviour(System.String,System.Int32)
extern "C"  void NetworkCRC_RegisterBehaviour_m3412381074 (Il2CppObject * __this /* static, unused */, String_t* ___name, int32_t ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkCRC::Validate(UnityEngine.Networking.NetworkSystem.CRCMessageEntry[],System.Int32)
extern "C"  bool NetworkCRC_Validate_m1902541533 (Il2CppObject * __this /* static, unused */, CRCMessageEntryU5BU5D_t4012510768* ___scripts, int32_t ___numChannels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkCRC::ValidateInternal(UnityEngine.Networking.NetworkSystem.CRCMessageEntry[],System.Int32)
extern "C"  bool NetworkCRC_ValidateInternal_m902234144 (NetworkCRC_t947711855 * __this, CRCMessageEntryU5BU5D_t4012510768* ___remoteScripts, int32_t ___numChannels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkCRC::Dump(UnityEngine.Networking.NetworkSystem.CRCMessageEntry[])
extern "C"  void NetworkCRC_Dump_m1062205990 (NetworkCRC_t947711855 * __this, CRCMessageEntryU5BU5D_t4012510768* ___remoteScripts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
