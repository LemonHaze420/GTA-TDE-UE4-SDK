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

// Function BP_Fire.BP_Fire_C.GetSystem
struct ABP_Fire_C_GetSystem_Params
{
	class UParticleSystem*                             System;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Fire.BP_Fire_C.Extinguish
struct ABP_Fire_C_Extinguish_Params
{
};

// Function BP_Fire.BP_Fire_C.BndEvt__FX_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature
struct ABP_Fire_C_BndEvt__FX_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature_Params
{
	class UParticleSystemComponent*                    PSystem;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Fire.BP_Fire_C.KillAgain
struct ABP_Fire_C_KillAgain_Params
{
};

// Function BP_Fire.BP_Fire_C.ExecuteUbergraph_BP_Fire
struct ABP_Fire_C_ExecuteUbergraph_BP_Fire_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
