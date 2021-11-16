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
//		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.CreateWidgetAndAdd
//		Flags  -> ()
// Parameters:
//		class UClass*                                      WidgetClass                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPanelWidget*                                PanelToAddTo                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUI_GTAHUDItem*                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UUI_GTAHUDItem* UTransition_Wasted_Base_C::CreateWidgetAndAdd(class UClass* WidgetClass, class UPanelWidget* PanelToAddTo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.CreateWidgetAndAdd");

	UTransition_Wasted_Base_C_CreateWidgetAndAdd_Params params {};
	params.WidgetClass = WidgetClass;
	params.PanelToAddTo = PanelToAddTo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.ShowMissionFailedExtras
//		Flags  -> ()
// Parameters:
//		struct FText                                       TextOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm)
void UTransition_Wasted_Base_C::ShowMissionFailedExtras(const struct FText& TextOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.ShowMissionFailedExtras");

	UTransition_Wasted_Base_C_ShowMissionFailedExtras_Params params {};
	params.TextOverride = TextOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.GetNextState
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           CurrentState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<GTABase_EGTATransitionState>           NextState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_Wasted_Base_C::GetNextState(TEnumAsByte<GTABase_EGTATransitionState> CurrentState, TEnumAsByte<GTABase_EGTATransitionState>* NextState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.GetNextState");

	UTransition_Wasted_Base_C_GetNextState_Params params {};
	params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NextState != nullptr)
		*NextState = params.NextState;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.SetInitialColor
//		Flags  -> ()
void UTransition_Wasted_Base_C::SetInitialColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.SetInitialColor");

	UTransition_Wasted_Base_C_SetInitialColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.SetMainImage
//		Flags  -> ()
void UTransition_Wasted_Base_C::SetMainImage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.SetMainImage");

	UTransition_Wasted_Base_C_SetMainImage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.IsOpaque
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTransition_Wasted_Base_C::IsOpaque()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.IsOpaque");

	UTransition_Wasted_Base_C_IsOpaque_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.UpdateToCurrentState
//		Flags  -> ()
// Parameters:
void UTransition_Wasted_Base_C::UpdateToCurrentState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.UpdateToCurrentState");

	UTransition_Wasted_Base_C_UpdateToCurrentState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.Update
//		Flags  -> ()
// Parameters:
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_Wasted_Base_C::Update(float dT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.Update");

	UTransition_Wasted_Base_C_Update_Params params {};
	params.dT = dT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.GetCurrentFadeCanvas
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCanvasPanel*                                OutCanvas                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_Wasted_Base_C::GetCurrentFadeCanvas(TEnumAsByte<GTABase_EGTATransitionState> State, class UCanvasPanel** OutCanvas)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.GetCurrentFadeCanvas");

	UTransition_Wasted_Base_C_GetCurrentFadeCanvas_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutCanvas != nullptr)
		*OutCanvas = params.OutCanvas;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.Construct
//		Flags  -> ()
void UTransition_Wasted_Base_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.Construct");

	UTransition_Wasted_Base_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_Wasted_Base_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.Tick");

	UTransition_Wasted_Base_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTransition_Wasted_Base_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.PreConstruct");

	UTransition_Wasted_Base_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.CustomFunctionFromString
//		Flags  -> ()
// Parameters:
//		struct FString                                     FunctionString                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UTransition_Wasted_Base_C::CustomFunctionFromString(const struct FString& FunctionString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.CustomFunctionFromString");

	UTransition_Wasted_Base_C_CustomFunctionFromString_Params params {};
	params.FunctionString = FunctionString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.CustomFunctionFromStringWithString
//		Flags  -> ()
// Parameters:
//		struct FString                                     FunctionString                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     VariableString                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UTransition_Wasted_Base_C::CustomFunctionFromStringWithString(const struct FString& FunctionString, const struct FString& VariableString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.CustomFunctionFromStringWithString");

	UTransition_Wasted_Base_C_CustomFunctionFromStringWithString_Params params {};
	params.FunctionString = FunctionString;
	params.VariableString = VariableString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.CustomFunctionFromStringWithColor
//		Flags  -> ()
// Parameters:
//		struct FString                                     FunctionString                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_Wasted_Base_C::CustomFunctionFromStringWithColor(const struct FString& FunctionString, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.CustomFunctionFromStringWithColor");

	UTransition_Wasted_Base_C_CustomFunctionFromStringWithColor_Params params {};
	params.FunctionString = FunctionString;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Wasted_Base.Transition_Wasted_Base_C.ExecuteUbergraph_Transition_Wasted_Base
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_Wasted_Base_C::ExecuteUbergraph_Transition_Wasted_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Wasted_Base.Transition_Wasted_Base_C.ExecuteUbergraph_Transition_Wasted_Base");

	UTransition_Wasted_Base_C_ExecuteUbergraph_Transition_Wasted_Base_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
