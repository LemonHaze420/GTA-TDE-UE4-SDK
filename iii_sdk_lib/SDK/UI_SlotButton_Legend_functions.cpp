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
//		Name   -> Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.OverrideBGImage
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSlateBrush                                 InBrush                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_SlotButton_Legend_C::OverrideBGImage(const struct FSlateBrush& InBrush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.OverrideBGImage");

	UUI_SlotButton_Legend_C_OverrideBGImage_Params params {};
	params.InBrush = InBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.SetLegendImage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Legend_C::SetLegendImage(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.SetLegendImage");

	UUI_SlotButton_Legend_C_SetLegendImage_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.OverrideMainText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       NewText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_SlotButton_Legend_C::OverrideMainText(const struct FText& NewText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.OverrideMainText");

	UUI_SlotButton_Legend_C_OverrideMainText_Params params {};
	params.NewText = NewText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.SetFont
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSlateFontInfo                              NewFont                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UUI_SlotButton_Legend_C::SetFont(const struct FSlateFontInfo& NewFont)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.SetFont");

	UUI_SlotButton_Legend_C_SetFont_Params params {};
	params.NewFont = NewFont;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.UpdateBGColor
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_SlotButton_Legend_C::UpdateBGColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.UpdateBGColor");

	UUI_SlotButton_Legend_C_UpdateBGColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.UpdateTextColor
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_SlotButton_Legend_C::UpdateTextColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.UpdateTextColor");

	UUI_SlotButton_Legend_C_UpdateTextColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.InitSlotButton
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UGameterSettings*                            SettingsObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Legend_C::InitSlotButton(class UGameterSettings* SettingsObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Legend.UI_SlotButton_Legend_C.InitSlotButton");

	UUI_SlotButton_Legend_C_InitSlotButton_Params params {};
	params.SettingsObject = SettingsObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
