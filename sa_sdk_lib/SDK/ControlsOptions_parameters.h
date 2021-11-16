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

// Function ControlsOptions.ControlsOptions_C.SetFocusToFirstEntry
struct UControlsOptions_C_SetFocusToFirstEntry_Params
{
};

// Function ControlsOptions.ControlsOptions_C.HandleBack
struct UControlsOptions_C_HandleBack_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ControlsOptions.ControlsOptions_C.RemoveAdjustableControlsUI
struct UControlsOptions_C_RemoveAdjustableControlsUI_Params
{
};

// Function ControlsOptions.ControlsOptions_C.AdjustableControlsBack
struct UControlsOptions_C_AdjustableControlsBack_Params
{
	unsigned char                                      Interaction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BoundValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ControlsOptions.ControlsOptions_C.CreateAdjustableControlsUI
struct UControlsOptions_C_CreateAdjustableControlsUI_Params
{
};

// Function ControlsOptions.ControlsOptions_C.RunSlotButtonFunction
struct UControlsOptions_C_RunSlotButtonFunction_Params
{
	struct FName                                       FunctionName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ControlsOptions.ControlsOptions_C.Construct
struct UControlsOptions_C_Construct_Params
{
};

// Function ControlsOptions.ControlsOptions_C.Tick
struct UControlsOptions_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ControlsOptions.ControlsOptions_C.RefreshAdjustableControls
struct UControlsOptions_C_RefreshAdjustableControls_Params
{
};

// Function ControlsOptions.ControlsOptions_C.ExecuteUbergraph_ControlsOptions
struct UControlsOptions_C_ExecuteUbergraph_ControlsOptions_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
