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

// Function UI_TabbedLayout.UI_TabbedLayout_C.ShouldSkipEntry
struct UUI_TabbedLayout_C_ShouldSkipEntry_Params
{
	int                                                EntryIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldSkip;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.SetupTabButtonNavigation
struct UUI_TabbedLayout_C_SetupTabButtonNavigation_Params
{
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.LostFocus
struct UUI_TabbedLayout_C_LostFocus_Params
{
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.SetActiveTab
struct UUI_TabbedLayout_C_SetActiveTab_Params
{
	int                                                TabIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.TakeFocus
struct UUI_TabbedLayout_C_TakeFocus_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.UpdateBumperImageMaterials
struct UUI_TabbedLayout_C_UpdateBumperImageMaterials_Params
{
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.Get Gameterface BP
struct UUI_TabbedLayout_C_Get_Gameterface_BP_Params
{
	class UGameterface*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.UpdateButtonImages
struct UUI_TabbedLayout_C_UpdateButtonImages_Params
{
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.SetupButtonImages
struct UUI_TabbedLayout_C_SetupButtonImages_Params
{
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.ResetTabs
struct UUI_TabbedLayout_C_ResetTabs_Params
{
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.IsUsingController
struct UUI_TabbedLayout_C_IsUsingController_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.HasTabConfirmationDialog
struct UUI_TabbedLayout_C_HasTabConfirmationDialog_Params
{
	bool                                               Return;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UConfirmationDialog_C*                       Widget;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.GetCurrentMenu
struct UUI_TabbedLayout_C_GetCurrentMenu_Params
{
	class UUI_Menu_Base_BP_C*                          OutMenu;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.HandleBack
struct UUI_TabbedLayout_C_HandleBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.SetToTab
struct UUI_TabbedLayout_C_SetToTab_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ForceNoFocusChange;                                        // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ForceNoSound;                                              // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.PrevTab
struct UUI_TabbedLayout_C_PrevTab_Params
{
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.NextTab
struct UUI_TabbedLayout_C_NextTab_Params
{
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.GrabFocus
struct UUI_TabbedLayout_C_GrabFocus_Params
{
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.UpdateFocusWidget
struct UUI_TabbedLayout_C_UpdateFocusWidget_Params
{
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.OnConfirmationClose
struct UUI_TabbedLayout_C_OnConfirmationClose_Params
{
	bool                                               DidAccept;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.ShowConfirmationDialog
struct UUI_TabbedLayout_C_ShowConfirmationDialog_Params
{
	struct FText                                       Message;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ConfirmText;                                               // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       CancelText;                                                // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ShouldRemoveCancel;                                        // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UConfirmationDialog_C*                       CreatedWidget;                                             // 0x0050(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.AddTab
struct UUI_TabbedLayout_C_AddTab_Params
{
	struct FText                                       TabText;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                TabPosition;                                               // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Button_Base_C*                           CreatedTab;                                                // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.AddContentToSelector
struct UUI_TabbedLayout_C_AddContentToSelector_Params
{
	class UClass*                                      Widget_Class;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                             Selector_to_add_to;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 ContentCreated;                                            // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.UpdateButtonsOnInteract
struct UUI_TabbedLayout_C_UpdateButtonsOnInteract_Params
{
	TEnumAsByte<ButtonStateEnum_EButtonStateEnum>      Interact_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Bound_Value;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.InteractedButton
struct UUI_TabbedLayout_C_InteractedButton_Params
{
	TEnumAsByte<ButtonStateEnum_EButtonStateEnum>      Interact_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Bound_Value;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.SetupTabs
struct UUI_TabbedLayout_C_SetupTabs_Params
{
	TArray<class UUI_Button_Base_C*>                   TabsButtonsCreated;                                        // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.Construct
struct UUI_TabbedLayout_C_Construct_Params
{
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.TabUsed
struct UUI_TabbedLayout_C_TabUsed_Params
{
	unsigned char                                      Interaction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BoundValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.OnSynchronizeProperties
struct UUI_TabbedLayout_C_OnSynchronizeProperties_Params
{
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.Tick
struct UUI_TabbedLayout_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.CreateTabs
struct UUI_TabbedLayout_C_CreateTabs_Params
{
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.DelayedSetToTab
struct UUI_TabbedLayout_C_DelayedSetToTab_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ForceNoFocusChange;                                        // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ForceNoSound;                                              // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_TabbedLayout.UI_TabbedLayout_C.ExecuteUbergraph_UI_TabbedLayout
struct UUI_TabbedLayout_C_ExecuteUbergraph_UI_TabbedLayout_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
