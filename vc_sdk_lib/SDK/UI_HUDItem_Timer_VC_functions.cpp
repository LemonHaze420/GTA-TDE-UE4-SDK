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
//		Name   -> Function UI_HUDItem_Timer_VC.UI_HUDItem_Timer_VC_C.CreateBar
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<UMG_ESlateSizeRule>                    Size_Rule                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector2D                                   SizeBoxOverride                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Timer_VC_C::CreateBar(TEnumAsByte<UMG_ESlateSizeRule> Size_Rule, const struct FVector2D& SizeBoxOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Timer_VC.UI_HUDItem_Timer_VC_C.CreateBar");

	UUI_HUDItem_Timer_VC_C_CreateBar_Params params {};
	params.Size_Rule = Size_Rule;
	params.SizeBoxOverride = SizeBoxOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
