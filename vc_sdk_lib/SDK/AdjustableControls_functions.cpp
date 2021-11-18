// Name: ViceCity, Version: 1.0.0

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
//		Name   -> Function AdjustableControls.AdjustableControls_C.SetupHelpButtons
//		Flags  -> ()
// Parameters:
void UAdjustableControls_C::SetupHelpButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.SetupHelpButtons");

	UAdjustableControls_C_SetupHelpButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.VibrationOptionOverride
//		Flags  -> ()
// Parameters:
void UAdjustableControls_C::VibrationOptionOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.VibrationOptionOverride");

	UAdjustableControls_C_VibrationOptionOverride_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.RefreshMappings
//		Flags  -> ()
// Parameters:
void UAdjustableControls_C::RefreshMappings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.RefreshMappings");

	UAdjustableControls_C_RefreshMappings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.InitAdjustableSlotButton
//		Flags  -> ()
// Parameters:
//		class UUI_SlotButton_C*                            SlotItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UButton*                                     SlotButton                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAdjustableControls_C::InitAdjustableSlotButton(class UUI_SlotButton_C* SlotItem, class UButton** SlotButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.InitAdjustableSlotButton");

	UAdjustableControls_C_InitAdjustableSlotButton_Params params {};
	params.SlotItem = SlotItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SlotButton != nullptr)
		*SlotButton = params.SlotButton;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.SetupButtonsWithTemplate
//		Flags  -> ()
// Parameters:
void UAdjustableControls_C::SetupButtonsWithTemplate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.SetupButtonsWithTemplate");

	UAdjustableControls_C_SetupButtonsWithTemplate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.Move Controller UI Above Slot Buttons
//		Flags  -> ()
// Parameters:
//		float                                              UIOffsetY                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAdjustableControls_C::Move_Controller_UI_Above_Slot_Buttons(float UIOffsetY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.Move Controller UI Above Slot Buttons");

	UAdjustableControls_C_Move_Controller_UI_Above_Slot_Buttons_Params params {};
	params.UIOffsetY = UIOffsetY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.CreateControllerUI
//		Flags  -> ()
// Parameters:
//		class UControllerUI_Base_C*                        UI                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAdjustableControls_C::CreateControllerUI(class UControllerUI_Base_C** UI)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.CreateControllerUI");

	UAdjustableControls_C_CreateControllerUI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UI != nullptr)
		*UI = params.UI;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.GetControllerUIClass
//		Flags  -> ()
// Parameters:
//		class UClass*                                      ControllerUIClass                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAdjustableControls_C::GetControllerUIClass(class UClass** ControllerUIClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.GetControllerUIClass");

	UAdjustableControls_C_GetControllerUIClass_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ControllerUIClass != nullptr)
		*ControllerUIClass = params.ControllerUIClass;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.SetupControlSchemeButton
//		Flags  -> ()
// Parameters:
void UAdjustableControls_C::SetupControlSchemeButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.SetupControlSchemeButton");

	UAdjustableControls_C_SetupControlSchemeButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.Setup Top Slot Buttons and Positions
//		Flags  -> ()
// Parameters:
//		bool                                               OnSynchronize                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UWidget*                                     BelowButtonsWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     AboveButtonsWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UGameterSettings*                            SettingsObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              OffsetBelowButtons                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     LastSlotButtonWidget                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     FirstSlotButtonWidget                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAdjustableControls_C::Setup_Top_Slot_Buttons_and_Positions(bool OnSynchronize, class UWidget* BelowButtonsWidget, class UWidget* AboveButtonsWidget, class UGameterSettings* SettingsObject, float* OffsetBelowButtons, class UWidget** LastSlotButtonWidget, class UWidget** FirstSlotButtonWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.Setup Top Slot Buttons and Positions");

	UAdjustableControls_C_Setup_Top_Slot_Buttons_and_Positions_Params params {};
	params.OnSynchronize = OnSynchronize;
	params.BelowButtonsWidget = BelowButtonsWidget;
	params.AboveButtonsWidget = AboveButtonsWidget;
	params.SettingsObject = SettingsObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OffsetBelowButtons != nullptr)
		*OffsetBelowButtons = params.OffsetBelowButtons;
	if (LastSlotButtonWidget != nullptr)
		*LastSlotButtonWidget = params.LastSlotButtonWidget;
	if (FirstSlotButtonWidget != nullptr)
		*FirstSlotButtonWidget = params.FirstSlotButtonWidget;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.UpdateControllerUI
//		Flags  -> ()
void UAdjustableControls_C::UpdateControllerUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.UpdateControllerUI");

	UAdjustableControls_C_UpdateControllerUI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.UpdateUI
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTAInputType>                 CurrentInput                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAdjustableControls_C::UpdateUI(TEnumAsByte<GTABase_EGTAInputType> CurrentInput)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.UpdateUI");

	UAdjustableControls_C_UpdateUI_Params params {};
	params.CurrentInput = CurrentInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.GetControllerNavigationWidgets
