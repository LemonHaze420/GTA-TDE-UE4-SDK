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

// Enum ModelingComponents.EBaseCreateFromSelectedTargetType
enum class ModelingComponents_EBaseCreateFromSelectedTargetType : uint8_t
{
	EBaseCreateFromSelectedTargetType__NewAsset = 0,
	EBaseCreateFromSelectedTargetType__FirstInputAsset = 1,
	EBaseCreateFromSelectedTargetType__LastInputAsset = 2,
	EBaseCreateFromSelectedTargetType__EBaseCreateFromSelectedTargetType_MAX = 3,

};

// Enum ModelingComponents.EDynamicMeshTangentCalcType
enum class ModelingComponents_EDynamicMeshTangentCalcType : uint8_t
{
	EDynamicMeshTangentCalcType__NoTangents = 0,
	EDynamicMeshTangentCalcType__AutoCalculated = 1,
	EDynamicMeshTangentCalcType__ExternallyCalculated = 2,
	EDynamicMeshTangentCalcType__EDynamicMeshTangentCalcType_MAX = 3,

};

// Enum ModelingComponents.EMultiTransformerMode
enum class ModelingComponents_EMultiTransformerMode : uint8_t
{
	EMultiTransformerMode__DefaultGizmo = 0,
	EMultiTransformerMode__QuickAxisTranslation = 1,
	EMultiTransformerMode__EMultiTransformerMode_MAX = 2,

};

// Enum ModelingComponents.EHandleSourcesMethod
enum class ModelingComponents_EHandleSourcesMethod : uint8_t
{
	EHandleSourcesMethod__DeleteSources = 0,
	EHandleSourcesMethod__HideSources = 1,
	EHandleSourcesMethod__KeepSources = 2,
	EHandleSourcesMethod__EHandleSourcesMethod_MAX = 3,

};

// Enum ModelingComponents.ESpaceCurveControlPointFalloffType
enum class ModelingComponents_ESpaceCurveControlPointFalloffType : uint8_t
{
	ESpaceCurveControlPointFalloffType__Linear = 0,
	ESpaceCurveControlPointFalloffType__Smooth = 1,
	ESpaceCurveControlPointFalloffType__ESpaceCurveControlPointFalloffType_MAX = 2,

};

// Enum ModelingComponents.ESpaceCurveControlPointOriginMode
enum class ModelingComponents_ESpaceCurveControlPointOriginMode : uint8_t
{
	ESpaceCurveControlPointOriginMode__Shared = 0,
	ESpaceCurveControlPointOriginMode__First = 1,
	ESpaceCurveControlPointOriginMode__Last = 2,
	ESpaceCurveControlPointOriginMode__ESpaceCurveControlPointOriginMode_MAX = 3,

};

// Enum ModelingComponents.ESpaceCurveControlPointTransformMode
enum class ModelingComponents_ESpaceCurveControlPointTransformMode : uint8_t
{
	ESpaceCurveControlPointTransformMode__Shared = 0,
	ESpaceCurveControlPointTransformMode__PerVertex = 1,
	ESpaceCurveControlPointTransformMode__ESpaceCurveControlPointTransformMode_MAX = 2,

};

// Enum ModelingComponents.EUVLayoutPreviewSide
enum class ModelingComponents_EUVLayoutPreviewSide : uint8_t
{
	EUVLayoutPreviewSide__Left     = 0,
	EUVLayoutPreviewSide__Right    = 1,
	EUVLayoutPreviewSide__EUVLayoutPreviewSide_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ModelingComponents.RenderableTriangleVertex
// 0x0024
struct FRenderableTriangleVertex
{
	struct FVector                                     position;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   UV;                                                        // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Normal;                                                    // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      Color;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct ModelingComponents.RenderableTriangle
// 0x0078
struct FRenderableTriangle
{
	class UMaterialInterface*                          Material;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRenderableTriangleVertex                   Vertex0;                                                   // 0x0008(0x0024) (NoDestructor, NativeAccessSpecifierPublic)
	struct FRenderableTriangleVertex                   Vertex1;                                                   // 0x002C(0x0024) (NoDestructor, NativeAccessSpecifierPublic)
	struct FRenderableTriangleVertex                   Vertex2;                                                   // 0x0050(0x0024) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_005S[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
