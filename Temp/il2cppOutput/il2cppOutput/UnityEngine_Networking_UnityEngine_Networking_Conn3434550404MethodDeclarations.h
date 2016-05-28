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

// UnityEngine.Networking.ConnectionArray
struct ConnectionArray_t3434550404;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection>
struct List_1_t2979590926;
// UnityEngine.Networking.NetworkConnection
struct NetworkConnection_t2182631957;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2182631957.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void UnityEngine.Networking.ConnectionArray::.ctor()
extern "C"  void ConnectionArray__ctor_m119447168 (ConnectionArray_t3434550404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.ConnectionArray::get_localConnections()
extern "C"  List_1_t2979590926 * ConnectionArray_get_localConnections_m4237667059 (ConnectionArray_t3434550404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkConnection> UnityEngine.Networking.ConnectionArray::get_connections()
extern "C"  List_1_t2979590926 * ConnectionArray_get_connections_m2138568846 (ConnectionArray_t3434550404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ConnectionArray::get_Count()
extern "C"  int32_t ConnectionArray_get_Count_m1996770716 (ConnectionArray_t3434550404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ConnectionArray::get_LocalIndex()
extern "C"  int32_t ConnectionArray_get_LocalIndex_m1501989788 (ConnectionArray_t3434550404 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ConnectionArray::Add(System.Int32,UnityEngine.Networking.NetworkConnection)
extern "C"  int32_t ConnectionArray_Add_m3579788981 (ConnectionArray_t3434550404 * __this, int32_t ___connId, NetworkConnection_t2182631957 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.ConnectionArray::Get(System.Int32)
extern "C"  NetworkConnection_t2182631957 * ConnectionArray_Get_m313525591 (ConnectionArray_t3434550404 * __this, int32_t ___connId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkConnection UnityEngine.Networking.ConnectionArray::GetUnsafe(System.Int32)
extern "C"  NetworkConnection_t2182631957 * ConnectionArray_GetUnsafe_m4138795229 (ConnectionArray_t3434550404 * __this, int32_t ___connId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionArray::Remove(System.Int32)
extern "C"  void ConnectionArray_Remove_m4031539929 (ConnectionArray_t3434550404 * __this, int32_t ___connId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ConnectionArray::AddLocal(UnityEngine.Networking.NetworkConnection)
extern "C"  int32_t ConnectionArray_AddLocal_m4075111501 (ConnectionArray_t3434550404 * __this, NetworkConnection_t2182631957 * ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ConnectionArray::ContainsPlayer(UnityEngine.GameObject,UnityEngine.Networking.NetworkConnection&)
extern "C"  bool ConnectionArray_ContainsPlayer_m3230688313 (ConnectionArray_t3434550404 * __this, GameObject_t4012695102 * ___player, NetworkConnection_t2182631957 ** ___conn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
