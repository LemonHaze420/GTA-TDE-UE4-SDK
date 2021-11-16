#pragma once

// Name: SanAndreas, Version: 1.0.0


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

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.ShouldShowConfirmation
struct UUI_SlotButton_Bool_C_ShouldShowConfirmation_Params
{
	bool                                               IgnoreCurrentFocus;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DoConfirm;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.NavigateRight
struct UUI_SlotButton_Bool_C_NavigateRight_Params
{
	SlateCore_EUINavigation                            Navigation;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.NavigateLeft
struct UUI_SlotButton_Bool_C_NavigateLeft_Params
{
	SlateCore_EUINavigation                            Navigation;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.SetHeight
struct UUI_SlotButton_Bool_C_SetHeight_Params
{
	float                                              NewHeight;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.InitSlotButton
struct UUI_SlotButton_Bool_C_InitSlotButton_Params
{
	class UGameterSettings*                            SettingsObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.SetBackgroundColor
struct UUI_SlotButton_Bool_C_SetBackgroundColor_Params
{
	struct FSlateColor                                 InColor;                                                   // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.GetCurrentSettingText
struct UUI_SlotButton_Bool_C_GetCurrentSettingText_Params
{
	struct FText                                       NewParam;                                                  // 0x0000(0x0018)  (Parm, OutParm)
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.GetSlotButton
struct UUI_SlotButton_Bool_C_GetSlotButton_Params
{
	class UButton*                                     SlotButton;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.UpdateTextColor
struct UUI_SlotButton_Bool_C_UpdateTextColor_Params
{
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.UpdateSettings
struct UUI_SlotButton_Bool_C_UpdateSettings_Params
{
	bool                                               OverrideConfirmationLockout;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.UpdateBGColor
struct UUI_SlotButton_Bool_C_UpdateBGColor_Params
{
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.ToNumSelection
struct UUI_SlotButton_Bool_C_ToNumSelection_Params
{
	int                                                SelectionValue;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.PreviousSelection
struct UUI_SlotButton_Bool_C_PreviousSelection_Params
{
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.NextSelection
struct UUI_SlotButton_Bool_C_NextSelection_Params
{
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.InitSelectionStyle
struct UUI_SlotButton_Bool_C_InitSelectionStyle_Params
{
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.UpdateSettingForConfirmation
struct UUI_SlotButton_Bool_C_UpdateSettingForConfirmation_Params
{
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__ForwardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UUI_SlotButton_Bool_C_BndEvt__ForwardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.InteractedWithSelectionSlot
struct UUI_SlotButton_Bool_C_InteractedWithSelectionSlot_Params
{
	unsigned char                                      InteractionType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BoundValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_SlotButton_C*                            SlotButton;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.Tick
struct UUI_SlotButton_Bool_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.OnSynchronizeProperties
struct UUI_SlotButton_Bool_C_OnSynchronizeProperties_Params
{
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_SlotButton_Bool_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
struct UUI_SlotButton_Bool_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__ForwardButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
struct UUI_SlotButton_Bool_C_BndEvt__ForwardButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
struct UUI_SlotButton_Bool_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.BndEvt__ForwardButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
struct UUI_SlotButton_Bool_C_BndEvt__ForwardButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.Construct
struct UUI_SlotButton_Bool_C_Construct_Params
{
};

// Function UI_SlotButton_Bool.UI_SlotButton_Bool_C.ExecuteUbergraph_UI_SlotButton_Bool
struct UUI_SlotButton_Bool_C_ExecuteUbergraph_UI_SlotButton_Bool_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
