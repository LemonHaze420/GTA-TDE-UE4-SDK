#pragma once

// Name: ViceCity, Version: 1.0.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateSettingForConfirmation
struct UUI_SlotButton_Slider_C_UpdateSettingForConfirmation_Params
{
};

// Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.GetCurrentSettingText
struct UUI_SlotButton_Slider_C_GetCurrentSettingText_Params
{
	struct FText                                       NewParam;                                                  // 0x0000(0x0018)  (Parm, OutParm)
};

// Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.GetSliderStepSizeForController
struct UUI_SlotButton_Slider_C_GetSliderStepSizeForController_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.InitSliderStyle
struct UUI_SlotButton_Slider_C_InitSliderStyle_Params
{
};

// Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateSliderWithValue
struct UUI_SlotButton_Slider_C_UpdateSliderWithValue_Params
{
	class USlider*                                     Slider;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewValue;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.NavigateRight
struct UUI_SlotButton_Slider_C_NavigateRight_Params
{
	SlateCore_EUINavigation                            Navigation;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.NavigateLeft
struct UUI_SlotButton_Slider_C_NavigateLeft_Params
{
	SlateCore_EUINavigation                            Navigation;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.SetHeight
struct UUI_SlotButton_Slider_C_SetHeight_Params
{
	float                                              NewHeight;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.GetSlotButton
struct UUI_SlotButton_Slider_C_GetSlotButton_Params
{
	class UButton*                                     SlotButton;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateBGColor
struct UUI_SlotButton_Slider_C_UpdateBGColor_Params
{
};

// Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateTextColor
struct UUI_SlotButton_Slider_C_UpdateTextColor_Params
{
};

// Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.GetPercent_1
struct UUI_SlotButton_Slider_C_GetPercent_1_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateSettings
struct UUI_SlotButton_Slider_C_UpdateSettings_Params
{
	bool                                               OverrideConfirmationLockout;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateSlider
struct UUI_SlotButton_Slider_C_UpdateSlider_Params
{
	float                                              InValue;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.UpdateText
struct UUI_SlotButton_Slider_C_UpdateText_Params
{
	float                                              InValue;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.InitSlotButton
struct UUI_SlotButton_Slider_C_InitSlotButton_Params
{
	class UGameterSettings*                            SettingsObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.SetBackgroundColor
struct UUI_SlotButton_Slider_C_SetBackgroundColor_Params
{
	struct FSlateColor                                 InColor;                                                   // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.BndEvt__TextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UUI_SlotButton_Slider_C_BndEvt__TextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.InteractedWithSliderSlot
struct UUI_SlotButton_Slider_C_InteractedWithSliderSlot_Params
{
	unsigned char                                      InteractionType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BoundValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_SlotButton_C*                            SlotButton;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.BndEvt__MainSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
struct UUI_SlotButton_Slider_C_BndEvt__MainSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.Tick
struct UUI_SlotButton_Slider_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.Construct
struct UUI_SlotButton_Slider_C_Construct_Params
{
};

// Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.OnSynchronizeProperties
struct UUI_SlotButton_Slider_C_OnSynchronizeProperties_Params
{
};

// Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.BndEvt__MainSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature
struct UUI_SlotButton_Slider_C_BndEvt__MainSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function UI_SlotButton_Slider.UI_SlotButton_Slider_C.ExecuteUbergraph_UI_SlotButton_Slider
struct UUI_SlotButton_Slider_C_ExecuteUbergraph_UI_SlotButton_Slider_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
