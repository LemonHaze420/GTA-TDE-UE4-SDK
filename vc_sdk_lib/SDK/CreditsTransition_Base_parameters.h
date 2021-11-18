#pragma once

// Name: ViceCity, Version: 1.0.0


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

// Function CreditsTransition_Base.CreditsTransition_Base_C.UpdateFinalFade
struct UCreditsTransition_Base_C_UpdateFinalFade_Params
{
};

// Function CreditsTransition_Base.CreditsTransition_Base_C.AllowBackwardsTransition
struct UCreditsTransition_Base_C_AllowBackwardsTransition_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CreditsTransition_Base.CreditsTransition_Base_C.EntryValidWithLanguage
struct UCreditsTransition_Base_C_EntryValidWithLanguage_Params
{
	struct FString                                     LanguagesString;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               ValidWithLanguage;                                         // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CreditsTransition_Base.CreditsTransition_Base_C.IsEntryValidNow
struct UCreditsTransition_Base_C_IsEntryValidNow_Params
{
	struct FString                                     Entry;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Valid;                                                     // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CreditsTransition_Base.CreditsTransition_Base_C.ParseCreditEntry
struct UCreditsTransition_Base_C_ParseCreditEntry_Params
{
	struct FString                                     InText;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                EntryNum;                                                  // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       TextToDisplay;                                             // 0x0018(0x0018)  (Parm, OutParm)
	struct FSlateFontInfo                              Font;                                                      // 0x0030(0x0058)  (Parm, OutParm, HasGetValueTypeHash)
};

// Function CreditsTransition_Base.CreditsTransition_Base_C.RemoveTopCredit
struct UCreditsTransition_Base_C_RemoveTopCredit_Params
{
};

// Function CreditsTransition_Base.CreditsTransition_Base_C.AddNewCredit
struct UCreditsTransition_Base_C_AddNewCredit_Params
{
};

// Function CreditsTransition_Base.CreditsTransition_Base_C.Get Current Vertical Credit Size
struct UCreditsTransition_Base_C_Get_Current_Vertical_Credit_Size_Params
{
	float                                              Size;                                                      // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CreditsTransition_Base.CreditsTransition_Base_C.GetNextCreditText
struct UCreditsTransition_Base_C_GetNextCreditText_Params
{
	bool                                               MoveLineNumber;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     CreditText;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DoubleText;                                                // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               AtEnd;                                                     // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CreditsTransition_Base.CreditsTransition_Base_C.UpdateCredits
struct UCreditsTransition_Base_C_UpdateCredits_Params
{
	float                                              dT;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CreditsTransition_Base.CreditsTransition_Base_C.UpdateToCurrentState
struct UCreditsTransition_Base_C_UpdateToCurrentState_Params
{
};

// Function CreditsTransition_Base.CreditsTransition_Base_C.Update
struct UCreditsTransition_Base_C_Update_Params
{
	float                                              dT;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CreditsTransition_Base.CreditsTransition_Base_C.GetNextState
struct UCreditsTransition_Base_C_GetNextState_Params
{
	TEnumAsByte<GTABase_EGTATransitionState>           CurrentState;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GTABase_EGTATransitionState>           NextState;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CreditsTransition_Base.CreditsTransition_Base_C.IsOpaque
struct UCreditsTransition_Base_C_IsOpaque_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CreditsTransition_Base.CreditsTransition_Base_C.GetCurrentFadeCanvas
struct UCreditsTransition_Base_C_GetCurrentFadeCanvas_Params
{
	TEnumAsByte<GTABase_EGTATransitionState>           State;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                                OutCanvas;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CreditsTransition_Base.CreditsTransition_Base_C.Construct
struct UCreditsTransition_Base_C_Construct_Params
{
};

// Function CreditsTransition_Base.CreditsTransition_Base_C.Tick
struct UCreditsTransition_Base_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CreditsTransition_Base.CreditsTransition_Base_C.ExecuteUbergraph_CreditsTransition_Base
struct UCreditsTransition_Base_C_ExecuteUbergraph_CreditsTransition_Base_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
