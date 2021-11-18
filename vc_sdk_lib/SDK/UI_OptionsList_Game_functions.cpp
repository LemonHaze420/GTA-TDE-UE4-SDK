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
//		Name   -> Function UI_OptionsList_Game.UI_OptionsList_Game_C.CreateSaveEntryAndBind
//		Flags  -> ()
// Parameters:
//		struct FString                                     SaveName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                ValueToBind                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsList_Game_C::CreateSaveEntryAndBind(const struct FString& SaveName, int ValueToBind)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Game.UI_OptionsList_Game_C.CreateSaveEntryAndBind");

	UUI_OptionsList_Game_C_CreateSaveEntryAndBind_Params params {};
	params.SaveName = SaveName;
	params.ValueToBind = ValueToBind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Game.UI_OptionsList_Game_C.GetCurrentMenu
//		Flags  -> ()
// Parameters:
//		class UUI_Menu_Base_BP_C*                          OutMenu                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsList_Game_C::GetCurrentMenu(class UUI_Menu_Base_BP_C** OutMenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Game.UI_OptionsList_Game_C.GetCurrentMenu");

	UUI_OptionsList_Game_C_GetCurrentMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutMenu != nullptr)
		*OutMenu = params.OutMenu;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Game.UI_OptionsList_Game_C.SaveButtonPressed
//		Flags  -> ()
// Parameters:
//		unsigned char                                      InteractionType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUI_SlotButton_C*                            SlotButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsList_Game_C::SaveButtonPressed(unsigned char InteractionType, int BoundValue, class UUI_SlotButton_C* SlotButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Game.UI_OptionsList_Game_C.SaveButtonPressed");

	UUI_OptionsList_Game_C_SaveButtonPressed_Params params {};
	params.InteractionType = InteractionType;
	params.BoundValue = BoundValue;
	params.SlotButton = SlotButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Game.UI_OptionsList_Game_C.BindSlotButtonToSave
//		Flags  -> ()
// Parameters:
//		class UUI_SlotButton_C*                            Slot_Button                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ValueToBind                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsList_Game_C::BindSlotButtonToSave(class UUI_SlotButton_C* Slot_Button, int ValueToBind)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Game.UI_OptionsList_Game_C.BindSlotButtonToSave");

	UUI_OptionsList_Game_C_BindSlotButtonToSave_Params params {};
	params.Slot_Button = Slot_Button;
	params.ValueToBind = ValueToBind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Game.UI_OptionsList_Game_C.CreateNewEntry
//		Flags  -> ()
// Parameters:
//		struct FGTAOptionsItemTemplate                     Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UGameterSettings*                            SettingsObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsShownBecauseDebug                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UUI_SlotButton_C*                            NewItem                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsList_Game_C::CreateNewEntry(const struct FGTAOptionsItemTemplate& Option, class UGameterSettings* SettingsObject, bool IsShownBecauseDebug, class UUI_SlotButton_C** NewItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Game.UI_OptionsList_Game_C.CreateNewEntry");

	UUI_OptionsList_Game_C_CreateNewEntry_Params params {};
	params.Option = Option;
	params.SettingsObject = SettingsObject;
	params.IsShownBecauseDebug = IsShownBecauseDebug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewItem != nullptr)
		*NewItem = params.NewItem;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Game.UI_OptionsList_Game_C.CreateScrollingListItems
//		Flags  -> ()
// Parameters:
//		bool                                               DEBUG_ALL_ITEMS                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_OptionsList_Game_C::CreateScrollingListItems(bool DEBUG_ALL_ITEMS)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Game.UI_OptionsList_Game_C.CreateScrollingListItems");

	UUI_OptionsList_Game_C_CreateScrollingListItems_Params params {};
	params.DEBUG_ALL_ITEMS = DEBUG_ALL_ITEMS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Game.UI_OptionsList_Game_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsList_Game_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Game.UI_OptionsList_Game_C.Tick");

	UUI_OptionsList_Game_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Game.UI_OptionsList_Game_C.ExecuteUbergraph_UI_OptionsList_Game
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsList_Game_C::ExecuteUbergraph_UI_OptionsList_Game(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Game.UI_OptionsList_Game_C.ExecuteUbergraph_UI_OptionsList_Game");

	UUI_OptionsList_Game_C_ExecuteUbergraph_UI_OptionsList_Game_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
