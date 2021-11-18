// Name: GTA III, Version: 1.0.0

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
//		Offset -> 0x0188C180
//		Name   -> Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.SetToTab
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ForceNoFocusChange                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ForceNoSound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_OptionsMenuTab_Game_C::SetToTab(int Index, bool ForceNoFocusChange, bool ForceNoSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.SetToTab");

	UUI_OptionsMenuTab_Game_C_SetToTab_Params params {};
	params.Index = Index;
	params.ForceNoFocusChange = ForceNoFocusChange;
	params.ForceNoSound = ForceNoSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.SetupForSaveGames
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_OptionsMenuTab_Game_C::SetupForSaveGames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.SetupForSaveGames");

	UUI_OptionsMenuTab_Game_C_SetupForSaveGames_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.RefreshSaveTabState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_OptionsMenuTab_Game_C::RefreshSaveTabState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.RefreshSaveTabState");

	UUI_OptionsMenuTab_Game_C_RefreshSaveTabState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.UpdateSaveTabState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<GTABase_EGTASaveTabState>              NewSaveTabState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsMenuTab_Game_C::UpdateSaveTabState(TEnumAsByte<GTABase_EGTASaveTabState> NewSaveTabState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.UpdateSaveTabState");

	UUI_OptionsMenuTab_Game_C_UpdateSaveTabState_Params params {};
	params.NewSaveTabState = NewSaveTabState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.NextTab
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UUI_OptionsMenuTab_Game_C::NextTab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.NextTab");

	UUI_OptionsMenuTab_Game_C_NextTab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.PrevTab
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UUI_OptionsMenuTab_Game_C::PrevTab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.PrevTab");

	UUI_OptionsMenuTab_Game_C_PrevTab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.SetToSaveTabState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<GTABase_EGTASaveTabState>              State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsMenuTab_Game_C::SetToSaveTabState(TEnumAsByte<GTABase_EGTASaveTabState> State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.SetToSaveTabState");

	UUI_OptionsMenuTab_Game_C_SetToSaveTabState_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.RefreshSaves
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_OptionsMenuTab_Game_C::RefreshSaves()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.RefreshSaves");

	UUI_OptionsMenuTab_Game_C_RefreshSaves_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.InteractedButton
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ButtonStateEnum_EButtonStateEnum>      Interact_Type                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Bound_Value                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsMenuTab_Game_C::InteractedButton(TEnumAsByte<ButtonStateEnum_EButtonStateEnum> Interact_Type, int Bound_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.InteractedButton");

	UUI_OptionsMenuTab_Game_C_InteractedButton_Params params {};
	params.Interact_Type = Interact_Type;
	params.Bound_Value = Bound_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_OptionsMenuTab_Game_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.Construct");

	UUI_OptionsMenuTab_Game_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsMenuTab_Game_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.Tick");

	UUI_OptionsMenuTab_Game_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.ExecuteUbergraph_UI_OptionsMenuTab_Game
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsMenuTab_Game_C::ExecuteUbergraph_UI_OptionsMenuTab_Game(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C.ExecuteUbergraph_UI_OptionsMenuTab_Game");

	UUI_OptionsMenuTab_Game_C_ExecuteUbergraph_UI_OptionsMenuTab_Game_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
