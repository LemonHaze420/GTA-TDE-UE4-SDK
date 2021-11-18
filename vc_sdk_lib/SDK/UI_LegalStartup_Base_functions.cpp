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
//		Name   -> Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.DoSkip
//		Flags  -> ()
// Parameters:
void UUI_LegalStartup_Base_C::DoSkip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.DoSkip");

	UUI_LegalStartup_Base_C_DoSkip_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.AllowMenuControl
//		Flags  -> ()
// Parameters:
//		bool                                               allow_menu_control                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_LegalStartup_Base_C::AllowMenuControl(bool* allow_menu_control)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.AllowMenuControl");

	UUI_LegalStartup_Base_C_AllowMenuControl_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (allow_menu_control != nullptr)
		*allow_menu_control = params.allow_menu_control;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.SetFocusToMenu
//		Flags  -> ()
// Parameters:
void UUI_LegalStartup_Base_C::SetFocusToMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.SetFocusToMenu");

	UUI_LegalStartup_Base_C_SetFocusToMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.UpdateSkipImage
//		Flags  -> ()
// Parameters:
//		bool                                               ValidImage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_LegalStartup_Base_C::UpdateSkipImage(bool* ValidImage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.UpdateSkipImage");

	UUI_LegalStartup_Base_C_UpdateSkipImage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ValidImage != nullptr)
		*ValidImage = params.ValidImage;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.Update Skip
//		Flags  -> ()
// Parameters:
//		bool                                               DidSkip                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_LegalStartup_Base_C::Update_Skip(bool* DidSkip)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.Update Skip");

	UUI_LegalStartup_Base_C_Update_Skip_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DidSkip != nullptr)
		*DidSkip = params.DidSkip;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.CleanupScreens
//		Flags  -> ()
void UUI_LegalStartup_Base_C::CleanupScreens()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.CleanupScreens");

	UUI_LegalStartup_Base_C_CleanupScreens_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.UpdateScreens
//		Flags  -> ()
// Parameters:
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_LegalStartup_Base_C::UpdateScreens(float dT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.UpdateScreens");

	UUI_LegalStartup_Base_C_UpdateScreens_Params params {};
	params.dT = dT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.CreateScreens
//		Flags  -> ()
// Parameters:
void UUI_LegalStartup_Base_C::CreateScreens()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.CreateScreens");

	UUI_LegalStartup_Base_C_CreateScreens_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.Construct
//		Flags  -> ()
void UUI_LegalStartup_Base_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.Construct");

	UUI_LegalStartup_Base_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_LegalStartup_Base_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.Tick");

	UUI_LegalStartup_Base_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.SetBackgroundColor
//		Flags  -> ()
// Parameters:
//		struct FSlateColor                                 TintColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_LegalStartup_Base_C::SetBackgroundColor(const struct FSlateColor& TintColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.SetBackgroundColor");

	UUI_LegalStartup_Base_C_SetBackgroundColor_Params params {};
	params.TintColor = TintColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.BndEvt__SkipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UUI_LegalStartup_Base_C::BndEvt__SkipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.BndEvt__SkipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_LegalStartup_Base_C_BndEvt__SkipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.ExecuteUbergraph_UI_LegalStartup_Base
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_LegalStartup_Base_C::ExecuteUbergraph_UI_LegalStartup_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.ExecuteUbergraph_UI_LegalStartup_Base");

	UUI_LegalStartup_Base_C_ExecuteUbergraph_UI_LegalStartup_Base_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
