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

// Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.NextTab
struct UUI_OptionsMenuTab_C_NextTab_Params
{
};

// Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.PrevTab
struct UUI_OptionsMenuTab_C_PrevTab_Params
{
};

// Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.GrabFocus
struct UUI_OptionsMenuTab_C_GrabFocus_Params
{
};

// Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.SetToTab
struct UUI_OptionsMenuTab_C_SetToTab_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ForceNoFocusChange;                                        // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ForceNoSound;                                              // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.RefreshLists
struct UUI_OptionsMenuTab_C_RefreshLists_Params
{
};

// Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.GetCurrentInputType
struct UUI_OptionsMenuTab_C_GetCurrentInputType_Params
{
	int                                                OutInputFlag;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.AddContentToSelector
struct UUI_OptionsMenuTab_C_AddContentToSelector_Params
{
	class UClass*                                      Widget_Class;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                             Selector_to_add_to;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 ContentCreated;                                            // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.Tick
struct UUI_OptionsMenuTab_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.Construct
struct UUI_OptionsMenuTab_C_Construct_Params
{
};

// Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.ExecuteUbergraph_UI_OptionsMenuTab
struct UUI_OptionsMenuTab_C_ExecuteUbergraph_UI_OptionsMenuTab_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
