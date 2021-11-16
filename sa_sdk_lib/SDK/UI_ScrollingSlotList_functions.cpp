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
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.SetVersionText
//		Flags  -> ()
// Parameters:
void UUI_ScrollingSlotList_C::SetVersionText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.SetVersionText");

	UUI_ScrollingSlotList_C_SetVersionText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnMouseWheel
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUI_ScrollingSlotList_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnMouseWheel");

	UUI_ScrollingSlotList_C_OnMouseWheel_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnMouseButtonDown
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUI_ScrollingSlotList_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnMouseButtonDown");

	UUI_ScrollingSlotList_C_OnMouseButtonDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnMouseMove
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUI_ScrollingSlotList_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnMouseMove");

	UUI_ScrollingSlotList_C_OnMouseMove_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.UpdateControllerFocusVisability
//		Flags  -> ()
// Parameters:
void UUI_ScrollingSlotList_C::UpdateControllerFocusVisability()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.UpdateControllerFocusVisability");

	UUI_ScrollingSlotList_C_UpdateControllerFocusVisability_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.IsCurrentInputController
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUI_ScrollingSlotList_C::IsCurrentInputController()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.IsCurrentInputController");

	UUI_ScrollingSlotList_C_IsCurrentInputController_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.FocusSpecificSlot
//		Flags  -> ()
// Parameters:
//		int                                                SlotIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               WasValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UUI_SlotButton_C*                            SelectedSlotButton                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ScrollingSlotList_C::FocusSpecificSlot(int SlotIndex, bool* WasValid, class UUI_SlotButton_C** SelectedSlotButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.FocusSpecificSlot");

	UUI_ScrollingSlotList_C_FocusSpecificSlot_Params params {};
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WasValid != nullptr)
		*WasValid = params.WasValid;
	if (SelectedSlotButton != nullptr)
		*SelectedSlotButton = params.SelectedSlotButton;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.GrabSpecificOptionFocus
//		Flags  -> ()
// Parameters:
//		struct FName                                       PropertyName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     FocusedWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ScrollingSlotList_C::GrabSpecificOptionFocus(const struct FName& PropertyName, class UWidget** FocusedWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.GrabSpecificOptionFocus");

	UUI_ScrollingSlotList_C_GrabSpecificOptionFocus_Params params {};
	params.PropertyName = PropertyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FocusedWidget != nullptr)
		*FocusedWidget = params.FocusedWidget;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.ClearSlotList
//		Flags  -> ()
void UUI_ScrollingSlotList_C::ClearSlotList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.ClearSlotList");

	UUI_ScrollingSlotList_C_ClearSlotList_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.SetFocusToFirstEntry
//		Flags  -> ()
// Parameters:
void UUI_ScrollingSlotList_C::SetFocusToFirstEntry()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.SetFocusToFirstEntry");

	UUI_ScrollingSlotList_C_SetFocusToFirstEntry_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.SetupNavigation
//		Flags  -> ()
// Parameters:
void UUI_ScrollingSlotList_C::SetupNavigation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.SetupNavigation");

	UUI_ScrollingSlotList_C_SetupNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.Grab Slot Focus
//		Flags  -> ()
// Parameters:
//		bool                                               ForceIgnoreSound                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UUI_SlotButton_C*                            SelectedSlotButton                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ScrollingSlotList_C::Grab_Slot_Focus(bool ForceIgnoreSound, class UUI_SlotButton_C** SelectedSlotButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.Grab Slot Focus");

	UUI_ScrollingSlotList_C_Grab_Slot_Focus_Params params {};
	params.ForceIgnoreSound = ForceIgnoreSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SelectedSlotButton != nullptr)
		*SelectedSlotButton = params.SelectedSlotButton;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.UpdateFocus
//		Flags  -> ()
// Parameters:
void UUI_ScrollingSlotList_C::UpdateFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.UpdateFocus");

	UUI_ScrollingSlotList_C_UpdateFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.UpdateSelectedSlot
