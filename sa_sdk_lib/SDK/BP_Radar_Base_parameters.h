#pragma once

// Name: SanAndreas, Version: 1.0.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_Radar_Base.BP_Radar_Base_C.GetRadarComponents
struct ABP_Radar_Base_C_GetRadarComponents_Params
{
	TArray<class UPrimitiveComponent*>                 RadarComps;                                                // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
};

// Function BP_Radar_Base.BP_Radar_Base_C.ReceiveBeginPlay
struct ABP_Radar_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_Radar_Base.BP_Radar_Base_C.ExecuteUbergraph_BP_Radar_Base
struct ABP_Radar_Base_C_ExecuteUbergraph_BP_Radar_Base_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
