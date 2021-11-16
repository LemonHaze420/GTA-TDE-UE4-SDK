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
//		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateSettingForConfirmation
//		Flags  -> ()
// Parameters:
void UUI_SlotButton_Slider_C::UpdateSettingForConfirmation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateSettingForConfirmation");

	UUI_SlotButton_Slider_C_UpdateSettingForConfirmation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.GetCurrentSettingText
//		Flags  -> ()
// Parameters:
//		struct FText                                       NewParam                                                   (Parm, OutParm)
void UUI_SlotButton_Slider_C::GetCurrentSettingText(struct FText* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.GetCurrentSettingText");

	UUI_SlotButton_Slider_C_GetCurrentSettingText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.GetSliderStepSizeForController
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UUI_SlotButton_Slider_C::GetSliderStepSizeForController()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.GetSliderStepSizeForController");

	UUI_SlotButton_Slider_C_GetSliderStepSizeForController_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.InitSliderStyle
//		Flags  -> ()
void UUI_SlotButton_Slider_C::InitSliderStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.InitSliderStyle");

	UUI_SlotButton_Slider_C_InitSliderStyle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateSliderWithValue
//		Flags  -> ()
// Parameters:
//		class USlider*                                     Slider                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Slider_C::UpdateSliderWithValue(class USlider* Slider, float NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateSliderWithValue");

	UUI_SlotButton_Slider_C_UpdateSliderWithValue_Params params {};
	params.Slider = Slider;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.NavigateRight
//		Flags  -> ()
// Parameters:
//		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UUI_SlotButton_Slider_C::NavigateRight(SlateCore_EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.NavigateRight");

	UUI_SlotButton_Slider_C_NavigateRight_Params params {};
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.NavigateLeft
//		Flags  -> ()
// Parameters:
//		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UUI_SlotButton_Slider_C::NavigateLeft(SlateCore_EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.NavigateLeft");

	UUI_SlotButton_Slider_C_NavigateLeft_Params params {};
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.SetHeight
//		Flags  -> ()
// Parameters:
//		float                                              NewHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Slider_C::SetHeight(float NewHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.SetHeight");

	UUI_SlotButton_Slider_C_SetHeight_Params params {};
	params.NewHeight = NewHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.GetSlotButton
//		Flags  -> ()
// Parameters:
//		class UButton*                                     SlotButton                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Slider_C::GetSlotButton(class UButton** SlotButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.GetSlotButton");

	UUI_SlotButton_Slider_C_GetSlotButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SlotButton != nullptr)
		*SlotButton = params.SlotButton;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateBGColor
//		Flags  -> ()
// Parameters:
void UUI_SlotButton_Slider_C::UpdateBGColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateBGColor");

	UUI_SlotButton_Slider_C_UpdateBGColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateTextColor
//		Flags  -> ()
// Parameters:
void UUI_SlotButton_Slider_C::UpdateTextColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateTextColor");

	UUI_SlotButton_Slider_C_UpdateTextColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.GetPercent_1
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UUI_SlotButton_Slider_C::GetPercent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.GetPercent_1");

	UUI_SlotButton_Slider_C_GetPercent_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateSettings
//		Flags  -> ()
// Parameters:
//		bool                                               OverrideConfirmationLockout                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SlotButton_Slider_C::UpdateSettings(bool OverrideConfirmationLockout)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateSettings");

	UUI_SlotButton_Slider_C_UpdateSettings_Params params {};
	params.OverrideConfirmationLockout = OverrideConfirmationLockout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateSlider
//		Flags  -> ()
// Parameters:
//		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Slider_C::UpdateSlider(float InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateSlider");

	UUI_SlotButton_Slider_C_UpdateSlider_Params params {};
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateText
//		Flags  -> ()
// Parameters:
//		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Slider_C::UpdateText(float InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateText");

	UUI_SlotButton_Slider_C_UpdateText_Params params {};
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.InitSlotButton
//		Flags  -> ()
// Parameters:
//		class UGameterSettings*                            SettingsObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Slider_C::InitSlotButton(class UGameterSettings* SettingsObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.InitSlotButton");

	UUI_SlotButton_Slider_C_InitSlotButton_Params params {};
	params.SettingsObject = SettingsObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.SetBackgroundColor
//		Flags  -> ()
// Parameters:
//		struct FSlateColor                                 InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_SlotButton_Slider_C::SetBackgroundColor(const struct FSlateColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.SetBackgroundColor");

	UUI_SlotButton_Slider_C_SetBackgroundColor_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.BndEvt__TextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Slider_C::BndEvt__TextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.BndEvt__TextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UUI_SlotButton_Slider_C_BndEvt__TextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.InteractedWithSliderSlot
//		Flags  -> ()
// Parameters:
//		unsigned char                                      InteractionType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUI_SlotButton_C*                            SlotButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Slider_C::InteractedWithSliderSlot(unsigned char InteractionType, int BoundValue, class UUI_SlotButton_C* SlotButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.InteractedWithSliderSlot");

	UUI_SlotButton_Slider_C_InteractedWithSliderSlot_Params params {};
	params.InteractionType = InteractionType;
	params.BoundValue = BoundValue;
	params.SlotButton = SlotButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.BndEvt__MainSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Slider_C::BndEvt__MainSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.BndEvt__MainSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	UUI_SlotButton_Slider_C_BndEvt__MainSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Slider_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.Tick");

	UUI_SlotButton_Slider_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.Construct
//		Flags  -> ()
void UUI_SlotButton_Slider_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.Construct");

	UUI_SlotButton_Slider_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.OnSynchronizeProperties
//		Flags  -> ()
void UUI_SlotButton_Slider_C::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.OnSynchronizeProperties");

	UUI_SlotButton_Slider_C_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.BndEvt__MainSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature
//		Flags  -> ()
void UUI_SlotButton_Slider_C::BndEvt__MainSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.BndEvt__MainSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature");

	UUI_SlotButton_Slider_C_BndEvt__MainSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.ExecuteUbergraph_UI_SlotButton_Slider
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Slider_C::ExecuteUbergraph_UI_SlotButton_Slider(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.ExecuteUbergraph_UI_SlotButton_Slider");

	UUI_SlotButton_Slider_C_ExecuteUbergraph_UI_SlotButton_Slider_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
