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
//		Name   -> Function ControlsOptions.ControlsOptions_C.SetFocusToFirstEntry
//		Flags  -> ()
// Parameters:
void UControlsOptions_C::SetFocusToFirstEntry()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControlsOptions.ControlsOptions_C.SetFocusToFirstEntry");

	UControlsOptions_C_SetFocusToFirstEntry_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ControlsOptions.ControlsOptions_C.HandleBack
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UControlsOptions_C::HandleBack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControlsOptions.ControlsOptions_C.HandleBack");

	UControlsOptions_C_HandleBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ControlsOptions.ControlsOptions_C.RemoveAdjustableControlsUI
//		Flags  -> ()
// Parameters:
void UControlsOptions_C::RemoveAdjustableControlsUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControlsOptions.ControlsOptions_C.RemoveAdjustableControlsUI");

	UControlsOptions_C_RemoveAdjustableControlsUI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ControlsOptions.ControlsOptions_C.AdjustableControlsBack
//		Flags  -> ()
// Parameters:
//		unsigned char                                      Interaction                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UControlsOptions_C::AdjustableControlsBack(unsigned char Interaction, int BoundValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControlsOptions.ControlsOptions_C.AdjustableControlsBack");

	UControlsOptions_C_AdjustableControlsBack_Params params {};
	params.Interaction = Interaction;
	params.BoundValue = BoundValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ControlsOptions.ControlsOptions_C.CreateAdjustableControlsUI
//		Flags  -> ()
// Parameters:
void UControlsOptions_C::CreateAdjustableControlsUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControlsOptions.ControlsOptions_C.CreateAdjustableControlsUI");

	UControlsOptions_C_CreateAdjustableControlsUI_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ControlsOptions.ControlsOptions_C.RunSlotButtonFunction
//		Flags  -> ()
// Parameters:
//		struct FName                                       FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UControlsOptions_C::RunSlotButtonFunction(const struct FName& FunctionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControlsOptions.ControlsOptions_C.RunSlotButtonFunction");

	UControlsOptions_C_RunSlotButtonFunction_Params params {};
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ControlsOptions.ControlsOptions_C.Construct
//		Flags  -> ()
void UControlsOptions_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControlsOptions.ControlsOptions_C.Construct");

	UControlsOptions_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ControlsOptions.ControlsOptions_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UControlsOptions_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControlsOptions.ControlsOptions_C.Tick");

	UControlsOptions_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ControlsOptions.ControlsOptions_C.RefreshAdjustableControls
//		Flags  -> ()
void UControlsOptions_C::RefreshAdjustableControls()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControlsOptions.ControlsOptions_C.RefreshAdjustableControls");

	UControlsOptions_C_RefreshAdjustableControls_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ControlsOptions.ControlsOptions_C.ExecuteUbergraph_ControlsOptions
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UControlsOptions_C::ExecuteUbergraph_ControlsOptions(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ControlsOptions.ControlsOptions_C.ExecuteUbergraph_ControlsOptions");

	UControlsOptions_C_ExecuteUbergraph_ControlsOptions_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
