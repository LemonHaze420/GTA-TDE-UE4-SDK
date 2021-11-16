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
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetMoneyOnlyMode
//		Flags  -> ()
// Parameters:
//		bool                                               MakeMoneyOnly                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUDItem_PlayerInfo_C::SetMoneyOnlyMode(bool MakeMoneyOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetMoneyOnlyMode");

	UUI_HUDItem_PlayerInfo_C_SetMoneyOnlyMode_Params params {};
	params.MakeMoneyOnly = MakeMoneyOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.UpdateTextWithNumber
//		Flags  -> ()
// Parameters:
//		class UTextBlock*                                  InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Number                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MinimumIntegralDigits                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                MaximumIntegralDigits                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::UpdateTextWithNumber(class UTextBlock* InText, int Number, int MinimumIntegralDigits, int MaximumIntegralDigits)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.UpdateTextWithNumber");

	UUI_HUDItem_PlayerInfo_C_UpdateTextWithNumber_Params params {};
	params.InText = InText;
	params.Number = Number;
	params.MinimumIntegralDigits = MinimumIntegralDigits;
	params.MaximumIntegralDigits = MaximumIntegralDigits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetArmorText
//		Flags  -> ()
// Parameters:
//		class UTextBlock*                                  ArmorText                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::GetArmorText(class UTextBlock** ArmorText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetArmorText");

	UUI_HUDItem_PlayerInfo_C_GetArmorText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ArmorText != nullptr)
		*ArmorText = params.ArmorText;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetHealthText
//		Flags  -> ()
// Parameters:
//		class UTextBlock*                                  HealthText                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::GetHealthText(class UTextBlock** HealthText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetHealthText");

	UUI_HUDItem_PlayerInfo_C_GetHealthText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HealthText != nullptr)
		*HealthText = params.HealthText;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetWeaponImage
//		Flags  -> ()
// Parameters:
//		class UImage*                                      WeaponImage                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::GetWeaponImage(class UImage** WeaponImage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetWeaponImage");

	UUI_HUDItem_PlayerInfo_C_GetWeaponImage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WeaponImage != nullptr)
		*WeaponImage = params.WeaponImage;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetTimeText
//		Flags  -> ()
// Parameters:
//		class UTextBlock*                                  TimeText                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::GetTimeText(class UTextBlock** TimeText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetTimeText");

	UUI_HUDItem_PlayerInfo_C_GetTimeText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TimeText != nullptr)
		*TimeText = params.TimeText;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetMoneyText
//		Flags  -> ()
// Parameters:
//		class UTextBlock*                                  MoneyText                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::GetMoneyText(class UTextBlock** MoneyText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetMoneyText");

	UUI_HUDItem_PlayerInfo_C_GetMoneyText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MoneyText != nullptr)
		*MoneyText = params.MoneyText;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetHealthBar
//		Flags  -> ()
// Parameters:
//		class UProgressBar*                                HealthBar                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::GetHealthBar(class UProgressBar** HealthBar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetHealthBar");

	UUI_HUDItem_PlayerInfo_C_GetHealthBar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HealthBar != nullptr)
		*HealthBar = params.HealthBar;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetBreathMeter
//		Flags  -> ()
// Parameters:
//		class UProgressBar*                                BreathMeter                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::GetBreathMeter(class UProgressBar** BreathMeter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetBreathMeter");

	UUI_HUDItem_PlayerInfo_C_GetBreathMeter_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BreathMeter != nullptr)
		*BreathMeter = params.BreathMeter;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetArmorBar
//		Flags  -> ()
// Parameters:
//		class UProgressBar*                                ArmorBar                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::GetArmorBar(class UProgressBar** ArmorBar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetArmorBar");

	UUI_HUDItem_PlayerInfo_C_GetArmorBar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ArmorBar != nullptr)
		*ArmorBar = params.ArmorBar;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetWantedStarsBox
