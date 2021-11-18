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
//		Name   -> Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.NextTab
//		Flags  -> ()
// Parameters:
void UUI_OptionsMenuTab_C::NextTab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.NextTab");

	UUI_OptionsMenuTab_C_NextTab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.PrevTab
//		Flags  -> ()
// Parameters:
void UUI_OptionsMenuTab_C::PrevTab()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.PrevTab");

	UUI_OptionsMenuTab_C_PrevTab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.GrabFocus
//		Flags  -> ()
// Parameters:
void UUI_OptionsMenuTab_C::GrabFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.GrabFocus");

	UUI_OptionsMenuTab_C_GrabFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.SetToTab
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ForceNoFocusChange                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ForceNoSound                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_OptionsMenuTab_C::SetToTab(int Index, bool ForceNoFocusChange, bool ForceNoSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.SetToTab");

	UUI_OptionsMenuTab_C_SetToTab_Params params {};
	params.Index = Index;
	params.ForceNoFocusChange = ForceNoFocusChange;
	params.ForceNoSound = ForceNoSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.RefreshLists
//		Flags  -> ()
// Parameters:
void UUI_OptionsMenuTab_C::RefreshLists()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.RefreshLists");

	UUI_OptionsMenuTab_C_RefreshLists_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.GetCurrentInputType
//		Flags  -> ()
// Parameters:
//		int                                                OutInputFlag                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsMenuTab_C::GetCurrentInputType(int* OutInputFlag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.GetCurrentInputType");

	UUI_OptionsMenuTab_C_GetCurrentInputType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInputFlag != nullptr)
		*OutInputFlag = params.OutInputFlag;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.AddContentToSelector
//		Flags  -> ()
// Parameters:
//		class UClass*                                      Widget_Class                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidgetSwitcher*                             Selector_to_add_to                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUserWidget*                                 ContentCreated                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsMenuTab_C::AddContentToSelector(class UClass* Widget_Class, class UWidgetSwitcher* Selector_to_add_to, class UUserWidget** ContentCreated)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.AddContentToSelector");

	UUI_OptionsMenuTab_C_AddContentToSelector_Params params {};
	params.Widget_Class = Widget_Class;
	params.Selector_to_add_to = Selector_to_add_to;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ContentCreated != nullptr)
		*ContentCreated = params.ContentCreated;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsMenuTab_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.Tick");

	UUI_OptionsMenuTab_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.Construct
//		Flags  -> ()
void UUI_OptionsMenuTab_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.Construct");

	UUI_OptionsMenuTab_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.ExecuteUbergraph_UI_OptionsMenuTab
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_OptionsMenuTab_C::ExecuteUbergraph_UI_OptionsMenuTab(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_OptionsMenuTab.UI_OptionsMenuTab_C.ExecuteUbergraph_UI_OptionsMenuTab");

	UUI_OptionsMenuTab_C_ExecuteUbergraph_UI_OptionsMenuTab_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
