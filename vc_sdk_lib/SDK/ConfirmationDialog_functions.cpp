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
//		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.ForceDialogClose
//		Flags  -> ()
void UConfirmationDialog_C::ForceDialogClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.ForceDialogClose");

	UConfirmationDialog_C_ForceDialogClose_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.OnSelectionHovered
//		Flags  -> ()
void UConfirmationDialog_C::OnSelectionHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.OnSelectionHovered");

	UConfirmationDialog_C_OnSelectionHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.OnSelectionPicked
//		Flags  -> ()
// Parameters:
//		bool                                               Confirmed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               WasForced_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UConfirmationDialog_C::OnSelectionPicked(bool Confirmed, bool WasForced_)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.OnSelectionPicked");

	UConfirmationDialog_C_OnSelectionPicked_Params params {};
	params.Confirmed = Confirmed;
	params.WasForced_ = WasForced_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.IsUsingController
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UConfirmationDialog_C::IsUsingController()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.IsUsingController");

	UConfirmationDialog_C_IsUsingController_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.UpdateControllerFocus
//		Flags  -> ()
// Parameters:
void UConfirmationDialog_C::UpdateControllerFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.UpdateControllerFocus");

	UConfirmationDialog_C_UpdateControllerFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.ForceDialogCancel
//		Flags  -> ()
void UConfirmationDialog_C::ForceDialogCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.ForceDialogCancel");

	UConfirmationDialog_C_ForceDialogCancel_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.InitButton
//		Flags  -> ()
// Parameters:
//		struct FJoinedButtonTemplateModifiers              ButtonStyle                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
//		class UUI_Button_Base_C*                           Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UConfirmationDialog_C::InitButton(const struct FJoinedButtonTemplateModifiers& ButtonStyle, class UUI_Button_Base_C* Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.InitButton");

	UConfirmationDialog_C_InitButton_Params params {};
	params.ButtonStyle = ButtonStyle;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.GrabFocus
//		Flags  -> ()
// Parameters:
void UConfirmationDialog_C::GrabFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.GrabFocus");

	UConfirmationDialog_C_GrabFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.InitConfirmationDialog
//		Flags  -> ()
// Parameters:
void UConfirmationDialog_C::InitConfirmationDialog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.InitConfirmationDialog");

	UConfirmationDialog_C_InitConfirmationDialog_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.SetTextValues
//		Flags  -> ()
// Parameters:
//		struct FText                                       Message                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       ConfirmText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       CancelText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               ShouldRemoveCancel                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UConfirmationDialog_C::SetTextValues(const struct FText& Message, const struct FText& ConfirmText, const struct FText& CancelText, bool ShouldRemoveCancel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.SetTextValues");

	UConfirmationDialog_C_SetTextValues_Params params {};
	params.Message = Message;
	params.ConfirmText = ConfirmText;
	params.CancelText = CancelText;
	params.ShouldRemoveCancel = ShouldRemoveCancel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.Construct
//		Flags  -> ()
void UConfirmationDialog_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.Construct");

	UConfirmationDialog_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.OnSynchronizeProperties
//		Flags  -> ()
void UConfirmationDialog_C::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.OnSynchronizeProperties");

	UConfirmationDialog_C_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_2_ButtonDispatcher__DelegateSignature
//		Flags  -> ()
// Parameters:
//		unsigned char                                      Interaction                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UConfirmationDialog_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_2_ButtonDispatcher__DelegateSignature(unsigned char Interaction, int BoundValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_2_ButtonDispatcher__DelegateSignature");

	UConfirmationDialog_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_2_ButtonDispatcher__DelegateSignature_Params params {};
	params.Interaction = Interaction;
	params.BoundValue = BoundValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_ButtonDispatcher__DelegateSignature
//		Flags  -> ()
// Parameters:
//		unsigned char                                      Interaction                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UConfirmationDialog_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_ButtonDispatcher__DelegateSignature(unsigned char Interaction, int BoundValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_ButtonDispatcher__DelegateSignature");

	UConfirmationDialog_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_ButtonDispatcher__DelegateSignature_Params params {};
	params.Interaction = Interaction;
	params.BoundValue = BoundValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.ForceButtonsSelected
//		Flags  -> ()
void UConfirmationDialog_C::ForceButtonsSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.ForceButtonsSelected");

	UConfirmationDialog_C_ForceButtonsSelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.ForceButtonsHovered
//		Flags  -> ()
void UConfirmationDialog_C::ForceButtonsHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.ForceButtonsHovered");

	UConfirmationDialog_C_ForceButtonsHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.ForceButtonsNormal
//		Flags  -> ()
void UConfirmationDialog_C::ForceButtonsNormal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.ForceButtonsNormal");

	UConfirmationDialog_C_ForceButtonsNormal_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UConfirmationDialog_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.Tick");

	UConfirmationDialog_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.ExecuteUbergraph_ConfirmationDialog
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UConfirmationDialog_C::ExecuteUbergraph_ConfirmationDialog(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.ExecuteUbergraph_ConfirmationDialog");

	UConfirmationDialog_C_ExecuteUbergraph_ConfirmationDialog_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ConfirmationDialog.ConfirmationDialog_C.ConfirmationCallback__DelegateSignature
//		Flags  -> ()
// Parameters:
//		bool                                               DidAccept                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UConfirmationDialog_C::ConfirmationCallback__DelegateSignature(bool DidAccept)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ConfirmationDialog.ConfirmationDialog_C.ConfirmationCallback__DelegateSignature");

	UConfirmationDialog_C_ConfirmationCallback__DelegateSignature_Params params {};
	params.DidAccept = DidAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
