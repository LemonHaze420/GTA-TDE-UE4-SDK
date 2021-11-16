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

// Function BP_Radar_SA.BP_Radar_SA_C.TurnOnCastShadow
struct ABP_Radar_SA_C_TurnOnCastShadow_Params
{
};

// Function BP_Radar_SA.BP_Radar_SA_C.FetchRadarComponents
struct ABP_Radar_SA_C_FetchRadarComponents_Params
{
	TArray<class UPrimitiveComponent*>                 Components;                                                // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
};

// Function BP_Radar_SA.BP_Radar_SA_C.GetReferencePoints
struct ABP_Radar_SA_C_GetReferencePoints_Params
{
	struct FVector                                     MinRef;                                                    // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     MaxRef;                                                    // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Radar_SA.BP_Radar_SA_C.GetRadarComponents
struct ABP_Radar_SA_C_GetRadarComponents_Params
{
	TArray<class UPrimitiveComponent*>                 RadarComps;                                                // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
};

// Function BP_Radar_SA.BP_Radar_SA_C.ReceiveBeginPlay
struct ABP_Radar_SA_C_ReceiveBeginPlay_Params
{
};

// Function BP_Radar_SA.BP_Radar_SA_C.SwitchedMode
struct ABP_Radar_SA_C_SwitchedMode_Params
{
	bool                                               bMenuMode;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Radar_SA.BP_Radar_SA_C.ExecuteUbergraph_BP_Radar_SA
struct ABP_Radar_SA_C_ExecuteUbergraph_BP_Radar_SA_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
