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

// UnityEngine.Networking.NetworkScene
struct NetworkScene_t3860729255;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity>
struct Dictionary_2_t2512141248;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.GameObject>
struct Dictionary_2_t899772856;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.SpawnDelegate>
struct Dictionary_2_t3115846659;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.UnSpawnDelegate>
struct Dictionary_2_t2631857642;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t1320523637;
// UnityEngine.Networking.SpawnDelegate
struct SpawnDelegate_t1933801609;
// UnityEngine.Networking.UnSpawnDelegate
struct UnSpawnDelegate_t1449812592;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3860307911.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1320523637.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1719292676.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Spaw1933801609.h"
#include "UnityEngine_Networking_UnityEngine_Networking_UnSp1449812592.h"

// System.Void UnityEngine.Networking.NetworkScene::.ctor()
extern "C"  void NetworkScene__ctor_m4231897229 (NetworkScene_t3860729255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::.cctor()
extern "C"  void NetworkScene__cctor_m1857699008 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity> UnityEngine.Networking.NetworkScene::get_localObjects()
extern "C"  Dictionary_2_t2512141248 * NetworkScene_get_localObjects_m235534171 (NetworkScene_t3860729255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.GameObject> UnityEngine.Networking.NetworkScene::get_guidToPrefab()
extern "C"  Dictionary_2_t899772856 * NetworkScene_get_guidToPrefab_m3169550648 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.SpawnDelegate> UnityEngine.Networking.NetworkScene::get_spawnHandlers()
extern "C"  Dictionary_2_t3115846659 * NetworkScene_get_spawnHandlers_m393107627 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.UnSpawnDelegate> UnityEngine.Networking.NetworkScene::get_unspawnHandlers()
extern "C"  Dictionary_2_t2631857642 * NetworkScene_get_unspawnHandlers_m214242649 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::Shutdown()
extern "C"  void NetworkScene_Shutdown_m404493549 (NetworkScene_t3860729255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::SetLocalObject(UnityEngine.Networking.NetworkInstanceId,UnityEngine.GameObject,System.Boolean,System.Boolean)
extern "C"  void NetworkScene_SetLocalObject_m968426906 (NetworkScene_t3860729255 * __this, NetworkInstanceId_t3860307911  ___netId, GameObject_t4012695102 * ___obj, bool ___isClient, bool ___isServer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.NetworkScene::FindLocalObject(UnityEngine.Networking.NetworkInstanceId)
extern "C"  GameObject_t4012695102 * NetworkScene_FindLocalObject_m1411438320 (NetworkScene_t3860729255 * __this, NetworkInstanceId_t3860307911  ___netId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkScene::GetNetworkIdentity(UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity&)
extern "C"  bool NetworkScene_GetNetworkIdentity_m2562912307 (NetworkScene_t3860729255 * __this, NetworkInstanceId_t3860307911  ___netId, NetworkIdentity_t1320523637 ** ___uv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkScene::RemoveLocalObject(UnityEngine.Networking.NetworkInstanceId)
extern "C"  bool NetworkScene_RemoveLocalObject_m2779389892 (NetworkScene_t3860729255 * __this, NetworkInstanceId_t3860307911  ___netId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkScene::RemoveLocalObjectAndDestroy(UnityEngine.Networking.NetworkInstanceId)
extern "C"  bool NetworkScene_RemoveLocalObjectAndDestroy_m854182087 (NetworkScene_t3860729255 * __this, NetworkInstanceId_t3860307911  ___netId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::ClearLocalObjects()
extern "C"  void NetworkScene_ClearLocalObjects_m271091521 (NetworkScene_t3860729255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::RegisterPrefab(UnityEngine.GameObject,UnityEngine.Networking.NetworkHash128)
extern "C"  void NetworkScene_RegisterPrefab_m3496618148 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, NetworkHash128_t1719292676  ___newAssetId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::RegisterPrefab(UnityEngine.GameObject)
extern "C"  void NetworkScene_RegisterPrefab_m3955415254 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkScene::GetPrefab(UnityEngine.Networking.NetworkHash128,UnityEngine.GameObject&)
extern "C"  bool NetworkScene_GetPrefab_m1414906383 (Il2CppObject * __this /* static, unused */, NetworkHash128_t1719292676  ___assetId, GameObject_t4012695102 ** ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::ClearSpawners()
extern "C"  void NetworkScene_ClearSpawners_m2765642531 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::UnregisterSpawnHandler(UnityEngine.Networking.NetworkHash128)
extern "C"  void NetworkScene_UnregisterSpawnHandler_m2741642706 (Il2CppObject * __this /* static, unused */, NetworkHash128_t1719292676  ___assetId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::RegisterSpawnHandler(UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.SpawnDelegate,UnityEngine.Networking.UnSpawnDelegate)
extern "C"  void NetworkScene_RegisterSpawnHandler_m721762532 (Il2CppObject * __this /* static, unused */, NetworkHash128_t1719292676  ___assetId, SpawnDelegate_t1933801609 * ___spawnHandler, UnSpawnDelegate_t1449812592 * ___unspawnHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::UnregisterPrefab(UnityEngine.GameObject)
extern "C"  void NetworkScene_UnregisterPrefab_m2854879023 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::RegisterPrefab(UnityEngine.GameObject,UnityEngine.Networking.SpawnDelegate,UnityEngine.Networking.UnSpawnDelegate)
extern "C"  void NetworkScene_RegisterPrefab_m1010988719 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, SpawnDelegate_t1933801609 * ___spawnHandler, UnSpawnDelegate_t1449812592 * ___unspawnHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkScene::GetSpawnHandler(UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.SpawnDelegate&)
extern "C"  bool NetworkScene_GetSpawnHandler_m1228325593 (Il2CppObject * __this /* static, unused */, NetworkHash128_t1719292676  ___assetId, SpawnDelegate_t1933801609 ** ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkScene::InvokeUnSpawnHandler(UnityEngine.Networking.NetworkHash128,UnityEngine.GameObject)
extern "C"  bool NetworkScene_InvokeUnSpawnHandler_m3610648723 (Il2CppObject * __this /* static, unused */, NetworkHash128_t1719292676  ___assetId, GameObject_t4012695102 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::DestroyAllClientObjects()
extern "C"  void NetworkScene_DestroyAllClientObjects_m3353852269 (NetworkScene_t3860729255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkScene::DumpAllClientObjects()
extern "C"  void NetworkScene_DumpAllClientObjects_m586963 (NetworkScene_t3860729255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
