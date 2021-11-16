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

// Function BP_HelicopterSpotLight.BP_HelicopterSpotLight_C.AddOffsetToTarget
struct UBP_HelicopterSpotLight_C_AddOffsetToTarget_Params
{
	struct FVector                                     LocationIn;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LocationOut;                                               // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HelicopterSpotLight.BP_HelicopterSpotLight_C.UpdateLightPosition
struct UBP_HelicopterSpotLight_C_UpdateLightPosition_Params
{
	float                                              dT;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HelicopterSpotLight.BP_HelicopterSpotLight_C.SetFollowingActor
struct UBP_HelicopterSpotLight_C_SetFollowingActor_Params
{
	class AActor*                                      NewActor;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HelicopterSpotLight.BP_HelicopterSpotLight_C.ReceiveTick
struct UBP_HelicopterSpotLight_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_HelicopterSpotLight.BP_HelicopterSpotLight_C.ExecuteUbergraph_BP_HelicopterSpotLight
struct UBP_HelicopterSpotLight_C_ExecuteUbergraph_BP_HelicopterSpotLight_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
