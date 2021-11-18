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
//		Name   -> Function UI_SlotButton_Message.UI_SlotButton_Message_C.SetFont
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSlateFontInfo                              NewFont                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UUI_SlotButton_Message_C::SetFont(const struct FSlateFontInfo& NewFont)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Message.UI_SlotButton_Message_C.SetFont");

	UUI_SlotButton_Message_C_SetFont_Params params {};
	params.NewFont = NewFont;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SlotButton_Message.UI_SlotButton_Message_C.OverrideAltText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       NewText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_SlotButton_Message_C::OverrideAltText(const struct FText& NewText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Message.UI_SlotButton_Message_C.OverrideAltText");

	UUI_SlotButton_Message_C_OverrideAltText_Params params {};
	params.NewText = NewText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SlotButton_Message.UI_SlotButton_Message_C.SetHeight
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              NewHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Message_C::SetHeight(float NewHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Message.UI_SlotButton_Message_C.SetHeight");

	UUI_SlotButton_Message_C_SetHeight_Params params {};
	params.NewHeight = NewHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SlotButton_Message.UI_SlotButton_Message_C.GetSlotButton
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UButton*                                     SlotButton                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Message_C::GetSlotButton(class UButton** SlotButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Message.UI_SlotButton_Message_C.GetSlotButton");

	UUI_SlotButton_Message_C_GetSlotButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SlotButton != nullptr)
		*SlotButton = params.SlotButton;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SlotButton_Message.UI_SlotButton_Message_C.UpdateTextColor
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_SlotButton_Message_C::UpdateTextColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Message.UI_SlotButton_Message_C.UpdateTextColor");

	UUI_SlotButton_Message_C_UpdateTextColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SlotButton_Message.UI_SlotButton_Message_C.UpdateBGColor
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_SlotButton_Message_C::UpdateBGColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Message.UI_SlotButton_Message_C.UpdateBGColor");

	UUI_SlotButton_Message_C_UpdateBGColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SlotButton_Message.UI_SlotButton_Message_C.SetSelectedBackgroundColor
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSlateColor                                 InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_SlotButton_Message_C::SetSelectedBackgroundColor(const struct FSlateColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Message.UI_SlotButton_Message_C.SetSelectedBackgroundColor");

	UUI_SlotButton_Message_C_SetSelectedBackgroundColor_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SlotButton_Message.UI_SlotButton_Message_C.OverrideMainText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       NewText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_SlotButton_Message_C::OverrideMainText(const struct FText& NewText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Message.UI_SlotButton_Message_C.OverrideMainText");

	UUI_SlotButton_Message_C_OverrideMainText_Params params {};
	params.NewText = NewText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SlotButton_Message.UI_SlotButton_Message_C.InitSlotButton
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UGameterSettings*                            SettingsObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Message_C::InitSlotButton(class UGameterSettings* SettingsObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Message.UI_SlotButton_Message_C.InitSlotButton");

	UUI_SlotButton_Message_C_InitSlotButton_Params params {};
	params.SettingsObject = SettingsObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SlotButton_Message.UI_SlotButton_Message_C.SetBackgroundColor
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSlateColor                                 InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UUI_SlotButton_Message_C::SetBackgroundColor(const struct FSlateColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Message.UI_SlotButton_Message_C.SetBackgroundColor");

	UUI_SlotButton_Message_C_SetBackgroundColor_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SlotButton_Message.UI_SlotButton_Message_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Message_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Message.UI_SlotButton_Message_C.Tick");

	UUI_SlotButton_Message_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SlotButton_Message.UI_SlotButton_Message_C.InteractedWithSelectionSlot
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		unsigned char                                      InteractionType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUI_SlotButton_C*                            SlotButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Message_C::InteractedWithSelectionSlot(unsigned char InteractionType, int BoundValue, class UUI_SlotButton_C* SlotButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Message.UI_SlotButton_Message_C.InteractedWithSelectionSlot");

	UUI_SlotButton_Message_C_InteractedWithSelectionSlot_Params params {};
	params.InteractionType = InteractionType;
	params.BoundValue = BoundValue;
	params.SlotButton = SlotButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SlotButton_Message.UI_SlotButton_Message_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_SlotButton_Message_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Message.UI_SlotButton_Message_C.Construct");

	UUI_SlotButton_Message_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SlotButton_Message.UI_SlotButton_Message_C.SetJustLeftMessage
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               JustLeft                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SlotButton_Message_C::SetJustLeftMessage(bool JustLeft)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Message.UI_SlotButton_Message_C.SetJustLeftMessage");

	UUI_SlotButton_Message_C_SetJustLeftMessage_Params params {};
	params.JustLeft = JustLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_SlotButton_Message.UI_SlotButton_Message_C.ExecuteUbergraph_UI_SlotButton_Message
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SlotButton_Message_C::ExecuteUbergraph_UI_SlotButton_Message(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SlotButton_Message.UI_SlotButton_Message_C.ExecuteUbergraph_UI_SlotButton_Message");

	UUI_SlotButton_Message_C_ExecuteUbergraph_UI_SlotButton_Message_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
