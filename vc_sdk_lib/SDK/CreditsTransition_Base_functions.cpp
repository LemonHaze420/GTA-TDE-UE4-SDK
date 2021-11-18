// Name: ViceCity, Version: 1.0.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00000000
//		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.UpdateFinalFade
//		Flags  -> ()
// Parameters:
void UCreditsTransition_Base_C::UpdateFinalFade()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.UpdateFinalFade");

	UCreditsTransition_Base_C_UpdateFinalFade_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.AllowBackwardsTransition
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCreditsTransition_Base_C::AllowBackwardsTransition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.AllowBackwardsTransition");

	UCreditsTransition_Base_C_AllowBackwardsTransition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.EntryValidWithLanguage
//		Flags  -> ()
// Parameters:
//		struct FString                                     LanguagesString                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               ValidWithLanguage                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCreditsTransition_Base_C::EntryValidWithLanguage(const struct FString& LanguagesString, bool* ValidWithLanguage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.EntryValidWithLanguage");

	UCreditsTransition_Base_C_EntryValidWithLanguage_Params params {};
	params.LanguagesString = LanguagesString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ValidWithLanguage != nullptr)
		*ValidWithLanguage = params.ValidWithLanguage;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.IsEntryValidNow
//		Flags  -> ()
// Parameters:
//		struct FString                                     Entry                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               Valid                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCreditsTransition_Base_C::IsEntryValidNow(const struct FString& Entry, bool* Valid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.IsEntryValidNow");

	UCreditsTransition_Base_C_IsEntryValidNow_Params params {};
	params.Entry = Entry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.ParseCreditEntry
//		Flags  -> ()
// Parameters:
//		struct FString                                     InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                EntryNum                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       TextToDisplay                                              (Parm, OutParm)
//		struct FSlateFontInfo                              Font                                                       (Parm, OutParm, HasGetValueTypeHash)
void UCreditsTransition_Base_C::ParseCreditEntry(const struct FString& InText, int EntryNum, struct FText* TextToDisplay, struct FSlateFontInfo* Font)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.ParseCreditEntry");

	UCreditsTransition_Base_C_ParseCreditEntry_Params params {};
	params.InText = InText;
	params.EntryNum = EntryNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TextToDisplay != nullptr)
		*TextToDisplay = params.TextToDisplay;
	if (Font != nullptr)
		*Font = params.Font;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.RemoveTopCredit
//		Flags  -> ()
// Parameters:
void UCreditsTransition_Base_C::RemoveTopCredit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.RemoveTopCredit");

	UCreditsTransition_Base_C_RemoveTopCredit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.AddNewCredit
//		Flags  -> ()
// Parameters:
void UCreditsTransition_Base_C::AddNewCredit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.AddNewCredit");

	UCreditsTransition_Base_C_AddNewCredit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.Get Current Vertical Credit Size
//		Flags  -> ()
// Parameters:
//		float                                              Size                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCreditsTransition_Base_C::Get_Current_Vertical_Credit_Size(float* Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.Get Current Vertical Credit Size");

	UCreditsTransition_Base_C_Get_Current_Vertical_Credit_Size_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Size != nullptr)
		*Size = params.Size;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.GetNextCreditText
//		Flags  -> ()
// Parameters:
//		bool                                               MoveLineNumber                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     CreditText                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     DoubleText                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               AtEnd                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UCreditsTransition_Base_C::GetNextCreditText(bool MoveLineNumber, struct FString* CreditText, struct FString* DoubleText, bool* AtEnd)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.GetNextCreditText");

	UCreditsTransition_Base_C_GetNextCreditText_Params params {};
	params.MoveLineNumber = MoveLineNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CreditText != nullptr)
		*CreditText = params.CreditText;
	if (DoubleText != nullptr)
		*DoubleText = params.DoubleText;
	if (AtEnd != nullptr)
		*AtEnd = params.AtEnd;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.UpdateCredits
//		Flags  -> ()
// Parameters:
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCreditsTransition_Base_C::UpdateCredits(float dT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.UpdateCredits");

	UCreditsTransition_Base_C_UpdateCredits_Params params {};
	params.dT = dT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.UpdateToCurrentState
//		Flags  -> ()
// Parameters:
void UCreditsTransition_Base_C::UpdateToCurrentState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.UpdateToCurrentState");

	UCreditsTransition_Base_C_UpdateToCurrentState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.Update
//		Flags  -> ()
// Parameters:
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCreditsTransition_Base_C::Update(float dT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.Update");

	UCreditsTransition_Base_C_Update_Params params {};
	params.dT = dT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.GetNextState
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           CurrentState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<GTABase_EGTATransitionState>           NextState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCreditsTransition_Base_C::GetNextState(TEnumAsByte<GTABase_EGTATransitionState> CurrentState, TEnumAsByte<GTABase_EGTATransitionState>* NextState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.GetNextState");

	UCreditsTransition_Base_C_GetNextState_Params params {};
	params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NextState != nullptr)
		*NextState = params.NextState;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.IsOpaque
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCreditsTransition_Base_C::IsOpaque()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.IsOpaque");

	UCreditsTransition_Base_C_IsOpaque_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.GetCurrentFadeCanvas
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTATransitionState>           State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCanvasPanel*                                OutCanvas                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCreditsTransition_Base_C::GetCurrentFadeCanvas(TEnumAsByte<GTABase_EGTATransitionState> State, class UCanvasPanel** OutCanvas)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.GetCurrentFadeCanvas");

	UCreditsTransition_Base_C_GetCurrentFadeCanvas_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutCanvas != nullptr)
		*OutCanvas = params.OutCanvas;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.Construct
//		Flags  -> ()
void UCreditsTransition_Base_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.Construct");

	UCreditsTransition_Base_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCreditsTransition_Base_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.Tick");

	UCreditsTransition_Base_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function CreditsTransition_Base.CreditsTransition_Base_C.ExecuteUbergraph_CreditsTransition_Base
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UCreditsTransition_Base_C::ExecuteUbergraph_CreditsTransition_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CreditsTransition_Base.CreditsTransition_Base_C.ExecuteUbergraph_CreditsTransition_Base");

	UCreditsTransition_Base_C_ExecuteUbergraph_CreditsTransition_Base_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
