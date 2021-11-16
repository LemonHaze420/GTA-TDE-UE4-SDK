#pragma once

// Name: SanAndreas, Version: 1.0.0


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

// Function UI_HUDBar.UI_HUDBar_C.SetSizeBoxOverrideAndUpdate
struct UUI_HUDBar_C_SetSizeBoxOverrideAndUpdate_Params
{
	struct FVector2D                                   SizeBoxOverride;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDBar.UI_HUDBar_C.UpdateSizeBoxOverrideSize
struct UUI_HUDBar_C_UpdateSizeBoxOverrideSize_Params
{
};

// Function UI_HUDBar.UI_HUDBar_C.SetPrimaryBarColor
struct UUI_HUDBar_C_SetPrimaryBarColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDBar.UI_HUDBar_C.SetSecondaryBarColor
struct UUI_HUDBar_C_SetSecondaryBarColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDBar.UI_HUDBar_C.SetProgres
struct UUI_HUDBar_C_SetProgres_Params
{
	float                                              TopBar;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BottomBar;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPositive;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUDBar.UI_HUDBar_C.PreConstruct
struct UUI_HUDBar_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUDBar.UI_HUDBar_C.Construct
struct UUI_HUDBar_C_Construct_Params
{
};

// Function UI_HUDBar.UI_HUDBar_C.ExecuteUbergraph_UI_HUDBar
struct UUI_HUDBar_C_ExecuteUbergraph_UI_HUDBar_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