//		Flags  -> ()
// Parameters:
//		int                                                ArrayIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class UWidget*>                             Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
//		bool                                               IsLeft                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<class UWidget*>                             OtherArray                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
//		class UWidget*                                     Up                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     Down                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     Left                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     Right                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAdjustableControls_C::GetControllerNavigationWidgets(int ArrayIndex, TArray<class UWidget*>* Array, bool IsLeft, TArray<class UWidget*>* OtherArray, class UWidget** Up, class UWidget** Down, class UWidget** Left, class UWidget** Right)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.GetControllerNavigationWidgets");

	UAdjustableControls_C_GetControllerNavigationWidgets_Params params {};
	params.ArrayIndex = ArrayIndex;
	params.IsLeft = IsLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (OtherArray != nullptr)
		*OtherArray = params.OtherArray;
	if (Up != nullptr)
		*Up = params.Up;
	if (Down != nullptr)
		*Down = params.Down;
	if (Left != nullptr)
		*Left = params.Left;
	if (Right != nullptr)
		*Right = params.Right;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.SetupControllerSlots
//		Flags  -> ()
// Parameters:
//		bool                                               OnSynchronize                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UControllerUI_Base_C*                        ControllerUI                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAdjustableControls_C::SetupControllerSlots(bool OnSynchronize, class UControllerUI_Base_C* ControllerUI)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.SetupControllerSlots");

	UAdjustableControls_C_SetupControllerSlots_Params params {};
	params.OnSynchronize = OnSynchronize;
	params.ControllerUI = ControllerUI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.SetupForTouch
//		Flags  -> ()
void UAdjustableControls_C::SetupForTouch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.SetupForTouch");

	UAdjustableControls_C_SetupForTouch_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.SetupForController
//		Flags  -> ()
// Parameters:
//		bool                                               OnSynchronize                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAdjustableControls_C::SetupForController(bool OnSynchronize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.SetupForController");

	UAdjustableControls_C_SetupForController_Params params {};
	params.OnSynchronize = OnSynchronize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.OnSaveKeyboardControlsDialog
//		Flags  -> ()
// Parameters:
//		bool                                               DidAccept                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAdjustableControls_C::OnSaveKeyboardControlsDialog(bool DidAccept)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.OnSaveKeyboardControlsDialog");

	UAdjustableControls_C_OnSaveKeyboardControlsDialog_Params params {};
	params.DidAccept = DidAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.OnResetKeyboardControlsDialog
//		Flags  -> ()
// Parameters:
//		bool                                               DidAccept                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAdjustableControls_C::OnResetKeyboardControlsDialog(bool DidAccept)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.OnResetKeyboardControlsDialog");

	UAdjustableControls_C_OnResetKeyboardControlsDialog_Params params {};
	params.DidAccept = DidAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.TakeFocus
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAdjustableControls_C::TakeFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.TakeFocus");

	UAdjustableControls_C_TakeFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.InitAdjustableControlsMenu
//		Flags  -> ()
// Parameters:
void UAdjustableControls_C::InitAdjustableControlsMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.InitAdjustableControlsMenu");

	UAdjustableControls_C_InitAdjustableControlsMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.OnListeningDialogComplete
//		Flags  -> ()
// Parameters:
//		bool                                               DidAccept                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAdjustableControls_C::OnListeningDialogComplete(bool DidAccept)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.OnListeningDialogComplete");

	UAdjustableControls_C_OnListeningDialogComplete_Params params {};
	params.DidAccept = DidAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.AdjustButtonPressed
