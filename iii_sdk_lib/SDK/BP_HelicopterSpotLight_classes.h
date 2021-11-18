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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_HelicopterSpotLight.BP_HelicopterSpotLight_C
// 0x0010 (FullSize[0x0380] - InheritedSize[0x0370])
class UBP_HelicopterSpotLight_C : public USpotLightComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0370(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      FollowingActor;                                            // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_HelicopterSpotLight.BP_HelicopterSpotLight_C");
		return ptr;
	}



	void AddOffsetToTarget(const struct FVector& LocationIn, struct FVector* LocationOut);
	void UpdateLightPosition(float dT);
	void SetFollowingActor(class AActor* NewActor);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_HelicopterSpotLight(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
