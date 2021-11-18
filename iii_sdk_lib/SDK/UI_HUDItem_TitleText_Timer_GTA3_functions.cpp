// Name: GTA III, Version: 1.0.0

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
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUDItem_TitleText_Timer_GTA3.UI_HUDItem_TitleText_Timer_GTA3_C.CreateBar
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<UMG_ESlateSizeRule>                    Size_Rule                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector2D                                   SizeBoxOverride                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_TitleText_Timer_GTA3_C::CreateBar(TEnumAsByte<UMG_ESlateSizeRule> Size_Rule, const struct FVector2D& SizeBoxOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_GTA3.UI_HUDItem_TitleText_Timer_GTA3_C.CreateBar");

	UUI_HUDItem_TitleText_Timer_GTA3_C_CreateBar_Params params {};
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
