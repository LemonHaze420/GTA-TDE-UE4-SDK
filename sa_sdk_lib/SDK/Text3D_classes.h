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
// Classes
//---------------------------------------------------------------------------

// Class Text3D.Text3DActor
// 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
class AText3DActor : public AActor
{
public:
	class UText3DComponent*                            Text3DComponent;                                           // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Text3D.Text3DActor");
		return ptr;
	}



};

// Class Text3D.Text3DCharacterTransform
// 0x0078 (FullSize[0x0270] - InheritedSize[0x01F8])
class UText3DCharacterTransform : public USceneComponent
{
public:
	unsigned char                                      UnknownData_VN8U[0x4];                                     // 0x01F8(0x0004) Fix Super Size
	float                                              LocationProgress;                                          // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Text3D_EText3DCharacterEffectOrder                 LocationOrder;                                             // 0x0200(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TNYB[0x3];                                     // 0x0201(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LocationRange;                                             // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LocationDistance;                                          // 0x0208(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bScaleEnabled;                                             // 0x0214(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_F8OJ[0x3];                                     // 0x0215(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ScaleProgress;                                             // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Text3D_EText3DCharacterEffectOrder                 ScaleOrder;                                                // 0x021C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SRC2[0x3];                                     // 0x021D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ScaleRange;                                                // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ScaleBegin;                                                // 0x0224(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ScaleEnd;                                                  // 0x0230(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRotateEnabled;                                            // 0x023C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D069[0x3];                                     // 0x023D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RotateProgress;                                            // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Text3D_EText3DCharacterEffectOrder                 RotateOrder;                                               // 0x0244(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IH37[0x3];                                     // 0x0245(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RotateRange;                                               // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    RotateBegin;                                               // 0x024C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                                    RotateEnd;                                                 // 0x0258(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VP7U[0xC];                                     // 0x0264(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Text3D.Text3DCharacterTransform");
		return ptr;
	}



	void SetScaleRange(float Range);
	void SetScaleProgress(float Progress);
	void SetScaleOrder(Text3D_EText3DCharacterEffectOrder Order);
	void SetScaleEnd(const struct FVector& Value);
	void SetScaleEnabled(bool bEnabled);
	void SetScaleBegin(const struct FVector& Value);
	void SetRotateRange(float Range);
	void SetRotateProgress(float Progress);
	void SetRotateOrder(Text3D_EText3DCharacterEffectOrder Order);
	void SetRotateEnd(const struct FRotator& Value);
	void SetRotateEnabled(bool bEnabled);
	void SetRotateBegin(const struct FRotator& Value);
	void SetLocationRange(float Range);
	void SetLocationProgress(float Progress);
	void SetLocationOrder(Text3D_EText3DCharacterEffectOrder Order);
	void SetLocationEnabled(bool bEnabled);
	void SetLocationDistance(const struct FVector& Distance);
};

// Class Text3D.Text3DComponent
// 0x00E8 (FullSize[0x02E0] - InheritedSize[0x01F8])
class UText3DComponent : public USceneComponent
{
public:
	struct FText                                       Text;                                                      // 0x01F8(0x0018) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              Extrude;                                                   // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Bevel;                                                     // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Text3D_EText3DBevelType                            BevelType;                                                 // 0x0218(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RR1W[0x3];                                     // 0x0219(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BevelSegments;                                             // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOutline;                                                  // 0x0220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4SY1[0x7];                                     // 0x0221(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          FrontMaterial;                                             // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          BevelMaterial;                                             // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          ExtrudeMaterial;                                           // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          BackMaterial;                                              // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFont*                                       Font;                                                      // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Text3D_EText3DHorizontalTextAlignment              HorizontalAlignment;                                       // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Text3D_EText3DVerticalTextAlignment                VerticalAlignment;                                         // 0x0251(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WRSD[0x2];                                     // 0x0252(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Kerning;                                                   // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LineSpacing;                                               // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WordSpacing;                                               // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasMaxWidth;                                              // 0x0260(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S7MU[0x3];                                     // 0x0261(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxWidth;                                                  // 0x0264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasMaxHeight;                                             // 0x0268(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CSCF[0x3];                                     // 0x0269(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MaxHeight;                                                 // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bScaleProportionally;                                      // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GI7U[0x7];                                     // 0x0271(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             TextRoot;                                                  // 0x0278(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M3KV[0x40];                                    // 0x0280(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class USceneComponent*>                     CharacterKernings;                                         // 0x02C0(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UStaticMeshComponent*>                CharacterMeshes;                                           // 0x02D0(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Text3D.Text3DComponent");
		return ptr;
	}



	void SetWordSpacing(float Value);
	void SetVerticalAlignment(Text3D_EText3DVerticalTextAlignment Value);
	void SetText(const struct FText& Value);
	void SetScaleProportionally(bool Value);
	void SetOutline(bool bValue);
	void SetMaxWidth(float Value);
	void SetMaxHeight(float Value);
	void SetLineSpacing(float Value);
	void SetKerning(float Value);
	void SetHorizontalAlignment(Text3D_EText3DHorizontalTextAlignment Value);
	void SetHasMaxWidth(bool Value);
	void SetHasMaxHeight(bool Value);
	void SetFrontMaterial(class UMaterialInterface* Value);
	void SetFreeze(bool bFreeze);
	void SetFont(class UFont* InFont);
	void SetExtrudeMaterial(class UMaterialInterface* Value);
	void SetExtrude(float Value);
	void SetBevelType(Text3D_EText3DBevelType Value);
	void SetBevelSegments(int Value);
	void SetBevelMaterial(class UMaterialInterface* Value);
	void SetBevel(float Value);
	void SetBackMaterial(class UMaterialInterface* Value);
};

// Class Text3D.Text3DEngineSubsystem
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UText3DEngineSubsystem : public UEngineSubsystem
{
public:
	class UMaterial*                                   DefaultMaterial;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<uint32_t, struct FCachedFontData>             CachedFonts;                                               // 0x0038(0x0050) (NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AD6W[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Text3D.Text3DEngineSubsystem");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
