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
//		Name   -> Function BP_Radar_SA.BP_Radar_SA_C.TurnOnCastShadow
//		Flags  -> ()
// Parameters:
void ABP_Radar_SA_C::TurnOnCastShadow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Radar_SA.BP_Radar_SA_C.TurnOnCastShadow");

	ABP_Radar_SA_C_TurnOnCastShadow_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Radar_SA.BP_Radar_SA_C.FetchRadarComponents
//		Flags  -> ()
// Parameters:
//		TArray<class UPrimitiveComponent*>                 Components                                                 (Parm, OutParm, ContainsInstancedReference)
void ABP_Radar_SA_C::FetchRadarComponents(TArray<class UPrimitiveComponent*>* Components)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Radar_SA.BP_Radar_SA_C.FetchRadarComponents");

	ABP_Radar_SA_C_FetchRadarComponents_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Components != nullptr)
		*Components = params.Components;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Radar_SA.BP_Radar_SA_C.GetReferencePoints
//		Flags  -> ()
// Parameters:
//		struct FVector                                     MinRef                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     MaxRef                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Radar_SA_C::GetReferencePoints(struct FVector* MinRef, struct FVector* MaxRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Radar_SA.BP_Radar_SA_C.GetReferencePoints");

	ABP_Radar_SA_C_GetReferencePoints_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MinRef != nullptr)
		*MinRef = params.MinRef;
	if (MaxRef != nullptr)
		*MaxRef = params.MaxRef;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Radar_SA.BP_Radar_SA_C.GetRadarComponents
//		Flags  -> ()
// Parameters:
//		TArray<class UPrimitiveComponent*>                 RadarComps                                                 (Parm, OutParm, ContainsInstancedReference)
void ABP_Radar_SA_C::GetRadarComponents(TArray<class UPrimitiveComponent*>* RadarComps)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Radar_SA.BP_Radar_SA_C.GetRadarComponents");

	ABP_Radar_SA_C_GetRadarComponents_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RadarComps != nullptr)
		*RadarComps = params.RadarComps;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Radar_SA.BP_Radar_SA_C.ReceiveBeginPlay
//		Flags  -> ()
void ABP_Radar_SA_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Radar_SA.BP_Radar_SA_C.ReceiveBeginPlay");

	ABP_Radar_SA_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Radar_SA.BP_Radar_SA_C.SwitchedMode
//		Flags  -> ()
// Parameters:
//		bool                                               bMenuMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Radar_SA_C::SwitchedMode(bool bMenuMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Radar_SA.BP_Radar_SA_C.SwitchedMode");

	ABP_Radar_SA_C_SwitchedMode_Params params {};
	params.bMenuMode = bMenuMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Radar_SA.BP_Radar_SA_C.ExecuteUbergraph_BP_Radar_SA
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Radar_SA_C::ExecuteUbergraph_BP_Radar_SA(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Radar_SA.BP_Radar_SA_C.ExecuteUbergraph_BP_Radar_SA");

	ABP_Radar_SA_C_ExecuteUbergraph_BP_Radar_SA_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
