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
//		Name   -> Function BP_ExteriorPostProcess.BP_ExteriorPostProcess_C.UpdateSettings
//		Flags  -> ()
void ABP_ExteriorPostProcess_C::UpdateSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ExteriorPostProcess.BP_ExteriorPostProcess_C.UpdateSettings");

	ABP_ExteriorPostProcess_C_UpdateSettings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ExteriorPostProcess.BP_ExteriorPostProcess_C.ReceiveBeginPlay
//		Flags  -> ()
void ABP_ExteriorPostProcess_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ExteriorPostProcess.BP_ExteriorPostProcess_C.ReceiveBeginPlay");

	ABP_ExteriorPostProcess_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ExteriorPostProcess.BP_ExteriorPostProcess_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ExteriorPostProcess_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ExteriorPostProcess.BP_ExteriorPostProcess_C.ReceiveTick");

	ABP_ExteriorPostProcess_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ExteriorPostProcess.BP_ExteriorPostProcess_C.ExecuteUbergraph_BP_ExteriorPostProcess
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ExteriorPostProcess_C::ExecuteUbergraph_BP_ExteriorPostProcess(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ExteriorPostProcess.BP_ExteriorPostProcess_C.ExecuteUbergraph_BP_ExteriorPostProcess");

	ABP_ExteriorPostProcess_C_ExecuteUbergraph_BP_ExteriorPostProcess_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
