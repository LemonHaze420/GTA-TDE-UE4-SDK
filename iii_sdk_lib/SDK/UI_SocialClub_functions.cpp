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
//		Name   -> Function UI_SocialClub.UI_SocialClub_C.CheckLoginStatus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_SocialClub_C::CheckLoginStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SocialClub.UI_SocialClub_C.CheckLoginStatus");

	UUI_SocialClub_C_CheckLoginStatus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SocialClub.UI_SocialClub_C.SetupHelpButtons
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UUI_SocialClub_C::SetupHelpButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SocialClub.UI_SocialClub_C.SetupHelpButtons");

	UUI_SocialClub_C_SetupHelpButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SocialClub.UI_SocialClub_C.GrabAchivementFocus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_SocialClub_C::GrabAchivementFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SocialClub.UI_SocialClub_C.GrabAchivementFocus");

	UUI_SocialClub_C_GrabAchivementFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SocialClub.UI_SocialClub_C.SetupButtons
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_SocialClub_C::SetupButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SocialClub.UI_SocialClub_C.SetupButtons");

	UUI_SocialClub_C_SetupButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SocialClub.UI_SocialClub_C.Button Checks
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_SocialClub_C::Button_Checks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SocialClub.UI_SocialClub_C.Button Checks");

	UUI_SocialClub_C_Button_Checks_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SocialClub.UI_SocialClub_C.HandleBack
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUI_SocialClub_C::HandleBack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SocialClub.UI_SocialClub_C.HandleBack");

	UUI_SocialClub_C_HandleBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SocialClub.UI_SocialClub_C.SetupBackground
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_SocialClub_C::SetupBackground()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SocialClub.UI_SocialClub_C.SetupBackground");

	UUI_SocialClub_C_SetupBackground_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SocialClub.UI_SocialClub_C.TakeFocus
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUI_SocialClub_C::TakeFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SocialClub.UI_SocialClub_C.TakeFocus");

	UUI_SocialClub_C_TakeFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SocialClub.UI_SocialClub_C.SetupScreens
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_SocialClub_C::SetupScreens()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SocialClub.UI_SocialClub_C.SetupScreens");

	UUI_SocialClub_C_SetupScreens_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SocialClub.UI_SocialClub_C.ShouldSkipEntry
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                EntryIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ShouldSkip                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SocialClub_C::ShouldSkipEntry(int EntryIndex, bool* ShouldSkip)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SocialClub.UI_SocialClub_C.ShouldSkipEntry");

	UUI_SocialClub_C_ShouldSkipEntry_Params params {};
	params.EntryIndex = EntryIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShouldSkip != nullptr)
		*ShouldSkip = params.ShouldSkip;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SocialClub.UI_SocialClub_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_SocialClub_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SocialClub.UI_SocialClub_C.Construct");

	UUI_SocialClub_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SocialClub.UI_SocialClub_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SocialClub_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SocialClub.UI_SocialClub_C.Tick");

	UUI_SocialClub_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SocialClub.UI_SocialClub_C.SetupLayout
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UGTAMainMenuUITemplate*                      Template                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SocialClub_C::SetupLayout(class UGTAMainMenuUITemplate* Template)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SocialClub.UI_SocialClub_C.SetupLayout");

	UUI_SocialClub_C_SetupLayout_Params params {};
	params.Template = Template;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SocialClub.UI_SocialClub_C.OpenAchivements
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               GrabFocus                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SocialClub_C::OpenAchivements(bool GrabFocus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SocialClub.UI_SocialClub_C.OpenAchivements");

	UUI_SocialClub_C_OpenAchivements_Params params {};
	params.GrabFocus = GrabFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SocialClub.UI_SocialClub_C.SetupSC
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UUI_SocialClub_C::SetupSC()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SocialClub.UI_SocialClub_C.SetupSC");

	UUI_SocialClub_C_SetupSC_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SocialClub.UI_SocialClub_C.ExecuteUbergraph_UI_SocialClub
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SocialClub_C::ExecuteUbergraph_UI_SocialClub(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SocialClub.UI_SocialClub_C.ExecuteUbergraph_UI_SocialClub");

	UUI_SocialClub_C_ExecuteUbergraph_UI_SocialClub_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
