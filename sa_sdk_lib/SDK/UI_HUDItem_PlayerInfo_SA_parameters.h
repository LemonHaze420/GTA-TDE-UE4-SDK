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

// Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.SetMoneyOnlyMode
struct UUI_HUDItem_PlayerInfo_SA_C_SetMoneyOnlyMode_Params
{
	bool                                               MakeMoneyOnly;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetWeaponImage
struct UUI_HUDItem_PlayerInfo_SA_C_GetWeaponImage_Params
{
	class UImage*                                      WeaponImage;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetTimeText
struct UUI_HUDItem_PlayerInfo_SA_C_GetTimeText_Params
{
	class UTextBlock*                                  TimeText;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetMoneyText
struct UUI_HUDItem_PlayerInfo_SA_C_GetMoneyText_Params
{
	class UTextBlock*                                  MoneyText;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetHealthBar
struct UUI_HUDItem_PlayerInfo_SA_C_GetHealthBar_Params
{
	class UProgressBar*                                HealthBar;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetBreathMeter
struct UUI_HUDItem_PlayerInfo_SA_C_GetBreathMeter_Params
{
	class UProgressBar*                                BreathMeter;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetArmorBar
struct UUI_HUDItem_PlayerInfo_SA_C_GetArmorBar_Params
{
	class UProgressBar*                                ArmorBar;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetWantedStarsBox
struct UUI_HUDItem_PlayerInfo_SA_C_GetWantedStarsBox_Params
{
	class UHorizontalBox*                              WantedStarsBox;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetRightWeaponArrow
struct UUI_HUDItem_PlayerInfo_SA_C_GetRightWeaponArrow_Params
{
	class UImage*                                      RightWeaponArrow;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetLeftWeaponArrow
struct UUI_HUDItem_PlayerInfo_SA_C_GetLeftWeaponArrow_Params
{
	class UImage*                                      LeftWeaponArrow;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetAmmoText
struct UUI_HUDItem_PlayerInfo_SA_C_GetAmmoText_Params
{
	class UTextBlock*                                  AmmoText;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.SetupStars
struct UUI_HUDItem_PlayerInfo_SA_C_SetupStars_Params
{
};

// Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.Tick
struct UUI_HUDItem_PlayerInfo_SA_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.CustomFunction
struct UUI_HUDItem_PlayerInfo_SA_C_CustomFunction_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.ExecuteUbergraph_UI_HUDItem_PlayerInfo_SA
struct UUI_HUDItem_PlayerInfo_SA_C_ExecuteUbergraph_UI_HUDItem_PlayerInfo_SA_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
