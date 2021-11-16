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
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.OnSelected
//		Flags  -> ()
// Parameters:
void UUI_SlotButton_C::OnSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.OnSelected");

	UUI_SlotButton_C_OnSelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.GetSelectionOptions
//		Flags  -> ()
// Parameters:
//		struct FName                                       PropertyName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FText>                               DefaultOptions                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TArray<struct FText>                               ReturnValue                                                (Parm, OutParm, ReturnParm)
TArray<struct FText> UUI_SlotButton_C::GetSelectionOptions(const struct FName& PropertyName, TArray<struct FText>* DefaultOptions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.GetSelectionOptions");

	UUI_SlotButton_C_GetSelectionOptions_Params params {};
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DefaultOptions != nullptr)
		*DefaultOptions = params.DefaultOptions;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.PlayHaptic
//		Flags  -> ()
// Parameters:
void UUI_SlotButton_C::PlayHaptic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.PlayHaptic");

	UUI_SlotButton_C_PlayHaptic_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.Set Left Right Navigation
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     SlotButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_C::Set_Left_Right_Navigation(class UWidget* SlotButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.Set Left Right Navigation");

	UUI_SlotButton_C_Set_Left_Right_Navigation_Params params {};
	params.SlotButton = SlotButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.TryNavigateLeftOrRight
//		Flags  -> ()
// Parameters:
//		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UUI_SlotButton_C::TryNavigateLeftOrRight(SlateCore_EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.TryNavigateLeftOrRight");

	UUI_SlotButton_C_TryNavigateLeftOrRight_Params params {};
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.OnAnalogValueChanged
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FAnalogInputEvent                           InAnalogInputEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUI_SlotButton_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.OnAnalogValueChanged");

	UUI_SlotButton_C_OnAnalogValueChanged_Params params {};
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.Play Interact Sound
//		Flags  -> ()
void UUI_SlotButton_C::Play_Interact_Sound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.Play Interact Sound");

	UUI_SlotButton_C_Play_Interact_Sound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.IsOptionNavigationWithinMargin
//		Flags  -> ()
// Parameters:
//		SlateCore_EUINavigation                            Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               AllowNavigation                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SlotButton_C::IsOptionNavigationWithinMargin(SlateCore_EUINavigation Direction, bool* AllowNavigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.IsOptionNavigationWithinMargin");

	UUI_SlotButton_C_IsOptionNavigationWithinMargin_Params params {};
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AllowNavigation != nullptr)
		*AllowNavigation = params.AllowNavigation;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.SetHasChangedSinceLastSave
