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

// Class HairStrandsCore.GroomActor
// 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
class AGroomActor : public AActor
{
public:
	class UGroomComponent*                             GroomComponent;                                            // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HairStrandsCore.GroomActor");
		return ptr;
	}



};

// Class HairStrandsCore.GroomAsset
// 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
class UGroomAsset : public UObject
{
public:
	unsigned char                                      UnknownData_D9CY[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FHairGroupInfoWithVisibility>        HairGroupsInfo;                                            // 0x0030(0x0010) (Edit, EditFixedSize, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FHairGroupsRendering>                HairGroupsRendering;                                       // 0x0040(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FHairGroupsPhysics>                  HairGroupsPhysics;                                         // 0x0050(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FHairGroupsInterpolation>            HairGroupsInterpolation;                                   // 0x0060(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FHairGroupsLOD>                      HairGroupsLOD;                                             // 0x0070(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FHairGroupsCardsSourceDescription>   HairGroupsCards;                                           // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FHairGroupsMeshesSourceDescription>  HairGroupsMeshes;                                          // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FHairGroupsMaterial>                 HairGroupsMaterials;                                       // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PY86[0x10];                                    // 0x00B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               EnableGlobalInterpolation;                                 // 0x00C0(0x0001) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	HairStrandsCore_EGroomInterpolationType            HairInterpolationType;                                     // 0x00C1(0x0001) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	HairStrandsCore_EHairLODSelectionType              LODSelectionType;                                          // 0x00C2(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W8EN[0x1];                                     // 0x00C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPerPlatformInt                             MinLOD;                                                    // 0x00C4(0x0004) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerPlatformBool                            DisableBelowMinLodStripping;                               // 0x00C8(0x0001) (Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QV37[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      EffectiveLODBias;                                          // 0x00D0(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UAssetUserData*>                      AssetUserData;                                             // 0x00E0(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QNYU[0x8];                                     // 0x00F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HairStrandsCore.GroomAsset");
		return ptr;
	}



};

// Class HairStrandsCore.GroomAssetImportData
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UGroomAssetImportData : public UAssetImportData
{
public:
	class UGroomImportOptions*                         ImportOptions;                                             // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HairStrandsCore.GroomAssetImportData");
		return ptr;
	}



};

// Class HairStrandsCore.GroomBindingAsset
// 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
class UGroomBindingAsset : public UObject
{
public:
	class UGroomAsset*                                 Groom;                                                     // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               SourceSkeletalMesh;                                        // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               TargetSkeletalMesh;                                        // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumInterpolationPoints;                                    // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MatchingSection;                                           // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGoomBindingGroupInfo>               GroupInfos;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KUG5[0x48];                                    // 0x0058(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HairStrandsCore.GroomBindingAsset");
		return ptr;
	}



};

// Class HairStrandsCore.GroomBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGroomBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HairStrandsCore.GroomBlueprintLibrary");
		return ptr;
	}



	class UGroomBindingAsset* CreateNewGroomBindingAssetWithPath(const struct FString& InDesiredPackagePath, class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int InMatchingSection);
	class UGroomBindingAsset* CreateNewGroomBindingAsset(class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int InMatchingSection);
};

// Class HairStrandsCore.GroomComponent
// 0x0110 (FullSize[0x0580] - InheritedSize[0x0470])
class UGroomComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData_38CQ[0x8];                                     // 0x0470(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGroomAsset*                                 GroomAsset;                                                // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNiagaraComponent*>                   NiagaraComponents;                                         // 0x0480(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               SourceSkeletalMesh;                                        // 0x0490(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGroomBindingAsset*                          BindingAsset;                                              // 0x0498(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicsAsset*                               PhysicsAsset;                                              // 0x04A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          Strands_DebugMaterial;                                     // 0x04A8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          Strands_DefaultMaterial;                                   // 0x04B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          Cards_DefaultMaterial;                                     // 0x04B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          Meshes_DefaultMaterial;                                    // 0x04C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                              AngularSpringsSystem;                                      // 0x04C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                              CosseratRodsSystem;                                        // 0x04D0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AttachmentName;                                            // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Interp, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WCCV[0x48];                                    // 0x04E8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FHairGroupDesc>                      GroomGroupsDesc;                                           // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L4R4[0x40];                                    // 0x0540(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HairStrandsCore.GroomComponent");
		return ptr;
	}



	void SetGroomAsset(class UGroomAsset* Asset);
	void SetBindingAsset(class UGroomBindingAsset* InBinding);
};

