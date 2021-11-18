#pragma once

// Name: GTA III, Version: 1.0.0


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

// Function Transition_IntroExplosion_GTA3.Transition_IntroExplosion_GTA3_C.GetNextState
struct UTransition_IntroExplosion_GTA3_C_GetNextState_Params
{
	TEnumAsByte<GTABase_EGTATransitionState>           CurrentState;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GTABase_EGTATransitionState>           NextState;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Transition_IntroExplosion_GTA3.Transition_IntroExplosion_GTA3_C.SetInitialColor
struct UTransition_IntroExplosion_GTA3_C_SetInitialColor_Params
{
};

// Function Transition_IntroExplosion_GTA3.Transition_IntroExplosion_GTA3_C.IsOpaque
struct UTransition_IntroExplosion_GTA3_C_IsOpaque_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Transition_IntroExplosion_GTA3.Transition_IntroExplosion_GTA3_C.UpdateToCurrentState
struct UTransition_IntroExplosion_GTA3_C_UpdateToCurrentState_Params
{
};

// Function Transition_IntroExplosion_GTA3.Transition_IntroExplosion_GTA3_C.Update
struct UTransition_IntroExplosion_GTA3_C_Update_Params
{
	float                                              dT;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Transition_IntroExplosion_GTA3.Transition_IntroExplosion_GTA3_C.GetCurrentFadeCanvas
struct UTransition_IntroExplosion_GTA3_C_GetCurrentFadeCanvas_Params
{
	TEnumAsByte<GTABase_EGTATransitionState>           State;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                                OutCanvas;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Transition_IntroExplosion_GTA3.Transition_IntroExplosion_GTA3_C.Tick
struct UTransition_IntroExplosion_GTA3_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Transition_IntroExplosion_GTA3.Transition_IntroExplosion_GTA3_C.Construct
struct UTransition_IntroExplosion_GTA3_C_Construct_Params
{
};

// Function Transition_IntroExplosion_GTA3.Transition_IntroExplosion_GTA3_C.ExecuteUbergraph_Transition_IntroExplosion_GTA3
struct UTransition_IntroExplosion_GTA3_C_ExecuteUbergraph_Transition_IntroExplosion_GTA3_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
