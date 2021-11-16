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
//		Name   -> Function UI_Brief.UI_Brief_C.SetupButtonColors
//		Flags  -> ()
// Parameters:
void UUI_Brief_C::SetupButtonColors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Brief.UI_Brief_C.SetupButtonColors");

	UUI_Brief_C_SetupButtonColors_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Brief.UI_Brief_C.UpdateScrollIndicators
//		Flags  -> ()
// Parameters:
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Brief_C::UpdateScrollIndicators(float dT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Brief.UI_Brief_C.UpdateScrollIndicators");

	UUI_Brief_C_UpdateScrollIndicators_Params params {};
	params.dT = dT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Brief.UI_Brief_C.OnMouseButtonDown
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUI_Brief_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Brief.UI_Brief_C.OnMouseButtonDown");

	UUI_Brief_C_OnMouseButtonDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Brief.UI_Brief_C.OnMouseMove
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUI_Brief_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Brief.UI_Brief_C.OnMouseMove");

	UUI_Brief_C_OnMouseMove_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Brief.UI_Brief_C.UpdateBriefStrings
//		Flags  -> ()
// Parameters:
void UUI_Brief_C::UpdateBriefStrings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Brief.UI_Brief_C.UpdateBriefStrings");

	UUI_Brief_C_UpdateBriefStrings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Brief.UI_Brief_C.Scroll
//		Flags  -> ()
// Parameters:
//		SlateCore_EUINavigation                            Navigation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UUI_Brief_C::Scroll(SlateCore_EUINavigation Navigation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Brief.UI_Brief_C.Scroll");

	UUI_Brief_C_Scroll_Params params {};
	params.Navigation = Navigation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Brief.UI_Brief_C.TakeFocus
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUI_Brief_C::TakeFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Brief.UI_Brief_C.TakeFocus");

	UUI_Brief_C_TakeFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Brief.UI_Brief_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Brief_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Brief.UI_Brief_C.Tick");

	UUI_Brief_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Brief.UI_Brief_C.Construct
//		Flags  -> ()
void UUI_Brief_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Brief.UI_Brief_C.Construct");

	UUI_Brief_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Brief.UI_Brief_C.OnSynchronizeProperties
//		Flags  -> ()
void UUI_Brief_C::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Brief.UI_Brief_C.OnSynchronizeProperties");

	UUI_Brief_C_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Brief.UI_Brief_C.BndEvt__UpButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
//		Flags  -> ()
void UUI_Brief_C::BndEvt__UpButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Brief.UI_Brief_C.BndEvt__UpButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UUI_Brief_C_BndEvt__UpButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Brief.UI_Brief_C.BndEvt__UpButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UUI_Brief_C::BndEvt__UpButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Brief.UI_Brief_C.BndEvt__UpButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UUI_Brief_C_BndEvt__UpButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Brief.UI_Brief_C.BndEvt__DownButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
//		Flags  -> ()
void UUI_Brief_C::BndEvt__DownButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Brief.UI_Brief_C.BndEvt__DownButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UUI_Brief_C_BndEvt__DownButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Brief.UI_Brief_C.BndEvt__DownButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
//		Flags  -> ()
void UUI_Brief_C::BndEvt__DownButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Brief.UI_Brief_C.BndEvt__DownButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");

	UUI_Brief_C_BndEvt__DownButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Brief.UI_Brief_C.BndEvt__DownButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
//		Flags  -> ()
void UUI_Brief_C::BndEvt__DownButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Brief.UI_Brief_C.BndEvt__DownButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature");

	UUI_Brief_C_BndEvt__DownButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Brief.UI_Brief_C.BndEvt__UpButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
//		Flags  -> ()
void UUI_Brief_C::BndEvt__UpButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Brief.UI_Brief_C.BndEvt__UpButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature");

	UUI_Brief_C_BndEvt__UpButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Brief.UI_Brief_C.BndEvt__UpButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UUI_Brief_C::BndEvt__UpButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Brief.UI_Brief_C.BndEvt__UpButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UUI_Brief_C_BndEvt__UpButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Brief.UI_Brief_C.BndEvt__DownButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
//		Flags  -> ()
void UUI_Brief_C::BndEvt__DownButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Brief.UI_Brief_C.BndEvt__DownButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UUI_Brief_C_BndEvt__DownButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Brief.UI_Brief_C.ExecuteUbergraph_UI_Brief
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Brief_C::ExecuteUbergraph_UI_Brief(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Brief.UI_Brief_C.ExecuteUbergraph_UI_Brief");

	UUI_Brief_C_ExecuteUbergraph_UI_Brief_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
