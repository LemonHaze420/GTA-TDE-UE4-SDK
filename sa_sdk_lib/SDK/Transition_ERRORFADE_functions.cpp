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
//		Name   -> Function Transition_ERRORFADE.Transition_ERRORFADE_C.GetNextState
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           CurrentState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<GTABase_EGTATransitionState>           NextState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_ERRORFADE_C::GetNextState(TEnumAsByte<GTABase_EGTATransitionState> CurrentState, TEnumAsByte<GTABase_EGTATransitionState>* NextState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_ERRORFADE.Transition_ERRORFADE_C.GetNextState");

	UTransition_ERRORFADE_C_GetNextState_Params params {};
	params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NextState != nullptr)
		*NextState = params.NextState;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_ERRORFADE.Transition_ERRORFADE_C.SetInitialColor
//		Flags  -> ()
void UTransition_ERRORFADE_C::SetInitialColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_ERRORFADE.Transition_ERRORFADE_C.SetInitialColor");

	UTransition_ERRORFADE_C_SetInitialColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_ERRORFADE.Transition_ERRORFADE_C.IsOpaque
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTransition_ERRORFADE_C::IsOpaque()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_ERRORFADE.Transition_ERRORFADE_C.IsOpaque");

	UTransition_ERRORFADE_C_IsOpaque_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_ERRORFADE.Transition_ERRORFADE_C.UpdateToCurrentState
//		Flags  -> ()
// Parameters:
void UTransition_ERRORFADE_C::UpdateToCurrentState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_ERRORFADE.Transition_ERRORFADE_C.UpdateToCurrentState");

	UTransition_ERRORFADE_C_UpdateToCurrentState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_ERRORFADE.Transition_ERRORFADE_C.Update
//		Flags  -> ()
// Parameters:
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_ERRORFADE_C::Update(float dT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_ERRORFADE.Transition_ERRORFADE_C.Update");

	UTransition_ERRORFADE_C_Update_Params params {};
	params.dT = dT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_ERRORFADE.Transition_ERRORFADE_C.GetCurrentFadeCanvas
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCanvasPanel*                                OutCanvas                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_ERRORFADE_C::GetCurrentFadeCanvas(TEnumAsByte<GTABase_EGTATransitionState> State, class UCanvasPanel** OutCanvas)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_ERRORFADE.Transition_ERRORFADE_C.GetCurrentFadeCanvas");

	UTransition_ERRORFADE_C_GetCurrentFadeCanvas_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutCanvas != nullptr)
		*OutCanvas = params.OutCanvas;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_ERRORFADE.Transition_ERRORFADE_C.Construct
//		Flags  -> ()
void UTransition_ERRORFADE_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_ERRORFADE.Transition_ERRORFADE_C.Construct");

	UTransition_ERRORFADE_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_ERRORFADE.Transition_ERRORFADE_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_ERRORFADE_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_ERRORFADE.Transition_ERRORFADE_C.Tick");

	UTransition_ERRORFADE_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_ERRORFADE.Transition_ERRORFADE_C.ExecuteUbergraph_Transition_ERRORFADE
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_ERRORFADE_C::ExecuteUbergraph_Transition_ERRORFADE(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_ERRORFADE.Transition_ERRORFADE_C.ExecuteUbergraph_Transition_ERRORFADE");

	UTransition_ERRORFADE_C_ExecuteUbergraph_Transition_ERRORFADE_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
