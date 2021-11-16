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
//		Name   -> Function Transition_SimpleFade.Transition_SimpleFade_C.GetNextState
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           CurrentState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<GTABase_EGTATransitionState>           NextState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_SimpleFade_C::GetNextState(TEnumAsByte<GTABase_EGTATransitionState> CurrentState, TEnumAsByte<GTABase_EGTATransitionState>* NextState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_SimpleFade.Transition_SimpleFade_C.GetNextState");

	UTransition_SimpleFade_C_GetNextState_Params params {};
	params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NextState != nullptr)
		*NextState = params.NextState;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_SimpleFade.Transition_SimpleFade_C.SetInitialColor
//		Flags  -> ()
void UTransition_SimpleFade_C::SetInitialColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_SimpleFade.Transition_SimpleFade_C.SetInitialColor");

	UTransition_SimpleFade_C_SetInitialColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_SimpleFade.Transition_SimpleFade_C.IsOpaque
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTransition_SimpleFade_C::IsOpaque()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_SimpleFade.Transition_SimpleFade_C.IsOpaque");

	UTransition_SimpleFade_C_IsOpaque_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_SimpleFade.Transition_SimpleFade_C.UpdateToCurrentState
//		Flags  -> ()
// Parameters:
void UTransition_SimpleFade_C::UpdateToCurrentState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_SimpleFade.Transition_SimpleFade_C.UpdateToCurrentState");

	UTransition_SimpleFade_C_UpdateToCurrentState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_SimpleFade.Transition_SimpleFade_C.Update
//		Flags  -> ()
// Parameters:
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_SimpleFade_C::Update(float dT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_SimpleFade.Transition_SimpleFade_C.Update");

	UTransition_SimpleFade_C_Update_Params params {};
	params.dT = dT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_SimpleFade.Transition_SimpleFade_C.GetCurrentFadeCanvas
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCanvasPanel*                                OutCanvas                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_SimpleFade_C::GetCurrentFadeCanvas(TEnumAsByte<GTABase_EGTATransitionState> State, class UCanvasPanel** OutCanvas)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_SimpleFade.Transition_SimpleFade_C.GetCurrentFadeCanvas");

	UTransition_SimpleFade_C_GetCurrentFadeCanvas_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutCanvas != nullptr)
		*OutCanvas = params.OutCanvas;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_SimpleFade.Transition_SimpleFade_C.Construct
//		Flags  -> ()
void UTransition_SimpleFade_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_SimpleFade.Transition_SimpleFade_C.Construct");

	UTransition_SimpleFade_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_SimpleFade.Transition_SimpleFade_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_SimpleFade_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_SimpleFade.Transition_SimpleFade_C.Tick");

	UTransition_SimpleFade_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_SimpleFade.Transition_SimpleFade_C.OverrideBackgroundColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                ToColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_SimpleFade_C::OverrideBackgroundColor(const struct FLinearColor& ToColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_SimpleFade.Transition_SimpleFade_C.OverrideBackgroundColor");

	UTransition_SimpleFade_C_OverrideBackgroundColor_Params params {};
	params.ToColor = ToColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_SimpleFade.Transition_SimpleFade_C.ExecuteUbergraph_Transition_SimpleFade
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_SimpleFade_C::ExecuteUbergraph_Transition_SimpleFade(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_SimpleFade.Transition_SimpleFade_C.ExecuteUbergraph_Transition_SimpleFade");

	UTransition_SimpleFade_C_ExecuteUbergraph_Transition_SimpleFade_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
