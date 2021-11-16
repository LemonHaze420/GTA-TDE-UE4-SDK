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
//		Name   -> Function BP_Marker_Hoop.BP_Marker_Hoop_C.ProcessCheckpointType
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_ECheckpointType>               CheckpointType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Marker_Hoop_C::ProcessCheckpointType(TEnumAsByte<GTABase_ECheckpointType> CheckpointType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Marker_Hoop.BP_Marker_Hoop_C.ProcessCheckpointType");

	ABP_Marker_Hoop_C_ProcessCheckpointType_Params params {};
	params.CheckpointType = CheckpointType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Marker_Hoop.BP_Marker_Hoop_C.ReceiveBeginPlay
//		Flags  -> ()
void ABP_Marker_Hoop_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Marker_Hoop.BP_Marker_Hoop_C.ReceiveBeginPlay");

	ABP_Marker_Hoop_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Marker_Hoop.BP_Marker_Hoop_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Marker_Hoop_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Marker_Hoop.BP_Marker_Hoop_C.ReceiveTick");

	ABP_Marker_Hoop_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Marker_Hoop.BP_Marker_Hoop_C.ExecuteUbergraph_BP_Marker_Hoop
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Marker_Hoop_C::ExecuteUbergraph_BP_Marker_Hoop(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Marker_Hoop.BP_Marker_Hoop_C.ExecuteUbergraph_BP_Marker_Hoop");

	ABP_Marker_Hoop_C_ExecuteUbergraph_BP_Marker_Hoop_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
