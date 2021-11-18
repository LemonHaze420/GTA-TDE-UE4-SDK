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
//		Name   -> Function BP_Marker_Base.BP_Marker_Base_C.ProcessAxis
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Y                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Z                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              OutX                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              OutY                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              OutZ                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Marker_Base_C::ProcessAxis(float X, float Y, float Z, float* OutX, float* OutY, float* OutZ)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Marker_Base.BP_Marker_Base_C.ProcessAxis");

	ABP_Marker_Base_C_ProcessAxis_Params params {};
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutX != nullptr)
		*OutX = params.OutX;
	if (OutY != nullptr)
		*OutY = params.OutY;
	if (OutZ != nullptr)
		*OutZ = params.OutZ;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_Marker_Base.BP_Marker_Base_C.ProcessCheckpointType
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<GTABase_ECheckpointType>               CheckpointType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Marker_Base_C::ProcessCheckpointType(TEnumAsByte<GTABase_ECheckpointType> CheckpointType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Marker_Base.BP_Marker_Base_C.ProcessCheckpointType");

	ABP_Marker_Base_C_ProcessCheckpointType_Params params {};
	params.CheckpointType = CheckpointType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_Marker_Base.BP_Marker_Base_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Marker_Base_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Marker_Base.BP_Marker_Base_C.ReceiveTick");

	ABP_Marker_Base_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_Marker_Base.BP_Marker_Base_C.SetMarkerColor
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FColor                                      withColor                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Marker_Base_C::SetMarkerColor(const struct FColor& withColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Marker_Base.BP_Marker_Base_C.SetMarkerColor");

	ABP_Marker_Base_C_SetMarkerColor_Params params {};
	params.withColor = withColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_Marker_Base.BP_Marker_Base_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Marker_Base_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Marker_Base.BP_Marker_Base_C.ReceiveBeginPlay");

	ABP_Marker_Base_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_Marker_Base.BP_Marker_Base_C.SetCheckpointType
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		int                                                Cpt                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Marker_Base_C::SetCheckpointType(int Cpt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Marker_Base.BP_Marker_Base_C.SetCheckpointType");

	ABP_Marker_Base_C_SetCheckpointType_Params params {};
	params.Cpt = Cpt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_Marker_Base.BP_Marker_Base_C.ExecuteUbergraph_BP_Marker_Base
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Marker_Base_C::ExecuteUbergraph_BP_Marker_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Marker_Base.BP_Marker_Base_C.ExecuteUbergraph_BP_Marker_Base");

	ABP_Marker_Base_C_ExecuteUbergraph_BP_Marker_Base_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
