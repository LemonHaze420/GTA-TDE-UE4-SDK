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
//		Name   -> Function UI_MenuRadar.UI_MenuRadar_C.UpdateMouseZoom
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_MenuRadar_C::UpdateMouseZoom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuRadar.UI_MenuRadar_C.UpdateMouseZoom");

	UUI_MenuRadar_C_UpdateMouseZoom_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MenuRadar.UI_MenuRadar_C.Zoom Map to Cursor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_MenuRadar_C::Zoom_Map_to_Cursor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuRadar.UI_MenuRadar_C.Zoom Map to Cursor");

	UUI_MenuRadar_C_Zoom_Map_to_Cursor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MenuRadar.UI_MenuRadar_C.GetCursorPosition
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   PositionVector                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MenuRadar_C::GetCursorPosition(struct FVector2D* PositionVector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuRadar.UI_MenuRadar_C.GetCursorPosition");

	UUI_MenuRadar_C_GetCursorPosition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PositionVector != nullptr)
		*PositionVector = params.PositionVector;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MenuRadar.UI_MenuRadar_C.GetCurrentUVs
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FBox2D                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor)
struct FBox2D UUI_MenuRadar_C::GetCurrentUVs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuRadar.UI_MenuRadar_C.GetCurrentUVs");

	UUI_MenuRadar_C_GetCurrentUVs_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MenuRadar.UI_MenuRadar_C.OnKeyChar
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FCharacterEvent                             InCharacterEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUI_MenuRadar_C::OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuRadar.UI_MenuRadar_C.OnKeyChar");

	UUI_MenuRadar_C_OnKeyChar_Params params {};
	params.MyGeometry = MyGeometry;
	params.InCharacterEvent = InCharacterEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MenuRadar.UI_MenuRadar_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUI_MenuRadar_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuRadar.UI_MenuRadar_C.OnKeyDown");

	UUI_MenuRadar_C_OnKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MenuRadar.UI_MenuRadar_C.SetMapZoom
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               DidChange                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MenuRadar_C::SetMapZoom(float Value, bool* DidChange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuRadar.UI_MenuRadar_C.SetMapZoom");

	UUI_MenuRadar_C_SetMapZoom_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DidChange != nullptr)
		*DidChange = params.DidChange;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MenuRadar.UI_MenuRadar_C.SetMapPosition
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     InVec                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ForceUpdate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MenuRadar_C::SetMapPosition(const struct FVector& InVec, bool ForceUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuRadar.UI_MenuRadar_C.SetMapPosition");

	UUI_MenuRadar_C_SetMapPosition_Params params {};
	params.InVec = InVec;
	params.ForceUpdate = ForceUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MenuRadar.UI_MenuRadar_C.ClickedCheck
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_MenuRadar_C::ClickedCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuRadar.UI_MenuRadar_C.ClickedCheck");

	UUI_MenuRadar_C_ClickedCheck_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MenuRadar.UI_MenuRadar_C.OnControllerZoom
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              AmmountToZoom                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MenuRadar_C::OnControllerZoom(float AmmountToZoom, float dT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuRadar.UI_MenuRadar_C.OnControllerZoom");

	UUI_MenuRadar_C_OnControllerZoom_Params params {};
	params.AmmountToZoom = AmmountToZoom;
	params.dT = dT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MenuRadar.UI_MenuRadar_C.OnControllerMove
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   ControllerDelta                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MenuRadar_C::OnControllerMove(const struct FVector2D& ControllerDelta, float dT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuRadar.UI_MenuRadar_C.OnControllerMove");

	UUI_MenuRadar_C_OnControllerMove_Params params {};
	params.ControllerDelta = ControllerDelta;
	params.dT = dT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MenuRadar.UI_MenuRadar_C.OnMouseButtonDoubleClick
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   InMyGeometry                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               InMouseEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUI_MenuRadar_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuRadar.UI_MenuRadar_C.OnMouseButtonDoubleClick");

	UUI_MenuRadar_C_OnMouseButtonDoubleClick_Params params {};
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MenuRadar.UI_MenuRadar_C.OnMouseButtonUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUI_MenuRadar_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuRadar.UI_MenuRadar_C.OnMouseButtonUp");

	UUI_MenuRadar_C_OnMouseButtonUp_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MenuRadar.UI_MenuRadar_C.OnMouseButtonDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUI_MenuRadar_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuRadar.UI_MenuRadar_C.OnMouseButtonDown");

	UUI_MenuRadar_C_OnMouseButtonDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MenuRadar.UI_MenuRadar_C.OnMouseMove
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUI_MenuRadar_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuRadar.UI_MenuRadar_C.OnMouseMove");

	UUI_MenuRadar_C_OnMouseMove_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MenuRadar.UI_MenuRadar_C.OnMouseWheel
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UUI_MenuRadar_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuRadar.UI_MenuRadar_C.OnMouseWheel");

	UUI_MenuRadar_C_OnMouseWheel_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MenuRadar.UI_MenuRadar_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_MenuRadar_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuRadar.UI_MenuRadar_C.Destruct");

	UUI_MenuRadar_C_Destruct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MenuRadar.UI_MenuRadar_C.OnMouseLeave
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_MenuRadar_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuRadar.UI_MenuRadar_C.OnMouseLeave");

	UUI_MenuRadar_C_OnMouseLeave_Params params {};
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MenuRadar.UI_MenuRadar_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_MenuRadar_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuRadar.UI_MenuRadar_C.OnInitialized");

	UUI_MenuRadar_C_OnInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MenuRadar.UI_MenuRadar_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MenuRadar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuRadar.UI_MenuRadar_C.Tick");

	UUI_MenuRadar_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MenuRadar.UI_MenuRadar_C.SetUVs
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FBox2D                                      newUVs                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
void UUI_MenuRadar_C::SetUVs(const struct FBox2D& newUVs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuRadar.UI_MenuRadar_C.SetUVs");

	UUI_MenuRadar_C_SetUVs_Params params {};
	params.newUVs = newUVs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MenuRadar.UI_MenuRadar_C.DelayedMapForceMode
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UUI_MenuRadar_C::DelayedMapForceMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuRadar.UI_MenuRadar_C.DelayedMapForceMode");

	UUI_MenuRadar_C_DelayedMapForceMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_MenuRadar.UI_MenuRadar_C.ExecuteUbergraph_UI_MenuRadar
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MenuRadar_C::ExecuteUbergraph_UI_MenuRadar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuRadar.UI_MenuRadar_C.ExecuteUbergraph_UI_MenuRadar");

	UUI_MenuRadar_C_ExecuteUbergraph_UI_MenuRadar_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
