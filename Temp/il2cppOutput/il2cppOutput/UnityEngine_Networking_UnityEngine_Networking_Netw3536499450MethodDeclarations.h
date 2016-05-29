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

// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t1320523637;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3860307911.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2936457058.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Color324137084207.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Plane1600081545.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1719292676.h"

// System.Void UnityEngine.Networking.NetworkReader::.ctor()
extern "C"  void NetworkReader__ctor_m747793098 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkReader::.ctor(UnityEngine.Networking.NetworkWriter)
extern "C"  void NetworkReader__ctor_m717295404 (NetworkReader_t3536499450 * __this, NetworkWriter_t3691904682 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkReader::.ctor(System.Byte[])
extern "C"  void NetworkReader__ctor_m3135565119 (NetworkReader_t3536499450 * __this, ByteU5BU5D_t58506160* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkReader::Initialize()
extern "C"  void NetworkReader_Initialize_m1300175370 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.NetworkReader::get_Position()
extern "C"  uint32_t NetworkReader_get_Position_m1564888967 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkReader::SeekZero()
extern "C"  void NetworkReader_SeekZero_m1251930618 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkReader::Replace(System.Byte[])
extern "C"  void NetworkReader_Replace_m919412077 (NetworkReader_t3536499450 * __this, ByteU5BU5D_t58506160* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.NetworkReader::ReadPackedUInt32()
extern "C"  uint32_t NetworkReader_ReadPackedUInt32_m1171987132 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 UnityEngine.Networking.NetworkReader::ReadPackedUInt64()
extern "C"  uint64_t NetworkReader_ReadPackedUInt64_m2446857180 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkReader::ReadNetworkId()
extern "C"  NetworkInstanceId_t3860307911  NetworkReader_ReadNetworkId_m1641462175 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkSceneId UnityEngine.Networking.NetworkReader::ReadSceneId()
extern "C"  NetworkSceneId_t2936457058  NetworkReader_ReadSceneId_m2295918978 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.Networking.NetworkReader::ReadByte()
extern "C"  uint8_t NetworkReader_ReadByte_m3073347588 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte UnityEngine.Networking.NetworkReader::ReadSByte()
extern "C"  int8_t NetworkReader_ReadSByte_m1541696690 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.Networking.NetworkReader::ReadInt16()
extern "C"  int16_t NetworkReader_ReadInt16_m1285805732 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.NetworkReader::ReadUInt16()
extern "C"  uint16_t NetworkReader_ReadUInt16_m2242711140 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkReader::ReadInt32()
extern "C"  int32_t NetworkReader_ReadInt32_m2586406424 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.NetworkReader::ReadUInt32()
extern "C"  uint32_t NetworkReader_ReadUInt32_m3904954788 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.Networking.NetworkReader::ReadInt64()
extern "C"  int64_t NetworkReader_ReadInt64_m2865421654 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 UnityEngine.Networking.NetworkReader::ReadUInt64()
extern "C"  uint64_t NetworkReader_ReadUInt64_m3961753476 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkReader::ReadSingle()
extern "C"  float NetworkReader_ReadSingle_m3516828036 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Networking.NetworkReader::ReadDouble()
extern "C"  double NetworkReader_ReadDouble_m1994131620 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkReader::ReadString()
extern "C"  String_t* NetworkReader_ReadString_m2071466148 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.Networking.NetworkReader::ReadChar()
extern "C"  uint16_t NetworkReader_ReadChar_m2081362500 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkReader::ReadBoolean()
extern "C"  bool NetworkReader_ReadBoolean_m2155710412 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.NetworkReader::ReadBytes(System.Int32)
extern "C"  ByteU5BU5D_t58506160* NetworkReader_ReadBytes_m278866820 (NetworkReader_t3536499450 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.NetworkReader::ReadBytesAndSize()
extern "C"  ByteU5BU5D_t58506160* NetworkReader_ReadBytesAndSize_m4087750503 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Networking.NetworkReader::ReadVector2()
extern "C"  Vector2_t3525329788  NetworkReader_ReadVector2_m1763066630 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Networking.NetworkReader::ReadVector3()
extern "C"  Vector3_t3525329789  NetworkReader_ReadVector3_m4132501576 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Networking.NetworkReader::ReadVector4()
extern "C"  Vector4_t3525329790  NetworkReader_ReadVector4_m2206969226 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Networking.NetworkReader::ReadColor()
extern "C"  Color_t1588175760  NetworkReader_ReadColor_m2107280750 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 UnityEngine.Networking.NetworkReader::ReadColor32()
extern "C"  Color32_t4137084207  NetworkReader_ReadColor32_m3918365228 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Networking.NetworkReader::ReadQuaternion()
extern "C"  Quaternion_t1891715979  NetworkReader_ReadQuaternion_m879545712 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Networking.NetworkReader::ReadRect()
extern "C"  Rect_t1525428817  NetworkReader_ReadRect_m328648112 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Plane UnityEngine.Networking.NetworkReader::ReadPlane()
extern "C"  Plane_t1600081545  NetworkReader_ReadPlane_m1159231712 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Networking.NetworkReader::ReadRay()
extern "C"  Ray_t1522967639  NetworkReader_ReadRay_m394674300 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Networking.NetworkReader::ReadMatrix4x4()
extern "C"  Matrix4x4_t277289660  NetworkReader_ReadMatrix4x4_m1243985222 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkHash128 UnityEngine.Networking.NetworkReader::ReadNetworkHash128()
extern "C"  NetworkHash128_t1719292676  NetworkReader_ReadNetworkHash128_m2848463104 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Networking.NetworkReader::ReadTransform()
extern "C"  Transform_t284553113 * NetworkReader_ReadTransform_m277361664 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Networking.NetworkReader::ReadGameObject()
extern "C"  GameObject_t4012695102 * NetworkReader_ReadGameObject_m4289896272 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkIdentity UnityEngine.Networking.NetworkReader::ReadNetworkIdentity()
extern "C"  NetworkIdentity_t1320523637 * NetworkReader_ReadNetworkIdentity_m605531056 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkReader::ToString()
extern "C"  String_t* NetworkReader_ToString_m534275977 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
