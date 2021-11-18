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
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.GetLanguageTab
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ULanguageOptions_C*                          OutLanguageTab                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                IndexInWidgetSelector                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MainMenu_C::GetLanguageTab(class ULanguageOptions_C** OutLanguageTab, int* IndexInWidgetSelector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.GetLanguageTab");

	UUI_MainMenu_C_GetLanguageTab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutLanguageTab != nullptr)
		*OutLanguageTab = params.OutLanguageTab;
	if (IndexInWidgetSelector != nullptr)
		*IndexInWidgetSelector = params.IndexInWidgetSelector;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.GetAccountPickerButton
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUI_DesignTimeUserWidget*                    AccountPickerButtonWidget                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MainMenu_C::GetAccountPickerButton(class UUI_DesignTimeUserWidget** AccountPickerButtonWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.GetAccountPickerButton");

	UUI_MainMenu_C_GetAccountPickerButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AccountPickerButtonWidget != nullptr)
		*AccountPickerButtonWidget = params.AccountPickerButtonWidget;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.CustomFunctionWithBoolReturn
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionString                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               Handled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUI_MainMenu_C::CustomFunctionWithBoolReturn(const struct FString& FunctionString, bool* Handled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.CustomFunctionWithBoolReturn");

	UUI_MainMenu_C_CustomFunctionWithBoolReturn_Params params {};
	params.FunctionString = FunctionString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.GetLoginInfo
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUI_DesignTimeUserWidget*                    LoginInfoWidget                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MainMenu_C::GetLoginInfo(class UUI_DesignTimeUserWidget** LoginInfoWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.GetLoginInfo");

	UUI_MainMenu_C_GetLoginInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LoginInfoWidget != nullptr)
		*LoginInfoWidget = params.LoginInfoWidget;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.GetSocialClubTab
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUI_SocialClub_C*                            OutSocialClubTab                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                IndexInWidgetSelector                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MainMenu_C::GetSocialClubTab(class UUI_SocialClub_C** OutSocialClubTab, int* IndexInWidgetSelector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.GetSocialClubTab");

	UUI_MainMenu_C_GetSocialClubTab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutSocialClubTab != nullptr)
		*OutSocialClubTab = params.OutSocialClubTab;
	if (IndexInWidgetSelector != nullptr)
		*IndexInWidgetSelector = params.IndexInWidgetSelector;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.StartupChecks
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_MainMenu_C::StartupChecks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.StartupChecks");

	UUI_MainMenu_C_StartupChecks_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.StartLegalScreens
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_MainMenu_C::StartLegalScreens()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.StartLegalScreens");

	UUI_MainMenu_C_StartLegalScreens_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.Password
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               OnIncorrect_Pass                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MainMenu_C::Password(bool OnIncorrect_Pass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Password");

	UUI_MainMenu_C_Password_Params params {};
	params.OnIncorrect_Pass = OnIncorrect_Pass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.GetConfirmOptionHelpButton
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     ConfirmHelpObject                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MainMenu_C::GetConfirmOptionHelpButton(class UWidget** ConfirmHelpObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.GetConfirmOptionHelpButton");

	UUI_MainMenu_C_GetConfirmOptionHelpButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ConfirmHelpObject != nullptr)
		*ConfirmHelpObject = params.ConfirmHelpObject;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.ShowConfirmChangesHelpText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShouldShow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MainMenu_C::ShowConfirmChangesHelpText(bool ShouldShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.ShowConfirmChangesHelpText");

	UUI_MainMenu_C_ShowConfirmChangesHelpText_Params params {};
	params.ShouldShow = ShouldShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.GetVersionNumber
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UWidget*                                     VersionTextBox                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MainMenu_C::GetVersionNumber(class UWidget** VersionTextBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.GetVersionNumber");

	UUI_MainMenu_C_GetVersionNumber_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (VersionTextBox != nullptr)
		*VersionTextBox = params.VersionTextBox;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.GetBackgroundContainer
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UCanvasPanel*                                CanvasPanel                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MainMenu_C::GetBackgroundContainer(class UCanvasPanel** CanvasPanel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.GetBackgroundContainer");

	UUI_MainMenu_C_GetBackgroundContainer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanvasPanel != nullptr)
		*CanvasPanel = params.CanvasPanel;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.GetHolderCanvas
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UCanvasPanel*                                Canvas                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MainMenu_C::GetHolderCanvas(class UCanvasPanel** Canvas)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.GetHolderCanvas");

	UUI_MainMenu_C_GetHolderCanvas_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Canvas != nullptr)
		*Canvas = params.Canvas;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.UseAltText
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ShouldUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MainMenu_C::UseAltText(int Index, bool* ShouldUse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.UseAltText");

	UUI_MainMenu_C_UseAltText_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShouldUse != nullptr)
		*ShouldUse = params.ShouldUse;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.GetSavesTab
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUI_OptionsMenuTab_Game_C*                   OutSavesTab                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                IndexInWidgetSelector                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MainMenu_C::GetSavesTab(class UUI_OptionsMenuTab_Game_C** OutSavesTab, int* IndexInWidgetSelector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.GetSavesTab");

	UUI_MainMenu_C_GetSavesTab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutSavesTab != nullptr)
		*OutSavesTab = params.OutSavesTab;
	if (IndexInWidgetSelector != nullptr)
		*IndexInWidgetSelector = params.IndexInWidgetSelector;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.SetupLayout
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UUI_MainMenu_C::SetupLayout()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.SetupLayout");

	UUI_MainMenu_C_SetupLayout_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.Setup Misc
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UUI_MainMenu_C::Setup_Misc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Setup Misc");

	UUI_MainMenu_C_Setup_Misc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.OnSynchronizeProperties
//		Flags  -> (Event, Public, BlueprintEvent)
void UUI_MainMenu_C::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.OnSynchronizeProperties");

	UUI_MainMenu_C_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.SetTemplate
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UGTAMainMenuUITemplate*                      InTemplate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IncludeSaveTab                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MainMenu_C::SetTemplate(class UGTAMainMenuUITemplate* InTemplate, bool IncludeSaveTab)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.SetTemplate");

	UUI_MainMenu_C_SetTemplate_Params params {};
	params.InTemplate = InTemplate;
	params.IncludeSaveTab = IncludeSaveTab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MainMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Tick");

	UUI_MainMenu_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_MainMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Construct");

	UUI_MainMenu_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.OnPass
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     OutPass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UUI_MainMenu_C::OnPass(const struct FString& OutPass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.OnPass");

	UUI_MainMenu_C_OnPass_Params params {};
	params.OutPass = OutPass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_MainMenu_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.Destruct");

	UUI_MainMenu_C_Destruct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.NoLegal
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UUI_MainMenu_C::NoLegal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.NoLegal");

	UUI_MainMenu_C_NoLegal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.CustomFunctionFromString
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionString                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UUI_MainMenu_C::CustomFunctionFromString(const struct FString& FunctionString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.CustomFunctionFromString");

	UUI_MainMenu_C_CustomFunctionFromString_Params params {};
	params.FunctionString = FunctionString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MainMenu.UI_MainMenu_C.ExecuteUbergraph_UI_MainMenu
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MainMenu_C::ExecuteUbergraph_UI_MainMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MainMenu.UI_MainMenu_C.ExecuteUbergraph_UI_MainMenu");

	UUI_MainMenu_C_ExecuteUbergraph_UI_MainMenu_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
