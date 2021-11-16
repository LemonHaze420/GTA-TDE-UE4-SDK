// Name: SanAndreas, Version: 1.0.0

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
//		Name   -> Function UI_HUD_Text_Bar_SA.UI_HUD_Text_Bar_SA_C.SetStatName
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_HUD_Text_Bar_SA_C::SetStatName(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Text_Bar_SA.UI_HUD_Text_Bar_SA_C.SetStatName");

	UUI_HUD_Text_Bar_SA_C_SetStatName_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Text_Bar_SA.UI_HUD_Text_Bar_SA_C.SetBarPercent
//		Flags  -> ()
// Parameters:
//		float                                              Percent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Text_Bar_SA_C::SetBarPercent(float Percent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Text_Bar_SA.UI_HUD_Text_Bar_SA_C.SetBarPercent");

	UUI_HUD_Text_Bar_SA_C_SetBarPercent_Params params {};
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Text_Bar_SA.UI_HUD_Text_Bar_SA_C.Construct
//		Flags  -> ()
void UUI_HUD_Text_Bar_SA_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Text_Bar_SA.UI_HUD_Text_Bar_SA_C.Construct");

	UUI_HUD_Text_Bar_SA_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Text_Bar_SA.UI_HUD_Text_Bar_SA_C.ExecuteUbergraph_UI_HUD_Text_Bar_SA
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Text_Bar_SA_C::ExecuteUbergraph_UI_HUD_Text_Bar_SA(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Text_Bar_SA.UI_HUD_Text_Bar_SA_C.ExecuteUbergraph_UI_HUD_Text_Bar_SA");

	UUI_HUD_Text_Bar_SA_C_ExecuteUbergraph_UI_HUD_Text_Bar_SA_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
