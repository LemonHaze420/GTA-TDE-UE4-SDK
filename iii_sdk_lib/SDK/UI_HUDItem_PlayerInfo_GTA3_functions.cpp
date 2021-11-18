// Name: GTA III, Version: 1.0.0

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
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.GetHealthText
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UTextBlock*                                  HealthText                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_GTA3_C::GetHealthText(class UTextBlock** HealthText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.GetHealthText");

	UUI_HUDItem_PlayerInfo_GTA3_C_GetHealthText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HealthText != nullptr)
		*HealthText = params.HealthText;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.GetArmorText
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UTextBlock*                                  ArmorText                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_GTA3_C::GetArmorText(class UTextBlock** ArmorText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.GetArmorText");

	UUI_HUDItem_PlayerInfo_GTA3_C_GetArmorText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ArmorText != nullptr)
		*ArmorText = params.ArmorText;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.GetWeaponImage
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UImage*                                      WeaponImage                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_GTA3_C::GetWeaponImage(class UImage** WeaponImage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.GetWeaponImage");

	UUI_HUDItem_PlayerInfo_GTA3_C_GetWeaponImage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WeaponImage != nullptr)
		*WeaponImage = params.WeaponImage;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.GetTimeText
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UTextBlock*                                  TimeText                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_GTA3_C::GetTimeText(class UTextBlock** TimeText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.GetTimeText");

	UUI_HUDItem_PlayerInfo_GTA3_C_GetTimeText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TimeText != nullptr)
		*TimeText = params.TimeText;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.GetMoneyText
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UTextBlock*                                  MoneyText                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_GTA3_C::GetMoneyText(class UTextBlock** MoneyText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.GetMoneyText");

	UUI_HUDItem_PlayerInfo_GTA3_C_GetMoneyText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MoneyText != nullptr)
		*MoneyText = params.MoneyText;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.GetWantedStarsBox
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UHorizontalBox*                              WantedStarsBox                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_GTA3_C::GetWantedStarsBox(class UHorizontalBox** WantedStarsBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.GetWantedStarsBox");

	UUI_HUDItem_PlayerInfo_GTA3_C_GetWantedStarsBox_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WantedStarsBox != nullptr)
		*WantedStarsBox = params.WantedStarsBox;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.GetAmmoText
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UTextBlock*                                  AmmoText                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_GTA3_C::GetAmmoText(class UTextBlock** AmmoText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.GetAmmoText");

	UUI_HUDItem_PlayerInfo_GTA3_C_GetAmmoText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AmmoText != nullptr)
		*AmmoText = params.AmmoText;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.SetupStars
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_HUDItem_PlayerInfo_GTA3_C::SetupStars()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.SetupStars");

	UUI_HUDItem_PlayerInfo_GTA3_C_SetupStars_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_HUDItem_PlayerInfo_GTA3_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.Construct");

	UUI_HUDItem_PlayerInfo_GTA3_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_GTA3_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.Tick");

	UUI_HUDItem_PlayerInfo_GTA3_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.SetContentTextFour
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_GTA3_C::SetContentTextFour(const struct FText& Text, const struct FLinearColor& FontColorOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.SetContentTextFour");

	UUI_HUDItem_PlayerInfo_GTA3_C_SetContentTextFour_Params params {};
	params.Text = Text;
	params.FontColorOverride = FontColorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.SetFifthImageColor
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_GTA3_C::SetFifthImageColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.SetFifthImageColor");

	UUI_HUDItem_PlayerInfo_GTA3_C_SetFifthImageColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.SetSixthImageColor
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_GTA3_C::SetSixthImageColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.SetSixthImageColor");

	UUI_HUDItem_PlayerInfo_GTA3_C_SetSixthImageColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.SetImageMaterial
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UMaterialInterface*                          Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_GTA3_C::SetImageMaterial(class UMaterialInterface* Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.SetImageMaterial");

	UUI_HUDItem_PlayerInfo_GTA3_C_SetImageMaterial_Params params {};
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.ExecuteUbergraph_UI_HUDItem_PlayerInfo_GTA3
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_GTA3_C::ExecuteUbergraph_UI_HUDItem_PlayerInfo_GTA3(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo_GTA3.UI_HUDItem_PlayerInfo_GTA3_C.ExecuteUbergraph_UI_HUDItem_PlayerInfo_GTA3");

	UUI_HUDItem_PlayerInfo_GTA3_C_ExecuteUbergraph_UI_HUDItem_PlayerInfo_GTA3_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
