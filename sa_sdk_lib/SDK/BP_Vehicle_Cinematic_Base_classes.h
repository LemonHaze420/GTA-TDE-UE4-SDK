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

// BlueprintGeneratedClass BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C
// 0x007C (FullSize[0x04B4] - InheritedSize[0x0438])
class ABP_Vehicle_Cinematic_Base_C : public AGTAVehicleCinematic
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0438(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                         HeadLeft;                                                  // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USpotLightComponent*                         TailLeft;                                                  // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USpotLightComponent*                         HeadRight;                                                 // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USpotLightComponent*                         TailRight;                                                 // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int                                                HeadlightLeftMat;                                          // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HeadlightRightMat;                                         // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TaillightLeftMat;                                          // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TaillightRightMat;                                         // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsScorched;                                                // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsDecalMode;                                               // 0x0471(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_H2U4[0x6];                                     // 0x0472(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UProceduralMeshComponent*>            Plates;                                                    // 0x0478(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UClass*                                      PointLightClass;                                           // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UPointLightComponent*>                SpecialLights;                                             // 0x0490(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int                                                LeftSirenMat;                                              // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RightSirenMat;                                             // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherSirenMat;                                             // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Reflect;                                                   // 0x04AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8NJR[0x3];                                     // 0x04AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeOfLastBreak;                                           // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Vehicle_Cinematic_Base.BP_Vehicle_Cinematic_Base_C");
		return ptr;
	}



	void GetMeshComp(class USkinnedMeshComponent** MeshComp);
	void GetSpecialLightMaterial(int Index, class UMaterialInstanceConstant** On_Mat, class UMaterialInstanceConstant** Off_Mat);
	void UpdateMaterialForSpecialLight(TEnumAsByte<GTABase_EFSpecialLightType> LightType, bool IsOn);
	void GetLicenseBaseScale(struct FVector2D* Out);
	void Setup_Heli_Spot_Light(class UBP_HelicopterSpotLight_C* SpotLight, class AActor* Target, const struct FName& SocketName);
	void GetSirenClass(bool Left, class UClass** LightClass, struct FName* Socket);
	void SetupSpecialLight(const struct FName& SocketName, class ULocalLightComponent* LightComp, bool FlipX);
	void GetSpecialLightPointer(TEnumAsByte<GTABase_EFSpecialLightType> Type, class UPointLightComponent** Light);
	void UpdateSpecialLight(TEnumAsByte<GTABase_EFSpecialLightType> LightType, bool ShouldEnable);
	void GetSpecialLightInfo(TEnumAsByte<GTABase_EFSpecialLightType> LightType, bool* success, struct FName* SocketName, class UClass** ComponentClass);
	void SetTaxiLight(bool bEnabled);
	void GetLicensePlateMI(class UMaterialInstanceConstant** Out_MI);
	void GetLicensePlateScale(struct FVector2D* OutScale);
	void SetLicensePlate(const struct FString& WithText);
	void SetupHeadlightOption(const struct FGTAHeadlightSetting& Setting);
	void SetMaterialsAsScorched(TArray<class UMaterialInterface*>* Materials, class UPrimitiveComponent* Mesh);
	void GetVehicleLightMaterials(int Light_Index, class UMaterialInstanceConstant** On_Material, class UMaterialInstanceConstant** Off_Material);
	void GetLightMaterials(int LightIndex, class UMaterialInstanceConstant** OnMaterial, class UMaterialInstanceConstant** OffMaterial);
	void GetSearchMaterials(TArray<class UMaterialInstanceConstant*>* Materials);
	void IsBodyMaterial(class UMaterialInterface* Mat, bool* IsBody);
	void EnableLight(bool IsEnabled, class ULocalLightComponent* LightComp, int materialIndex, class UMaterialInstanceConstant* Material_On, class UMaterialInstanceConstant* Material_Off);
	void SetupLight(const struct FName& SocketName, class ULocalLightComponent* LightComp, bool FlipX, int* materialIndex, class UMaterialInstanceConstant* MaterialSearch);
	void SetCarLights(bool bLeftHeadlight, bool bRightHeadlight, bool bLeftTaillight, bool bRightTaillight);
	void SetupVehicleBP();
	void SetScorched(bool scorched);
	void BoneSetAsDamaged(const struct FName& BoneName, bool bDamaged);
	void SetSpecialCarLights(TEnumAsByte<GTABase_EFSpecialLightType> LightToModify, bool bEnable);
	void MeshBrokenNearby(const struct FVector& EventLocation);
	void CheckIfPhysStateCanBeDestroyed();
	void ExecuteUbergraph_BP_Vehicle_Cinematic_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
