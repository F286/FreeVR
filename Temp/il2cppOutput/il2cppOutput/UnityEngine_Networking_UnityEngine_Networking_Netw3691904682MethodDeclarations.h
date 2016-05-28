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

// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkIdentity
struct NetworkIdentity_t1320523637;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Networking.MessageBase
struct MessageBase_t226723297;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_ArraySegment_1_gen2801744866.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3860307911.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2936457058.h"
#include "mscorlib_System_String968488902.h"
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
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1320523637.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Messa226723297.h"

// System.Void UnityEngine.Networking.NetworkWriter::.ctor()
extern "C"  void NetworkWriter__ctor_m1431389466 (NetworkWriter_t3691904682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::.ctor(System.Byte[])
extern "C"  void NetworkWriter__ctor_m2850510063 (NetworkWriter_t3691904682 * __this, ByteU5BU5D_t58506160* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.Networking.NetworkWriter::get_Position()
extern "C"  int16_t NetworkWriter_get_Position_m357721918 (NetworkWriter_t3691904682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.NetworkWriter::ToArray()
extern "C"  ByteU5BU5D_t58506160* NetworkWriter_ToArray_m3145779756 (NetworkWriter_t3691904682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.NetworkWriter::AsArray()
extern "C"  ByteU5BU5D_t58506160* NetworkWriter_AsArray_m1508982933 (NetworkWriter_t3691904682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ArraySegment`1<System.Byte> UnityEngine.Networking.NetworkWriter::AsArraySegment()
extern "C"  ArraySegment_1_t2801744866  NetworkWriter_AsArraySegment_m3997347620 (NetworkWriter_t3691904682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::WritePackedUInt32(System.UInt32)
extern "C"  void NetworkWriter_WritePackedUInt32_m2374050578 (NetworkWriter_t3691904682 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::WritePackedUInt64(System.UInt64)
extern "C"  void NetworkWriter_WritePackedUInt64_m1117946964 (NetworkWriter_t3691904682 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkInstanceId)
extern "C"  void NetworkWriter_Write_m1399142972 (NetworkWriter_t3691904682 * __this, NetworkInstanceId_t3860307911  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkSceneId)
extern "C"  void NetworkWriter_Write_m3999084671 (NetworkWriter_t3691904682 * __this, NetworkSceneId_t2936457058  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Char)
extern "C"  void NetworkWriter_Write_m3090836518 (NetworkWriter_t3691904682 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Byte)
extern "C"  void NetworkWriter_Write_m3090437300 (NetworkWriter_t3691904682 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.SByte)
extern "C"  void NetworkWriter_Write_m1750342971 (NetworkWriter_t3691904682 * __this, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Int16)
extern "C"  void NetworkWriter_Write_m1504471586 (NetworkWriter_t3691904682 * __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.UInt16)
extern "C"  void NetworkWriter_Write_m391260413 (NetworkWriter_t3691904682 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Int32)
extern "C"  void NetworkWriter_Write_m1504473384 (NetworkWriter_t3691904682 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.UInt32)
extern "C"  void NetworkWriter_Write_m391262211 (NetworkWriter_t3691904682 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Int64)
extern "C"  void NetworkWriter_Write_m1504476329 (NetworkWriter_t3691904682 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.UInt64)
extern "C"  void NetworkWriter_Write_m391265156 (NetworkWriter_t3691904682 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Single)
extern "C"  void NetworkWriter_Write_m3827024052 (NetworkWriter_t3691904682 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Double)
extern "C"  void NetworkWriter_Write_m3577461323 (NetworkWriter_t3691904682 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.String)
extern "C"  void NetworkWriter_Write_m4145700363 (NetworkWriter_t3691904682 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Boolean)
extern "C"  void NetworkWriter_Write_m4173715342 (NetworkWriter_t3691904682 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Byte[],System.Int32)
extern "C"  void NetworkWriter_Write_m2676261701 (NetworkWriter_t3691904682 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void NetworkWriter_Write_m85119410 (NetworkWriter_t3691904682 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::WriteBytesAndSize(System.Byte[],System.Int32)
extern "C"  void NetworkWriter_WriteBytesAndSize_m2900186226 (NetworkWriter_t3691904682 * __this, ByteU5BU5D_t58506160* ___buffer, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::WriteBytesFull(System.Byte[])
extern "C"  void NetworkWriter_WriteBytesFull_m697201796 (NetworkWriter_t3691904682 * __this, ByteU5BU5D_t58506160* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Vector2)
extern "C"  void NetworkWriter_Write_m710722563 (NetworkWriter_t3691904682 * __this, Vector2_t3525329788  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Vector3)
extern "C"  void NetworkWriter_Write_m710722594 (NetworkWriter_t3691904682 * __this, Vector3_t3525329789  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Vector4)
extern "C"  void NetworkWriter_Write_m710722625 (NetworkWriter_t3691904682 * __this, Vector4_t3525329790  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Color)
extern "C"  void NetworkWriter_Write_m1441701039 (NetworkWriter_t3691904682 * __this, Color_t1588175760  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Color32)
extern "C"  void NetworkWriter_Write_m2495240368 (NetworkWriter_t3691904682 * __this, Color32_t4137084207  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Quaternion)
extern "C"  void NetworkWriter_Write_m3879913186 (NetworkWriter_t3691904682 * __this, Quaternion_t1891715979  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Rect)
extern "C"  void NetworkWriter_Write_m2415357468 (NetworkWriter_t3691904682 * __this, Rect_t1525428817  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Plane)
extern "C"  void NetworkWriter_Write_m1810780374 (NetworkWriter_t3691904682 * __this, Plane_t1600081545  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Ray)
extern "C"  void NetworkWriter_Write_m1463384840 (NetworkWriter_t3691904682 * __this, Ray_t1522967639  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Matrix4x4)
extern "C"  void NetworkWriter_Write_m2429955715 (NetworkWriter_t3691904682 * __this, Matrix4x4_t277289660  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkHash128)
extern "C"  void NetworkWriter_Write_m626727197 (NetworkWriter_t3691904682 * __this, NetworkHash128_t1719292676  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkIdentity)
extern "C"  void NetworkWriter_Write_m2069883022 (NetworkWriter_t3691904682 * __this, NetworkIdentity_t1320523637 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Transform)
extern "C"  void NetworkWriter_Write_m2655122758 (NetworkWriter_t3691904682 * __this, Transform_t284553113 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.GameObject)
extern "C"  void NetworkWriter_Write_m910789263 (NetworkWriter_t3691904682 * __this, GameObject_t4012695102 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.MessageBase)
extern "C"  void NetworkWriter_Write_m1309956130 (NetworkWriter_t3691904682 * __this, MessageBase_t226723297 * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::SeekZero()
extern "C"  void NetworkWriter_SeekZero_m3831379370 (NetworkWriter_t3691904682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::StartMessage(System.Int16)
extern "C"  void NetworkWriter_StartMessage_m3998410682 (NetworkWriter_t3691904682 * __this, int16_t ___msgType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::FinishMessage()
extern "C"  void NetworkWriter_FinishMessage_m4053837356 (NetworkWriter_t3691904682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