//		Flags  -> ()
// Parameters:
//		bool                                               InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SlotButton_C::SetHasChangedSinceLastSave(bool InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.SetHasChangedSinceLastSave");

	UUI_SlotButton_C_SetHasChangedSinceLastSave_Params params {};
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.FixDisplayName
//		Flags  -> ()
// Parameters:
//		bool                                               IsSettingAvailable                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FText                                       OutText                                                    (Parm, OutParm)
void UUI_SlotButton_C::FixDisplayName(bool IsSettingAvailable, struct FText* OutText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.FixDisplayName");

	UUI_SlotButton_C_FixDisplayName_Params params {};
	params.IsSettingAvailable = IsSettingAvailable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.IsSettingAvailable
//		Flags  -> ()
// Parameters:
//		bool                                               isAvailable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SlotButton_C::IsSettingAvailable(bool* isAvailable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.IsSettingAvailable");

	UUI_SlotButton_C_IsSettingAvailable_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (isAvailable != nullptr)
		*isAvailable = params.isAvailable;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.SetDisabledTextColor
//		Flags  -> ()
// Parameters:
//		struct FSlateColor                                 InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_SlotButton_C::SetDisabledTextColor(const struct FSlateColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.SetDisabledTextColor");

	UUI_SlotButton_C_SetDisabledTextColor_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.SetDisabledSelectedBackgroundColor
//		Flags  -> ()
// Parameters:
//		struct FSlateColor                                 InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_SlotButton_C::SetDisabledSelectedBackgroundColor(const struct FSlateColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.SetDisabledSelectedBackgroundColor");

	UUI_SlotButton_C_SetDisabledSelectedBackgroundColor_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.SetDisabledBackgroundColor
//		Flags  -> ()
// Parameters:
//		struct FSlateColor                                 InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_SlotButton_C::SetDisabledBackgroundColor(const struct FSlateColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.SetDisabledBackgroundColor");

	UUI_SlotButton_C_SetDisabledBackgroundColor_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.SetDisabled
//		Flags  -> ()
// Parameters:
//		bool                                               Disable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                ErrorCode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_C::SetDisabled(bool Disable, int ErrorCode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.SetDisabled");

	UUI_SlotButton_C_SetDisabled_Params params {};
	params.Disable = Disable;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.TickDisabled
//		Flags  -> ()
// Parameters:
void UUI_SlotButton_C::TickDisabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.TickDisabled");

	UUI_SlotButton_C_TickDisabled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.DidConfirmPostConfirmation
//		Flags  -> ()
// Parameters:
//		bool                                               Accepted                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SlotButton_C::DidConfirmPostConfirmation(bool Accepted)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.DidConfirmPostConfirmation");

	UUI_SlotButton_C_DidConfirmPostConfirmation_Params params {};
	params.Accepted = Accepted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.On Option Changed Final Check
//		Flags  -> ()
// Parameters:
//		bool                                               RequiresOptionRefresh                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FName                                       PropertyNameToSelect                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_C::On_Option_Changed_Final_Check(bool RequiresOptionRefresh, const struct FName& PropertyNameToSelect)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.On Option Changed Final Check");

	UUI_SlotButton_C_On_Option_Changed_Final_Check_Params params {};
	params.RequiresOptionRefresh = RequiresOptionRefresh;
	params.PropertyNameToSelect = PropertyNameToSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.UpdateSettingForConfirmation
//		Flags  -> ()
void UUI_SlotButton_C::UpdateSettingForConfirmation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.UpdateSettingForConfirmation");

	UUI_SlotButton_C_UpdateSettingForConfirmation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.GetCurrentSettingText
//		Flags  -> ()
// Parameters:
//		struct FText                                       NewParam                                                   (Parm, OutParm)
void UUI_SlotButton_C::GetCurrentSettingText(struct FText* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.GetCurrentSettingText");

	UUI_SlotButton_C_GetCurrentSettingText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.DidConfirm
//		Flags  -> ()
// Parameters:
//		bool                                               Accepted                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SlotButton_C::DidConfirm(bool Accepted)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.DidConfirm");

	UUI_SlotButton_C_DidConfirm_Params params {};
	params.Accepted = Accepted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.ShouldShowConfirmation
//		Flags  -> ()
// Parameters:
//		bool                                               IgnoreCurrentFocus                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               DoConfirm                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SlotButton_C::ShouldShowConfirmation(bool IgnoreCurrentFocus, bool* DoConfirm)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.ShouldShowConfirmation");

	UUI_SlotButton_C_ShouldShowConfirmation_Params params {};
	params.IgnoreCurrentFocus = IgnoreCurrentFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DoConfirm != nullptr)
		*DoConfirm = params.DoConfirm;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.ForceSlotStyle
//		Flags  -> ()
// Parameters:
//		struct FScrollListStyle                            ScrollListStyle                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		bool                                               UseSlotColor1                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SlotButton_C::ForceSlotStyle(const struct FScrollListStyle& ScrollListStyle, bool UseSlotColor1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.ForceSlotStyle");

	UUI_SlotButton_C_ForceSlotStyle_Params params {};
	params.ScrollListStyle = ScrollListStyle;
	params.UseSlotColor1 = UseSlotColor1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.LockBehavior
//		Flags  -> ()
// Parameters:
//		bool                                               ShouldLock                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SlotButton_C::LockBehavior(bool ShouldLock)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.LockBehavior");

	UUI_SlotButton_C_LockBehavior_Params params {};
	params.ShouldLock = ShouldLock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.SetFont
//		Flags  -> ()
// Parameters:
//		struct FSlateFontInfo                              NewFont                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UUI_SlotButton_C::SetFont(const struct FSlateFontInfo& NewFont)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.SetFont");

	UUI_SlotButton_C_SetFont_Params params {};
	params.NewFont = NewFont;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.NavigateRight
//		Flags  -> ()
// Parameters:
//		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UUI_SlotButton_C::NavigateRight(SlateCore_EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.NavigateRight");

	UUI_SlotButton_C_NavigateRight_Params params {};
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.NavigateLeft
//		Flags  -> ()
// Parameters:
//		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UUI_SlotButton_C::NavigateLeft(SlateCore_EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.NavigateLeft");

	UUI_SlotButton_C_NavigateLeft_Params params {};
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.IsInputTypeController
//		Flags  -> ()
// Parameters:
//		bool                                               IsController                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SlotButton_C::IsInputTypeController(bool* IsController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.IsInputTypeController");

	UUI_SlotButton_C_IsInputTypeController_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsController != nullptr)
		*IsController = params.IsController;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.GetSlotButton
