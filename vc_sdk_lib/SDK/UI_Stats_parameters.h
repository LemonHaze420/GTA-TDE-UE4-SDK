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

// Function UI_Stats.UI_Stats_C.MoveToCategory
struct UUI_Stats_C_MoveToCategory_Params
{
	bool                                               PreviousCategory;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Stats.UI_Stats_C.UpdateCategoriesCheck
struct UUI_Stats_C_UpdateCategoriesCheck_Params
{
};

// Function UI_Stats.UI_Stats_C.CreateStat
struct UUI_Stats_C_CreateStat_Params
{
	struct FString                                     inString;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     InString2;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UUI_SlotButton_C*                            CreatedButton;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Is_Category_Divider;                                       // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Stats.UI_Stats_C.Set Main Style
struct UUI_Stats_C_Set_Main_Style_Params
{
};

// Function UI_Stats.UI_Stats_C.TakeFocus
struct UUI_Stats_C_TakeFocus_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UI_Stats.UI_Stats_C.SetupStats
struct UUI_Stats_C_SetupStats_Params
{
	class UGameterface*                                Gameterface;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Stats.UI_Stats_C.Construct
struct UUI_Stats_C_Construct_Params
{
};

// Function UI_Stats.UI_Stats_C.Tick
struct UUI_Stats_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Stats.UI_Stats_C.OnSynchronizeProperties
struct UUI_Stats_C_OnSynchronizeProperties_Params
{
};

// Function UI_Stats.UI_Stats_C.ExecuteUbergraph_UI_Stats
struct UUI_Stats_C_ExecuteUbergraph_UI_Stats_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
