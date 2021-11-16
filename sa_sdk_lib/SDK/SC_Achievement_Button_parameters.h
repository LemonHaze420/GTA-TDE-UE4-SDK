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

// Function SC_Achievement_Button.SC_Achievement_Button_C.UpdateBGColor
struct USC_Achievement_Button_C_UpdateBGColor_Params
{
};

// Function SC_Achievement_Button.SC_Achievement_Button_C.SetLockedState
struct USC_Achievement_Button_C_SetLockedState_Params
{
	bool                                               IsLocked;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SC_Achievement_Button.SC_Achievement_Button_C.UpdateTextColor
struct USC_Achievement_Button_C_UpdateTextColor_Params
{
};

// Function SC_Achievement_Button.SC_Achievement_Button_C.SetBackgroundColor
struct USC_Achievement_Button_C_SetBackgroundColor_Params
{
	struct FSlateColor                                 InColor;                                                   // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SC_Achievement_Button.SC_Achievement_Button_C.GetSlotButton
struct USC_Achievement_Button_C_GetSlotButton_Params
{
	class UButton*                                     SlotButton;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SC_Achievement_Button.SC_Achievement_Button_C.PreConstruct
struct USC_Achievement_Button_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SC_Achievement_Button.SC_Achievement_Button_C.Construct
struct USC_Achievement_Button_C_Construct_Params
{
};

// Function SC_Achievement_Button.SC_Achievement_Button_C.Tick
struct USC_Achievement_Button_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SC_Achievement_Button.SC_Achievement_Button_C.OnSynchronizeProperties
struct USC_Achievement_Button_C_OnSynchronizeProperties_Params
{
};

// Function SC_Achievement_Button.SC_Achievement_Button_C.ExecuteUbergraph_SC_Achievement_Button
struct USC_Achievement_Button_C_ExecuteUbergraph_SC_Achievement_Button_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
