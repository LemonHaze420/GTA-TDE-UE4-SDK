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
//		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.GetSecondaryUnderImage
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCanvasPanel*                                OutCanvas                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_LoadingTemplate_C::GetSecondaryUnderImage(TEnumAsByte<GTABase_EGTATransitionState> State, class UCanvasPanel** OutCanvas)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.GetSecondaryUnderImage");

	UTransition_LoadingTemplate_C_GetSecondaryUnderImage_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutCanvas != nullptr)
		*OutCanvas = params.OutCanvas;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.CreateProgressBar
//		Flags  -> ()
// Parameters:
//		class ULoadingProgressBar_base_C*                  BarCreated                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_LoadingTemplate_C::CreateProgressBar(class ULoadingProgressBar_base_C** BarCreated)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.CreateProgressBar");

	UTransition_LoadingTemplate_C_CreateProgressBar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BarCreated != nullptr)
		*BarCreated = params.BarCreated;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.GetNextState
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           CurrentState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<GTABase_EGTATransitionState>           NextState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_LoadingTemplate_C::GetNextState(TEnumAsByte<GTABase_EGTATransitionState> CurrentState, TEnumAsByte<GTABase_EGTATransitionState>* NextState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.GetNextState");

	UTransition_LoadingTemplate_C_GetNextState_Params params {};
	params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NextState != nullptr)
		*NextState = params.NextState;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.SetInitialColor
//		Flags  -> ()
void UTransition_LoadingTemplate_C::SetInitialColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.SetInitialColor");

	UTransition_LoadingTemplate_C_SetInitialColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.Get Random Image
//		Flags  -> ()
// Parameters:
void UTransition_LoadingTemplate_C::Get_Random_Image()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.Get Random Image");

	UTransition_LoadingTemplate_C_Get_Random_Image_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.IsOpaque
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTransition_LoadingTemplate_C::IsOpaque()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.IsOpaque");

	UTransition_LoadingTemplate_C_IsOpaque_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.UpdateToCurrentState
//		Flags  -> ()
// Parameters:
void UTransition_LoadingTemplate_C::UpdateToCurrentState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.UpdateToCurrentState");

	UTransition_LoadingTemplate_C_UpdateToCurrentState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.Update
//		Flags  -> ()
// Parameters:
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_LoadingTemplate_C::Update(float dT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.Update");

	UTransition_LoadingTemplate_C_Update_Params params {};
	params.dT = dT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.GetCurrentFadeCanvas
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCanvasPanel*                                OutCanvas                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_LoadingTemplate_C::GetCurrentFadeCanvas(TEnumAsByte<GTABase_EGTATransitionState> State, class UCanvasPanel** OutCanvas)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.GetCurrentFadeCanvas");

	UTransition_LoadingTemplate_C_GetCurrentFadeCanvas_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutCanvas != nullptr)
		*OutCanvas = params.OutCanvas;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.OnLoaded_1285F34942B424F426C90880E454E273
//		Flags  -> ()
// Parameters:
//		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_LoadingTemplate_C::OnLoaded_1285F34942B424F426C90880E454E273(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.OnLoaded_1285F34942B424F426C90880E454E273");

	UTransition_LoadingTemplate_C_OnLoaded_1285F34942B424F426C90880E454E273_Params params {};
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.Construct
//		Flags  -> ()
void UTransition_LoadingTemplate_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.Construct");

	UTransition_LoadingTemplate_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_LoadingTemplate_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.Tick");

	UTransition_LoadingTemplate_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.SetProgress
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_LoadingTemplate_C::SetProgress(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.SetProgress");

	UTransition_LoadingTemplate_C_SetProgress_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTransition_LoadingTemplate_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.PreConstruct");

	UTransition_LoadingTemplate_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.ExecuteUbergraph_Transition_LoadingTemplate
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTransition_LoadingTemplate_C::ExecuteUbergraph_Transition_LoadingTemplate(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.ExecuteUbergraph_Transition_LoadingTemplate");

	UTransition_LoadingTemplate_C_ExecuteUbergraph_Transition_LoadingTemplate_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
