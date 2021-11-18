// Name: ViceCity, Version: 1.0.0

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
//		Name   -> Function Transition_Base.Transition_Base_C.GetSecondaryUnderImage
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCanvasPanel*                                OutCanvas                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_Base_C::GetSecondaryUnderImage(TEnumAsByte<GTABase_EGTATransitionState> State, class UCanvasPanel** OutCanvas)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.GetSecondaryUnderImage");

	UTransition_Base_C_GetSecondaryUnderImage_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutCanvas != nullptr)
		*OutCanvas = params.OutCanvas;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Base.Transition_Base_C.IsBelowPauseMenu
//		Flags  -> ()
// Parameters:
//		bool                                               IsBelow                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTransition_Base_C::IsBelowPauseMenu(bool* IsBelow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.IsBelowPauseMenu");

	UTransition_Base_C_IsBelowPauseMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsBelow != nullptr)
		*IsBelow = params.IsBelow;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Base.Transition_Base_C.UpdateVolumeFades
//		Flags  -> ()
// Parameters:
void UTransition_Base_C::UpdateVolumeFades()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.UpdateVolumeFades");

	UTransition_Base_C_UpdateVolumeFades_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Base.Transition_Base_C.GetFadeOpacity
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Canvas                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UTransition_Base_C::GetFadeOpacity(class UWidget* Canvas)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.GetFadeOpacity");

	UTransition_Base_C_GetFadeOpacity_Params params {};
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Base.Transition_Base_C.SetFadeOpacity
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           CurrentState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCanvasPanel*                                Canvas                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_Base_C::SetFadeOpacity(TEnumAsByte<GTABase_EGTATransitionState> CurrentState, class UCanvasPanel* Canvas, float Alpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.SetFadeOpacity");

	UTransition_Base_C_SetFadeOpacity_Params params {};
	params.CurrentState = CurrentState;
	params.Canvas = Canvas;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Base.Transition_Base_C.AutoContinue
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           toState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_Base_C::AutoContinue(TEnumAsByte<GTABase_EGTATransitionState> toState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.AutoContinue");

	UTransition_Base_C_AutoContinue_Params params {};
	params.toState = toState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Base.Transition_Base_C.GetIsFading
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTransition_Base_C::GetIsFading()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.GetIsFading");

	UTransition_Base_C_GetIsFading_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Base.Transition_Base_C.UpdateUptime
//		Flags  -> ()
// Parameters:
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_Base_C::UpdateUptime(float dT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.UpdateUptime");

	UTransition_Base_C_UpdateUptime_Params params {};
	params.dT = dT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Base.Transition_Base_C.GetNextState
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           CurrentState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<GTABase_EGTATransitionState>           NextState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_Base_C::GetNextState(TEnumAsByte<GTABase_EGTATransitionState> CurrentState, TEnumAsByte<GTABase_EGTATransitionState>* NextState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.GetNextState");

	UTransition_Base_C_GetNextState_Params params {};
	params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NextState != nullptr)
		*NextState = params.NextState;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Base.Transition_Base_C.GetCurrentFadeOpacity
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UTransition_Base_C::GetCurrentFadeOpacity()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.GetCurrentFadeOpacity");

	UTransition_Base_C_GetCurrentFadeOpacity_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Base.Transition_Base_C.RecievedATimeChangeInCurrentState
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           CurrentState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_Base_C::RecievedATimeChangeInCurrentState(TEnumAsByte<GTABase_EGTATransitionState> CurrentState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.RecievedATimeChangeInCurrentState");

	UTransition_Base_C_RecievedATimeChangeInCurrentState_Params params {};
	params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Base.Transition_Base_C.GetFadeDirectionAndLength
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Length                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsFadeIn                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTransition_Base_C::GetFadeDirectionAndLength(TEnumAsByte<GTABase_EGTATransitionState> State, float* Length, bool* IsFadeIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.GetFadeDirectionAndLength");

	UTransition_Base_C_GetFadeDirectionAndLength_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Length != nullptr)
		*Length = params.Length;
	if (IsFadeIn != nullptr)
		*IsFadeIn = params.IsFadeIn;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Base.Transition_Base_C.UpdateToCurrentState
//		Flags  -> ()
void UTransition_Base_C::UpdateToCurrentState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.UpdateToCurrentState");

	UTransition_Base_C_UpdateToCurrentState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Base.Transition_Base_C.UpdateFade
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_Base_C::UpdateFade(TEnumAsByte<GTABase_EGTATransitionState> State, float dT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.UpdateFade");

	UTransition_Base_C_UpdateFade_Params params {};
	params.State = State;
	params.dT = dT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Base.Transition_Base_C.Update
//		Flags  -> ()
// Parameters:
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_Base_C::Update(float dT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.Update");

	UTransition_Base_C_Update_Params params {};
	params.dT = dT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Base.Transition_Base_C.UpdateStatic
//		Flags  -> ()
// Parameters:
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<GTABase_EGTATransitionState>           State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_Base_C::UpdateStatic(float dT, TEnumAsByte<GTABase_EGTATransitionState> State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.UpdateStatic");

	UTransition_Base_C_UpdateStatic_Params params {};
	params.dT = dT;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Base.Transition_Base_C.GetCurrentFadeCanvas
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCanvasPanel*                                OutCanvas                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_Base_C::GetCurrentFadeCanvas(TEnumAsByte<GTABase_EGTATransitionState> State, class UCanvasPanel** OutCanvas)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.GetCurrentFadeCanvas");

	UTransition_Base_C_GetCurrentFadeCanvas_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutCanvas != nullptr)
		*OutCanvas = params.OutCanvas;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Base.Transition_Base_C.IsFading
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTransition_Base_C::IsFading(TEnumAsByte<GTABase_EGTATransitionState> State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.IsFading");

	UTransition_Base_C_IsFading_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Base.Transition_Base_C.Construct
//		Flags  -> ()
void UTransition_Base_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.Construct");

	UTransition_Base_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Base.Transition_Base_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_Base_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.Tick");

	UTransition_Base_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Base.Transition_Base_C.BP_Continue
//		Flags  -> ()
void UTransition_Base_C::BP_Continue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.BP_Continue");

	UTransition_Base_C_BP_Continue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Base.Transition_Base_C.BP_SetTransitionStateFadeTime
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           StateToChange                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              TimeToFade                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_Base_C::BP_SetTransitionStateFadeTime(TEnumAsByte<GTABase_EGTATransitionState> StateToChange, float TimeToFade)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.BP_SetTransitionStateFadeTime");

	UTransition_Base_C_BP_SetTransitionStateFadeTime_Params params {};
	params.StateToChange = StateToChange;
	params.TimeToFade = TimeToFade;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Base.Transition_Base_C.ForceCurrentFadeOpacity
//		Flags  -> ()
// Parameters:
//		float                                              newOpacity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_Base_C::ForceCurrentFadeOpacity(float newOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.ForceCurrentFadeOpacity");

	UTransition_Base_C_ForceCurrentFadeOpacity_Params params {};
	params.newOpacity = newOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Base.Transition_Base_C.Destruct
//		Flags  -> ()
void UTransition_Base_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.Destruct");

	UTransition_Base_C_Destruct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_Base.Transition_Base_C.ExecuteUbergraph_Transition_Base
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_Base_C::ExecuteUbergraph_Transition_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_Base.Transition_Base_C.ExecuteUbergraph_Transition_Base");

	UTransition_Base_C_ExecuteUbergraph_Transition_Base_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
