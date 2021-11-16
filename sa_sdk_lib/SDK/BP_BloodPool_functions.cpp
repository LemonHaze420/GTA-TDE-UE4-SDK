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
//		Name   -> Function BP_BloodPool.BP_BloodPool_C.ReceiveBeginPlay
//		Flags  -> ()
void ABP_BloodPool_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BloodPool.BP_BloodPool_C.ReceiveBeginPlay");

	ABP_BloodPool_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_BloodPool.BP_BloodPool_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BloodPool_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BloodPool.BP_BloodPool_C.ReceiveTick");

	ABP_BloodPool_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_BloodPool.BP_BloodPool_C.FadeOut
//		Flags  -> ()
void ABP_BloodPool_C::FadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BloodPool.BP_BloodPool_C.FadeOut");

	ABP_BloodPool_C_FadeOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_BloodPool.BP_BloodPool_C.ExecuteUbergraph_BP_BloodPool
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BloodPool_C::ExecuteUbergraph_BP_BloodPool(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BloodPool.BP_BloodPool_C.ExecuteUbergraph_BP_BloodPool");

	ABP_BloodPool_C_ExecuteUbergraph_BP_BloodPool_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
