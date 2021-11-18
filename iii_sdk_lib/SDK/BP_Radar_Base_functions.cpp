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
//		Name   -> Function BP_Radar_Base.BP_Radar_Base_C.GetRadarComponents
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UPrimitiveComponent*>                 RadarComps                                                 (Parm, OutParm, ContainsInstancedReference)
void ABP_Radar_Base_C::GetRadarComponents(TArray<class UPrimitiveComponent*>* RadarComps)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Radar_Base.BP_Radar_Base_C.GetRadarComponents");

	ABP_Radar_Base_C_GetRadarComponents_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RadarComps != nullptr)
		*RadarComps = params.RadarComps;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_Radar_Base.BP_Radar_Base_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Radar_Base_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Radar_Base.BP_Radar_Base_C.ReceiveBeginPlay");

	ABP_Radar_Base_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_Radar_Base.BP_Radar_Base_C.ExecuteUbergraph_BP_Radar_Base
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Radar_Base_C::ExecuteUbergraph_BP_Radar_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Radar_Base.BP_Radar_Base_C.ExecuteUbergraph_BP_Radar_Base");

	ABP_Radar_Base_C_ExecuteUbergraph_BP_Radar_Base_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
