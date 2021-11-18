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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Pickup_ViceCity.BP_Pickup_ViceCity_C
// 0x0008 (FullSize[0x02E8] - InheritedSize[0x02E0])
class ABP_Pickup_ViceCity_C : public ABP_Pickup_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Pickup_ViceCity.BP_Pickup_ViceCity_C");
		return ptr;
	}



	void GetMeshOverrideData(class UStaticMesh* Mesh, bool* Found, struct FColor* lightColor, float* LightAttenuationRadius);
	void SetPickupLight(bool bOn);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Pickup_ViceCity(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