//		Flags  -> ()
// Parameters:
//		class UHorizontalBox*                              WantedStarsBox                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::GetWantedStarsBox(class UHorizontalBox** WantedStarsBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetWantedStarsBox");

	UUI_HUDItem_PlayerInfo_C_GetWantedStarsBox_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WantedStarsBox != nullptr)
		*WantedStarsBox = params.WantedStarsBox;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetRightWeaponArrow
//		Flags  -> ()
// Parameters:
//		class UImage*                                      RightWeaponArrow                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::GetRightWeaponArrow(class UImage** RightWeaponArrow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetRightWeaponArrow");

	UUI_HUDItem_PlayerInfo_C_GetRightWeaponArrow_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RightWeaponArrow != nullptr)
		*RightWeaponArrow = params.RightWeaponArrow;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetLeftWeaponArrow
//		Flags  -> ()
// Parameters:
//		class UImage*                                      LeftWeaponArrow                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::GetLeftWeaponArrow(class UImage** LeftWeaponArrow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetLeftWeaponArrow");

	UUI_HUDItem_PlayerInfo_C_GetLeftWeaponArrow_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LeftWeaponArrow != nullptr)
		*LeftWeaponArrow = params.LeftWeaponArrow;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetAmmoText
//		Flags  -> ()
// Parameters:
//		class UTextBlock*                                  AmmoText                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::GetAmmoText(class UTextBlock** AmmoText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.GetAmmoText");

	UUI_HUDItem_PlayerInfo_C_GetAmmoText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AmmoText != nullptr)
		*AmmoText = params.AmmoText;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetupStars
//		Flags  -> ()
void UUI_HUDItem_PlayerInfo_C::SetupStars()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetupStars");

	UUI_HUDItem_PlayerInfo_C_SetupStars_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.UpdateWantedBlink
