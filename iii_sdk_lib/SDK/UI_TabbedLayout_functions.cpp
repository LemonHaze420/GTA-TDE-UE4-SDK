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
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.ShouldSkipEntry
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                EntryIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ShouldSkip                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_TabbedLayout_C::ShouldSkipEntry(int EntryIndex, bool* ShouldSkip)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.ShouldSkipEntry");

	UUI_TabbedLayout_C_ShouldSkipEntry_Params params {};
	params.EntryIndex = EntryIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShouldSkip != nullptr)
		*ShouldSkip = params.ShouldSkip;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.SetupTabButtonNavigation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_TabbedLayout_C::SetupTabButtonNavigation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.SetupTabButtonNavigation");

	UUI_TabbedLayout_C_SetupTabButtonNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.LostFocus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_TabbedLayout_C::LostFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.LostFocus");

	UUI_TabbedLayout_C_LostFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.SetActiveTab
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                TabIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_TabbedLayout_C::SetActiveTab(int TabIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.SetActiveTab");

	UUI_TabbedLayout_C_SetActiveTab_Params params {};
	params.TabIndex = TabIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.TakeFocus
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUI_TabbedLayout_C::TakeFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.TakeFocus");

	UUI_TabbedLayout_C_TakeFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.UpdateBumperImageMaterials
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_TabbedLayout_C::UpdateBumperImageMaterials()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.UpdateBumperImageMaterials");

	UUI_TabbedLayout_C_UpdateBumperImageMaterials_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.Get Gameterface BP
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UGameterface*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UGameterface* UUI_TabbedLayout_C::Get_Gameterface_BP()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.Get Gameterface BP");

	UUI_TabbedLayout_C_Get_Gameterface_BP_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.UpdateButtonImages
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_TabbedLayout_C::UpdateButtonImages()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.UpdateButtonImages");

	UUI_TabbedLayout_C_UpdateButtonImages_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.SetupButtonImages
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_TabbedLayout_C::SetupButtonImages()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.SetupButtonImages");

	UUI_TabbedLayout_C_SetupButtonImages_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.ResetTabs
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_TabbedLayout_C::ResetTabs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.ResetTabs");

	UUI_TabbedLayout_C_ResetTabs_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.IsUsingController
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUI_TabbedLayout_C::IsUsingController()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.IsUsingController");

	UUI_TabbedLayout_C_IsUsingController_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.HasTabConfirmationDialog
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UConfirmationDialog_C*                       Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_TabbedLayout_C::HasTabConfirmationDialog(bool* Return, class UConfirmationDialog_C** Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.HasTabConfirmationDialog");

	UUI_TabbedLayout_C_HasTabConfirmationDialog_Params params {};

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
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.GetCurrentMenu
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUI_Menu_Base_BP_C*                          OutMenu                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_TabbedLayout_C::GetCurrentMenu(class UUI_Menu_Base_BP_C** OutMenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.GetCurrentMenu");

	UUI_TabbedLayout_C_GetCurrentMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutMenu != nullptr)
		*OutMenu = params.OutMenu;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.HandleBack
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUI_TabbedLayout_C::HandleBack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.HandleBack");

	UUI_TabbedLayout_C_HandleBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.SetToTab
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ForceNoFocusChange                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ForceNoSound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_TabbedLayout_C::SetToTab(int Index, bool ForceNoFocusChange, bool ForceNoSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.SetToTab");

	UUI_TabbedLayout_C_SetToTab_Params params {};
	params.Index = Index;
	params.ForceNoFocusChange = ForceNoFocusChange;
	params.ForceNoSound = ForceNoSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.PrevTab
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_TabbedLayout_C::PrevTab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.PrevTab");

	UUI_TabbedLayout_C_PrevTab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.NextTab
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_TabbedLayout_C::NextTab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.NextTab");

	UUI_TabbedLayout_C_NextTab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.GrabFocus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_TabbedLayout_C::GrabFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.GrabFocus");

	UUI_TabbedLayout_C_GrabFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.UpdateFocusWidget
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_TabbedLayout_C::UpdateFocusWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.UpdateFocusWidget");

	UUI_TabbedLayout_C_UpdateFocusWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.OnConfirmationClose
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               DidAccept                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_TabbedLayout_C::OnConfirmationClose(bool DidAccept)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.OnConfirmationClose");

	UUI_TabbedLayout_C_OnConfirmationClose_Params params {};
	params.DidAccept = DidAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.ShowConfirmationDialog
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       ConfirmText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       CancelText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               ShouldRemoveCancel                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UConfirmationDialog_C*                       CreatedWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_TabbedLayout_C::ShowConfirmationDialog(const struct FText& Message, const struct FText& ConfirmText, const struct FText& CancelText, bool ShouldRemoveCancel, class UConfirmationDialog_C** CreatedWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.ShowConfirmationDialog");

	UUI_TabbedLayout_C_ShowConfirmationDialog_Params params {};
	params.Message = Message;
	params.ConfirmText = ConfirmText;
	params.CancelText = CancelText;
	params.ShouldRemoveCancel = ShouldRemoveCancel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CreatedWidget != nullptr)
		*CreatedWidget = params.CreatedWidget;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.AddTab
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       TabText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                TabPosition                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUI_Button_Base_C*                           CreatedTab                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_TabbedLayout_C::AddTab(const struct FText& TabText, int TabPosition, class UUI_Button_Base_C** CreatedTab)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.AddTab");

	UUI_TabbedLayout_C_AddTab_Params params {};
	params.TabText = TabText;
	params.TabPosition = TabPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CreatedTab != nullptr)
		*CreatedTab = params.CreatedTab;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.AddContentToSelector
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      Widget_Class                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidgetSwitcher*                             Selector_to_add_to                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUserWidget*                                 ContentCreated                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_TabbedLayout_C::AddContentToSelector(class UClass* Widget_Class, class UWidgetSwitcher* Selector_to_add_to, class UUserWidget** ContentCreated)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.AddContentToSelector");

	UUI_TabbedLayout_C_AddContentToSelector_Params params {};
	params.Widget_Class = Widget_Class;
	params.Selector_to_add_to = Selector_to_add_to;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ContentCreated != nullptr)
		*ContentCreated = params.ContentCreated;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.UpdateButtonsOnInteract
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ButtonStateEnum_EButtonStateEnum>      Interact_Type                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Bound_Value                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_TabbedLayout_C::UpdateButtonsOnInteract(TEnumAsByte<ButtonStateEnum_EButtonStateEnum> Interact_Type, int Bound_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.UpdateButtonsOnInteract");

	UUI_TabbedLayout_C_UpdateButtonsOnInteract_Params params {};
	params.Interact_Type = Interact_Type;
	params.Bound_Value = Bound_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.InteractedButton
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ButtonStateEnum_EButtonStateEnum>      Interact_Type                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Bound_Value                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_TabbedLayout_C::InteractedButton(TEnumAsByte<ButtonStateEnum_EButtonStateEnum> Interact_Type, int Bound_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.InteractedButton");

	UUI_TabbedLayout_C_InteractedButton_Params params {};
	params.Interact_Type = Interact_Type;
	params.Bound_Value = Bound_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.SetupTabs
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UUI_Button_Base_C*>                   TabsButtonsCreated                                         (Parm, OutParm, ContainsInstancedReference)
void UUI_TabbedLayout_C::SetupTabs(TArray<class UUI_Button_Base_C*>* TabsButtonsCreated)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.SetupTabs");

	UUI_TabbedLayout_C_SetupTabs_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TabsButtonsCreated != nullptr)
		*TabsButtonsCreated = params.TabsButtonsCreated;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_TabbedLayout_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.Construct");

	UUI_TabbedLayout_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.TabUsed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		unsigned char                                      Interaction                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_TabbedLayout_C::TabUsed(unsigned char Interaction, int BoundValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.TabUsed");

	UUI_TabbedLayout_C_TabUsed_Params params {};
	params.Interaction = Interaction;
	params.BoundValue = BoundValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.OnSynchronizeProperties
//		Flags  -> (Event, Public, BlueprintEvent)
void UUI_TabbedLayout_C::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.OnSynchronizeProperties");

	UUI_TabbedLayout_C_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_TabbedLayout_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.Tick");

	UUI_TabbedLayout_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.CreateTabs
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UUI_TabbedLayout_C::CreateTabs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.CreateTabs");

	UUI_TabbedLayout_C_CreateTabs_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.DelayedSetToTab
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ForceNoFocusChange                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ForceNoSound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_TabbedLayout_C::DelayedSetToTab(int Index, bool ForceNoFocusChange, bool ForceNoSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.DelayedSetToTab");

	UUI_TabbedLayout_C_DelayedSetToTab_Params params {};
	params.Index = Index;
	params.ForceNoFocusChange = ForceNoFocusChange;
	params.ForceNoSound = ForceNoSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_TabbedLayout.UI_TabbedLayout_C.ExecuteUbergraph_UI_TabbedLayout
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_TabbedLayout_C::ExecuteUbergraph_UI_TabbedLayout(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_TabbedLayout.UI_TabbedLayout_C.ExecuteUbergraph_UI_TabbedLayout");

	UUI_TabbedLayout_C_ExecuteUbergraph_UI_TabbedLayout_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
