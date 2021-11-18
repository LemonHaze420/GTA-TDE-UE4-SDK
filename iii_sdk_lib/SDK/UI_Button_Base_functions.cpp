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
//		Name   -> Function UI_Button_Base.UI_Button_Base_C.ButtonImageSetWithMapping
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<GTABase_EHIDMapping>                   mapping                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Button_Base_C::ButtonImageSetWithMapping(TEnumAsByte<GTABase_EHIDMapping> mapping)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Button_Base.UI_Button_Base_C.ButtonImageSetWithMapping");

	UUI_Button_Base_C_ButtonImageSetWithMapping_Params params {};
	params.mapping = mapping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Button_Base.UI_Button_Base_C.SetButtonImageVisibility
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Visible_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Button_Base_C::SetButtonImageVisibility(bool Visible_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Button_Base.UI_Button_Base_C.SetButtonImageVisibility");

	UUI_Button_Base_C_SetButtonImageVisibility_Params params {};
	params.Visible_ = Visible_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Button_Base.UI_Button_Base_C.Button Image Set
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  ImageTexture                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector4                                    UVs                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Button_Base_C::Button_Image_Set(class UTexture2D* ImageTexture, const struct FVector4& UVs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Button_Base.UI_Button_Base_C.Button Image Set");

	UUI_Button_Base_C_Button_Image_Set_Params params {};
	params.ImageTexture = ImageTexture;
	params.UVs = UVs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Button_Base.UI_Button_Base_C.UpdateImage
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		unsigned char                                      SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Button_Base_C::UpdateImage(unsigned char SelectionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Button_Base.UI_Button_Base_C.UpdateImage");

	UUI_Button_Base_C_UpdateImage_Params params {};
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Button_Base.UI_Button_Base_C.UpdateText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		unsigned char                                      SelectionStyle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Button_Base_C::UpdateText(unsigned char SelectionStyle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Button_Base.UI_Button_Base_C.UpdateText");

	UUI_Button_Base_C_UpdateText_Params params {};
	params.SelectionStyle = SelectionStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Button_Base.UI_Button_Base_C.FocusOff
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UUI_Button_Base_C::FocusOff()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Button_Base.UI_Button_Base_C.FocusOff");

	UUI_Button_Base_C_FocusOff_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Button_Base.UI_Button_Base_C.OnFocus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UUI_Button_Base_C::OnFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Button_Base.UI_Button_Base_C.OnFocus");

	UUI_Button_Base_C_OnFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Button_Base.UI_Button_Base_C.IsSelected
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               IsSelected                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Button_Base_C::IsSelected(bool* IsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Button_Base.UI_Button_Base_C.IsSelected");

	UUI_Button_Base_C_IsSelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Button_Base.UI_Button_Base_C.UpdateButton
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		unsigned char                                      Set_Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Button_Base_C::UpdateButton(unsigned char Set_Selected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Button_Base.UI_Button_Base_C.UpdateButton");

	UUI_Button_Base_C_UpdateButton_Params params {};
	params.Set_Selected = Set_Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Button_Base.UI_Button_Base_C.SetButtonTextValue
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               JustRebuild                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Button_Base_C::SetButtonTextValue(const struct FText& Value, bool JustRebuild)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Button_Base.UI_Button_Base_C.SetButtonTextValue");

	UUI_Button_Base_C_SetButtonTextValue_Params params {};
	params.Value = Value;
	params.JustRebuild = JustRebuild;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Button_Base.UI_Button_Base_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UUI_Button_Base_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Button_Base.UI_Button_Base_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UUI_Button_Base_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Button_Base.UI_Button_Base_C.ForceButtonSelected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UUI_Button_Base_C::ForceButtonSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Button_Base.UI_Button_Base_C.ForceButtonSelected");

	UUI_Button_Base_C_ForceButtonSelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Button_Base.UI_Button_Base_C.ForceButtonNormal
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UUI_Button_Base_C::ForceButtonNormal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Button_Base.UI_Button_Base_C.ForceButtonNormal");

	UUI_Button_Base_C_ForceButtonNormal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Button_Base.UI_Button_Base_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_Button_Base_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Button_Base.UI_Button_Base_C.Construct");

	UUI_Button_Base_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Button_Base.UI_Button_Base_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UUI_Button_Base_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Button_Base.UI_Button_Base_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UUI_Button_Base_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Button_Base.UI_Button_Base_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UUI_Button_Base_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Button_Base.UI_Button_Base_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UUI_Button_Base_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Button_Base.UI_Button_Base_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UUI_Button_Base_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Button_Base.UI_Button_Base_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UUI_Button_Base_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Button_Base.UI_Button_Base_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UUI_Button_Base_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Button_Base.UI_Button_Base_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UUI_Button_Base_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Button_Base.UI_Button_Base_C.OnSynchronizeProperties
//		Flags  -> (Event, Public, BlueprintEvent)
void UUI_Button_Base_C::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Button_Base.UI_Button_Base_C.OnSynchronizeProperties");

	UUI_Button_Base_C_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Button_Base.UI_Button_Base_C.ForceButtonHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UUI_Button_Base_C::ForceButtonHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Button_Base.UI_Button_Base_C.ForceButtonHovered");

	UUI_Button_Base_C_ForceButtonHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Button_Base.UI_Button_Base_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Button_Base_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Button_Base.UI_Button_Base_C.Tick");

	UUI_Button_Base_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Button_Base.UI_Button_Base_C.ExecuteUbergraph_UI_Button_Base
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Button_Base_C::ExecuteUbergraph_UI_Button_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Button_Base.UI_Button_Base_C.ExecuteUbergraph_UI_Button_Base");

	UUI_Button_Base_C_ExecuteUbergraph_UI_Button_Base_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_Button_Base.UI_Button_Base_C.ButtonDispatcher__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		unsigned char                                      Interaction                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Button_Base_C::ButtonDispatcher__DelegateSignature(unsigned char Interaction, int BoundValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Button_Base.UI_Button_Base_C.ButtonDispatcher__DelegateSignature");

	UUI_Button_Base_C_ButtonDispatcher__DelegateSignature_Params params {};
	params.Interaction = Interaction;
	params.BoundValue = BoundValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
