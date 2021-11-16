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
//		Name   -> Function UI_HUD_FillButton.UI_HUD_FillButton_C.SetImageFillAmmount
//		Flags  -> ()
// Parameters:
//		float                                              Percentage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_FillButton_C::SetImageFillAmmount(float Percentage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_FillButton.UI_HUD_FillButton_C.SetImageFillAmmount");

	UUI_HUD_FillButton_C_SetImageFillAmmount_Params params {};
	params.Percentage = Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_FillButton.UI_HUD_FillButton_C.SetupSecondImageFill
//		Flags  -> ()
// Parameters:
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              FillAmmount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_FillButton_C::SetupSecondImageFill(class UTexture2D* Texture, const struct FLinearColor& Color, float FillAmmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_FillButton.UI_HUD_FillButton_C.SetupSecondImageFill");

	UUI_HUD_FillButton_C_SetupSecondImageFill_Params params {};
	params.Texture = Texture;
	params.Color = Color;
	params.FillAmmount = FillAmmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_FillButton.UI_HUD_FillButton_C.Construct
//		Flags  -> ()
void UUI_HUD_FillButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_FillButton.UI_HUD_FillButton_C.Construct");

	UUI_HUD_FillButton_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_FillButton.UI_HUD_FillButton_C.SetSecondImageFill
//		Flags  -> ()
// Parameters:
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                FillColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              FillAmmount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_FillButton_C::SetSecondImageFill(class UTexture2D* Texture, const struct FLinearColor& FillColor, float FillAmmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_FillButton.UI_HUD_FillButton_C.SetSecondImageFill");

	UUI_HUD_FillButton_C_SetSecondImageFill_Params params {};
	params.Texture = Texture;
	params.FillColor = FillColor;
	params.FillAmmount = FillAmmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_FillButton.UI_HUD_FillButton_C.SetSecondImageFillAmount
//		Flags  -> ()
// Parameters:
//		float                                              FillAmmount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_FillButton_C::SetSecondImageFillAmount(float FillAmmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_FillButton.UI_HUD_FillButton_C.SetSecondImageFillAmount");

	UUI_HUD_FillButton_C_SetSecondImageFillAmount_Params params {};
	params.FillAmmount = FillAmmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_FillButton.UI_HUD_FillButton_C.SetImage
//		Flags  -> ()
// Parameters:
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_FillButton_C::SetImage(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_FillButton.UI_HUD_FillButton_C.SetImage");

	UUI_HUD_FillButton_C_SetImage_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_FillButton.UI_HUD_FillButton_C.ExecuteUbergraph_UI_HUD_FillButton
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_FillButton_C::ExecuteUbergraph_UI_HUD_FillButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_FillButton.UI_HUD_FillButton_C.ExecuteUbergraph_UI_HUD_FillButton");

	UUI_HUD_FillButton_C_ExecuteUbergraph_UI_HUD_FillButton_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
