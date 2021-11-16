#pragma once

// Name: SanAndreas, Version: 1.0.0


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

// Enum Text3D.EText3DBevelType
enum class Text3D_EText3DBevelType : uint8_t
{
	EText3DBevelType__Linear       = 0,
	EText3DBevelType__HalfCircle   = 1,
	EText3DBevelType__Convex       = 2,
	EText3DBevelType__Concave      = 3,
	EText3DBevelType__OneStep      = 4,
	EText3DBevelType__TwoSteps     = 5,
	EText3DBevelType__Engraved     = 6,
	EText3DBevelType__EText3DBevelType_MAX = 7,

};

// Enum Text3D.EText3DCharacterEffectOrder
enum class Text3D_EText3DCharacterEffectOrder : uint8_t
{
	EText3DCharacterEffectOrder__Normal = 0,
	EText3DCharacterEffectOrder__FromCenter = 1,
	EText3DCharacterEffectOrder__ToCenter = 2,
	EText3DCharacterEffectOrder__Opposite = 3,
	EText3DCharacterEffectOrder__EText3DCharacterEffectOrder_MAX = 4,

};

// Enum Text3D.EText3DHorizontalTextAlignment
enum class Text3D_EText3DHorizontalTextAlignment : uint8_t
{
	EText3DHorizontalTextAlignment__Left = 0,
	EText3DHorizontalTextAlignment__Center = 1,
	EText3DHorizontalTextAlignment__Right = 2,
	EText3DHorizontalTextAlignment__EText3DHorizontalTextAlignment_MAX = 3,

};

// Enum Text3D.EText3DVerticalTextAlignment
enum class Text3D_EText3DVerticalTextAlignment : uint8_t
{
	EText3DVerticalTextAlignment__FirstLine = 0,
	EText3DVerticalTextAlignment__Top = 1,
	EText3DVerticalTextAlignment__Center = 2,
	EText3DVerticalTextAlignment__Bottom = 3,
	EText3DVerticalTextAlignment__EText3DVerticalTextAlignment_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Text3D.CachedFontMeshes
// 0x0060
struct FCachedFontMeshes
{
	TMap<uint32_t, class UStaticMesh*>                 Glyphs;                                                    // 0x0000(0x0050) (NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UXPA[0x10];                                    // 0x0050(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Text3D.CachedFontData
// 0x00E8
struct FCachedFontData
{
	class UFont*                                       Font;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<uint32_t, struct FCachedFontMeshes>           Meshes;                                                    // 0x0008(0x0050) (NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LNYZ[0x90];                                    // 0x0058(0x0090) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