//		Flags  -> ()
// Parameters:
//		class UButton*                                     SlotButton                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_C::GetSlotButton(class UButton** SlotButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.GetSlotButton");

	UUI_SlotButton_C_GetSlotButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SlotButton != nullptr)
		*SlotButton = params.SlotButton;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.SetHeight
//		Flags  -> ()
// Parameters:
//		float                                              NewHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_C::SetHeight(float NewHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.SetHeight");

	UUI_SlotButton_C_SetHeight_Params params {};
	params.NewHeight = NewHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.UpdateBGColor
//		Flags  -> ()
void UUI_SlotButton_C::UpdateBGColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.UpdateBGColor");

	UUI_SlotButton_C_UpdateBGColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.HasBeenSelected
//		Flags  -> ()
// Parameters:
void UUI_SlotButton_C::HasBeenSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.HasBeenSelected");

	UUI_SlotButton_C_HasBeenSelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.SetSelected
//		Flags  -> ()
// Parameters:
//		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SlotButton_C::SetSelected(bool Selected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.SetSelected");

	UUI_SlotButton_C_SetSelected_Params params {};
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.UpdateTextColor
//		Flags  -> ()
void UUI_SlotButton_C::UpdateTextColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.UpdateTextColor");

	UUI_SlotButton_C_UpdateTextColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.SetSelectedTextColor
//		Flags  -> ()
// Parameters:
//		struct FSlateColor                                 NewColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_SlotButton_C::SetSelectedTextColor(const struct FSlateColor& NewColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.SetSelectedTextColor");

	UUI_SlotButton_C_SetSelectedTextColor_Params params {};
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.SetTextColor
//		Flags  -> ()
// Parameters:
//		struct FSlateColor                                 NewColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_SlotButton_C::SetTextColor(const struct FSlateColor& NewColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.SetTextColor");

	UUI_SlotButton_C_SetTextColor_Params params {};
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.SetSelectedBackgroundColor
//		Flags  -> ()
// Parameters:
//		struct FSlateColor                                 InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_SlotButton_C::SetSelectedBackgroundColor(const struct FSlateColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.SetSelectedBackgroundColor");

	UUI_SlotButton_C_SetSelectedBackgroundColor_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.UpdateSettings
//		Flags  -> ()
// Parameters:
//		bool                                               OverrideConfirmationLockout                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SlotButton_C::UpdateSettings(bool OverrideConfirmationLockout)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.UpdateSettings");

	UUI_SlotButton_C_UpdateSettings_Params params {};
	params.OverrideConfirmationLockout = OverrideConfirmationLockout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.OverrideAltText
//		Flags  -> ()
// Parameters:
//		struct FText                                       NewText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_SlotButton_C::OverrideAltText(const struct FText& NewText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.OverrideAltText");

	UUI_SlotButton_C_OverrideAltText_Params params {};
	params.NewText = NewText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.OverrideMainText
//		Flags  -> ()
// Parameters:
//		struct FText                                       NewText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_SlotButton_C::OverrideMainText(const struct FText& NewText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.OverrideMainText");

	UUI_SlotButton_C_OverrideMainText_Params params {};
	params.NewText = NewText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.InitSlotButton
//		Flags  -> ()
// Parameters:
//		class UGameterSettings*                            SettingsObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_C::InitSlotButton(class UGameterSettings* SettingsObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.InitSlotButton");

	UUI_SlotButton_C_InitSlotButton_Params params {};
	params.SettingsObject = SettingsObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.SetBackgroundColor
//		Flags  -> ()
// Parameters:
//		struct FSlateColor                                 InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_SlotButton_C::SetBackgroundColor(const struct FSlateColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.SetBackgroundColor");

	UUI_SlotButton_C_SetBackgroundColor_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.Construct
//		Flags  -> ()
void UUI_SlotButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.Construct");

	UUI_SlotButton_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.OnSlotClicked
//		Flags  -> ()
void UUI_SlotButton_C::OnSlotClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.OnSlotClicked");

	UUI_SlotButton_C_OnSlotClicked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.OnSlotPressed
//		Flags  -> ()
void UUI_SlotButton_C::OnSlotPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.OnSlotPressed");

	UUI_SlotButton_C_OnSlotPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.OnSlotReleased
//		Flags  -> ()
void UUI_SlotButton_C::OnSlotReleased()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.OnSlotReleased");

	UUI_SlotButton_C_OnSlotReleased_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.OnSlotHovered
