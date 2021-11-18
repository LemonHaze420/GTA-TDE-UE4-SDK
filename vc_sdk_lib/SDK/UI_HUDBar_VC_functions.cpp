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
//		Name   -> Function UI_HUDBar_VC.UI_HUDBar_VC_C.SetProgres
//		Flags  -> ()
// Parameters:
//		float                                              TopBar                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              BottomBar                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsPositive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUDBar_VC_C::SetProgres(float TopBar, float BottomBar, bool IsPositive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDBar_VC.UI_HUDBar_VC_C.SetProgres");

	UUI_HUDBar_VC_C_SetProgres_Params params {};
	params.TopBar = TopBar;
	params.BottomBar = BottomBar;
	params.IsPositive = IsPositive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
