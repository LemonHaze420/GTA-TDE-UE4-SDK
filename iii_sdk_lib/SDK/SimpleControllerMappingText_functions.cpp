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
//		Name   -> Function SimpleControllerMappingText.SimpleControllerMappingText_C.SetTextColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSlateColor                                 InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm)
void USimpleControllerMappingText_C::SetTextColor(const struct FSlateColor& InColorAndOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SimpleControllerMappingText.SimpleControllerMappingText_C.SetTextColor");

	USimpleControllerMappingText_C_SetTextColor_Params params {};
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function SimpleControllerMappingText.SimpleControllerMappingText_C.SetAlignment
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<ControllerButtonIDDefinitions_EControllerButtonIDDefinitions> ControllerButton                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USimpleControllerMappingText_C::SetAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<SlateCore_EVerticalAlignment> VerticalAlignment, TEnumAsByte<ControllerButtonIDDefinitions_EControllerButtonIDDefinitions> ControllerButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SimpleControllerMappingText.SimpleControllerMappingText_C.SetAlignment");

	USimpleControllerMappingText_C_SetAlignment_Params params {};
	params.HorizontalAlignment = HorizontalAlignment;
	params.VerticalAlignment = VerticalAlignment;
	params.ControllerButton = ControllerButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function SimpleControllerMappingText.SimpleControllerMappingText_C.SetTextFont
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSlateFontInfo                              InFontInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void USimpleControllerMappingText_C::SetTextFont(const struct FSlateFontInfo& InFontInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SimpleControllerMappingText.SimpleControllerMappingText_C.SetTextFont");

	USimpleControllerMappingText_C_SetTextFont_Params params {};
	params.InFontInfo = InFontInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function SimpleControllerMappingText.SimpleControllerMappingText_C.SetTextValue
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       NewText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void USimpleControllerMappingText_C::SetTextValue(const struct FText& NewText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SimpleControllerMappingText.SimpleControllerMappingText_C.SetTextValue");

	USimpleControllerMappingText_C_SetTextValue_Params params {};
	params.NewText = NewText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function SimpleControllerMappingText.SimpleControllerMappingText_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void USimpleControllerMappingText_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SimpleControllerMappingText.SimpleControllerMappingText_C.Construct");

	USimpleControllerMappingText_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function SimpleControllerMappingText.SimpleControllerMappingText_C.OnSynchronizeProperties
//		Flags  -> (Event, Public, BlueprintEvent)
void USimpleControllerMappingText_C::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SimpleControllerMappingText.SimpleControllerMappingText_C.OnSynchronizeProperties");

	USimpleControllerMappingText_C_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function SimpleControllerMappingText.SimpleControllerMappingText_C.ExecuteUbergraph_SimpleControllerMappingText
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USimpleControllerMappingText_C::ExecuteUbergraph_SimpleControllerMappingText(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SimpleControllerMappingText.SimpleControllerMappingText_C.ExecuteUbergraph_SimpleControllerMappingText");

	USimpleControllerMappingText_C_ExecuteUbergraph_SimpleControllerMappingText_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