//		Flags  -> ()
// Parameters:
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::UpdateWantedBlink(float dT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.UpdateWantedBlink");

	UUI_HUDItem_PlayerInfo_C_UpdateWantedBlink_Params params {};
	params.dT = dT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.UpdateWantedLevel
//		Flags  -> ()
// Parameters:
//		int                                                Wanted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Parole                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               DoBlink                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUDItem_PlayerInfo_C::UpdateWantedLevel(int Wanted, int Parole, bool DoBlink)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.UpdateWantedLevel");

	UUI_HUDItem_PlayerInfo_C_UpdateWantedLevel_Params params {};
	params.Wanted = Wanted;
	params.Parole = Parole;
	params.DoBlink = DoBlink;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetBarSizeAndFill
//		Flags  -> ()
// Parameters:
//		class UProgressBar*                                ProgressBar                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              BarPercent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              BarWidth                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::SetBarSizeAndFill(class UProgressBar* ProgressBar, float BarPercent, float BarWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetBarSizeAndFill");

	UUI_HUDItem_PlayerInfo_C_SetBarSizeAndFill_Params params {};
	params.ProgressBar = ProgressBar;
	params.BarPercent = BarPercent;
	params.BarWidth = BarWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.Construct
//		Flags  -> ()
void UUI_HUDItem_PlayerInfo_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.Construct");

	UUI_HUDItem_PlayerInfo_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.Tick");

	UUI_HUDItem_PlayerInfo_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetImage
//		Flags  -> ()
// Parameters:
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::SetImage(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetImage");

	UUI_HUDItem_PlayerInfo_C_SetImage_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetContentText
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::SetContentText(const struct FText& Text, const struct FLinearColor& FontColorOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetContentText");

	UUI_HUDItem_PlayerInfo_C_SetContentText_Params params {};
	params.Text = Text;
	params.FontColorOverride = FontColorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetFillBarSizeAndFill
//		Flags  -> ()
// Parameters:
//		float                                              FillBarPct                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              FillBarSize                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::SetFillBarSizeAndFill(float FillBarPct, float FillBarSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetFillBarSizeAndFill");

	UUI_HUDItem_PlayerInfo_C_SetFillBarSizeAndFill_Params params {};
	params.FillBarPct = FillBarPct;
	params.FillBarSize = FillBarSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetSecondFillBarSizeAndFill
//		Flags  -> ()
// Parameters:
//		float                                              FillBarPct                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              FillBarSize                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::SetSecondFillBarSizeAndFill(float FillBarPct, float FillBarSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetSecondFillBarSizeAndFill");

	UUI_HUDItem_PlayerInfo_C_SetSecondFillBarSizeAndFill_Params params {};
	params.FillBarPct = FillBarPct;
	params.FillBarSize = FillBarSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetTotalWidgetColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::SetTotalWidgetColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetTotalWidgetColor");

	UUI_HUDItem_PlayerInfo_C_SetTotalWidgetColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetThirdFillBarSizeAndFill
//		Flags  -> ()
// Parameters:
//		float                                              FillBarPct                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              FillBarSize                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::SetThirdFillBarSizeAndFill(float FillBarPct, float FillBarSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetThirdFillBarSizeAndFill");

	UUI_HUDItem_PlayerInfo_C_SetThirdFillBarSizeAndFill_Params params {};
	params.FillBarPct = FillBarPct;
	params.FillBarSize = FillBarSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetWantedLevel
//		Flags  -> ()
// Parameters:
//		int                                                numStars                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                numParole                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIsBlinking                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUDItem_PlayerInfo_C::SetWantedLevel(int numStars, int numParole, bool bIsBlinking)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetWantedLevel");

	UUI_HUDItem_PlayerInfo_C_SetWantedLevel_Params params {};
	params.numStars = numStars;
	params.numParole = numParole;
	params.bIsBlinking = bIsBlinking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetThirdImage
//		Flags  -> ()
// Parameters:
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::SetThirdImage(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetThirdImage");

	UUI_HUDItem_PlayerInfo_C_SetThirdImage_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetThirdImageColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::SetThirdImageColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetThirdImageColor");

	UUI_HUDItem_PlayerInfo_C_SetThirdImageColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetFourthImage
//		Flags  -> ()
// Parameters:
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::SetFourthImage(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetFourthImage");

	UUI_HUDItem_PlayerInfo_C_SetFourthImage_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetFourthImageColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::SetFourthImageColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetFourthImageColor");

	UUI_HUDItem_PlayerInfo_C_SetFourthImageColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetContentTextAdditional
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::SetContentTextAdditional(const struct FText& Text, const struct FLinearColor& FontColorOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetContentTextAdditional");

	UUI_HUDItem_PlayerInfo_C_SetContentTextAdditional_Params params {};
	params.Text = Text;
	params.FontColorOverride = FontColorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetContentTextThree
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::SetContentTextThree(const struct FText& Text, const struct FLinearColor& FontColorOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetContentTextThree");

	UUI_HUDItem_PlayerInfo_C_SetContentTextThree_Params params {};
	params.Text = Text;
	params.FontColorOverride = FontColorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetContentTextFour
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::SetContentTextFour(const struct FText& Text, const struct FLinearColor& FontColorOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetContentTextFour");

	UUI_HUDItem_PlayerInfo_C_SetContentTextFour_Params params {};
	params.Text = Text;
	params.FontColorOverride = FontColorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetContentTextFive
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::SetContentTextFive(const struct FText& Text, const struct FLinearColor& FontColorOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.SetContentTextFive");

	UUI_HUDItem_PlayerInfo_C_SetContentTextFive_Params params {};
	params.Text = Text;
	params.FontColorOverride = FontColorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.ExecuteUbergraph_UI_HUDItem_PlayerInfo
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_PlayerInfo_C::ExecuteUbergraph_UI_HUDItem_PlayerInfo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C.ExecuteUbergraph_UI_HUDItem_PlayerInfo");

	UUI_HUDItem_PlayerInfo_C_ExecuteUbergraph_UI_HUDItem_PlayerInfo_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
