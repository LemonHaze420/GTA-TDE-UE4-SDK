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
//		Name   -> Function UI_PasswordDialog.UI_PasswordDialog_C.CreateIncorrectPassDialog
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UConfirmationDialog_C*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UConfirmationDialog_C* UUI_PasswordDialog_C::CreateIncorrectPassDialog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PasswordDialog.UI_PasswordDialog_C.CreateIncorrectPassDialog");

	UUI_PasswordDialog_C_CreateIncorrectPassDialog_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_PasswordDialog.UI_PasswordDialog_C.OnPreviewKeyDown
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUI_PasswordDialog_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PasswordDialog.UI_PasswordDialog_C.OnPreviewKeyDown");

	UUI_PasswordDialog_C_OnPreviewKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_PasswordDialog.UI_PasswordDialog_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUI_PasswordDialog_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PasswordDialog.UI_PasswordDialog_C.OnKeyDown");

	UUI_PasswordDialog_C_OnKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_PasswordDialog.UI_PasswordDialog_C.SetNavigationRules
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UUI_PasswordDialog_C::SetNavigationRules()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PasswordDialog.UI_PasswordDialog_C.SetNavigationRules");

	UUI_PasswordDialog_C_SetNavigationRules_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_PasswordDialog.UI_PasswordDialog_C.OnMouseMove
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUI_PasswordDialog_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PasswordDialog.UI_PasswordDialog_C.OnMouseMove");

	UUI_PasswordDialog_C_OnMouseMove_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_PasswordDialog.UI_PasswordDialog_C.ButtonFocusUpdate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               DidInputTypeJustChange                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_PasswordDialog_C::ButtonFocusUpdate(bool DidInputTypeJustChange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PasswordDialog.UI_PasswordDialog_C.ButtonFocusUpdate");

	UUI_PasswordDialog_C_ButtonFocusUpdate_Params params {};
	params.DidInputTypeJustChange = DidInputTypeJustChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_PasswordDialog.UI_PasswordDialog_C.InitFocus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_PasswordDialog_C::InitFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PasswordDialog.UI_PasswordDialog_C.InitFocus");

	UUI_PasswordDialog_C_InitFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_PasswordDialog.UI_PasswordDialog_C.CheckLastInputType
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               DidJustChange                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_PasswordDialog_C::CheckLastInputType(bool* DidJustChange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PasswordDialog.UI_PasswordDialog_C.CheckLastInputType");

	UUI_PasswordDialog_C_CheckLastInputType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DidJustChange != nullptr)
		*DidJustChange = params.DidJustChange;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_PasswordDialog.UI_PasswordDialog_C.OnAnalogValueChanged
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FAnalogInputEvent                           InAnalogInputEvent                                         (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUI_PasswordDialog_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PasswordDialog.UI_PasswordDialog_C.OnAnalogValueChanged");

	UUI_PasswordDialog_C_OnAnalogValueChanged_Params params {};
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_PasswordDialog.UI_PasswordDialog_C.GrabFocus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UUI_PasswordDialog_C::GrabFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PasswordDialog.UI_PasswordDialog_C.GrabFocus");

	UUI_PasswordDialog_C_GrabFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_PasswordDialog.UI_PasswordDialog_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_PasswordDialog_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PasswordDialog.UI_PasswordDialog_C.Construct");

	UUI_PasswordDialog_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_PasswordDialog.UI_PasswordDialog_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PasswordDialog_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PasswordDialog.UI_PasswordDialog_C.Tick");

	UUI_PasswordDialog_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_PasswordDialog.UI_PasswordDialog_C.Cleanup
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     OutPass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UUI_PasswordDialog_C::Cleanup(const struct FString& OutPass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PasswordDialog.UI_PasswordDialog_C.Cleanup");

	UUI_PasswordDialog_C_Cleanup_Params params {};
	params.OutPass = OutPass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_PasswordDialog.UI_PasswordDialog_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_2_ButtonDispatcher__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		unsigned char                                      Interaction                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PasswordDialog_C::BndEvt__ClearButton_K2Node_ComponentBoundEvent_2_ButtonDispatcher__DelegateSignature(unsigned char Interaction, int BoundValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PasswordDialog.UI_PasswordDialog_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_2_ButtonDispatcher__DelegateSignature");

	UUI_PasswordDialog_C_BndEvt__ClearButton_K2Node_ComponentBoundEvent_2_ButtonDispatcher__DelegateSignature_Params params {};
	params.Interaction = Interaction;
	params.BoundValue = BoundValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_PasswordDialog.UI_PasswordDialog_C.BndEvt__EnterButton_K2Node_ComponentBoundEvent_3_ButtonDispatcher__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		unsigned char                                      Interaction                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PasswordDialog_C::BndEvt__EnterButton_K2Node_ComponentBoundEvent_3_ButtonDispatcher__DelegateSignature(unsigned char Interaction, int BoundValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PasswordDialog.UI_PasswordDialog_C.BndEvt__EnterButton_K2Node_ComponentBoundEvent_3_ButtonDispatcher__DelegateSignature");

	UUI_PasswordDialog_C_BndEvt__EnterButton_K2Node_ComponentBoundEvent_3_ButtonDispatcher__DelegateSignature_Params params {};
	params.Interaction = Interaction;
	params.BoundValue = BoundValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_PasswordDialog.UI_PasswordDialog_C.IncorrectPassDialog
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UUI_PasswordDialog_C::IncorrectPassDialog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PasswordDialog.UI_PasswordDialog_C.IncorrectPassDialog");

	UUI_PasswordDialog_C_IncorrectPassDialog_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_PasswordDialog.UI_PasswordDialog_C.CustomEvent_1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               DidAccept                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_PasswordDialog_C::CustomEvent_1(bool DidAccept)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PasswordDialog.UI_PasswordDialog_C.CustomEvent_1");

	UUI_PasswordDialog_C_CustomEvent_1_Params params {};
	params.DidAccept = DidAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_PasswordDialog.UI_PasswordDialog_C.ExecuteUbergraph_UI_PasswordDialog
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PasswordDialog_C::ExecuteUbergraph_UI_PasswordDialog(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PasswordDialog.UI_PasswordDialog_C.ExecuteUbergraph_UI_PasswordDialog");

	UUI_PasswordDialog_C_ExecuteUbergraph_UI_PasswordDialog_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_PasswordDialog.UI_PasswordDialog_C.PasswordSent__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     OutPass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UUI_PasswordDialog_C::PasswordSent__DelegateSignature(const struct FString& OutPass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PasswordDialog.UI_PasswordDialog_C.PasswordSent__DelegateSignature");

	UUI_PasswordDialog_C_PasswordSent__DelegateSignature_Params params {};
	params.OutPass = OutPass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
