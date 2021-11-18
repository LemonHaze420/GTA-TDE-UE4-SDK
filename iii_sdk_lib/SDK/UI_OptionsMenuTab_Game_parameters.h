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

// Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.SetToTab
struct UUI_OptionsMenuTab_Game_C_SetToTab_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ForceNoFocusChange;                                        // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ForceNoSound;                                              // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.SetupForSaveGames
struct UUI_OptionsMenuTab_Game_C_SetupForSaveGames_Params
{
};

// Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.RefreshSaveTabState
struct UUI_OptionsMenuTab_Game_C_RefreshSaveTabState_Params
{
};

// Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.UpdateSaveTabState
struct UUI_OptionsMenuTab_Game_C_UpdateSaveTabState_Params
{
	TEnumAsByte<GTABase_EGTASaveTabState>              NewSaveTabState;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.NextTab
struct UUI_OptionsMenuTab_Game_C_NextTab_Params
{
};

// Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.PrevTab
struct UUI_OptionsMenuTab_Game_C_PrevTab_Params
{
};

// Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.SetToSaveTabState
struct UUI_OptionsMenuTab_Game_C_SetToSaveTabState_Params
{
	TEnumAsByte<GTABase_EGTASaveTabState>              State;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.RefreshSaves
struct UUI_OptionsMenuTab_Game_C_RefreshSaves_Params
{
};

// Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.InteractedButton
struct UUI_OptionsMenuTab_Game_C_InteractedButton_Params
{
	TEnumAsByte<ButtonStateEnum_EButtonStateEnum>      Interact_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Bound_Value;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.Construct
struct UUI_OptionsMenuTab_Game_C_Construct_Params
{
};

// Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.Tick
struct UUI_OptionsMenuTab_Game_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.ExecuteUbergraph_UI_OptionsMenuTab_Game
struct UUI_OptionsMenuTab_Game_C_ExecuteUbergraph_UI_OptionsMenuTab_Game_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
