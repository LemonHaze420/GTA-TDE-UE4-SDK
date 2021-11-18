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

// Function AdjustableControls.AdjustableControls_C.SetupHelpButtons
struct UAdjustableControls_C_SetupHelpButtons_Params
{
};

// Function AdjustableControls.AdjustableControls_C.VibrationOptionOverride
struct UAdjustableControls_C_VibrationOptionOverride_Params
{
};

// Function AdjustableControls.AdjustableControls_C.RefreshMappings
struct UAdjustableControls_C_RefreshMappings_Params
{
};

// Function AdjustableControls.AdjustableControls_C.InitAdjustableSlotButton
struct UAdjustableControls_C_InitAdjustableSlotButton_Params
{
	class UUI_SlotButton_C*                            SlotItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                                     SlotButton;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AdjustableControls.AdjustableControls_C.SetupButtonsWithTemplate
struct UAdjustableControls_C_SetupButtonsWithTemplate_Params
{
};

// Function AdjustableControls.AdjustableControls_C.Move Controller UI Above Slot Buttons
struct UAdjustableControls_C_Move_Controller_UI_Above_Slot_Buttons_Params
{
	float                                              UIOffsetY;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AdjustableControls.AdjustableControls_C.CreateControllerUI
struct UAdjustableControls_C_CreateControllerUI_Params
{
	class UControllerUI_Base_C*                        UI;                                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AdjustableControls.AdjustableControls_C.GetControllerUIClass
struct UAdjustableControls_C_GetControllerUIClass_Params
{
	class UClass*                                      ControllerUIClass;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AdjustableControls.AdjustableControls_C.SetupControlSchemeButton
struct UAdjustableControls_C_SetupControlSchemeButton_Params
{
};

// Function AdjustableControls.AdjustableControls_C.Setup Top Slot Buttons and Positions
struct UAdjustableControls_C_Setup_Top_Slot_Buttons_and_Positions_Params
{
	bool                                               OnSynchronize;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWidget*                                     BelowButtonsWidget;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     AboveButtonsWidget;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameterSettings*                            SettingsObject;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OffsetBelowButtons;                                        // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     LastSlotButtonWidget;                                      // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     FirstSlotButtonWidget;                                     // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AdjustableControls.AdjustableControls_C.UpdateControllerUI
struct UAdjustableControls_C_UpdateControllerUI_Params
{
};

// Function AdjustableControls.AdjustableControls_C.UpdateUI
struct UAdjustableControls_C_UpdateUI_Params
{
	TEnumAsByte<GTABase_EGTAInputType>                 CurrentInput;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AdjustableControls.AdjustableControls_C.GetControllerNavigationWidgets
struct UAdjustableControls_C_GetControllerNavigationWidgets_Params
{
	int                                                ArrayIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                             Array;                                                     // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               IsLeft;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UWidget*>                             OtherArray;                                                // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UWidget*                                     Up;                                                        // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     Down;                                                      // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     Left;                                                      // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     Right;                                                     // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AdjustableControls.AdjustableControls_C.SetupControllerSlots
struct UAdjustableControls_C_SetupControllerSlots_Params
{
	bool                                               OnSynchronize;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UControllerUI_Base_C*                        ControllerUI;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AdjustableControls.AdjustableControls_C.SetupForTouch
struct UAdjustableControls_C_SetupForTouch_Params
{
};

// Function AdjustableControls.AdjustableControls_C.SetupForController
struct UAdjustableControls_C_SetupForController_Params
{
	bool                                               OnSynchronize;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AdjustableControls.AdjustableControls_C.OnSaveKeyboardControlsDialog
struct UAdjustableControls_C_OnSaveKeyboardControlsDialog_Params
{
	bool                                               DidAccept;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AdjustableControls.AdjustableControls_C.OnResetKeyboardControlsDialog
struct UAdjustableControls_C_OnResetKeyboardControlsDialog_Params
{
	bool                                               DidAccept;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AdjustableControls.AdjustableControls_C.TakeFocus
struct UAdjustableControls_C_TakeFocus_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function AdjustableControls.AdjustableControls_C.InitAdjustableControlsMenu
struct UAdjustableControls_C_InitAdjustableControlsMenu_Params
{
};

// Function AdjustableControls.AdjustableControls_C.OnListeningDialogComplete
struct UAdjustableControls_C_OnListeningDialogComplete_Params
{
	bool                                               DidAccept;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AdjustableControls.AdjustableControls_C.AdjustButtonPressed
struct UAdjustableControls_C_AdjustButtonPressed_Params
{
	unsigned char                                      InteractionType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BoundValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_SlotButton_C*                            SlotButton;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AdjustableControls.AdjustableControls_C.Show Window
struct UAdjustableControls_C_Show_Window_Params
{
	TEnumAsByte<GTABase_EGTAInputType>                 CurrentTypeToShow;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AdjustableControls.AdjustableControls_C.SetupForKeyboard
struct UAdjustableControls_C_SetupForKeyboard_Params
{
};

// Function AdjustableControls.AdjustableControls_C.GetInputType
struct UAdjustableControls_C_GetInputType_Params
{
	TEnumAsByte<GTABase_EGTAInputType>                 ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AdjustableControls.AdjustableControls_C.SetupRightSlots
struct UAdjustableControls_C_SetupRightSlots_Params
{
};

// Function AdjustableControls.AdjustableControls_C.CreateMappingSlot
struct UAdjustableControls_C_CreateMappingSlot_Params
{
	struct FText                                       Main_Text;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Alt_Text;                                                  // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Index;                                                     // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_ScrollingSlotList_C*                     ListToAddTo;                                               // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsLeftPanel;                                               // 0x0040(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                BoundMapping;                                              // 0x0044(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AdjustableControls.AdjustableControls_C.SetupLeftSlots
struct UAdjustableControls_C_SetupLeftSlots_Params
{
};

// Function AdjustableControls.AdjustableControls_C.SetupSlotTitles
struct UAdjustableControls_C_SetupSlotTitles_Params
{
};

// Function AdjustableControls.AdjustableControls_C.UpdateButtons
struct UAdjustableControls_C_UpdateButtons_Params
{
};

// Function AdjustableControls.AdjustableControls_C.UpdateSlotStyle
struct UAdjustableControls_C_UpdateSlotStyle_Params
{
};

// Function AdjustableControls.AdjustableControls_C.Construct
struct UAdjustableControls_C_Construct_Params
{
};

// Function AdjustableControls.AdjustableControls_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_1_ButtonDispatcher__DelegateSignature
struct UAdjustableControls_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_1_ButtonDispatcher__DelegateSignature_Params
{
	unsigned char                                      Interaction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BoundValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AdjustableControls.AdjustableControls_C.ForceButtonsHovered
struct UAdjustableControls_C_ForceButtonsHovered_Params
{
};

// Function AdjustableControls.AdjustableControls_C.ForceButtonsNormal
struct UAdjustableControls_C_ForceButtonsNormal_Params
{
};

// Function AdjustableControls.AdjustableControls_C.ForceButtonsSelected
struct UAdjustableControls_C_ForceButtonsSelected_Params
{
};

// Function AdjustableControls.AdjustableControls_C.PreConstruct
struct UAdjustableControls_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AdjustableControls.AdjustableControls_C.BndEvt__ControllerTemplateSelect_K2Node_ComponentBoundEvent_3_DidUpdateSettings__DelegateSignature
struct UAdjustableControls_C_BndEvt__ControllerTemplateSelect_K2Node_ComponentBoundEvent_3_DidUpdateSettings__DelegateSignature_Params
{
	bool                                               RequiresOptionRefresh;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       PropertyNameToSelect;                                      // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AdjustableControls.AdjustableControls_C.Tick
struct UAdjustableControls_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AdjustableControls.AdjustableControls_C.ExecuteUbergraph_AdjustableControls
struct UAdjustableControls_C_ExecuteUbergraph_AdjustableControls_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
