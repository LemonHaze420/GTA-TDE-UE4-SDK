#pragma once

// Name: GTA III, Version: 1.0.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetMeshComp
struct ABP_Vehicle_Cinematic_Base_C_GetMeshComp_Params
{
	class USkinnedMeshComponent*                       MeshComp;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetSpecialLightMaterial
struct ABP_Vehicle_Cinematic_Base_C_GetSpecialLightMaterial_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceConstant*                   On_Mat;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceConstant*                   Off_Mat;                                                   // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.UpdateMaterialForSpecialLight
struct ABP_Vehicle_Cinematic_Base_C_UpdateMaterialForSpecialLight_Params
{
	TEnumAsByte<GTABase_EFSpecialLightType>            LightType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOn;                                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetLicenseBaseScale
struct ABP_Vehicle_Cinematic_Base_C_GetLicenseBaseScale_Params
{
	struct FVector2D                                   Out;                                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.Setup Heli Spot Light
struct ABP_Vehicle_Cinematic_Base_C_Setup_Heli_Spot_Light_Params
{
	class UBP_HelicopterSpotLight_C*                   SpotLight;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Target;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SocketName;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetSirenClass
struct ABP_Vehicle_Cinematic_Base_C_GetSirenClass_Params
{
	bool                                               Left;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      LightClass;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Socket;                                                    // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetupSpecialLight
struct ABP_Vehicle_Cinematic_Base_C_SetupSpecialLight_Params
{
	struct FName                                       SocketName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULocalLightComponent*                        LightComp;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FlipX;                                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetSpecialLightPointer
struct ABP_Vehicle_Cinematic_Base_C_GetSpecialLightPointer_Params
{
	TEnumAsByte<GTABase_EFSpecialLightType>            Type;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                        Light;                                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.UpdateSpecialLight
struct ABP_Vehicle_Cinematic_Base_C_UpdateSpecialLight_Params
{
	TEnumAsByte<GTABase_EFSpecialLightType>            LightType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldEnable;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetSpecialLightInfo
struct ABP_Vehicle_Cinematic_Base_C_GetSpecialLightInfo_Params
{
	TEnumAsByte<GTABase_EFSpecialLightType>            LightType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               success;                                                   // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       SocketName;                                                // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ComponentClass;                                            // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetTaxiLight
struct ABP_Vehicle_Cinematic_Base_C_SetTaxiLight_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetLicensePlateMI
struct ABP_Vehicle_Cinematic_Base_C_GetLicensePlateMI_Params
{
	class UMaterialInstanceConstant*                   Out_MI;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetLicensePlateScale
struct ABP_Vehicle_Cinematic_Base_C_GetLicensePlateScale_Params
{
	struct FVector2D                                   OutScale;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetLicensePlate
struct ABP_Vehicle_Cinematic_Base_C_SetLicensePlate_Params
{
	struct FString                                     WithText;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetupHeadlightOption
struct ABP_Vehicle_Cinematic_Base_C_SetupHeadlightOption_Params
{
	struct FGTAHeadlightSetting                        Setting;                                                   // 0x0000(0x0014)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetMaterialsAsScorched
struct ABP_Vehicle_Cinematic_Base_C_SetMaterialsAsScorched_Params
{
	TArray<class UMaterialInterface*>                  Materials;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UPrimitiveComponent*                         Mesh;                                                      // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetVehicleLightMaterials
struct ABP_Vehicle_Cinematic_Base_C_GetVehicleLightMaterials_Params
{
	int                                                Light_Index;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceConstant*                   On_Material;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceConstant*                   Off_Material;                                              // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetLightMaterials
struct ABP_Vehicle_Cinematic_Base_C_GetLightMaterials_Params
{
	int                                                LightIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceConstant*                   OnMaterial;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceConstant*                   OffMaterial;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.GetSearchMaterials
struct ABP_Vehicle_Cinematic_Base_C_GetSearchMaterials_Params
{
	TArray<class UMaterialInstanceConstant*>           Materials;                                                 // 0x0000(0x0010)  (Parm, OutParm)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.IsBodyMaterial
struct ABP_Vehicle_Cinematic_Base_C_IsBodyMaterial_Params
{
	class UMaterialInterface*                          Mat;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsBody;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.EnableLight
struct ABP_Vehicle_Cinematic_Base_C_EnableLight_Params
{
	bool                                               IsEnabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ULocalLightComponent*                        LightComp;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                materialIndex;                                             // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceConstant*                   Material_On;                                               // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceConstant*                   Material_Off;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetupLight
struct ABP_Vehicle_Cinematic_Base_C_SetupLight_Params
{
	struct FName                                       SocketName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULocalLightComponent*                        LightComp;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FlipX;                                                     // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                materialIndex;                                             // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceConstant*                   MaterialSearch;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetCarLights
struct ABP_Vehicle_Cinematic_Base_C_SetCarLights_Params
{
	bool                                               bLeftHeadlight;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bRightHeadlight;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bLeftTaillight;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bRightTaillight;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetupVehicleBP
struct ABP_Vehicle_Cinematic_Base_C_SetupVehicleBP_Params
{
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetScorched
struct ABP_Vehicle_Cinematic_Base_C_SetScorched_Params
{
	bool                                               scorched;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.BoneSetAsDamaged
struct ABP_Vehicle_Cinematic_Base_C_BoneSetAsDamaged_Params
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bDamaged;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.SetSpecialCarLights
struct ABP_Vehicle_Cinematic_Base_C_SetSpecialCarLights_Params
{
	TEnumAsByte<GTABase_EFSpecialLightType>            LightToModify;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEnable;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.MeshBrokenNearby
struct ABP_Vehicle_Cinematic_Base_C_MeshBrokenNearby_Params
{
	struct FVector                                     EventLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.CheckIfPhysStateCanBeDestroyed
struct ABP_Vehicle_Cinematic_Base_C_CheckIfPhysStateCanBeDestroyed_Params
{
};

// Function BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C.ExecuteUbergraph_BP_Vehicle_Cinematic_Base
struct ABP_Vehicle_Cinematic_Base_C_ExecuteUbergraph_BP_Vehicle_Cinematic_Base_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
