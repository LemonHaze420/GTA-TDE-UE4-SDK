// Name: ViceCity, Version: 1.0.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Pickup_ViceCity_Weapon.BP_Pickup_ViceCity_Weapon_C.SetPickupColor
//		Flags  -> ()
// Parameters:
//		struct FColor                                      Color                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Pickup_ViceCity_Weapon_C::SetPickupColor(const struct FColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Pickup_ViceCity_Weapon.BP_Pickup_ViceCity_Weapon_C.SetPickupColor");

	ABP_Pickup_ViceCity_Weapon_C_SetPickupColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Pickup_ViceCity_Weapon.BP_Pickup_ViceCity_Weapon_C.ExecuteUbergraph_BP_Pickup_ViceCity_Weapon
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Pickup_ViceCity_Weapon_C::ExecuteUbergraph_BP_Pickup_ViceCity_Weapon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Pickup_ViceCity_Weapon.BP_Pickup_ViceCity_Weapon_C.ExecuteUbergraph_BP_Pickup_ViceCity_Weapon");

	ABP_Pickup_ViceCity_Weapon_C_ExecuteUbergraph_BP_Pickup_ViceCity_Weapon_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
