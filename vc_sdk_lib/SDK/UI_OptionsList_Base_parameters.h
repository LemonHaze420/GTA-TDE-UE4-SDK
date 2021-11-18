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

// Function UI_OptionsList_Base.UI_OptionsList_Base_C.SetupNavigation
struct UUI_OptionsList_Base_C_SetupNavigation_Params
{
};

// Function UI_OptionsList_Base.UI_OptionsList_Base_C.OnOptionSelectionChanged
struct UUI_OptionsList_Base_C_OnOptionSelectionChanged_Params
{
	struct FName                                       OptionName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Selected;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_OptionsList_Base.UI_OptionsList_Base_C.OptionChanged
struct UUI_OptionsList_Base_C_OptionChanged_Params
{
	struct FName                                       OptionName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsList_Base.UI_OptionsList_Base_C.DoConfirmationPostItemChange
struct UUI_OptionsList_Base_C_DoConfirmationPostItemChange_Params
{
	class UUI_SlotButton_C*                            SlotToChange;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsList_Base.UI_OptionsList_Base_C.HandleBack
struct UUI_OptionsList_Base_C_HandleBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UI_OptionsList_Base.UI_OptionsList_Base_C.Should Refresh on Option Update
struct UUI_OptionsList_Base_C_Should_Refresh_on_Option_Update_Params
{
	bool                                               RequiresOptionRefresh;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       PropertyNameToSelect;                                      // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsList_Base.UI_OptionsList_Base_C.DoConfirmationOnItemChange
struct UUI_OptionsList_Base_C_DoConfirmationOnItemChange_Params
{
	class UUI_SlotButton_C*                            SlotToChange;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsList_Base.UI_OptionsList_Base_C.IsOptionWithinBounds
struct UUI_OptionsList_Base_C_IsOptionWithinBounds_Params
{
	class UGameterSettings*                            Settings;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGTASelectionOptionSpecifier                RequiredValue;                                             // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               isWithinBounds;                                            // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_OptionsList_Base.UI_OptionsList_Base_C.CheckOtherRequirements
struct UUI_OptionsList_Base_C_CheckOtherRequirements_Params
{
	struct FGTAOptionsItemTemplate                     Option;                                                    // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UGameterSettings*                            Settings;                                                  // 0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Available;                                                 // 0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_OptionsList_Base.UI_OptionsList_Base_C.RunSlotButtonFunction
struct UUI_OptionsList_Base_C_RunSlotButtonFunction_Params
{
	struct FName                                       FunctionName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsList_Base.UI_OptionsList_Base_C.SlotFunctionButtonPressed
struct UUI_OptionsList_Base_C_SlotFunctionButtonPressed_Params
{
	unsigned char                                      InteractionType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BoundValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_SlotButton_C*                            SlotButton;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsList_Base.UI_OptionsList_Base_C.AddFunctionToSlotButton
struct UUI_OptionsList_Base_C_AddFunctionToSlotButton_Params
{
	class UUI_SlotButton_C*                            SlotItem;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FunctionName;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsList_Base.UI_OptionsList_Base_C.OnRestoreDefaultsConfirmationCallback
struct UUI_OptionsList_Base_C_OnRestoreDefaultsConfirmationCallback_Params
{
	bool                                               DidAccept;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_OptionsList_Base.UI_OptionsList_Base_C.ResetDefaultsInteracted
struct UUI_OptionsList_Base_C_ResetDefaultsInteracted_Params
{
	unsigned char                                      InteractionType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BoundValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_SlotButton_C*                            SlotButton;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsList_Base.UI_OptionsList_Base_C.AddResetToDefaultButton
struct UUI_OptionsList_Base_C_AddResetToDefaultButton_Params
{
	class UUI_SlotButton_C*                            NewItem;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsList_Base.UI_OptionsList_Base_C.GetCurrentInputType_1
struct UUI_OptionsList_Base_C_GetCurrentInputType_1_Params
{
	int                                                OutInputFlag;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsList_Base.UI_OptionsList_Base_C.IsOptionAvailableForInputType
struct UUI_OptionsList_Base_C_IsOptionAvailableForInputType_Params
{
	struct FGTAOptionsItemTemplate                     Option;                                                    // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Available;                                                 // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_OptionsList_Base.UI_OptionsList_Base_C.GetCurrentPlatform
struct UUI_OptionsList_Base_C_GetCurrentPlatform_Params
{
	int                                                OutPlatformFlag;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsList_Base.UI_OptionsList_Base_C.IsOptionAvailableForPlatform
struct UUI_OptionsList_Base_C_IsOptionAvailableForPlatform_Params
{
	struct FGTAOptionsItemTemplate                     Option;                                                    // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Available;                                                 // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_OptionsList_Base.UI_OptionsList_Base_C.IsOptionAvailableForGame
struct UUI_OptionsList_Base_C_IsOptionAvailableForGame_Params
{
	struct FGTAOptionsItemTemplate                     Option;                                                    // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Available;                                                 // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_OptionsList_Base.UI_OptionsList_Base_C.CreateNewEntry
struct UUI_OptionsList_Base_C_CreateNewEntry_Params
{
	struct FGTAOptionsItemTemplate                     Option;                                                    // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UGameterSettings*                            SettingsObject;                                            // 0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsShownBecauseDebug;                                       // 0x0098(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUI_SlotButton_C*                            NewItem;                                                   // 0x00A0(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsList_Base.UI_OptionsList_Base_C.CreateScrollingListItems
struct UUI_OptionsList_Base_C_CreateScrollingListItems_Params
{
	bool                                               DEBUG_ALL_ITEMS;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_OptionsList_Base.UI_OptionsList_Base_C.Tick
struct UUI_OptionsList_Base_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_OptionsList_Base.UI_OptionsList_Base_C.ExecuteUbergraph_UI_OptionsList_Base
struct UUI_OptionsList_Base_C_ExecuteUbergraph_UI_OptionsList_Base_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
