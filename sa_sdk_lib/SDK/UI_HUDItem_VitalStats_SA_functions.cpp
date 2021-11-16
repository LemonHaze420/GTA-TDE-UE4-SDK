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
//		Name   -> Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.ChangeContentSize
//		Flags  -> ()
// Parameters:
//		bool                                               IsLarge                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUDItem_VitalStats_SA_C::ChangeContentSize(bool IsLarge)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.ChangeContentSize");

	UUI_HUDItem_VitalStats_SA_C_ChangeContentSize_Params params {};
	params.IsLarge = IsLarge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.DestroyStatBars
//		Flags  -> ()
void UUI_HUDItem_VitalStats_SA_C::DestroyStatBars()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.DestroyStatBars");

	UUI_HUDItem_VitalStats_SA_C_DestroyStatBars_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.CreateStatBars
//		Flags  -> ()
// Parameters:
void UUI_HUDItem_VitalStats_SA_C::CreateStatBars()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.CreateStatBars");

	UUI_HUDItem_VitalStats_SA_C_CreateStatBars_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.Construct
//		Flags  -> ()
void UUI_HUDItem_VitalStats_SA_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.Construct");

	UUI_HUDItem_VitalStats_SA_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.CustomFunctionWithFloats
//		Flags  -> ()
// Parameters:
//		struct FString                                     FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TArray<float>                                      Floats                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_HUDItem_VitalStats_SA_C::CustomFunctionWithFloats(const struct FString& FunctionName, TArray<float> Floats)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.CustomFunctionWithFloats");

	UUI_HUDItem_VitalStats_SA_C_CustomFunctionWithFloats_Params params {};
	params.FunctionName = FunctionName;
	params.Floats = Floats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.CustomFunctionWithStrings
//		Flags  -> ()
// Parameters:
//		struct FString                                     FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TArray<struct FString>                             Strings                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_HUDItem_VitalStats_SA_C::CustomFunctionWithStrings(const struct FString& FunctionName, TArray<struct FString> Strings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.CustomFunctionWithStrings");

	UUI_HUDItem_VitalStats_SA_C_CustomFunctionWithStrings_Params params {};
	params.FunctionName = FunctionName;
	params.Strings = Strings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.SetTotalWidgetColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_VitalStats_SA_C::SetTotalWidgetColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.SetTotalWidgetColor");

	UUI_HUDItem_VitalStats_SA_C_SetTotalWidgetColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.OnSynchronizeProperties
//		Flags  -> ()
void UUI_HUDItem_VitalStats_SA_C::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.OnSynchronizeProperties");

	UUI_HUDItem_VitalStats_SA_C_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.SetContentText
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_VitalStats_SA_C::SetContentText(const struct FText& Text, const struct FLinearColor& FontColorOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.SetContentText");

	UUI_HUDItem_VitalStats_SA_C_SetContentText_Params params {};
	params.Text = Text;
	params.FontColorOverride = FontColorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.SetContentTextAdditional
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_VitalStats_SA_C::SetContentTextAdditional(const struct FText& Text, const struct FLinearColor& FontColorOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.SetContentTextAdditional");

	UUI_HUDItem_VitalStats_SA_C_SetContentTextAdditional_Params params {};
	params.Text = Text;
	params.FontColorOverride = FontColorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.ExecuteUbergraph_UI_HUDItem_VitalStats_SA
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_VitalStats_SA_C::ExecuteUbergraph_UI_HUDItem_VitalStats_SA(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C.ExecuteUbergraph_UI_HUDItem_VitalStats_SA");

	UUI_HUDItem_VitalStats_SA_C_ExecuteUbergraph_UI_HUDItem_VitalStats_SA_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
