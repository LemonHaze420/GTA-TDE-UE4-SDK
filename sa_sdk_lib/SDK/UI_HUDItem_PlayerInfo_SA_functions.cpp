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
//		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.SetMoneyOnlyMode
//		Flags  -> ()
// Parameters:
//		bool                                               MakeMoneyOnly                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUDItem_PlayerInfo_SA_C::SetMoneyOnlyMode(bool MakeMoneyOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.SetMoneyOnlyMode");

	UUI_HUDItem_PlayerInfo_SA_C_SetMoneyOnlyMode_Params params {};
	params.MakeMoneyOnly = MakeMoneyOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetWeaponImage
//		Flags  -> ()
// Parameters:
//		class UImage*                                      WeaponImage                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_SA_C::GetWeaponImage(class UImage** WeaponImage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetWeaponImage");

	UUI_HUDItem_PlayerInfo_SA_C_GetWeaponImage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WeaponImage != nullptr)
		*WeaponImage = params.WeaponImage;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetTimeText
//		Flags  -> ()
// Parameters:
//		class UTextBlock*                                  TimeText                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_SA_C::GetTimeText(class UTextBlock** TimeText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetTimeText");

	UUI_HUDItem_PlayerInfo_SA_C_GetTimeText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TimeText != nullptr)
		*TimeText = params.TimeText;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetMoneyText
//		Flags  -> ()
// Parameters:
//		class UTextBlock*                                  MoneyText                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_SA_C::GetMoneyText(class UTextBlock** MoneyText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetMoneyText");

	UUI_HUDItem_PlayerInfo_SA_C_GetMoneyText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MoneyText != nullptr)
		*MoneyText = params.MoneyText;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetHealthBar
//		Flags  -> ()
// Parameters:
//		class UProgressBar*                                HealthBar                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_SA_C::GetHealthBar(class UProgressBar** HealthBar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetHealthBar");

	UUI_HUDItem_PlayerInfo_SA_C_GetHealthBar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HealthBar != nullptr)
		*HealthBar = params.HealthBar;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetBreathMeter
//		Flags  -> ()
// Parameters:
//		class UProgressBar*                                BreathMeter                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_SA_C::GetBreathMeter(class UProgressBar** BreathMeter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetBreathMeter");

	UUI_HUDItem_PlayerInfo_SA_C_GetBreathMeter_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BreathMeter != nullptr)
		*BreathMeter = params.BreathMeter;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetArmorBar
//		Flags  -> ()
// Parameters:
//		class UProgressBar*                                ArmorBar                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_SA_C::GetArmorBar(class UProgressBar** ArmorBar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetArmorBar");

	UUI_HUDItem_PlayerInfo_SA_C_GetArmorBar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ArmorBar != nullptr)
		*ArmorBar = params.ArmorBar;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetWantedStarsBox
//		Flags  -> ()
// Parameters:
//		class UHorizontalBox*                              WantedStarsBox                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_SA_C::GetWantedStarsBox(class UHorizontalBox** WantedStarsBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetWantedStarsBox");

	UUI_HUDItem_PlayerInfo_SA_C_GetWantedStarsBox_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WantedStarsBox != nullptr)
		*WantedStarsBox = params.WantedStarsBox;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetRightWeaponArrow
//		Flags  -> ()
// Parameters:
//		class UImage*                                      RightWeaponArrow                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_SA_C::GetRightWeaponArrow(class UImage** RightWeaponArrow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetRightWeaponArrow");

	UUI_HUDItem_PlayerInfo_SA_C_GetRightWeaponArrow_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RightWeaponArrow != nullptr)
		*RightWeaponArrow = params.RightWeaponArrow;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetLeftWeaponArrow
//		Flags  -> ()
// Parameters:
//		class UImage*                                      LeftWeaponArrow                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_SA_C::GetLeftWeaponArrow(class UImage** LeftWeaponArrow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetLeftWeaponArrow");

	UUI_HUDItem_PlayerInfo_SA_C_GetLeftWeaponArrow_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LeftWeaponArrow != nullptr)
		*LeftWeaponArrow = params.LeftWeaponArrow;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetAmmoText
//		Flags  -> ()
// Parameters:
//		class UTextBlock*                                  AmmoText                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_SA_C::GetAmmoText(class UTextBlock** AmmoText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.GetAmmoText");

	UUI_HUDItem_PlayerInfo_SA_C_GetAmmoText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AmmoText != nullptr)
		*AmmoText = params.AmmoText;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.SetupStars
//		Flags  -> ()
// Parameters:
void UUI_HUDItem_PlayerInfo_SA_C::SetupStars()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.SetupStars");

	UUI_HUDItem_PlayerInfo_SA_C_SetupStars_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_SA_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.Tick");

	UUI_HUDItem_PlayerInfo_SA_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.CustomFunction
//		Flags  -> ()
// Parameters:
//		struct FString                                     FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_SA_C::CustomFunction(const struct FString& FunctionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.CustomFunction");

	UUI_HUDItem_PlayerInfo_SA_C_CustomFunction_Params params {};
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.ExecuteUbergraph_UI_HUDItem_PlayerInfo_SA
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_SA_C::ExecuteUbergraph_UI_HUDItem_PlayerInfo_SA(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_SA.UI_HUDItem_PlayerInfo_SA_C.ExecuteUbergraph_UI_HUDItem_PlayerInfo_SA");

	UUI_HUDItem_PlayerInfo_SA_C_ExecuteUbergraph_UI_HUDItem_PlayerInfo_SA_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
