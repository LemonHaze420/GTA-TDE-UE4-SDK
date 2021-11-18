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
//		Name   -> Function ControllerUI_Base.ControllerUI_Base_C.SetFontColors
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSlateColor                                 NormalColor                                                (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FSlateColor                                 SelectedColor                                              (BlueprintVisible, BlueprintReadOnly, Parm)
void UControllerUI_Base_C::SetFontColors(const struct FSlateColor& NormalColor, const struct FSlateColor& SelectedColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControllerUI_Base.ControllerUI_Base_C.SetFontColors");

	UControllerUI_Base_C_SetFontColors_Params params {};
	params.NormalColor = NormalColor;
	params.SelectedColor = SelectedColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function ControllerUI_Base.ControllerUI_Base_C.GetCurrentToggleTextType
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrentType                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UControllerUI_Base_C::GetCurrentToggleTextType(int* CurrentType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControllerUI_Base.ControllerUI_Base_C.GetCurrentToggleTextType");

	UControllerUI_Base_C_GetCurrentToggleTextType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentType != nullptr)
		*CurrentType = params.CurrentType;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function ControllerUI_Base.ControllerUI_Base_C.GetToggleValueTexts
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FText>                               FullTextValues                                             (Parm, OutParm)
void UControllerUI_Base_C::GetToggleValueTexts(TArray<struct FText>* FullTextValues)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControllerUI_Base.ControllerUI_Base_C.GetToggleValueTexts");

	UControllerUI_Base_C_GetToggleValueTexts_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FullTextValues != nullptr)
		*FullTextValues = params.FullTextValues;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function ControllerUI_Base.ControllerUI_Base_C.PlayInteractSound
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UControllerUI_Base_C::PlayInteractSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControllerUI_Base.ControllerUI_Base_C.PlayInteractSound");

	UControllerUI_Base_C_PlayInteractSound_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function ControllerUI_Base.ControllerUI_Base_C.SetBackgroundColors
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FSlateColor                                 NormalColor                                                (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FSlateColor                                 SelectedColor                                              (BlueprintVisible, BlueprintReadOnly, Parm)
void UControllerUI_Base_C::SetBackgroundColors(const struct FSlateColor& NormalColor, const struct FSlateColor& SelectedColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControllerUI_Base.ControllerUI_Base_C.SetBackgroundColors");

	UControllerUI_Base_C_SetBackgroundColors_Params params {};
	params.NormalColor = NormalColor;
	params.SelectedColor = SelectedColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function ControllerUI_Base.ControllerUI_Base_C.UpdateTextAndBackgroundColors
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UControllerUI_Base_C::UpdateTextAndBackgroundColors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControllerUI_Base.ControllerUI_Base_C.UpdateTextAndBackgroundColors");

	UControllerUI_Base_C_UpdateTextAndBackgroundColors_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function ControllerUI_Base.ControllerUI_Base_C.SetupNavigation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Up                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     Down                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UControllerUI_Base_C::SetupNavigation(class UWidget* Up, class UWidget* Down)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControllerUI_Base.ControllerUI_Base_C.SetupNavigation");

	UControllerUI_Base_C_SetupNavigation_Params params {};
	params.Up = Up;
	params.Down = Down;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function ControllerUI_Base.ControllerUI_Base_C.CreateButtonValues
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UControllerUI_Base_C::CreateButtonValues()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControllerUI_Base.ControllerUI_Base_C.CreateButtonValues");

	UControllerUI_Base_C_CreateButtonValues_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function ControllerUI_Base.ControllerUI_Base_C.Set Toggle Value
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UControllerUI_Base_C::Set_Toggle_Value(int NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControllerUI_Base.ControllerUI_Base_C.Set Toggle Value");

	UControllerUI_Base_C_Set_Toggle_Value_Params params {};
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function ControllerUI_Base.ControllerUI_Base_C.OnToggleNext
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UControllerUI_Base_C::OnToggleNext(SlateCore_EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControllerUI_Base.ControllerUI_Base_C.OnToggleNext");

	UControllerUI_Base_C_OnToggleNext_Params params {};
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function ControllerUI_Base.ControllerUI_Base_C.OnTogglePrevious
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UControllerUI_Base_C::OnTogglePrevious(SlateCore_EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControllerUI_Base.ControllerUI_Base_C.OnTogglePrevious");

	UControllerUI_Base_C_OnTogglePrevious_Params params {};
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function ControllerUI_Base.ControllerUI_Base_C.GetToggleButton
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UButton*                                     ToggleButton                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UControllerUI_Base_C::GetToggleButton(class UButton** ToggleButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControllerUI_Base.ControllerUI_Base_C.GetToggleButton");

	UControllerUI_Base_C_GetToggleButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ToggleButton != nullptr)
		*ToggleButton = params.ToggleButton;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function ControllerUI_Base.ControllerUI_Base_C.GetCorrectedButtonValueForC++
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<ControllerButtonIDDefinitions_EControllerButtonIDDefinitions> InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                C___Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UControllerUI_Base_C::GetCorrectedButtonValueForC__(TEnumAsByte<ControllerButtonIDDefinitions_EControllerButtonIDDefinitions> InValue, int* C___Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControllerUI_Base.ControllerUI_Base_C.GetCorrectedButtonValueForC++");

	UControllerUI_Base_C_GetCorrectedButtonValueForC___Params params {};
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (C___Value != nullptr)
		*C___Value = params.C___Value;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function ControllerUI_Base.ControllerUI_Base_C.SetupControllerText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UControllerUI_Base_C::SetupControllerText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControllerUI_Base.ControllerUI_Base_C.SetupControllerText");

	UControllerUI_Base_C_SetupControllerText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function ControllerUI_Base.ControllerUI_Base_C.GetMappingObjects
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class USimpleControllerMappingText_C*>      ReturnArray1                                               (Parm, OutParm, ContainsInstancedReference)
void UControllerUI_Base_C::GetMappingObjects(TArray<class USimpleControllerMappingText_C*>* ReturnArray1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControllerUI_Base.ControllerUI_Base_C.GetMappingObjects");

	UControllerUI_Base_C_GetMappingObjects_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ReturnArray1 != nullptr)
		*ReturnArray1 = params.ReturnArray1;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function ControllerUI_Base.ControllerUI_Base_C.Create Mapping Text
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FControllerButtonLayout                     ControllerButtonLayout                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
//		int                                                ArrayIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USimpleControllerMappingText_C*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USimpleControllerMappingText_C* UControllerUI_Base_C::Create_Mapping_Text(const struct FControllerButtonLayout& ControllerButtonLayout, int ArrayIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControllerUI_Base.ControllerUI_Base_C.Create Mapping Text");

	UControllerUI_Base_C_Create_Mapping_Text_Params params {};
	params.ControllerButtonLayout = ControllerButtonLayout;
	params.ArrayIndex = ArrayIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function ControllerUI_Base.ControllerUI_Base_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UControllerUI_Base_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControllerUI_Base.ControllerUI_Base_C.Construct");

	UControllerUI_Base_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function ControllerUI_Base.ControllerUI_Base_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UControllerUI_Base_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControllerUI_Base.ControllerUI_Base_C.Tick");

	UControllerUI_Base_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function ControllerUI_Base.ControllerUI_Base_C.OnSynchronizeProperties
//		Flags  -> (Event, Public, BlueprintEvent)
void UControllerUI_Base_C::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControllerUI_Base.ControllerUI_Base_C.OnSynchronizeProperties");

	UControllerUI_Base_C_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function ControllerUI_Base.ControllerUI_Base_C.BndEvt__ToggleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UControllerUI_Base_C::BndEvt__ToggleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControllerUI_Base.ControllerUI_Base_C.BndEvt__ToggleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UControllerUI_Base_C_BndEvt__ToggleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function ControllerUI_Base.ControllerUI_Base_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UControllerUI_Base_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControllerUI_Base.ControllerUI_Base_C.PreConstruct");

	UControllerUI_Base_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function ControllerUI_Base.ControllerUI_Base_C.ExecuteUbergraph_ControllerUI_Base
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UControllerUI_Base_C::ExecuteUbergraph_ControllerUI_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControllerUI_Base.ControllerUI_Base_C.ExecuteUbergraph_ControllerUI_Base");

	UControllerUI_Base_C_ExecuteUbergraph_ControllerUI_Base_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
