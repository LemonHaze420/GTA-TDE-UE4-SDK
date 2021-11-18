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
//		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.SetupNavigation
//		Flags  -> ()
// Parameters:
void UUI_OptionsList_Base_C::SetupNavigation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.SetupNavigation");

	UUI_OptionsList_Base_C_SetupNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.OnOptionSelectionChanged
//		Flags  -> ()
// Parameters:
//		struct FName                                       OptionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_OptionsList_Base_C::OnOptionSelectionChanged(const struct FName& OptionName, bool Selected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.OnOptionSelectionChanged");

	UUI_OptionsList_Base_C_OnOptionSelectionChanged_Params params {};
	params.OptionName = OptionName;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.OptionChanged
//		Flags  -> ()
// Parameters:
//		struct FName                                       OptionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsList_Base_C::OptionChanged(const struct FName& OptionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.OptionChanged");

	UUI_OptionsList_Base_C_OptionChanged_Params params {};
	params.OptionName = OptionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.DoConfirmationPostItemChange
//		Flags  -> ()
// Parameters:
//		class UUI_SlotButton_C*                            SlotToChange                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsList_Base_C::DoConfirmationPostItemChange(class UUI_SlotButton_C* SlotToChange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.DoConfirmationPostItemChange");

	UUI_OptionsList_Base_C_DoConfirmationPostItemChange_Params params {};
	params.SlotToChange = SlotToChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.HandleBack
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUI_OptionsList_Base_C::HandleBack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.HandleBack");

	UUI_OptionsList_Base_C_HandleBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.Should Refresh on Option Update
//		Flags  -> ()
// Parameters:
//		bool                                               RequiresOptionRefresh                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FName                                       PropertyNameToSelect                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsList_Base_C::Should_Refresh_on_Option_Update(bool RequiresOptionRefresh, const struct FName& PropertyNameToSelect)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.Should Refresh on Option Update");

	UUI_OptionsList_Base_C_Should_Refresh_on_Option_Update_Params params {};
	params.RequiresOptionRefresh = RequiresOptionRefresh;
	params.PropertyNameToSelect = PropertyNameToSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.DoConfirmationOnItemChange
//		Flags  -> ()
// Parameters:
//		class UUI_SlotButton_C*                            SlotToChange                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsList_Base_C::DoConfirmationOnItemChange(class UUI_SlotButton_C* SlotToChange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.DoConfirmationOnItemChange");

	UUI_OptionsList_Base_C_DoConfirmationOnItemChange_Params params {};
	params.SlotToChange = SlotToChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.IsOptionWithinBounds
//		Flags  -> ()
// Parameters:
//		class UGameterSettings*                            Settings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGTASelectionOptionSpecifier                RequiredValue                                              (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               isWithinBounds                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_OptionsList_Base_C::IsOptionWithinBounds(class UGameterSettings* Settings, const struct FGTASelectionOptionSpecifier& RequiredValue, bool* isWithinBounds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.IsOptionWithinBounds");

	UUI_OptionsList_Base_C_IsOptionWithinBounds_Params params {};
	params.Settings = Settings;
	params.RequiredValue = RequiredValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (isWithinBounds != nullptr)
		*isWithinBounds = params.isWithinBounds;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.CheckOtherRequirements
//		Flags  -> ()
// Parameters:
//		struct FGTAOptionsItemTemplate                     Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UGameterSettings*                            Settings                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Available                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_OptionsList_Base_C::CheckOtherRequirements(const struct FGTAOptionsItemTemplate& Option, class UGameterSettings* Settings, bool* Available)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.CheckOtherRequirements");

	UUI_OptionsList_Base_C_CheckOtherRequirements_Params params {};
	params.Option = Option;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Available != nullptr)
		*Available = params.Available;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.RunSlotButtonFunction
//		Flags  -> ()
// Parameters:
//		struct FName                                       FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsList_Base_C::RunSlotButtonFunction(const struct FName& FunctionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.RunSlotButtonFunction");

	UUI_OptionsList_Base_C_RunSlotButtonFunction_Params params {};
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.SlotFunctionButtonPressed
//		Flags  -> ()
// Parameters:
//		unsigned char                                      InteractionType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUI_SlotButton_C*                            SlotButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsList_Base_C::SlotFunctionButtonPressed(unsigned char InteractionType, int BoundValue, class UUI_SlotButton_C* SlotButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.SlotFunctionButtonPressed");

	UUI_OptionsList_Base_C_SlotFunctionButtonPressed_Params params {};
	params.InteractionType = InteractionType;
	params.BoundValue = BoundValue;
	params.SlotButton = SlotButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.AddFunctionToSlotButton
//		Flags  -> ()
// Parameters:
//		class UUI_SlotButton_C*                            SlotItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsList_Base_C::AddFunctionToSlotButton(class UUI_SlotButton_C* SlotItem, const struct FName& FunctionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.AddFunctionToSlotButton");

	UUI_OptionsList_Base_C_AddFunctionToSlotButton_Params params {};
	params.SlotItem = SlotItem;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.OnRestoreDefaultsConfirmationCallback
