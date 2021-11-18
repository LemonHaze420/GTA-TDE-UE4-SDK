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

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.SetVersionText
struct UUI_ScrollingSlotList_C_SetVersionText_Params
{
};

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnMouseWheel
struct UUI_ScrollingSlotList_C_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnMouseButtonDown
struct UUI_ScrollingSlotList_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnMouseMove
struct UUI_ScrollingSlotList_C_OnMouseMove_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.UpdateControllerFocusVisability
struct UUI_ScrollingSlotList_C_UpdateControllerFocusVisability_Params
{
};

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.IsCurrentInputController
struct UUI_ScrollingSlotList_C_IsCurrentInputController_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.FocusSpecificSlot
struct UUI_ScrollingSlotList_C_FocusSpecificSlot_Params
{
	int                                                SlotIndex;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WasValid;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUI_SlotButton_C*                            SelectedSlotButton;                                        // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.GrabSpecificOptionFocus
struct UUI_ScrollingSlotList_C_GrabSpecificOptionFocus_Params
{
	struct FName                                       PropertyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     FocusedWidget;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.ClearSlotList
struct UUI_ScrollingSlotList_C_ClearSlotList_Params
{
};

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.SetFocusToFirstEntry
struct UUI_ScrollingSlotList_C_SetFocusToFirstEntry_Params
{
};

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.SetupNavigation
struct UUI_ScrollingSlotList_C_SetupNavigation_Params
{
};

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.Grab Slot Focus
struct UUI_ScrollingSlotList_C_Grab_Slot_Focus_Params
{
	bool                                               ForceIgnoreSound;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUI_SlotButton_C*                            SelectedSlotButton;                                        // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.UpdateFocus
struct UUI_ScrollingSlotList_C_UpdateFocus_Params
{
};

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.UpdateSelectedSlot
struct UUI_ScrollingSlotList_C_UpdateSelectedSlot_Params
{
	class UUI_SlotButton_C*                            SelectedItem;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.SetMenu
struct UUI_ScrollingSlotList_C_SetMenu_Params
{
};

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.AddSlotItem
struct UUI_ScrollingSlotList_C_AddSlotItem_Params
{
	class UUI_SlotButton_C*                            Slot_Item;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGTAOptionsItemTemplate                     Options;                                                   // 0x0008(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UGameterSettings*                            SettingsObject;                                            // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.CreateScrollingListItems
struct UUI_ScrollingSlotList_C_CreateScrollingListItems_Params
{
	bool                                               DEBUG_ALL_ITEMS;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.ScrollingList Init
struct UUI_ScrollingSlotList_C_ScrollingList_Init_Params
{
};

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.Construct
struct UUI_ScrollingSlotList_C_Construct_Params
{
};

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnSynchronizeProperties
struct UUI_ScrollingSlotList_C_OnSynchronizeProperties_Params
{
};

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.Tick
struct UUI_ScrollingSlotList_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.DelayedSetFocusToFirst
struct UUI_ScrollingSlotList_C_DelayedSetFocusToFirst_Params
{
};

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.SlotButtonPressed
struct UUI_ScrollingSlotList_C_SlotButtonPressed_Params
{
	unsigned char                                      InteractionType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BoundValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_SlotButton_C*                            ButtonSentFrom;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.ExecuteUbergraph_UI_ScrollingSlotList
struct UUI_ScrollingSlotList_C_ExecuteUbergraph_UI_ScrollingSlotList_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnDeselectedTab__DelegateSignature
struct UUI_ScrollingSlotList_C_OnDeselectedTab__DelegateSignature_Params
{
};

// Function UI_ScrollingSlotList.UI_ScrollingSlotList_C.OnSelectedTab__DelegateSignature
struct UUI_ScrollingSlotList_C_OnSelectedTab__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