//		Flags  -> ()
void UUI_SlotButton_C::OnSlotHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.OnSlotHovered");

	UUI_SlotButton_C_OnSlotHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.OnSlotUnhovered
//		Flags  -> ()
void UUI_SlotButton_C::OnSlotUnhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.OnSlotUnhovered");

	UUI_SlotButton_C_OnSlotUnhovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.OnSynchronizeProperties
//		Flags  -> ()
void UUI_SlotButton_C::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.OnSynchronizeProperties");

	UUI_SlotButton_C_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.Tick");

	UUI_SlotButton_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.DelayedPostConfirmation
//		Flags  -> ()
void UUI_SlotButton_C::DelayedPostConfirmation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.DelayedPostConfirmation");

	UUI_SlotButton_C_DelayedPostConfirmation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.ExecuteUbergraph_UI_SlotButton
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_C::ExecuteUbergraph_UI_SlotButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.ExecuteUbergraph_UI_SlotButton");

	UUI_SlotButton_C_ExecuteUbergraph_UI_SlotButton_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.OnFinalConfirmation__DelegateSignature
//		Flags  -> ()
// Parameters:
//		bool                                               RequiresOptionRefresh                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FName                                       PropertyNameToSelect                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_C::OnFinalConfirmation__DelegateSignature(bool RequiresOptionRefresh, const struct FName& PropertyNameToSelect)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.OnFinalConfirmation__DelegateSignature");

	UUI_SlotButton_C_OnFinalConfirmation__DelegateSignature_Params params {};
	params.RequiresOptionRefresh = RequiresOptionRefresh;
	params.PropertyNameToSelect = PropertyNameToSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.OnOptionSelectionChanged__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FName                                       OptionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SlotButton_C::OnOptionSelectionChanged__DelegateSignature(const struct FName& OptionName, bool Selected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.OnOptionSelectionChanged__DelegateSignature");

	UUI_SlotButton_C_OnOptionSelectionChanged__DelegateSignature_Params params {};
	params.OptionName = OptionName;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.OnOptionChange__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FName                                       OptionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_C::OnOptionChange__DelegateSignature(const struct FName& OptionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.OnOptionChange__DelegateSignature");

	UUI_SlotButton_C_OnOptionChange__DelegateSignature_Params params {};
	params.OptionName = OptionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.PostConfirmationRequired__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UUI_SlotButton_C*                            SlotThatNeedsConfirmation                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_C::PostConfirmationRequired__DelegateSignature(class UUI_SlotButton_C* SlotThatNeedsConfirmation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.PostConfirmationRequired__DelegateSignature");

	UUI_SlotButton_C_PostConfirmationRequired__DelegateSignature_Params params {};
	params.SlotThatNeedsConfirmation = SlotThatNeedsConfirmation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.ConfirmationRequired__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UUI_SlotButton_C*                            SlotThatNeedsConfirmation                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_C::ConfirmationRequired__DelegateSignature(class UUI_SlotButton_C* SlotThatNeedsConfirmation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.ConfirmationRequired__DelegateSignature");

	UUI_SlotButton_C_ConfirmationRequired__DelegateSignature_Params params {};
	params.SlotThatNeedsConfirmation = SlotThatNeedsConfirmation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.DidUpdateSettings__DelegateSignature
//		Flags  -> ()
// Parameters:
//		bool                                               RequiresOptionRefresh                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FName                                       PropertyNameToSelect                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_C::DidUpdateSettings__DelegateSignature(bool RequiresOptionRefresh, const struct FName& PropertyNameToSelect)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.DidUpdateSettings__DelegateSignature");

	UUI_SlotButton_C_DidUpdateSettings__DelegateSignature_Params params {};
	params.RequiresOptionRefresh = RequiresOptionRefresh;
	params.PropertyNameToSelect = PropertyNameToSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton.UI_SlotButton_C.SlotDispatcher__DelegateSignature
//		Flags  -> ()
// Parameters:
//		unsigned char                                      InteractionType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUI_SlotButton_C*                            ButtonSentFrom                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_C::SlotDispatcher__DelegateSignature(unsigned char InteractionType, int BoundValue, class UUI_SlotButton_C* ButtonSentFrom)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton.UI_SlotButton_C.SlotDispatcher__DelegateSignature");

	UUI_SlotButton_C_SlotDispatcher__DelegateSignature_Params params {};
	params.InteractionType = InteractionType;
	params.BoundValue = BoundValue;
	params.ButtonSentFrom = ButtonSentFrom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
