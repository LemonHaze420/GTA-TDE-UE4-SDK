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
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.OnMouseButtonDown
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUI_SlotButton_Selection_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.OnMouseButtonDown");

	UUI_SlotButton_Selection_C_OnMouseButtonDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.GetEntriesForEmptySelection
//		Flags  -> ()
// Parameters:
//		struct FName                                       EntryName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Selection_C::GetEntriesForEmptySelection(const struct FName& EntryName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.GetEntriesForEmptySelection");

	UUI_SlotButton_Selection_C_GetEntriesForEmptySelection_Params params {};
	params.EntryName = EntryName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.ShouldShowConfirmation
//		Flags  -> ()
// Parameters:
//		bool                                               IgnoreCurrentFocus                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               DoConfirm                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SlotButton_Selection_C::ShouldShowConfirmation(bool IgnoreCurrentFocus, bool* DoConfirm)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.ShouldShowConfirmation");

	UUI_SlotButton_Selection_C_ShouldShowConfirmation_Params params {};
	params.IgnoreCurrentFocus = IgnoreCurrentFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DoConfirm != nullptr)
		*DoConfirm = params.DoConfirm;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.UpdateSettingForConfirmation
//		Flags  -> ()
// Parameters:
void UUI_SlotButton_Selection_C::UpdateSettingForConfirmation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.UpdateSettingForConfirmation");

	UUI_SlotButton_Selection_C_UpdateSettingForConfirmation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.GetCurrentSettingText
//		Flags  -> ()
// Parameters:
//		struct FText                                       NewParam                                                   (Parm, OutParm)
void UUI_SlotButton_Selection_C::GetCurrentSettingText(struct FText* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.GetCurrentSettingText");

	UUI_SlotButton_Selection_C_GetCurrentSettingText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.InitSelectionStyle
//		Flags  -> ()
// Parameters:
void UUI_SlotButton_Selection_C::InitSelectionStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.InitSelectionStyle");

	UUI_SlotButton_Selection_C_InitSelectionStyle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.NavigateRight
//		Flags  -> ()
// Parameters:
//		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UUI_SlotButton_Selection_C::NavigateRight(SlateCore_EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.NavigateRight");

	UUI_SlotButton_Selection_C_NavigateRight_Params params {};
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.NavigateLeft
//		Flags  -> ()
// Parameters:
//		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UUI_SlotButton_Selection_C::NavigateLeft(SlateCore_EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.NavigateLeft");

	UUI_SlotButton_Selection_C_NavigateLeft_Params params {};
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.SetHeight
//		Flags  -> ()
// Parameters:
//		float                                              NewHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Selection_C::SetHeight(float NewHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.SetHeight");

	UUI_SlotButton_Selection_C_SetHeight_Params params {};
	params.NewHeight = NewHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.GetSlotButton
//		Flags  -> ()
// Parameters:
//		class UButton*                                     SlotButton                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Selection_C::GetSlotButton(class UButton** SlotButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.GetSlotButton");

	UUI_SlotButton_Selection_C_GetSlotButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SlotButton != nullptr)
		*SlotButton = params.SlotButton;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.UpdateTextColor
//		Flags  -> ()
// Parameters:
void UUI_SlotButton_Selection_C::UpdateTextColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.UpdateTextColor");

	UUI_SlotButton_Selection_C_UpdateTextColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.UpdateSettings
//		Flags  -> ()
// Parameters:
//		bool                                               OverrideConfirmationLockout                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SlotButton_Selection_C::UpdateSettings(bool OverrideConfirmationLockout)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.UpdateSettings");

	UUI_SlotButton_Selection_C_UpdateSettings_Params params {};
	params.OverrideConfirmationLockout = OverrideConfirmationLockout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.ToNumSelection
//		Flags  -> ()
// Parameters:
//		int                                                SelectionValue                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Selection_C::ToNumSelection(int SelectionValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.ToNumSelection");

	UUI_SlotButton_Selection_C_ToNumSelection_Params params {};
	params.SelectionValue = SelectionValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.PreviousSelection
//		Flags  -> ()
// Parameters:
void UUI_SlotButton_Selection_C::PreviousSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.PreviousSelection");

	UUI_SlotButton_Selection_C_PreviousSelection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.NextSelection
//		Flags  -> ()
// Parameters:
void UUI_SlotButton_Selection_C::NextSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.NextSelection");

	UUI_SlotButton_Selection_C_NextSelection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.InitSlotButton
//		Flags  -> ()
// Parameters:
//		class UGameterSettings*                            SettingsObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Selection_C::InitSlotButton(class UGameterSettings* SettingsObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.InitSlotButton");

	UUI_SlotButton_Selection_C_InitSlotButton_Params params {};
	params.SettingsObject = SettingsObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.SetBackgroundColor
//		Flags  -> ()
// Parameters:
//		struct FSlateColor                                 InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_SlotButton_Selection_C::SetBackgroundColor(const struct FSlateColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.SetBackgroundColor");

	UUI_SlotButton_Selection_C_SetBackgroundColor_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.UpdateBGColor
//		Flags  -> ()
// Parameters:
void UUI_SlotButton_Selection_C::UpdateBGColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.UpdateBGColor");

	UUI_SlotButton_Selection_C_UpdateBGColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Selection_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.Tick");

	UUI_SlotButton_Selection_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.BndEvt__ForwardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UUI_SlotButton_Selection_C::BndEvt__ForwardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.BndEvt__ForwardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UUI_SlotButton_Selection_C_BndEvt__ForwardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.OnSynchronizeProperties
//		Flags  -> ()
void UUI_SlotButton_Selection_C::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.OnSynchronizeProperties");

	UUI_SlotButton_Selection_C_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.Construct
//		Flags  -> ()
void UUI_SlotButton_Selection_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.Construct");

	UUI_SlotButton_Selection_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UUI_SlotButton_Selection_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_SlotButton_Selection_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
//		Flags  -> ()
void UUI_SlotButton_Selection_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UUI_SlotButton_Selection_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.BndEvt__ForwardButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
//		Flags  -> ()
void UUI_SlotButton_Selection_C::BndEvt__ForwardButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.BndEvt__ForwardButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UUI_SlotButton_Selection_C_BndEvt__ForwardButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
//		Flags  -> ()
void UUI_SlotButton_Selection_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");

	UUI_SlotButton_Selection_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.BndEvt__ForwardButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
//		Flags  -> ()
void UUI_SlotButton_Selection_C::BndEvt__ForwardButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.BndEvt__ForwardButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature");

	UUI_SlotButton_Selection_C_BndEvt__ForwardButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.InteractedWithSelectionSlot
//		Flags  -> ()
// Parameters:
//		unsigned char                                      InteractionType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUI_SlotButton_C*                            ButtonSentFrom                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Selection_C::InteractedWithSelectionSlot(unsigned char InteractionType, int BoundValue, class UUI_SlotButton_C* ButtonSentFrom)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.InteractedWithSelectionSlot");

	UUI_SlotButton_Selection_C_InteractedWithSelectionSlot_Params params {};
	params.InteractionType = InteractionType;
	params.BoundValue = BoundValue;
	params.ButtonSentFrom = ButtonSentFrom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UUI_SlotButton_Selection_C::BndEvt__SlotButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UUI_SlotButton_Selection_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.ExecuteUbergraph_UI_SlotButton_Selection
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Selection_C::ExecuteUbergraph_UI_SlotButton_Selection(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Selection.UI_SlotButton_Selection_C.ExecuteUbergraph_UI_SlotButton_Selection");

	UUI_SlotButton_Selection_C_ExecuteUbergraph_UI_SlotButton_Selection_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
