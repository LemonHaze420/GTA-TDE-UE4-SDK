#pragma once

// Name: GTA III, Version: 1.0.0


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

// Function UI_SlotButton.UI_SlotButton_C.OnSelected
struct UUI_SlotButton_C_OnSelected_Params
{
};

// Function UI_SlotButton.UI_SlotButton_C.GetSelectionOptions
struct UUI_SlotButton_C_GetSelectionOptions_Params
{
	struct FName                                       PropertyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FText>                               DefaultOptions;                                            // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FText>                               ReturnValue;                                               // 0x0018(0x0010)  (Parm, OutParm, ReturnParm)
};

// Function UI_SlotButton.UI_SlotButton_C.PlayHaptic
struct UUI_SlotButton_C_PlayHaptic_Params
{
};

// Function UI_SlotButton.UI_SlotButton_C.Set Left Right Navigation
struct UUI_SlotButton_C_Set_Left_Right_Navigation_Params
{
	class UWidget*                                     SlotButton;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton.UI_SlotButton_C.TryNavigateLeftOrRight
struct UUI_SlotButton_C_TryNavigateLeftOrRight_Params
{
	SlateCore_EUINavigation                            Navigation;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton.UI_SlotButton_C.OnAnalogValueChanged
struct UUI_SlotButton_C_OnAnalogValueChanged_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FAnalogInputEvent                           InAnalogInputEvent;                                        // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function UI_SlotButton.UI_SlotButton_C.Play Interact Sound
struct UUI_SlotButton_C_Play_Interact_Sound_Params
{
};

// Function UI_SlotButton.UI_SlotButton_C.IsOptionNavigationWithinMargin
struct UUI_SlotButton_C_IsOptionNavigationWithinMargin_Params
{
	SlateCore_EUINavigation                            Direction;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AllowNavigation;                                           // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_SlotButton.UI_SlotButton_C.SetHasChangedSinceLastSave
struct UUI_SlotButton_C_SetHasChangedSinceLastSave_Params
{
	bool                                               InValue;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_SlotButton.UI_SlotButton_C.FixDisplayName
struct UUI_SlotButton_C_FixDisplayName_Params
{
	bool                                               IsSettingAvailable;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       OutText;                                                   // 0x0008(0x0018)  (Parm, OutParm)
};

// Function UI_SlotButton.UI_SlotButton_C.IsSettingAvailable
struct UUI_SlotButton_C_IsSettingAvailable_Params
{
	bool                                               isAvailable;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_SlotButton.UI_SlotButton_C.SetDisabledTextColor
struct UUI_SlotButton_C_SetDisabledTextColor_Params
{
	struct FSlateColor                                 InColor;                                                   // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_SlotButton.UI_SlotButton_C.SetDisabledSelectedBackgroundColor
struct UUI_SlotButton_C_SetDisabledSelectedBackgroundColor_Params
{
	struct FSlateColor                                 InColor;                                                   // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_SlotButton.UI_SlotButton_C.SetDisabledBackgroundColor
struct UUI_SlotButton_C_SetDisabledBackgroundColor_Params
{
	struct FSlateColor                                 InColor;                                                   // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_SlotButton.UI_SlotButton_C.SetDisabled
struct UUI_SlotButton_C_SetDisabled_Params
{
	bool                                               Disable;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ErrorCode;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton.UI_SlotButton_C.TickDisabled
struct UUI_SlotButton_C_TickDisabled_Params
{
};

// Function UI_SlotButton.UI_SlotButton_C.DidConfirmPostConfirmation
struct UUI_SlotButton_C_DidConfirmPostConfirmation_Params
{
	bool                                               Accepted;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_SlotButton.UI_SlotButton_C.On Option Changed Final Check
struct UUI_SlotButton_C_On_Option_Changed_Final_Check_Params
{
	bool                                               RequiresOptionRefresh;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       PropertyNameToSelect;                                      // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton.UI_SlotButton_C.UpdateSettingForConfirmation
struct UUI_SlotButton_C_UpdateSettingForConfirmation_Params
{
};

// Function UI_SlotButton.UI_SlotButton_C.GetCurrentSettingText
struct UUI_SlotButton_C_GetCurrentSettingText_Params
{
	struct FText                                       NewParam;                                                  // 0x0000(0x0018)  (Parm, OutParm)
};

// Function UI_SlotButton.UI_SlotButton_C.DidConfirm
struct UUI_SlotButton_C_DidConfirm_Params
{
	bool                                               Accepted;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_SlotButton.UI_SlotButton_C.ShouldShowConfirmation
struct UUI_SlotButton_C_ShouldShowConfirmation_Params
{
	bool                                               IgnoreCurrentFocus;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DoConfirm;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_SlotButton.UI_SlotButton_C.ForceSlotStyle
struct UUI_SlotButton_C_ForceSlotStyle_Params
{
	struct FScrollListStyle                            ScrollListStyle;                                           // 0x0000(0x0158)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               UseSlotColor1;                                             // 0x0158(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_SlotButton.UI_SlotButton_C.LockBehavior
struct UUI_SlotButton_C_LockBehavior_Params
{
	bool                                               ShouldLock;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_SlotButton.UI_SlotButton_C.SetFont
struct UUI_SlotButton_C_SetFont_Params
{
	struct FSlateFontInfo                              NewFont;                                                   // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function UI_SlotButton.UI_SlotButton_C.NavigateRight
struct UUI_SlotButton_C_NavigateRight_Params
{
	SlateCore_EUINavigation                            Navigation;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton.UI_SlotButton_C.NavigateLeft
struct UUI_SlotButton_C_NavigateLeft_Params
{
	SlateCore_EUINavigation                            Navigation;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton.UI_SlotButton_C.IsInputTypeController
struct UUI_SlotButton_C_IsInputTypeController_Params
{
	bool                                               IsController;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_SlotButton.UI_SlotButton_C.GetSlotButton
struct UUI_SlotButton_C_GetSlotButton_Params
{
	class UButton*                                     SlotButton;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton.UI_SlotButton_C.SetHeight
struct UUI_SlotButton_C_SetHeight_Params
{
	float                                              NewHeight;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton.UI_SlotButton_C.UpdateBGColor
struct UUI_SlotButton_C_UpdateBGColor_Params
{
};

// Function UI_SlotButton.UI_SlotButton_C.HasBeenSelected
struct UUI_SlotButton_C_HasBeenSelected_Params
{
};

// Function UI_SlotButton.UI_SlotButton_C.SetSelected
struct UUI_SlotButton_C_SetSelected_Params
{
	bool                                               Selected;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_SlotButton.UI_SlotButton_C.UpdateTextColor
struct UUI_SlotButton_C_UpdateTextColor_Params
{
};

// Function UI_SlotButton.UI_SlotButton_C.SetSelectedTextColor
struct UUI_SlotButton_C_SetSelectedTextColor_Params
{
	struct FSlateColor                                 NewColor;                                                  // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_SlotButton.UI_SlotButton_C.SetTextColor
struct UUI_SlotButton_C_SetTextColor_Params
{
	struct FSlateColor                                 NewColor;                                                  // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_SlotButton.UI_SlotButton_C.SetSelectedBackgroundColor
struct UUI_SlotButton_C_SetSelectedBackgroundColor_Params
{
	struct FSlateColor                                 InColor;                                                   // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_SlotButton.UI_SlotButton_C.UpdateSettings
struct UUI_SlotButton_C_UpdateSettings_Params
{
	bool                                               OverrideConfirmationLockout;                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_SlotButton.UI_SlotButton_C.OverrideAltText
struct UUI_SlotButton_C_OverrideAltText_Params
{
	struct FText                                       NewText;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_SlotButton.UI_SlotButton_C.OverrideMainText
struct UUI_SlotButton_C_OverrideMainText_Params
{
	struct FText                                       NewText;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_SlotButton.UI_SlotButton_C.InitSlotButton
struct UUI_SlotButton_C_InitSlotButton_Params
{
	class UGameterSettings*                            SettingsObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton.UI_SlotButton_C.SetBackgroundColor
struct UUI_SlotButton_C_SetBackgroundColor_Params
{
	struct FSlateColor                                 InColor;                                                   // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_SlotButton.UI_SlotButton_C.Construct
struct UUI_SlotButton_C_Construct_Params
{
};

// Function UI_SlotButton.UI_SlotButton_C.OnSlotClicked
struct UUI_SlotButton_C_OnSlotClicked_Params
{
};

// Function UI_SlotButton.UI_SlotButton_C.OnSlotPressed
struct UUI_SlotButton_C_OnSlotPressed_Params
{
};

// Function UI_SlotButton.UI_SlotButton_C.OnSlotReleased
struct UUI_SlotButton_C_OnSlotReleased_Params
{
};

// Function UI_SlotButton.UI_SlotButton_C.OnSlotHovered
struct UUI_SlotButton_C_OnSlotHovered_Params
{
};

// Function UI_SlotButton.UI_SlotButton_C.OnSlotUnhovered
struct UUI_SlotButton_C_OnSlotUnhovered_Params
{
};

// Function UI_SlotButton.UI_SlotButton_C.OnSynchronizeProperties
struct UUI_SlotButton_C_OnSynchronizeProperties_Params
{
};

// Function UI_SlotButton.UI_SlotButton_C.Tick
struct UUI_SlotButton_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton.UI_SlotButton_C.DelayedPostConfirmation
struct UUI_SlotButton_C_DelayedPostConfirmation_Params
{
};

// Function UI_SlotButton.UI_SlotButton_C.ExecuteUbergraph_UI_SlotButton
struct UUI_SlotButton_C_ExecuteUbergraph_UI_SlotButton_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton.UI_SlotButton_C.OnFinalConfirmation__DelegateSignature
struct UUI_SlotButton_C_OnFinalConfirmation__DelegateSignature_Params
{
	bool                                               RequiresOptionRefresh;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       PropertyNameToSelect;                                      // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton.UI_SlotButton_C.OnOptionSelectionChanged__DelegateSignature
struct UUI_SlotButton_C_OnOptionSelectionChanged__DelegateSignature_Params
{
	struct FName                                       OptionName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Selected;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_SlotButton.UI_SlotButton_C.OnOptionChange__DelegateSignature
struct UUI_SlotButton_C_OnOptionChange__DelegateSignature_Params
{
	struct FName                                       OptionName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton.UI_SlotButton_C.PostConfirmationRequired__DelegateSignature
struct UUI_SlotButton_C_PostConfirmationRequired__DelegateSignature_Params
{
	class UUI_SlotButton_C*                            SlotThatNeedsConfirmation;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton.UI_SlotButton_C.ConfirmationRequired__DelegateSignature
struct UUI_SlotButton_C_ConfirmationRequired__DelegateSignature_Params
{
	class UUI_SlotButton_C*                            SlotThatNeedsConfirmation;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton.UI_SlotButton_C.DidUpdateSettings__DelegateSignature
struct UUI_SlotButton_C_DidUpdateSettings__DelegateSignature_Params
{
	bool                                               RequiresOptionRefresh;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       PropertyNameToSelect;                                      // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton.UI_SlotButton_C.SlotDispatcher__DelegateSignature
struct UUI_SlotButton_C_SlotDispatcher__DelegateSignature_Params
{
	unsigned char                                      InteractionType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BoundValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_SlotButton_C*                            ButtonSentFrom;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
