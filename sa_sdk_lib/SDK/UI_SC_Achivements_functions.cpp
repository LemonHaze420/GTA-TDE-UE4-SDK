// Name: SanAndreas, Version: 1.0.0

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
//		Name   -> Function UI_SC_Achivements.UI_SC_Achivements_C.TakeFocus
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUI_SC_Achivements_C::TakeFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SC_Achivements.UI_SC_Achivements_C.TakeFocus");

	UUI_SC_Achivements_C_TakeFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SC_Achivements.UI_SC_Achivements_C.WrapNavigation
//		Flags  -> ()
// Parameters:
void UUI_SC_Achivements_C::WrapNavigation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SC_Achivements.UI_SC_Achivements_C.WrapNavigation");

	UUI_SC_Achivements_C_WrapNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SC_Achivements.UI_SC_Achivements_C.SetupNavigation
//		Flags  -> ()
// Parameters:
void UUI_SC_Achivements_C::SetupNavigation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SC_Achivements.UI_SC_Achivements_C.SetupNavigation");

	UUI_SC_Achivements_C_SetupNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SC_Achivements.UI_SC_Achivements_C.RefreshList
//		Flags  -> ()
void UUI_SC_Achivements_C::RefreshList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SC_Achivements.UI_SC_Achivements_C.RefreshList");

	UUI_SC_Achivements_C_RefreshList_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SC_Achivements.UI_SC_Achivements_C.CheckCreation
//		Flags  -> ()
// Parameters:
void UUI_SC_Achivements_C::CheckCreation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SC_Achivements.UI_SC_Achivements_C.CheckCreation");

	UUI_SC_Achivements_C_CheckCreation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SC_Achivements.UI_SC_Achivements_C.CreateScrollingListItems
//		Flags  -> ()
// Parameters:
//		bool                                               DEBUG_ALL_ITEMS                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SC_Achivements_C::CreateScrollingListItems(bool DEBUG_ALL_ITEMS)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SC_Achivements.UI_SC_Achivements_C.CreateScrollingListItems");

	UUI_SC_Achivements_C_CreateScrollingListItems_Params params {};
	params.DEBUG_ALL_ITEMS = DEBUG_ALL_ITEMS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SC_Achivements.UI_SC_Achivements_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SC_Achivements_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SC_Achivements.UI_SC_Achivements_C.PreConstruct");

	UUI_SC_Achivements_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SC_Achivements.UI_SC_Achivements_C.Construct
//		Flags  -> ()
void UUI_SC_Achivements_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SC_Achivements.UI_SC_Achivements_C.Construct");

	UUI_SC_Achivements_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SC_Achivements.UI_SC_Achivements_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SC_Achivements_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SC_Achivements.UI_SC_Achivements_C.Tick");

	UUI_SC_Achivements_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SC_Achivements.UI_SC_Achivements_C.OnSynchronizeProperties
//		Flags  -> ()
void UUI_SC_Achivements_C::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SC_Achivements.UI_SC_Achivements_C.OnSynchronizeProperties");

	UUI_SC_Achivements_C_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SC_Achivements.UI_SC_Achivements_C.ExecuteUbergraph_UI_SC_Achivements
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SC_Achivements_C::ExecuteUbergraph_UI_SC_Achivements(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SC_Achivements.UI_SC_Achivements_C.ExecuteUbergraph_UI_SC_Achivements");

	UUI_SC_Achivements_C_ExecuteUbergraph_UI_SC_Achivements_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