//		Flags  -> ()
// Parameters:
//		unsigned char                                      InteractionType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUI_SlotButton_C*                            SlotButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAdjustableControls_C::AdjustButtonPressed(unsigned char InteractionType, int BoundValue, class UUI_SlotButton_C* SlotButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.AdjustButtonPressed");

	UAdjustableControls_C_AdjustButtonPressed_Params params {};
	params.InteractionType = InteractionType;
	params.BoundValue = BoundValue;
	params.SlotButton = SlotButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.Show Window
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTAInputType>                 CurrentTypeToShow                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAdjustableControls_C::Show_Window(TEnumAsByte<GTABase_EGTAInputType> CurrentTypeToShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.Show Window");

	UAdjustableControls_C_Show_Window_Params params {};
	params.CurrentTypeToShow = CurrentTypeToShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.SetupForKeyboard
//		Flags  -> ()
void UAdjustableControls_C::SetupForKeyboard()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.SetupForKeyboard");

	UAdjustableControls_C_SetupForKeyboard_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.GetInputType
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTAInputType>                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<GTABase_EGTAInputType> UAdjustableControls_C::GetInputType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.GetInputType");

	UAdjustableControls_C_GetInputType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.SetupRightSlots
//		Flags  -> ()
// Parameters:
void UAdjustableControls_C::SetupRightSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.SetupRightSlots");

	UAdjustableControls_C_SetupRightSlots_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.CreateMappingSlot
//		Flags  -> ()
// Parameters:
//		struct FText                                       Main_Text                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Alt_Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUI_ScrollingSlotList_C*                     ListToAddTo                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsLeftPanel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                BoundMapping                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAdjustableControls_C::CreateMappingSlot(const struct FText& Main_Text, const struct FText& Alt_Text, int Index, class UUI_ScrollingSlotList_C* ListToAddTo, bool IsLeftPanel, int BoundMapping)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.CreateMappingSlot");

	UAdjustableControls_C_CreateMappingSlot_Params params {};
	params.Main_Text = Main_Text;
	params.Alt_Text = Alt_Text;
	params.Index = Index;
	params.ListToAddTo = ListToAddTo;
	params.IsLeftPanel = IsLeftPanel;
	params.BoundMapping = BoundMapping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.SetupLeftSlots
//		Flags  -> ()
// Parameters:
void UAdjustableControls_C::SetupLeftSlots()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.SetupLeftSlots");

	UAdjustableControls_C_SetupLeftSlots_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.SetupSlotTitles
//		Flags  -> ()
// Parameters:
void UAdjustableControls_C::SetupSlotTitles()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.SetupSlotTitles");

	UAdjustableControls_C_SetupSlotTitles_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.UpdateButtons
//		Flags  -> ()
// Parameters:
void UAdjustableControls_C::UpdateButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.UpdateButtons");

	UAdjustableControls_C_UpdateButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.UpdateSlotStyle
//		Flags  -> ()
// Parameters:
void UAdjustableControls_C::UpdateSlotStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.UpdateSlotStyle");

	UAdjustableControls_C_UpdateSlotStyle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.Construct
//		Flags  -> ()
void UAdjustableControls_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.Construct");

	UAdjustableControls_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_1_ButtonDispatcher__DelegateSignature
//		Flags  -> ()
// Parameters:
//		unsigned char                                      Interaction                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAdjustableControls_C::BndEvt__ResetButton_K2Node_ComponentBoundEvent_1_ButtonDispatcher__DelegateSignature(unsigned char Interaction, int BoundValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_1_ButtonDispatcher__DelegateSignature");

	UAdjustableControls_C_BndEvt__ResetButton_K2Node_ComponentBoundEvent_1_ButtonDispatcher__DelegateSignature_Params params {};
	params.Interaction = Interaction;
	params.BoundValue = BoundValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.ForceButtonsHovered
//		Flags  -> ()
void UAdjustableControls_C::ForceButtonsHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.ForceButtonsHovered");

	UAdjustableControls_C_ForceButtonsHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.ForceButtonsNormal
//		Flags  -> ()
void UAdjustableControls_C::ForceButtonsNormal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.ForceButtonsNormal");

	UAdjustableControls_C_ForceButtonsNormal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.ForceButtonsSelected
//		Flags  -> ()
void UAdjustableControls_C::ForceButtonsSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.ForceButtonsSelected");

	UAdjustableControls_C_ForceButtonsSelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAdjustableControls_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.PreConstruct");

	UAdjustableControls_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.BndEvt__ControllerTemplateSelect_K2Node_ComponentBoundEvent_3_DidUpdateSettings__DelegateSignature
//		Flags  -> ()
// Parameters:
//		bool                                               RequiresOptionRefresh                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FName                                       PropertyNameToSelect                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAdjustableControls_C::BndEvt__ControllerTemplateSelect_K2Node_ComponentBoundEvent_3_DidUpdateSettings__DelegateSignature(bool RequiresOptionRefresh, const struct FName& PropertyNameToSelect)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.BndEvt__ControllerTemplateSelect_K2Node_ComponentBoundEvent_3_DidUpdateSettings__DelegateSignature");

	UAdjustableControls_C_BndEvt__ControllerTemplateSelect_K2Node_ComponentBoundEvent_3_DidUpdateSettings__DelegateSignature_Params params {};
	params.RequiresOptionRefresh = RequiresOptionRefresh;
	params.PropertyNameToSelect = PropertyNameToSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAdjustableControls_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.Tick");

	UAdjustableControls_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AdjustableControls.AdjustableControls_C.ExecuteUbergraph_AdjustableControls
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAdjustableControls_C::ExecuteUbergraph_AdjustableControls(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AdjustableControls.AdjustableControls_C.ExecuteUbergraph_AdjustableControls");

	UAdjustableControls_C_ExecuteUbergraph_AdjustableControls_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