//		Flags  -> ()
// Parameters:
//		class UUI_SlotButton_C*                            SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ScrollingSlotList_C::UpdateSelectedSlot(class UUI_SlotButton_C* SelectedItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.UpdateSelectedSlot");

	UUI_ScrollingSlotList_C_UpdateSelectedSlot_Params params {};
	params.SelectedItem = SelectedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.SetMenu
//		Flags  -> ()
void UUI_ScrollingSlotList_C::SetMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.SetMenu");

	UUI_ScrollingSlotList_C_SetMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.AddSlotItem
//		Flags  -> ()
// Parameters:
//		class UUI_SlotButton_C*                            Slot_Item                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGTAOptionsItemTemplate                     Options                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UGameterSettings*                            SettingsObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ScrollingSlotList_C::AddSlotItem(class UUI_SlotButton_C* Slot_Item, const struct FGTAOptionsItemTemplate& Options, class UGameterSettings* SettingsObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.AddSlotItem");

	UUI_ScrollingSlotList_C_AddSlotItem_Params params {};
	params.Slot_Item = Slot_Item;
	params.Options = Options;
	params.SettingsObject = SettingsObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.CreateScrollingListItems
//		Flags  -> ()
// Parameters:
//		bool                                               DEBUG_ALL_ITEMS                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ScrollingSlotList_C::CreateScrollingListItems(bool DEBUG_ALL_ITEMS)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.CreateScrollingListItems");

	UUI_ScrollingSlotList_C_CreateScrollingListItems_Params params {};
	params.DEBUG_ALL_ITEMS = DEBUG_ALL_ITEMS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.ScrollingList Init
//		Flags  -> ()
// Parameters:
void UUI_ScrollingSlotList_C::ScrollingList_Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.ScrollingList Init");

	UUI_ScrollingSlotList_C_ScrollingList_Init_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.Construct
//		Flags  -> ()
void UUI_ScrollingSlotList_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.Construct");

	UUI_ScrollingSlotList_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnSynchronizeProperties
//		Flags  -> ()
void UUI_ScrollingSlotList_C::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnSynchronizeProperties");

	UUI_ScrollingSlotList_C_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ScrollingSlotList_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.Tick");

	UUI_ScrollingSlotList_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.DelayedSetFocusToFirst
//		Flags  -> ()
void UUI_ScrollingSlotList_C::DelayedSetFocusToFirst()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.DelayedSetFocusToFirst");

	UUI_ScrollingSlotList_C_DelayedSetFocusToFirst_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.SlotButtonPressed
//		Flags  -> ()
// Parameters:
//		unsigned char                                      InteractionType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUI_SlotButton_C*                            ButtonSentFrom                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ScrollingSlotList_C::SlotButtonPressed(unsigned char InteractionType, int BoundValue, class UUI_SlotButton_C* ButtonSentFrom)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.SlotButtonPressed");

	UUI_ScrollingSlotList_C_SlotButtonPressed_Params params {};
	params.InteractionType = InteractionType;
	params.BoundValue = BoundValue;
	params.ButtonSentFrom = ButtonSentFrom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.ExecuteUbergraph_UI_ScrollingSlotList
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ScrollingSlotList_C::ExecuteUbergraph_UI_ScrollingSlotList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.ExecuteUbergraph_UI_ScrollingSlotList");

	UUI_ScrollingSlotList_C_ExecuteUbergraph_UI_ScrollingSlotList_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnDeselectedTab__DelegateSignature
//		Flags  -> ()
void UUI_ScrollingSlotList_C::OnDeselectedTab__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnDeselectedTab__DelegateSignature");

	UUI_ScrollingSlotList_C_OnDeselectedTab__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnSelectedTab__DelegateSignature
//		Flags  -> ()
void UUI_ScrollingSlotList_C::OnSelectedTab__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnSelectedTab__DelegateSignature");

	UUI_ScrollingSlotList_C_OnSelectedTab__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
