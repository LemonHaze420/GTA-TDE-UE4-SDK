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

// Function Transition_Busted_GTA3.Transition_Busted_GTA3_C.PreConstruct
struct UTransition_Busted_GTA3_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Transition_Busted_GTA3.Transition_Busted_GTA3_C.Construct
struct UTransition_Busted_GTA3_C_Construct_Params
{
};

// Function Transition_Busted_GTA3.Transition_Busted_GTA3_C.Tick
struct UTransition_Busted_GTA3_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Transition_Busted_GTA3.Transition_Busted_GTA3_C.ExecuteUbergraph_Transition_Busted_GTA3
struct UTransition_Busted_GTA3_C_ExecuteUbergraph_Transition_Busted_GTA3_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
