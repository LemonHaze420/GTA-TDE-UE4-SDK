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

// BlueprintGeneratedClass BP_Pickup_ViceCity_Weapon.BP_Pickup_ViceCity_Weapon_C
// 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
class ABP_Pickup_ViceCity_Weapon_C : public ABP_Pickup_ViceCity_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Pickup_ViceCity_Weapon.BP_Pickup_ViceCity_Weapon_C");
		return ptr;
	}



	void SetPickupColor(const struct FColor& Color);
	void ExecuteUbergraph_BP_Pickup_ViceCity_Weapon(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
