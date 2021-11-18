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
//		Name   -> Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.ForceDialogClose
//		Flags  -> ()
void UUI_ConfirmationDialog_Controller_C::ForceDialogClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.ForceDialogClose");

	UUI_ConfirmationDialog_Controller_C_ForceDialogClose_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.ForceDialogCancel
//		Flags  -> ()
void UUI_ConfirmationDialog_Controller_C::ForceDialogCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.ForceDialogCancel");

	UUI_ConfirmationDialog_Controller_C_ForceDialogCancel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.OnSelectionPicked
//		Flags  -> ()
// Parameters:
//		bool                                               Confirmed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               WasForced_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ConfirmationDialog_Controller_C::OnSelectionPicked(bool Confirmed, bool WasForced_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.OnSelectionPicked");

	UUI_ConfirmationDialog_Controller_C_OnSelectionPicked_Params params {};
	params.Confirmed = Confirmed;
	params.WasForced_ = WasForced_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_ConfirmationDialog_Controller_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.PreConstruct");

	UUI_ConfirmationDialog_Controller_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.Construct
//		Flags  -> ()
void UUI_ConfirmationDialog_Controller_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.Construct");

	UUI_ConfirmationDialog_Controller_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ConfirmationDialog_Controller_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.Tick");

	UUI_ConfirmationDialog_Controller_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.ExecuteUbergraph_UI_ConfirmationDialog_Controller
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_ConfirmationDialog_Controller_C::ExecuteUbergraph_UI_ConfirmationDialog_Controller(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C.ExecuteUbergraph_UI_ConfirmationDialog_Controller");

	UUI_ConfirmationDialog_Controller_C_ExecuteUbergraph_UI_ConfirmationDialog_Controller_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
