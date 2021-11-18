#pragma once

// Name: ViceCity, Version: 1.0.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
enum class ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy : uint8_t
{
	EClothingWindMethod_Legacy__Legacy = 0,
	EClothingWindMethod_Legacy__Accurate = 1,
	EClothingWindMethod_Legacy__EClothingWindMethod_MAX = 2,

};

// Enum ClothingSystemRuntimeCommon.EWeightMapTargetCommon
enum class ClothingSystemRuntimeCommon_EWeightMapTargetCommon : uint8_t
{
	EWeightMapTargetCommon__None   = 0,
	EWeightMapTargetCommon__MaxDistance = 1,
	EWeightMapTargetCommon__BackstopDistance = 2,
	EWeightMapTargetCommon__BackstopRadius = 3,
	EWeightMapTargetCommon__AnimDriveMultiplier = 4,
	EWeightMapTargetCommon__EWeightMapTargetCommon_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ClothingSystemRuntimeCommon.PointWeightMap
// 0x0010
struct FPointWeightMap
{
	TArray<float>                                      Values;                                                    // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMeshData
// 0x00F8
struct FClothPhysicalMeshData
{
	TArray<struct FVector>                             Vertices;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             Normals;                                                   // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32_t>                                   Indices;                                                   // 0x0020(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<uint32_t, struct FPointWeightMap>             WeightMaps;                                                // 0x0030(0x0050) (Edit, NativeAccessSpecifierPublic)
	TArray<float>                                      InverseMasses;                                             // 0x0080(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FClothVertBoneData>                  BoneData;                                                  // 0x0090(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                MaxBoneWeights;                                            // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumFixedVerts;                                             // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint32_t>                                   SelfCollisionIndices;                                      // 0x00A8(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      MaxDistances;                                              // 0x00B8(0x0010) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<float>                                      BackstopDistances;                                         // 0x00C8(0x0010) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<float>                                      BackstopRadiuses;                                          // 0x00D8(0x0010) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<float>                                      AnimDriveMultipliers;                                      // 0x00E8(0x0010) (ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)

};

// ScriptStruct ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
// 0x0010
struct FClothConstraintSetup_Legacy
{
	float                                              Stiffness;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StiffnessMultiplier;                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StretchLimit;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CompressionLimit;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ClothingSystemRuntimeCommon.ClothLODDataCommon
// 0x0160
struct FClothLODDataCommon
{
	struct FClothPhysicalMeshData                      PhysicalMeshData;                                          // 0x0000(0x00F8) (Edit, NativeAccessSpecifierPublic)
	struct FClothCollisionData                         CollisionData;                                             // 0x00F8(0x0040) (Edit, NativeAccessSpecifierPublic)
	bool                                               bUseMultipleInfluences;                                    // 0x0138(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0W0G[0x3];                                     // 0x0139(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SkinningKernelRadius;                                      // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UHXF[0x20];                                    // 0x0140(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct ClothingSystemRuntimeCommon.ClothConfig_Legacy
// 0x00D4
struct FClothConfig_Legacy
{
	ClothingSystemRuntimeCommon_EClothingWindMethod_Legacy WindMethod;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AV5H[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FClothConstraintSetup_Legacy                VerticalConstraintConfig;                                  // 0x0004(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup_Legacy                HorizontalConstraintConfig;                                // 0x0014(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup_Legacy                BendConstraintConfig;                                      // 0x0024(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	struct FClothConstraintSetup_Legacy                ShearConstraintConfig;                                     // 0x0034(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	float                                              SelfCollisionRadius;                                       // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SelfCollisionStiffness;                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SelfCollisionCullScale;                                    // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Damping;                                                   // 0x0050(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Friction;                                                  // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WindDragCoefficient;                                       // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WindLiftCoefficient;                                       // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LinearDrag;                                                // 0x0068(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AngularDrag;                                               // 0x0074(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LinearInertiaScale;                                        // 0x0080(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AngularInertiaScale;                                       // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CentrifugalInertiaScale;                                   // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SolverFrequency;                                           // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StiffnessFrequency;                                        // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GravityScale;                                              // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     GravityOverride;                                           // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseGravityOverride;                                       // 0x00BC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P2G8[0x3];                                     // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TetherStiffness;                                           // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TetherLimit;                                               // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionThickness;                                        // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimDriveSpringStiffness;                                  // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimDriveDamperStiffness;                                  // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
// 0x0030
struct FClothParameterMask_Legacy
{
	struct FName                                       MaskName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ClothingSystemRuntimeCommon_EWeightMapTargetCommon CurrentTarget;                                             // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y6XT[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxValue;                                                  // 0x000C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinValue;                                                  // 0x0010(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0A8O[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      Values;                                                    // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bEnabled;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HF4E[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