//		Flags  -> ()
// Parameters:
//		bool                                               DidAccept                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_OptionsList_Base_C::OnRestoreDefaultsConfirmationCallback(bool DidAccept)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.OnRestoreDefaultsConfirmationCallback");

	UUI_OptionsList_Base_C_OnRestoreDefaultsConfirmationCallback_Params params {};
	params.DidAccept = DidAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.ResetDefaultsInteracted
//		Flags  -> ()
// Parameters:
//		unsigned char                                      InteractionType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUI_SlotButton_C*                            SlotButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsList_Base_C::ResetDefaultsInteracted(unsigned char InteractionType, int BoundValue, class UUI_SlotButton_C* SlotButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.ResetDefaultsInteracted");

	UUI_OptionsList_Base_C_ResetDefaultsInteracted_Params params {};
	params.InteractionType = InteractionType;
	params.BoundValue = BoundValue;
	params.SlotButton = SlotButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.AddResetToDefaultButton
//		Flags  -> ()
// Parameters:
//		class UUI_SlotButton_C*                            NewItem                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsList_Base_C::AddResetToDefaultButton(class UUI_SlotButton_C** NewItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.AddResetToDefaultButton");

	UUI_OptionsList_Base_C_AddResetToDefaultButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewItem != nullptr)
		*NewItem = params.NewItem;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.GetCurrentInputType_1
//		Flags  -> ()
// Parameters:
//		int                                                OutInputFlag                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsList_Base_C::GetCurrentInputType_1(int* OutInputFlag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.GetCurrentInputType_1");

	UUI_OptionsList_Base_C_GetCurrentInputType_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInputFlag != nullptr)
		*OutInputFlag = params.OutInputFlag;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.IsOptionAvailableForInputType
//		Flags  -> ()
// Parameters:
//		struct FGTAOptionsItemTemplate                     Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               Available                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_OptionsList_Base_C::IsOptionAvailableForInputType(const struct FGTAOptionsItemTemplate& Option, bool* Available)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.IsOptionAvailableForInputType");

	UUI_OptionsList_Base_C_IsOptionAvailableForInputType_Params params {};
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Available != nullptr)
		*Available = params.Available;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.GetCurrentPlatform
//		Flags  -> ()
// Parameters:
//		int                                                OutPlatformFlag                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsList_Base_C::GetCurrentPlatform(int* OutPlatformFlag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.GetCurrentPlatform");

	UUI_OptionsList_Base_C_GetCurrentPlatform_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPlatformFlag != nullptr)
		*OutPlatformFlag = params.OutPlatformFlag;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.IsOptionAvailableForPlatform
//		Flags  -> ()
// Parameters:
//		struct FGTAOptionsItemTemplate                     Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               Available                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_OptionsList_Base_C::IsOptionAvailableForPlatform(const struct FGTAOptionsItemTemplate& Option, bool* Available)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.IsOptionAvailableForPlatform");

	UUI_OptionsList_Base_C_IsOptionAvailableForPlatform_Params params {};
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Available != nullptr)
		*Available = params.Available;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.IsOptionAvailableForGame
//		Flags  -> ()
// Parameters:
//		struct FGTAOptionsItemTemplate                     Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               Available                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_OptionsList_Base_C::IsOptionAvailableForGame(const struct FGTAOptionsItemTemplate& Option, bool* Available)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.IsOptionAvailableForGame");

	UUI_OptionsList_Base_C_IsOptionAvailableForGame_Params params {};
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Available != nullptr)
		*Available = params.Available;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.CreateNewEntry
//		Flags  -> ()
// Parameters:
//		struct FGTAOptionsItemTemplate                     Option                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UGameterSettings*                            SettingsObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsShownBecauseDebug                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UUI_SlotButton_C*                            NewItem                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsList_Base_C::CreateNewEntry(const struct FGTAOptionsItemTemplate& Option, class UGameterSettings* SettingsObject, bool IsShownBecauseDebug, class UUI_SlotButton_C** NewItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.CreateNewEntry");

	UUI_OptionsList_Base_C_CreateNewEntry_Params params {};
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
//		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.CreateScrollingListItems
//		Flags  -> ()
// Parameters:
//		bool                                               DEBUG_ALL_ITEMS                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_OptionsList_Base_C::CreateScrollingListItems(bool DEBUG_ALL_ITEMS)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.CreateScrollingListItems");

	UUI_OptionsList_Base_C_CreateScrollingListItems_Params params {};
	params.DEBUG_ALL_ITEMS = DEBUG_ALL_ITEMS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsList_Base_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.Tick");

	UUI_OptionsList_Base_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsList_Base.UI_OptionsList_Base_C.ExecuteUbergraph_UI_OptionsList_Base
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsList_Base_C::ExecuteUbergraph_UI_OptionsList_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsList_Base.UI_OptionsList_Base_C.ExecuteUbergraph_UI_OptionsList_Base");

	UUI_OptionsList_Base_C_ExecuteUbergraph_UI_OptionsList_Base_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
