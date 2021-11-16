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

// BlueprintGeneratedClass BP_TargetHalo.BP_TargetHalo_C
// 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
class ABP_TargetHalo_C : public AGTATargetHalo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_TargetHalo.BP_TargetHalo_C");
		return ptr;
	}



	void UpdateTargetComponent(class UMeshComponent* Component, TEnumAsByte<GTABase_ETargetHighlightType> HighlightType, float Alpha);
	void SetupTargetComponent(class UMeshComponent* Component, TEnumAsByte<GTABase_ETargetHighlightType> HighlightType, float InitialAlpha);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
