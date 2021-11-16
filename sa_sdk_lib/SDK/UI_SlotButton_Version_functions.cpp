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
//		Name   -> Function UI_SlotButton_Version.UI_SlotButton_Version_C.UpdateTextColor
//		Flags  -> ()
void UUI_SlotButton_Version_C::UpdateTextColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Version.UI_SlotButton_Version_C.UpdateTextColor");

	UUI_SlotButton_Version_C_UpdateTextColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Version.UI_SlotButton_Version_C.OverrideMainText
//		Flags  -> ()
// Parameters:
//		struct FText                                       NewText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_SlotButton_Version_C::OverrideMainText(const struct FText& NewText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Version.UI_SlotButton_Version_C.OverrideMainText");

	UUI_SlotButton_Version_C_OverrideMainText_Params params {};
	params.NewText = NewText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Version.UI_SlotButton_Version_C.SetMainText
//		Flags  -> ()
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_SlotButton_Version_C::SetMainText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Version.UI_SlotButton_Version_C.SetMainText");

	UUI_SlotButton_Version_C_SetMainText_Params params {};
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Version.UI_SlotButton_Version_C.SetHeight
//		Flags  -> ()
// Parameters:
//		float                                              NewHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Version_C::SetHeight(float NewHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Version.UI_SlotButton_Version_C.SetHeight");

	UUI_SlotButton_Version_C_SetHeight_Params params {};
	params.NewHeight = NewHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Version.UI_SlotButton_Version_C.GetSlotButton
//		Flags  -> ()
// Parameters:
//		class UButton*                                     SlotButton                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Version_C::GetSlotButton(class UButton** SlotButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Version.UI_SlotButton_Version_C.GetSlotButton");

	UUI_SlotButton_Version_C_GetSlotButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SlotButton != nullptr)
		*SlotButton = params.SlotButton;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SlotButton_Version.UI_SlotButton_Version_C.SetBackgroundColor
//		Flags  -> ()
// Parameters:
//		struct FSlateColor                                 InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_SlotButton_Version_C::SetBackgroundColor(const struct FSlateColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Version.UI_SlotButton_Version_C.SetBackgroundColor");

	UUI_SlotButton_Version_C_SetBackgroundColor_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