// Class HairStrandsCore.GroomCreateBindingOptions
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UGroomCreateBindingOptions : public UObject
{
public:
	class USkeletalMesh*                               SourceSkeletalMesh;                                        // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               TargetSkeletalMesh;                                        // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumInterpolationPoints;                                    // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MatchingSection;                                           // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HairStrandsCore.GroomCreateBindingOptions");
		return ptr;
	}



};

// Class HairStrandsCore.GroomCreateFollicleMaskOptions
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UGroomCreateFollicleMaskOptions : public UObject
{
public:
	int                                                Resolution;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RootRadius;                                                // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFollicleMaskOptions>                Grooms;                                                    // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HairStrandsCore.GroomCreateFollicleMaskOptions");
		return ptr;
	}



};

// Class HairStrandsCore.GroomCreateStrandsTexturesOptions
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UGroomCreateStrandsTexturesOptions : public UObject
{
public:
	int                                                Resolution;                                                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	HairStrandsCore_EStrandsTexturesTraceType          TraceType;                                                 // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JURB[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TraceDistance;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	HairStrandsCore_EStrandsTexturesMeshType           MeshType;                                                  // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GR3U[0x3];                                     // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 StaticMesh;                                                // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               SkeletalMesh;                                              // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LodIndex;                                                  // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SectionIndex;                                              // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UVChannelIndex;                                            // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QVFL[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        GroupIndex;                                                // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HairStrandsCore.GroomCreateStrandsTexturesOptions");
		return ptr;
	}



};

// Class HairStrandsCore.GroomImportOptions
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UGroomImportOptions : public UObject
{
public:
	struct FGroomConversionSettings                    ConversionSettings;                                        // 0x0028(0x0018) (Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FHairGroupsInterpolation>            InterpolationSettings;                                     // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HairStrandsCore.GroomImportOptions");
		return ptr;
	}



};

// Class HairStrandsCore.GroomHairGroupsPreview
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UGroomHairGroupsPreview : public UObject
{
public:
	TArray<struct FGroomHairGroupPreview>              Groups;                                                    // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HairStrandsCore.GroomHairGroupsPreview");
		return ptr;
	}



};

// Class HairStrandsCore.NiagaraDataInterfaceHairStrands
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UNiagaraDataInterfaceHairStrands : public UNiagaraDataInterface
{
public:
	class UGroomAsset*                                 DefaultSource;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      SourceActor;                                               // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4N0Z[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HairStrandsCore.NiagaraDataInterfaceHairStrands");
		return ptr;
	}



};

// Class HairStrandsCore.NiagaraDataInterfacePhysicsAsset
// 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
class UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface
{
public:
	class UPhysicsAsset*                               DefaultSource;                                             // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      SourceActor;                                               // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_538N[0x20];                                    // 0x0048(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HairStrandsCore.NiagaraDataInterfacePhysicsAsset");
		return ptr;
	}



};

// Class HairStrandsCore.NiagaraDataInterfaceVelocityGrid
// 0x0010 (FullSize[0x00E8] - InheritedSize[0x00D8])
class UNiagaraDataInterfaceVelocityGrid : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                                  GridSize;                                                  // 0x00D8(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V4DK[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HairStrandsCore.NiagaraDataInterfaceVelocityGrid");
		return ptr;
	}



};

// Class HairStrandsCore.NiagaraDataInterfacePressureGrid
// 0x0000 (FullSize[0x00E8] - InheritedSize[0x00E8])
class UNiagaraDataInterfacePressureGrid : public UNiagaraDataInterfaceVelocityGrid
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class HairStrandsCore.NiagaraDataInterfacePressureGrid");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
