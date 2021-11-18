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

// Function UI_OptionsList_Game.UI_OptionsList_Game_C.CreateSaveEntryAndBind
struct UUI_OptionsList_Game_C_CreateSaveEntryAndBind_Params
{
	struct FString                                     SaveName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                ValueToBind;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsList_Game.UI_OptionsList_Game_C.GetCurrentMenu
struct UUI_OptionsList_Game_C_GetCurrentMenu_Params
{
	class UUI_Menu_Base_BP_C*                          OutMenu;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsList_Game.UI_OptionsList_Game_C.SaveButtonPressed
struct UUI_OptionsList_Game_C_SaveButtonPressed_Params
{
	unsigned char                                      InteractionType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BoundValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_SlotButton_C*                            SlotButton;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsList_Game.UI_OptionsList_Game_C.BindSlotButtonToSave
struct UUI_OptionsList_Game_C_BindSlotButtonToSave_Params
{
	class UUI_SlotButton_C*                            Slot_Button;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ValueToBind;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsList_Game.UI_OptionsList_Game_C.CreateNewEntry
struct UUI_OptionsList_Game_C_CreateNewEntry_Params
{
	struct FGTAOptionsItemTemplate                     Option;                                                    // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UGameterSettings*                            SettingsObject;                                            // 0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsShownBecauseDebug;                                       // 0x0098(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUI_SlotButton_C*                            NewItem;                                                   // 0x00A0(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsList_Game.UI_OptionsList_Game_C.CreateScrollingListItems
struct UUI_OptionsList_Game_C_CreateScrollingListItems_Params
{
	bool                                               DEBUG_ALL_ITEMS;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_OptionsList_Game.UI_OptionsList_Game_C.Tick
struct UUI_OptionsList_Game_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsList_Game.UI_OptionsList_Game_C.ExecuteUbergraph_UI_OptionsList_Game
struct UUI_OptionsList_Game_C_ExecuteUbergraph_UI_OptionsList_Game_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
