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

// BlueprintGeneratedClass BP_Pickup_SanAndreas.BP_Pickup_SanAndreas_C
// 0x0000 (FullSize[0x02E0] - InheritedSize[0x02E0])
class ABP_Pickup_SanAndreas_C : public ABP_Pickup_Base_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Pickup_SanAndreas.BP_Pickup_SanAndreas_C");
		return ptr;
	}



	void GetMeshOverrideData(class UStaticMesh* Mesh, bool* Found, struct FColor* lightColor, float* LightAttenuationRadius);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
