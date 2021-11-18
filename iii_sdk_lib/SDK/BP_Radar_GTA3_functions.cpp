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
//		Name   -> Function BP_Radar_GTA3.BP_Radar_GTA3_C.TurnOnCastShadow
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Radar_GTA3_C::TurnOnCastShadow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Radar_GTA3.BP_Radar_GTA3_C.TurnOnCastShadow");

	ABP_Radar_GTA3_C_TurnOnCastShadow_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_Radar_GTA3.BP_Radar_GTA3_C.GetRadarComponents
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UPrimitiveComponent*>                 RadarComps                                                 (Parm, OutParm, ContainsInstancedReference)
void ABP_Radar_GTA3_C::GetRadarComponents(TArray<class UPrimitiveComponent*>* RadarComps)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Radar_GTA3.BP_Radar_GTA3_C.GetRadarComponents");

	ABP_Radar_GTA3_C_GetRadarComponents_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RadarComps != nullptr)
		*RadarComps = params.RadarComps;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_Radar_GTA3.BP_Radar_GTA3_C.GetReferencePoints
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     MinRef                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     MaxRef                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Radar_GTA3_C::GetReferencePoints(struct FVector* MinRef, struct FVector* MaxRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Radar_GTA3.BP_Radar_GTA3_C.GetReferencePoints");

	ABP_Radar_GTA3_C_GetReferencePoints_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MinRef != nullptr)
		*MinRef = params.MinRef;
	if (MaxRef != nullptr)
		*MaxRef = params.MaxRef;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_Radar_GTA3.BP_Radar_GTA3_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Radar_GTA3_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Radar_GTA3.BP_Radar_GTA3_C.ReceiveBeginPlay");

	ABP_Radar_GTA3_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_Radar_GTA3.BP_Radar_GTA3_C.SwitchedMode
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bMenuMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Radar_GTA3_C::SwitchedMode(bool bMenuMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Radar_GTA3.BP_Radar_GTA3_C.SwitchedMode");

	ABP_Radar_GTA3_C_SwitchedMode_Params params {};
	params.bMenuMode = bMenuMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_Radar_GTA3.BP_Radar_GTA3_C.ExecuteUbergraph_BP_Radar_GTA3
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Radar_GTA3_C::ExecuteUbergraph_BP_Radar_GTA3(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Radar_GTA3.BP_Radar_GTA3_C.ExecuteUbergraph_BP_Radar_GTA3");

	ABP_Radar_GTA3_C_ExecuteUbergraph_BP_Radar_GTA3_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
