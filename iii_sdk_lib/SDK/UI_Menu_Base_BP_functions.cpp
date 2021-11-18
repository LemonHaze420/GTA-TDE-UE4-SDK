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
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetLanguageTab
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ULanguageOptions_C*                          OutLanguageTab                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                IndexInWidgetSelector                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::GetLanguageTab(class ULanguageOptions_C** OutLanguageTab, int* IndexInWidgetSelector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetLanguageTab");

	UUI_Menu_Base_BP_C_GetLanguageTab_Params params {};

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
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.ForceOpenMap
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base_BP_C::ForceOpenMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.ForceOpenMap");

	UUI_Menu_Base_BP_C_ForceOpenMap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsPauseMenuMapOpen
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsOpen                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::IsPauseMenuMapOpen(bool* IsOpen)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsPauseMenuMapOpen");

	UUI_Menu_Base_BP_C_IsPauseMenuMapOpen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsOpen != nullptr)
		*IsOpen = params.IsOpen;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.ShowAccountPickerButton
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShouldShow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::ShowAccountPickerButton(bool ShouldShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.ShowAccountPickerButton");

	UUI_Menu_Base_BP_C_ShowAccountPickerButton_Params params {};
	params.ShouldShow = ShouldShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetAccountPickerButton
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUI_DesignTimeUserWidget*                    AccountPickerButtonWidget                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::GetAccountPickerButton(class UUI_DesignTimeUserWidget** AccountPickerButtonWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetAccountPickerButton");

	UUI_Menu_Base_BP_C_GetAccountPickerButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AccountPickerButtonWidget != nullptr)
		*AccountPickerButtonWidget = params.AccountPickerButtonWidget;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.HasControllerDisconnectDialog
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UWidget*                                     Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::HasControllerDisconnectDialog(bool* Return, class UWidget** Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.HasControllerDisconnectDialog");

	UUI_Menu_Base_BP_C_HasControllerDisconnectDialog_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
	if (Widget != nullptr)
		*Widget = params.Widget;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.ControllerDisconnectCallback
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               DidAccept                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::ControllerDisconnectCallback(bool DidAccept)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.ControllerDisconnectCallback");

	UUI_Menu_Base_BP_C_ControllerDisconnectCallback_Params params {};
	params.DidAccept = DidAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateNewControllerDialog
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       DialogText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_Menu_Base_BP_C::CreateNewControllerDialog(const struct FText& DialogText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateNewControllerDialog");

	UUI_Menu_Base_BP_C_CreateNewControllerDialog_Params params {};
	params.DialogText = DialogText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CustomFunctionWithBoolReturn
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionString                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               Handled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUI_Menu_Base_BP_C::CustomFunctionWithBoolReturn(const struct FString& FunctionString, bool* Handled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CustomFunctionWithBoolReturn");

	UUI_Menu_Base_BP_C_CustomFunctionWithBoolReturn_Params params {};
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
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StopAllSamples
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base_BP_C::StopAllSamples()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StopAllSamples");

	UUI_Menu_Base_BP_C_StopAllSamples_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUI_Menu_Base_BP_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnKeyDown");

	UUI_Menu_Base_BP_C_OnKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.RefreshUserInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::RefreshUserInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.RefreshUserInfo");

	UUI_Menu_Base_BP_C_RefreshUserInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetLoginInfo
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUI_DesignTimeUserWidget*                    LoginInfoWidget                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::GetLoginInfo(class UUI_DesignTimeUserWidget** LoginInfoWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetLoginInfo");

	UUI_Menu_Base_BP_C_GetLoginInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LoginInfoWidget != nullptr)
		*LoginInfoWidget = params.LoginInfoWidget;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UpdateUserInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     UserName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UTexture2D*                                  UserImage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::UpdateUserInfo(const struct FString& UserName, class UTexture2D* UserImage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UpdateUserInfo");

	UUI_Menu_Base_BP_C_UpdateUserInfo_Params params {};
	params.UserName = UserName;
	params.UserImage = UserImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetupHelpButtons
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::SetupHelpButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetupHelpButtons");

	UUI_Menu_Base_BP_C_SetupHelpButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartSFXSample
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::StartSFXSample()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartSFXSample");

	UUI_Menu_Base_BP_C_StartSFXSample_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartDialogSample
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::StartDialogSample()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartDialogSample");

	UUI_Menu_Base_BP_C_StartDialogSample_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StopSFXSample
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base_BP_C::StopSFXSample()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StopSFXSample");

	UUI_Menu_Base_BP_C_StopSFXSample_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StopDialogSample
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base_BP_C::StopDialogSample()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StopDialogSample");

	UUI_Menu_Base_BP_C_StopDialogSample_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartupSound
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::StartupSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartupSound");

	UUI_Menu_Base_BP_C_StartupSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CloseExistingConfirmation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::CloseExistingConfirmation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CloseExistingConfirmation");

	UUI_Menu_Base_BP_C_CloseExistingConfirmation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateNewOkDialog
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       DialogText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_Menu_Base_BP_C::CreateNewOkDialog(const struct FText& DialogText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateNewOkDialog");

	UUI_Menu_Base_BP_C_CreateNewOkDialog_Params params {};
	params.DialogText = DialogText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsWidgetBlockingInput
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               isBeingBlocked                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::IsWidgetBlockingInput(bool* isBeingBlocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsWidgetBlockingInput");

	UUI_Menu_Base_BP_C_IsWidgetBlockingInput_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (isBeingBlocked != nullptr)
		*isBeingBlocked = params.isBeingBlocked;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetupSocialClubScreen
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUI_SocialClub_C*                            SocialClubUI                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::SetupSocialClubScreen(class UUI_SocialClub_C** SocialClubUI)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetupSocialClubScreen");

	UUI_Menu_Base_BP_C_SetupSocialClubScreen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SocialClubUI != nullptr)
		*SocialClubUI = params.SocialClubUI;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnSocialClubSignUpConfirmation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               DidConfirm                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::OnSocialClubSignUpConfirmation(bool DidConfirm)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnSocialClubSignUpConfirmation");

	UUI_Menu_Base_BP_C_OnSocialClubSignUpConfirmation_Params params {};
	params.DidConfirm = DidConfirm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnSocialClubSignInConfirmation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               DidConfirm                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::OnSocialClubSignInConfirmation(bool DidConfirm)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnSocialClubSignInConfirmation");

	UUI_Menu_Base_BP_C_OnSocialClubSignInConfirmation_Params params {};
	params.DidConfirm = DidConfirm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateSocialClubSignUpConfirmation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUI_TabbedLayout_C*                          FromLayout                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::CreateSocialClubSignUpConfirmation(class UUI_TabbedLayout_C* FromLayout)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateSocialClubSignUpConfirmation");

	UUI_Menu_Base_BP_C_CreateSocialClubSignUpConfirmation_Params params {};
	params.FromLayout = FromLayout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateSocialClubSignInConfirmation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUI_TabbedLayout_C*                          FromLayout                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::CreateSocialClubSignInConfirmation(class UUI_TabbedLayout_C* FromLayout)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateSocialClubSignInConfirmation");

	UUI_Menu_Base_BP_C_CreateSocialClubSignInConfirmation_Params params {};
	params.FromLayout = FromLayout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetSocialClubTab
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUI_SocialClub_C*                            OutSocialClubTab                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                IndexInWidgetSelector                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::GetSocialClubTab(class UUI_SocialClub_C** OutSocialClubTab, int* IndexInWidgetSelector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetSocialClubTab");

	UUI_Menu_Base_BP_C_GetSocialClubTab_Params params {};

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
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnSocialClubUnlinkConfirmation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               DidConfirm                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::OnSocialClubUnlinkConfirmation(bool DidConfirm)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnSocialClubUnlinkConfirmation");

	UUI_Menu_Base_BP_C_OnSocialClubUnlinkConfirmation_Params params {};
	params.DidConfirm = DidConfirm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateSocialClubUnlinkConfirmation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUI_TabbedLayout_C*                          FromLayout                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::CreateSocialClubUnlinkConfirmation(class UUI_TabbedLayout_C* FromLayout)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateSocialClubUnlinkConfirmation");

	UUI_Menu_Base_BP_C_CreateSocialClubUnlinkConfirmation_Params params {};
	params.FromLayout = FromLayout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetupGenericTabbedLayout
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUI_TabbedLayout_C*                          TabbedLayout                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::SetupGenericTabbedLayout(class UUI_TabbedLayout_C** TabbedLayout)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetupGenericTabbedLayout");

	UUI_Menu_Base_BP_C_SetupGenericTabbedLayout_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TabbedLayout != nullptr)
		*TabbedLayout = params.TabbedLayout;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsLeftButtonAllowed
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Allowed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::IsLeftButtonAllowed(int Index, bool* Allowed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsLeftButtonAllowed");

	UUI_Menu_Base_BP_C_IsLeftButtonAllowed_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Allowed != nullptr)
		*Allowed = params.Allowed;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsPlatformAllowedExit
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CanExit                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::IsPlatformAllowedExit(bool* CanExit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsPlatformAllowedExit");

	UUI_Menu_Base_BP_C_IsPlatformAllowedExit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanExit != nullptr)
		*CanExit = params.CanExit;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateAndPlayRadioStation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USoundCue*                                   Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::CreateAndPlayRadioStation(class USoundCue* Sound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateAndPlayRadioStation");

	UUI_Menu_Base_BP_C_CreateAndPlayRadioStation_Params params {};
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UpdateSampleSounds
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::UpdateSampleSounds()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UpdateSampleSounds");

	UUI_Menu_Base_BP_C_UpdateSampleSounds_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Start Radio
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Station                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::Start_Radio(int Station)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Start Radio");

	UUI_Menu_Base_BP_C_Start_Radio_Params params {};
	params.Station = Station;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StopRadio
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base_BP_C::StopRadio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StopRadio");

	UUI_Menu_Base_BP_C_StopRadio_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetConfirmOptionHelpButton
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     ConfirmHelpObject                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::GetConfirmOptionHelpButton(class UWidget** ConfirmHelpObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetConfirmOptionHelpButton");

	UUI_Menu_Base_BP_C_GetConfirmOptionHelpButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ConfirmHelpObject != nullptr)
		*ConfirmHelpObject = params.ConfirmHelpObject;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.ExtraButtonChecks
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::ExtraButtonChecks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.ExtraButtonChecks");

	UUI_Menu_Base_BP_C_ExtraButtonChecks_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.ShowConfirmChangesHelpText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShouldShow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::ShowConfirmChangesHelpText(bool ShouldShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.ShowConfirmChangesHelpText");

	UUI_Menu_Base_BP_C_ShowConfirmChangesHelpText_Params params {};
	params.ShouldShow = ShouldShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.RefreshAllOptions
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::RefreshAllOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.RefreshAllOptions");

	UUI_Menu_Base_BP_C_RefreshAllOptions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UpdateTick
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::UpdateTick(float dT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UpdateTick");

	UUI_Menu_Base_BP_C_UpdateTick_Params params {};
	params.dT = dT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UpdateOptions
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base_BP_C::UpdateOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UpdateOptions");

	UUI_Menu_Base_BP_C_UpdateOptions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CheckForMenuTransition
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               DidTransitionTakeFocus                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::CheckForMenuTransition(bool* DidTransitionTakeFocus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CheckForMenuTransition");

	UUI_Menu_Base_BP_C_CheckForMenuTransition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DidTransitionTakeFocus != nullptr)
		*DidTransitionTakeFocus = params.DidTransitionTakeFocus;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetTransitionFocus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               GiveTransitionFocus                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::SetTransitionFocus(bool GiveTransitionFocus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetTransitionFocus");

	UUI_Menu_Base_BP_C_SetTransitionFocus_Params params {};
	params.GiveTransitionFocus = GiveTransitionFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.HandleTransition
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base_BP_C::HandleTransition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.HandleTransition");

	UUI_Menu_Base_BP_C_HandleTransition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartDelayedExit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::StartDelayedExit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartDelayedExit");

	UUI_Menu_Base_BP_C_StartDelayedExit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.DoLaunchGameFromDelay
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUITransition*                               CurrentTransition                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::DoLaunchGameFromDelay(class UUITransition* CurrentTransition, bool* success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.DoLaunchGameFromDelay");

	UUI_Menu_Base_BP_C_DoLaunchGameFromDelay_Params params {};
	params.CurrentTransition = CurrentTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (success != nullptr)
		*success = params.success;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsInTransition
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsInTransition                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::IsInTransition(bool* IsInTransition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsInTransition");

	UUI_Menu_Base_BP_C_IsInTransition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsInTransition != nullptr)
		*IsInTransition = params.IsInTransition;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Update Delay Fades
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::Update_Delay_Fades(float dT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Update Delay Fades");

	UUI_Menu_Base_BP_C_Update_Delay_Fades_Params params {};
	params.dT = dT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.RefreshGraphicsTab
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::RefreshGraphicsTab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.RefreshGraphicsTab");

	UUI_Menu_Base_BP_C_RefreshGraphicsTab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.DelayedStartGame
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ForSaveSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::DelayedStartGame(int ForSaveSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.DelayedStartGame");

	UUI_Menu_Base_BP_C_DelayedStartGame_Params params {};
	params.ForSaveSlot = ForSaveSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CallSelectedOnActiveTab
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::CallSelectedOnActiveTab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CallSelectedOnActiveTab");

	UUI_Menu_Base_BP_C_CallSelectedOnActiveTab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetActiveWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::SetActiveWidget(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetActiveWidget");

	UUI_Menu_Base_BP_C_SetActiveWidget_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.LanguageUpdatedTasks
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base_BP_C::LanguageUpdatedTasks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.LanguageUpdatedTasks");

	UUI_Menu_Base_BP_C_LanguageUpdatedTasks_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.HandleMapBack
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               DidHandle                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::HandleMapBack(bool* DidHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.HandleMapBack");

	UUI_Menu_Base_BP_C_HandleMapBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DidHandle != nullptr)
		*DidHandle = params.DidHandle;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.EndMapInteract
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base_BP_C::EndMapInteract()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.EndMapInteract");

	UUI_Menu_Base_BP_C_EndMapInteract_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartMapInteract
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base_BP_C::StartMapInteract()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartMapInteract");

	UUI_Menu_Base_BP_C_StartMapInteract_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetLeftButtonOverrideImage
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UGTAMainMenuUITemplate*                      Template                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  Output                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::GetLeftButtonOverrideImage(class UGTAMainMenuUITemplate* Template, int Index, class UTexture2D** Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetLeftButtonOverrideImage");

	UUI_Menu_Base_BP_C_GetLeftButtonOverrideImage_Params params {};
	params.Template = Template;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetKeyListeningDialog
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bTurnOn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UUserWidget*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UUserWidget* UUI_Menu_Base_BP_C::SetKeyListeningDialog(bool bTurnOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetKeyListeningDialog");

	UUI_Menu_Base_BP_C_SetKeyListeningDialog_Params params {};
	params.bTurnOn = bTurnOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.EndKeyListeningDialog
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::EndKeyListeningDialog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.EndKeyListeningDialog");

	UUI_Menu_Base_BP_C_EndKeyListeningDialog_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartKeyListeningDialog
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUserWidget*                                 Output_Dialog                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::StartKeyListeningDialog(class UUserWidget** Output_Dialog)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartKeyListeningDialog");

	UUI_Menu_Base_BP_C_StartKeyListeningDialog_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_Dialog != nullptr)
		*Output_Dialog = params.Output_Dialog;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.MiscSetup
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::MiscSetup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.MiscSetup");

	UUI_Menu_Base_BP_C_MiscSetup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetupTabsAndButtons
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::SetupTabsAndButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetupTabsAndButtons");

	UUI_Menu_Base_BP_C_SetupTabsAndButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SpecialTabStartupCode
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Tab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::SpecialTabStartupCode(class UObject* Tab)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SpecialTabStartupCode");

	UUI_Menu_Base_BP_C_SpecialTabStartupCode_Params params {};
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Autosave dialog callback
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               DidAccept                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::Autosave_dialog_callback(bool DidAccept)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Autosave dialog callback");

	UUI_Menu_Base_BP_C_Autosave_dialog_callback_Params params {};
	params.DidAccept = DidAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnMissionRetryConfirmation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               DidConfirm                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::OnMissionRetryConfirmation(bool DidConfirm)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnMissionRetryConfirmation");

	UUI_Menu_Base_BP_C_OnMissionRetryConfirmation_Params params {};
	params.DidConfirm = DidConfirm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateMissionRetryConfirmation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::CreateMissionRetryConfirmation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateMissionRetryConfirmation");

	UUI_Menu_Base_BP_C_CreateMissionRetryConfirmation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnSaveCompleteDialogClosed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               DidConfirm                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::OnSaveCompleteDialogClosed(bool DidConfirm)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnSaveCompleteDialogClosed");

	UUI_Menu_Base_BP_C_OnSaveCompleteDialogClosed_Params params {};
	params.DidConfirm = DidConfirm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateSaveCompleteDialog
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUI_TabbedLayout_C*                          FromLayout                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               WasSaveConfirmed                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::CreateSaveCompleteDialog(class UUI_TabbedLayout_C* FromLayout, bool WasSaveConfirmed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateSaveCompleteDialog");

	UUI_Menu_Base_BP_C_CreateSaveCompleteDialog_Params params {};
	params.FromLayout = FromLayout;
	params.WasSaveConfirmed = WasSaveConfirmed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsResumeSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base_BP_C::IsResumeSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsResumeSelected");

	UUI_Menu_Base_BP_C_IsResumeSelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetResumeButton
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUI_Button_Base_C*                           AsUI_Button_Base                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::GetResumeButton(class UUI_Button_Base_C** AsUI_Button_Base)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetResumeButton");

	UUI_Menu_Base_BP_C_GetResumeButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsUI_Button_Base != nullptr)
		*AsUI_Button_Base = params.AsUI_Button_Base;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnResumePageStart
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::OnResumePageStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnResumePageStart");

	UUI_Menu_Base_BP_C_OnResumePageStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetSlotClasses
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUI_OptionsMenuTab_C*                        OptionsMenu                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::SetSlotClasses(class UUI_OptionsMenuTab_C* OptionsMenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetSlotClasses");

	UUI_Menu_Base_BP_C_SetSlotClasses_Params params {};
	params.OptionsMenu = OptionsMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Set to SaveTab
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<GTABase_EGTASaveTabState>              toState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                IndexInWidgetSelector                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::Set_to_SaveTab(TEnumAsByte<GTABase_EGTASaveTabState> toState, int* IndexInWidgetSelector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Set to SaveTab");

	UUI_Menu_Base_BP_C_Set_to_SaveTab_Params params {};
	params.toState = toState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IndexInWidgetSelector != nullptr)
		*IndexInWidgetSelector = params.IndexInWidgetSelector;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.DoTabSpecial
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                TabNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::DoTabSpecial(int TabNum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.DoTabSpecial");

	UUI_Menu_Base_BP_C_DoTabSpecial_Params params {};
	params.TabNum = TabNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.MoveToTabNum
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ToTab                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::MoveToTabNum(int ToTab)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.MoveToTabNum");

	UUI_Menu_Base_BP_C_MoveToTabNum_Params params {};
	params.ToTab = ToTab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Alternate Controller Check
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               DidJustChange                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::Alternate_Controller_Check(bool* DidJustChange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Alternate Controller Check");

	UUI_Menu_Base_BP_C_Alternate_Controller_Check_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DidJustChange != nullptr)
		*DidJustChange = params.DidJustChange;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsPauseMenu
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               IsPauseMenu                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::IsPauseMenu(bool* IsPauseMenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsPauseMenu");

	UUI_Menu_Base_BP_C_IsPauseMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsPauseMenu != nullptr)
		*IsPauseMenu = params.IsPauseMenu;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.HasConfirmationDialog
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UWidget*                                     Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::HasConfirmationDialog(bool* Return, class UWidget** Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.HasConfirmationDialog");

	UUI_Menu_Base_BP_C_HasConfirmationDialog_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
	if (Widget != nullptr)
		*Widget = params.Widget;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.BumperPressed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               WasLeftButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::BumperPressed(bool WasLeftButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.BumperPressed");

	UUI_Menu_Base_BP_C_BumperPressed_Params params {};
	params.WasLeftButton = WasLeftButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetNavigationButtonsForEntry
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UWidget*>                             Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
//		int                                                EntryNum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUI_Button_Base_C*                           Up                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUI_Button_Base_C*                           Down                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::GetNavigationButtonsForEntry(TArray<class UWidget*>* Array, int EntryNum, class UUI_Button_Base_C** Up, class UUI_Button_Base_C** Down)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetNavigationButtonsForEntry");

	UUI_Menu_Base_BP_C_GetNavigationButtonsForEntry_Params params {};
	params.EntryNum = EntryNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (Up != nullptr)
		*Up = params.Up;
	if (Down != nullptr)
		*Down = params.Down;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetupMainButtonsNavigation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::SetupMainButtonsNavigation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetupMainButtonsNavigation");

	UUI_Menu_Base_BP_C_SetupMainButtonsNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.MoveFocusToNewlySelectedTab
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               DidFocus                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::MoveFocusToNewlySelectedTab(bool* DidFocus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.MoveFocusToNewlySelectedTab");

	UUI_Menu_Base_BP_C_MoveFocusToNewlySelectedTab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DidFocus != nullptr)
		*DidFocus = params.DidFocus;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.ResetSelectedMainButtons
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::ResetSelectedMainButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.ResetSelectedMainButtons");

	UUI_Menu_Base_BP_C_ResetSelectedMainButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UpdateMainButtonsForController
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::UpdateMainButtonsForController()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UpdateMainButtonsForController");

	UUI_Menu_Base_BP_C_UpdateMainButtonsForController_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsUsingController
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUI_Menu_Base_BP_C::IsUsingController()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsUsingController");

	UUI_Menu_Base_BP_C_IsUsingController_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetCurrentInputType
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<GTABase_EGTAInputType>                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<GTABase_EGTAInputType> UUI_Menu_Base_BP_C::GetCurrentInputType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetCurrentInputType");

	UUI_Menu_Base_BP_C_GetCurrentInputType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.DefaultBackFunctionality
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               DidExit                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::DefaultBackFunctionality(bool* DidExit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.DefaultBackFunctionality");

	UUI_Menu_Base_BP_C_DefaultBackFunctionality_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DidExit != nullptr)
		*DidExit = params.DidExit;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.BackPressed
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::BackPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.BackPressed");

	UUI_Menu_Base_BP_C_BackPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UpdateInputEvents
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::UpdateInputEvents(float dT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UpdateInputEvents");

	UUI_Menu_Base_BP_C_UpdateInputEvents_Params params {};
	params.dT = dT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetUserFocusToSelectedWidget
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               CanTabTakeFocus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::SetUserFocusToSelectedWidget(bool CanTabTakeFocus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetUserFocusToSelectedWidget");

	UUI_Menu_Base_BP_C_SetUserFocusToSelectedWidget_Params params {};
	params.CanTabTakeFocus = CanTabTakeFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnExitGameConfirmation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               DidConfirm                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::OnExitGameConfirmation(bool DidConfirm)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnExitGameConfirmation");

	UUI_Menu_Base_BP_C_OnExitGameConfirmation_Params params {};
	params.DidConfirm = DidConfirm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateExitConfirmation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::CreateExitConfirmation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateExitConfirmation");

	UUI_Menu_Base_BP_C_CreateExitConfirmation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsDefaultSlotStyle
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FScrollListStyle                            InStyle                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               IsDefault                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::IsDefaultSlotStyle(const struct FScrollListStyle& InStyle, bool* IsDefault)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsDefaultSlotStyle");

	UUI_Menu_Base_BP_C_IsDefaultSlotStyle_Params params {};
	params.InStyle = InStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsDefault != nullptr)
		*IsDefault = params.IsDefault;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetVersionNumber
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UWidget*                                     VersionTextBox                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::GetVersionNumber(class UWidget** VersionTextBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetVersionNumber");

	UUI_Menu_Base_BP_C_GetVersionNumber_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (VersionTextBox != nullptr)
		*VersionTextBox = params.VersionTextBox;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetMainAnchorsAndOffsets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::SetMainAnchorsAndOffsets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetMainAnchorsAndOffsets");

	UUI_Menu_Base_BP_C_SetMainAnchorsAndOffsets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetBackgroundContainer
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UCanvasPanel*                                CanvasPanel                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::GetBackgroundContainer(class UCanvasPanel** CanvasPanel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetBackgroundContainer");

	UUI_Menu_Base_BP_C_GetBackgroundContainer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanvasPanel != nullptr)
		*CanvasPanel = params.CanvasPanel;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetHolderCanvas
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UCanvasPanel*                                Canvas                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::GetHolderCanvas(class UCanvasPanel** Canvas)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetHolderCanvas");

	UUI_Menu_Base_BP_C_GetHolderCanvas_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Canvas != nullptr)
		*Canvas = params.Canvas;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Set BackgroundAndIcon
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::Set_BackgroundAndIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Set BackgroundAndIcon");

	UUI_Menu_Base_BP_C_Set_BackgroundAndIcon_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsDefaultMargin
//		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FMargin                                     InAnchor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               IsZero                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::IsDefaultMargin(const struct FMargin& InAnchor, bool* IsZero)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsDefaultMargin");

	UUI_Menu_Base_BP_C_IsDefaultMargin_Params params {};
	params.InAnchor = InAnchor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsZero != nullptr)
		*IsZero = params.IsZero;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UpdateFocusWidget
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::UpdateFocusWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UpdateFocusWidget");

	UUI_Menu_Base_BP_C_UpdateFocusWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetInitialUserFocus
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::SetInitialUserFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetInitialUserFocus");

	UUI_Menu_Base_BP_C_SetInitialUserFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UseAltText
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ShouldUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::UseAltText(int Index, bool* ShouldUse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UseAltText");

	UUI_Menu_Base_BP_C_UseAltText_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShouldUse != nullptr)
		*ShouldUse = params.ShouldUse;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UpdateButtonsOnInteract
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ButtonStateEnum_EButtonStateEnum>      InteractButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::UpdateButtonsOnInteract(TEnumAsByte<ButtonStateEnum_EButtonStateEnum> InteractButton, int BoundValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.UpdateButtonsOnInteract");

	UUI_Menu_Base_BP_C_UpdateButtonsOnInteract_Params params {};
	params.InteractButton = InteractButton;
	params.BoundValue = BoundValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetCurrentSaveTabState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<GTABase_EGTASaveTabState>              NewSaveTabState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUI_TabbedLayout_C*                          FromTabbedLayout                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::SetCurrentSaveTabState(TEnumAsByte<GTABase_EGTASaveTabState> NewSaveTabState, class UUI_TabbedLayout_C* FromTabbedLayout)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetCurrentSaveTabState");

	UUI_Menu_Base_BP_C_SetCurrentSaveTabState_Params params {};
	params.NewSaveTabState = NewSaveTabState;
	params.FromTabbedLayout = FromTabbedLayout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetSavesTab
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUI_OptionsMenuTab_Game_C*                   OutSavesTab                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                IndexInWidgetSelector                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::GetSavesTab(class UUI_OptionsMenuTab_Game_C** OutSavesTab, int* IndexInWidgetSelector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GetSavesTab");

	UUI_Menu_Base_BP_C_GetSavesTab_Params params {};

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
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.InteractedSaveStateButtonPressed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                SaveNumber                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUI_TabbedLayout_C*                          FromTabbedLayout                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::InteractedSaveStateButtonPressed(int SaveNumber, class UUI_TabbedLayout_C* FromTabbedLayout)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.InteractedSaveStateButtonPressed");

	UUI_Menu_Base_BP_C_InteractedSaveStateButtonPressed_Params params {};
	params.SaveNumber = SaveNumber;
	params.FromTabbedLayout = FromTabbedLayout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Refresh Saves
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::Refresh_Saves()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Refresh Saves");

	UUI_Menu_Base_BP_C_Refresh_Saves_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnDeleteSave
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::OnDeleteSave(bool success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnDeleteSave");

	UUI_Menu_Base_BP_C_OnDeleteSave_Params params {};
	params.success = success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnLoadSave
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::OnLoadSave(bool success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnLoadSave");

	UUI_Menu_Base_BP_C_OnLoadSave_Params params {};
	params.success = success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.DidConfirmSaveState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               DidAccept                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::DidConfirmSaveState(bool DidAccept)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.DidConfirmSaveState");

	UUI_Menu_Base_BP_C_DidConfirmSaveState_Params params {};
	params.DidAccept = DidAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnNewGameConfirmation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               DidConfirm                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::OnNewGameConfirmation(bool DidConfirm)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnNewGameConfirmation");

	UUI_Menu_Base_BP_C_OnNewGameConfirmation_Params params {};
	params.DidConfirm = DidConfirm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateNewGameConfirmation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUI_TabbedLayout_C*                          FromLayout                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::CreateNewGameConfirmation(class UUI_TabbedLayout_C* FromLayout)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateNewGameConfirmation");

	UUI_Menu_Base_BP_C_CreateNewGameConfirmation_Params params {};
	params.FromLayout = FromLayout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateSaveConfirmation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUI_TabbedLayout_C*                          FromLayout                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::CreateSaveConfirmation(class UUI_TabbedLayout_C* FromLayout)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateSaveConfirmation");

	UUI_Menu_Base_BP_C_CreateSaveConfirmation_Params params {};
	params.FromLayout = FromLayout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetupOptionsMenuTab
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUI_OptionsMenuTab_C*                        options_menu                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::SetupOptionsMenuTab(class UUI_OptionsMenuTab_C** options_menu)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetupOptionsMenuTab");

	UUI_Menu_Base_BP_C_SetupOptionsMenuTab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (options_menu != nullptr)
		*options_menu = params.options_menu;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.AddEmptyTab
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::AddEmptyTab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.AddEmptyTab");

	UUI_Menu_Base_BP_C_AddEmptyTab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateMainBaseButtonFromClass
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      ButtonClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       ButtonText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                ValueToBind                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  SelectedImageOverride                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUI_Button_Base_C*                           OutButton                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::CreateMainBaseButtonFromClass(class UClass* ButtonClass, const struct FText& ButtonText, int ValueToBind, class UTexture2D* SelectedImageOverride, class UUI_Button_Base_C** OutButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CreateMainBaseButtonFromClass");

	UUI_Menu_Base_BP_C_CreateMainBaseButtonFromClass_Params params {};
	params.ButtonClass = ButtonClass;
	params.ButtonText = ButtonText;
	params.ValueToBind = ValueToBind;
	params.SelectedImageOverride = SelectedImageOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutButton != nullptr)
		*OutButton = params.OutButton;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.InteractedButton
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		unsigned char                                      InteractionType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::InteractedButton(unsigned char InteractionType, int BoundValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.InteractedButton");

	UUI_Menu_Base_BP_C_InteractedButton_Params params {};
	params.InteractionType = InteractionType;
	params.BoundValue = BoundValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetupMainTabSelector
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::SetupMainTabSelector()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetupMainTabSelector");

	UUI_Menu_Base_BP_C_SetupMainTabSelector_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.InitVariables
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPanelWidget*                                MenuButtons                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidgetSwitcher*                             Selector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     Logo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::InitVariables(class UPanelWidget* MenuButtons, class UWidgetSwitcher* Selector, class UWidget* Logo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.InitVariables");

	UUI_Menu_Base_BP_C_InitVariables_Params params {};
	params.MenuButtons = MenuButtons;
	params.Selector = Selector;
	params.Logo = Logo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetupSaveMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUI_OptionsMenuTab_C*                        SaveMenu                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::SetupSaveMenu(class UUI_OptionsMenuTab_C* SaveMenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetupSaveMenu");

	UUI_Menu_Base_BP_C_SetupSaveMenu_Params params {};
	params.SaveMenu = SaveMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetLeftButtons
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_Menu_Base_BP_C::SetLeftButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetLeftButtons");

	UUI_Menu_Base_BP_C_SetLeftButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsDefaultAnchor
//		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FAnchors                                    InAnchor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		bool                                               IsZero                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::IsDefaultAnchor(const struct FAnchors& InAnchor, bool* IsZero)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.IsDefaultAnchor");

	UUI_Menu_Base_BP_C_IsDefaultAnchor_Params params {};
	params.InAnchor = InAnchor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsZero != nullptr)
		*IsZero = params.IsZero;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Tick");

	UUI_Menu_Base_BP_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetTemplate
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UGTAMainMenuUITemplate*                      InTemplate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IncludeSaveTab                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::SetTemplate(class UGTAMainMenuUITemplate* InTemplate, bool IncludeSaveTab)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetTemplate");

	UUI_Menu_Base_BP_C_SetTemplate_Params params {};
	params.InTemplate = InTemplate;
	params.IncludeSaveTab = IncludeSaveTab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnSynchronizeProperties
//		Flags  -> (Event, Public, BlueprintEvent)
void UUI_Menu_Base_BP_C::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnSynchronizeProperties");

	UUI_Menu_Base_BP_C_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetVersionNumber
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FString                                     VersionNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::SetVersionNumber(const struct FString& VersionNum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetVersionNumber");

	UUI_Menu_Base_BP_C_SetVersionNumber_Params params {};
	params.VersionNum = VersionNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetMenuToSpecificGameTab
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<GTABase_EGTASaveTabState>              toState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::SetMenuToSpecificGameTab(TEnumAsByte<GTABase_EGTASaveTabState> toState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetMenuToSpecificGameTab");

	UUI_Menu_Base_BP_C_SetMenuToSpecificGameTab_Params params {};
	params.toState = toState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.DelayedSaveGameConfirm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               WasSaveConfirmed                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Menu_Base_BP_C::DelayedSaveGameConfirm(bool WasSaveConfirmed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.DelayedSaveGameConfirm");

	UUI_Menu_Base_BP_C_DelayedSaveGameConfirm_Params params {};
	params.WasSaveConfirmed = WasSaveConfirmed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetMenuToMissionRetry
//		Flags  -> (Event, Public, BlueprintEvent)
void UUI_Menu_Base_BP_C::SetMenuToMissionRetry()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SetMenuToMissionRetry");

	UUI_Menu_Base_BP_C_SetMenuToMissionRetry_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GrabFocus
//		Flags  -> (Event, Public, BlueprintEvent)
void UUI_Menu_Base_BP_C::GrabFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.GrabFocus");

	UUI_Menu_Base_BP_C_GrabFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Menu_Base_BP_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Construct");

	UUI_Menu_Base_BP_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Menu_Base_BP_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.Destruct");

	UUI_Menu_Base_BP_C_Destruct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.PeriodicScreenModeCheck
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base_BP_C::PeriodicScreenModeCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.PeriodicScreenModeCheck");

	UUI_Menu_Base_BP_C_PeriodicScreenModeCheck_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CustomFunctionFromString
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionString                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::CustomFunctionFromString(const struct FString& FunctionString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CustomFunctionFromString");

	UUI_Menu_Base_BP_C_CustomFunctionFromString_Params params {};
	params.FunctionString = FunctionString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnConfirmOptionButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base_BP_C::OnConfirmOptionButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnConfirmOptionButton");

	UUI_Menu_Base_BP_C_OnConfirmOptionButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnOptionConfirmationStarted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base_BP_C::OnOptionConfirmationStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.OnOptionConfirmationStarted");

	UUI_Menu_Base_BP_C_OnOptionConfirmationStarted_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.EndMenuRadio
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base_BP_C::EndMenuRadio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.EndMenuRadio");

	UUI_Menu_Base_BP_C_EndMenuRadio_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartMenuRadio
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Station                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::StartMenuRadio(int Station)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartMenuRadio");

	UUI_Menu_Base_BP_C_StartMenuRadio_Params params {};
	params.Station = Station;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CustomFunctionFromStringWithText
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionString                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FText                                       UsableText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_Menu_Base_BP_C::CustomFunctionFromStringWithText(const struct FString& FunctionString, const struct FText& UsableText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.CustomFunctionFromStringWithText");

	UUI_Menu_Base_BP_C_CustomFunctionFromStringWithText_Params params {};
	params.FunctionString = FunctionString;
	params.UsableText = UsableText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartMenuDialog
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base_BP_C::StartMenuDialog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartMenuDialog");

	UUI_Menu_Base_BP_C_StartMenuDialog_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.EndMenuDialogue
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base_BP_C::EndMenuDialogue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.EndMenuDialogue");

	UUI_Menu_Base_BP_C_EndMenuDialogue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.EndMenuSFX
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base_BP_C::EndMenuSFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.EndMenuSFX");

	UUI_Menu_Base_BP_C_EndMenuSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartMenuSFX
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base_BP_C::StartMenuSFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.StartMenuSFX");

	UUI_Menu_Base_BP_C_StartMenuSFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SCSignUp
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base_BP_C::SCSignUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SCSignUp");

	UUI_Menu_Base_BP_C_SCSignUp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SCSignIn
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base_BP_C::SCSignIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SCSignIn");

	UUI_Menu_Base_BP_C_SCSignIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SCSignOut
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UUI_Menu_Base_BP_C::SCSignOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SCSignOut");

	UUI_Menu_Base_BP_C_SCSignOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SaveDataInSlotEvent
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                SlotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::SaveDataInSlotEvent(bool success, int SlotIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.SaveDataInSlotEvent");

	UUI_Menu_Base_BP_C_SaveDataInSlotEvent_Params params {};
	params.success = success;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.DeleteDataInSlotEvent
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                SlotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::DeleteDataInSlotEvent(bool success, int SlotIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.DeleteDataInSlotEvent");

	UUI_Menu_Base_BP_C_DeleteDataInSlotEvent_Params params {};
	params.success = success;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.LoadDataInSlotEvent
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               success                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                SlotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::LoadDataInSlotEvent(bool success, int SlotIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.LoadDataInSlotEvent");

	UUI_Menu_Base_BP_C_LoadDataInSlotEvent_Params params {};
	params.success = success;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.ExecuteUbergraph_UI_Menu_Base_BP
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Menu_Base_BP_C::ExecuteUbergraph_UI_Menu_Base_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Menu_Base_BP.UI_Menu_Base_BP_C.ExecuteUbergraph_UI_Menu_Base_BP");

	UUI_Menu_Base_BP_C_ExecuteUbergraph_UI_Menu_Base_BP_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
