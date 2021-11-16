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

// Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.GetSecondaryUnderImage
struct UTransition_LoadingTemplate_C_GetSecondaryUnderImage_Params
{
	TEnumAsByte<GTABase_EGTATransitionState>           State;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                                OutCanvas;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.CreateProgressBar
struct UTransition_LoadingTemplate_C_CreateProgressBar_Params
{
	class ULoadingProgressBar_base_C*                  BarCreated;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.GetNextState
struct UTransition_LoadingTemplate_C_GetNextState_Params
{
	TEnumAsByte<GTABase_EGTATransitionState>           CurrentState;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GTABase_EGTATransitionState>           NextState;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.SetInitialColor
struct UTransition_LoadingTemplate_C_SetInitialColor_Params
{
};

// Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.Get Random Image
struct UTransition_LoadingTemplate_C_Get_Random_Image_Params
{
};

// Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.IsOpaque
struct UTransition_LoadingTemplate_C_IsOpaque_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.UpdateToCurrentState
struct UTransition_LoadingTemplate_C_UpdateToCurrentState_Params
{
};

// Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.Update
struct UTransition_LoadingTemplate_C_Update_Params
{
	float                                              dT;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.GetCurrentFadeCanvas
struct UTransition_LoadingTemplate_C_GetCurrentFadeCanvas_Params
{
	TEnumAsByte<GTABase_EGTATransitionState>           State;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                                OutCanvas;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.OnLoaded_1285F34942B424F426C90880E454E273
struct UTransition_LoadingTemplate_C_OnLoaded_1285F34942B424F426C90880E454E273_Params
{
	class UObject*                                     Loaded;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.Construct
struct UTransition_LoadingTemplate_C_Construct_Params
{
};

// Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.Tick
struct UTransition_LoadingTemplate_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.SetProgress
struct UTransition_LoadingTemplate_C_SetProgress_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.PreConstruct
struct UTransition_LoadingTemplate_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Transition_LoadingTemplate.Transition_LoadingTemplate_C.ExecuteUbergraph_Transition_LoadingTemplate
struct UTransition_LoadingTemplate_C_ExecuteUbergraph_Transition_LoadingTemplate_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
