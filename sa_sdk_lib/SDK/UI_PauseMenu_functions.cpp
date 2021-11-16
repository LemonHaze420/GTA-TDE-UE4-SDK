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
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.GetLanguageTab
//		Flags  -> ()
// Parameters:
//		class ULanguageOptions_C*                          OutLanguageTab                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                IndexInWidgetSelector                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PauseMenu_C::GetLanguageTab(class ULanguageOptions_C** OutLanguageTab, int* IndexInWidgetSelector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.GetLanguageTab");

	UUI_PauseMenu_C_GetLanguageTab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutLanguageTab != nullptr)
		*OutLanguageTab = params.OutLanguageTab;
	if (IndexInWidgetSelector != nullptr)
		*IndexInWidgetSelector = params.IndexInWidgetSelector;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.ForceOpenMap
//		Flags  -> ()
void UUI_PauseMenu_C::ForceOpenMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.ForceOpenMap");

	UUI_PauseMenu_C_ForceOpenMap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.IsPauseMenuMapOpen
//		Flags  -> ()
// Parameters:
//		bool                                               IsOpen                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_PauseMenu_C::IsPauseMenuMapOpen(bool* IsOpen)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.IsPauseMenuMapOpen");

	UUI_PauseMenu_C_IsPauseMenuMapOpen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsOpen != nullptr)
		*IsOpen = params.IsOpen;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.GetAccountPickerButton
//		Flags  -> ()
// Parameters:
//		class UUI_DesignTimeUserWidget*                    AccountPickerButtonWidget                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PauseMenu_C::GetAccountPickerButton(class UUI_DesignTimeUserWidget** AccountPickerButtonWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.GetAccountPickerButton");

	UUI_PauseMenu_C_GetAccountPickerButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AccountPickerButtonWidget != nullptr)
		*AccountPickerButtonWidget = params.AccountPickerButtonWidget;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.GetLoginInfo
//		Flags  -> ()
// Parameters:
//		class UUI_DesignTimeUserWidget*                    LoginInfoWidget                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PauseMenu_C::GetLoginInfo(class UUI_DesignTimeUserWidget** LoginInfoWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.GetLoginInfo");

	UUI_PauseMenu_C_GetLoginInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LoginInfoWidget != nullptr)
		*LoginInfoWidget = params.LoginInfoWidget;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.Get Current Cursor Pos
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   ControllerCursorPos                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PauseMenu_C::Get_Current_Cursor_Pos(struct FVector2D* ControllerCursorPos)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.Get Current Cursor Pos");

	UUI_PauseMenu_C_Get_Current_Cursor_Pos_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ControllerCursorPos != nullptr)
		*ControllerCursorPos = params.ControllerCursorPos;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.UpdateLegend
//		Flags  -> ()
// Parameters:
void UUI_PauseMenu_C::UpdateLegend()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.UpdateLegend");

	UUI_PauseMenu_C_UpdateLegend_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.UpdateMapAreaText
//		Flags  -> ()
// Parameters:
void UUI_PauseMenu_C::UpdateMapAreaText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.UpdateMapAreaText");

	UUI_PauseMenu_C_UpdateMapAreaText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.ExtraButtonChecks
//		Flags  -> ()
// Parameters:
void UUI_PauseMenu_C::ExtraButtonChecks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.ExtraButtonChecks");

	UUI_PauseMenu_C_ExtraButtonChecks_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.GetNonExtraWideLeftLockAnchors
//		Flags  -> ()
// Parameters:
//		float                                              LeftPanelSize                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              minX                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              maxX                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PauseMenu_C::GetNonExtraWideLeftLockAnchors(float LeftPanelSize, float* minX, float* maxX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.GetNonExtraWideLeftLockAnchors");

	UUI_PauseMenu_C_GetNonExtraWideLeftLockAnchors_Params params {};
	params.LeftPanelSize = LeftPanelSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (minX != nullptr)
		*minX = params.minX;
	if (maxX != nullptr)
		*maxX = params.maxX;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.MapFinishedMoving
//		Flags  -> ()
void UUI_PauseMenu_C::MapFinishedMoving()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.MapFinishedMoving");

	UUI_PauseMenu_C_MapFinishedMoving_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.MoveControllerCursorToCenter
//		Flags  -> ()
// Parameters:
void UUI_PauseMenu_C::MoveControllerCursorToCenter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.MoveControllerCursorToCenter");

	UUI_PauseMenu_C_MoveControllerCursorToCenter_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.Get Open Map Size
//		Flags  -> ()
// Parameters:
//		float                                              XSize                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              YSize                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PauseMenu_C::Get_Open_Map_Size(float* XSize, float* YSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.Get Open Map Size");

	UUI_PauseMenu_C_Get_Open_Map_Size_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (XSize != nullptr)
		*XSize = params.XSize;
	if (YSize != nullptr)
		*YSize = params.YSize;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.Get Map Right Side Offset
//		Flags  -> ()
// Parameters:
//		float                                              RightSide                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PauseMenu_C::Get_Map_Right_Side_Offset(float* RightSide)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.Get Map Right Side Offset");

	UUI_PauseMenu_C_Get_Map_Right_Side_Offset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RightSide != nullptr)
		*RightSide = params.RightSide;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.IsRatioExtraWide
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUI_PauseMenu_C::IsRatioExtraWide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.IsRatioExtraWide");

	UUI_PauseMenu_C_IsRatioExtraWide_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.GetConfirmOptionHelpButton
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     ConfirmHelpObject                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PauseMenu_C::GetConfirmOptionHelpButton(class UWidget** ConfirmHelpObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.GetConfirmOptionHelpButton");

	UUI_PauseMenu_C_GetConfirmOptionHelpButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ConfirmHelpObject != nullptr)
		*ConfirmHelpObject = params.ConfirmHelpObject;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.ShowConfirmChangesHelpText
//		Flags  -> ()
// Parameters:
//		bool                                               ShouldShow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_PauseMenu_C::ShowConfirmChangesHelpText(bool ShouldShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.ShowConfirmChangesHelpText");

	UUI_PauseMenu_C_ShowConfirmChangesHelpText_Params params {};
	params.ShouldShow = ShouldShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.ShouldShowGangsInMap
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUI_PauseMenu_C::ShouldShowGangsInMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.ShouldShowGangsInMap");

	UUI_PauseMenu_C_ShouldShowGangsInMap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.DelayedMapStartup
//		Flags  -> ()
// Parameters:
void UUI_PauseMenu_C::DelayedMapStartup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.DelayedMapStartup");

	UUI_PauseMenu_C_DelayedMapStartup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.StartDelayedExit
//		Flags  -> ()
void UUI_PauseMenu_C::StartDelayedExit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.StartDelayedExit");

	UUI_PauseMenu_C_StartDelayedExit_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.DelayedStartGame
//		Flags  -> ()
// Parameters:
//		int                                                ForSaveSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PauseMenu_C::DelayedStartGame(int ForSaveSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.DelayedStartGame");

	UUI_PauseMenu_C_DelayedStartGame_Params params {};
	params.ForSaveSlot = ForSaveSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.DelayedMapJumpUpdate
//		Flags  -> ()
// Parameters:
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PauseMenu_C::DelayedMapJumpUpdate(float dT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.DelayedMapJumpUpdate");

	UUI_PauseMenu_C_DelayedMapJumpUpdate_Params params {};
	params.dT = dT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.DelayedMapJumpStart
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   MouseLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PauseMenu_C::DelayedMapJumpStart(const struct FVector2D& MouseLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.DelayedMapJumpStart");

	UUI_PauseMenu_C_DelayedMapJumpStart_Params params {};
	params.MouseLocation = MouseLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.DoControllerMapScrolling
//		Flags  -> ()
// Parameters:
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ControllerX                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ControllerY                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FMargin                                     CursorMargin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              MapRightSideOffset                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PauseMenu_C::DoControllerMapScrolling(float dT, float ControllerX, float ControllerY, const struct FMargin& CursorMargin, float MapRightSideOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.DoControllerMapScrolling");

	UUI_PauseMenu_C_DoControllerMapScrolling_Params params {};
	params.dT = dT;
	params.ControllerX = ControllerX;
	params.ControllerY = ControllerY;
	params.CursorMargin = CursorMargin;
	params.MapRightSideOffset = MapRightSideOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.SetupMapLegend
//		Flags  -> ()
// Parameters:
void UUI_PauseMenu_C::SetupMapLegend()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.SetupMapLegend");

	UUI_PauseMenu_C_SetupMapLegend_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.Close Legend
//		Flags  -> ()
// Parameters:
void UUI_PauseMenu_C::Close_Legend()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.Close Legend");

	UUI_PauseMenu_C_Close_Legend_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.InteractedButton
//		Flags  -> ()
// Parameters:
//		unsigned char                                      InteractionType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BoundValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PauseMenu_C::InteractedButton(unsigned char InteractionType, int BoundValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.InteractedButton");

	UUI_PauseMenu_C_InteractedButton_Params params {};
	params.InteractionType = InteractionType;
	params.BoundValue = BoundValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.SetupMapButtons
//		Flags  -> ()
void UUI_PauseMenu_C::SetupMapButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.SetupMapButtons");

	UUI_PauseMenu_C_SetupMapButtons_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.SetupButtonMappingWithImage
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EHIDMapping>                   mapping                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMenuHelpText_Template_C*                    HelpTextObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		UMG_ESlateVisibility                               NewVisiblity                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PauseMenu_C::SetupButtonMappingWithImage(TEnumAsByte<GTABase_EHIDMapping> mapping, class UMenuHelpText_Template_C* HelpTextObject, UMG_ESlateVisibility* NewVisiblity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.SetupButtonMappingWithImage");

	UUI_PauseMenu_C_SetupButtonMappingWithImage_Params params {};
	params.mapping = mapping;
	params.HelpTextObject = HelpTextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewVisiblity != nullptr)
		*NewVisiblity = params.NewVisiblity;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.OnMapWaypointClear
//		Flags  -> ()
void UUI_PauseMenu_C::OnMapWaypointClear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.OnMapWaypointClear");

	UUI_PauseMenu_C_OnMapWaypointClear_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.UpdateMapNavigation
//		Flags  -> ()
// Parameters:
void UUI_PauseMenu_C::UpdateMapNavigation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.UpdateMapNavigation");

	UUI_PauseMenu_C_UpdateMapNavigation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.SetLastResolution
//		Flags  -> ()
// Parameters:
void UUI_PauseMenu_C::SetLastResolution()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.SetLastResolution");

	UUI_PauseMenu_C_SetLastResolution_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.ResetMapClosed
//		Flags  -> ()
// Parameters:
void UUI_PauseMenu_C::ResetMapClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.ResetMapClosed");

	UUI_PauseMenu_C_ResetMapClosed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.MoveMapPosition
//		Flags  -> ()
// Parameters:
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PauseMenu_C::MoveMapPosition(float dT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.MoveMapPosition");

	UUI_PauseMenu_C_MoveMapPosition_Params params {};
	params.dT = dT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.UpdateControllerCursorOnMap
//		Flags  -> ()
// Parameters:
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsMapOpen                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               IsUsingController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_PauseMenu_C::UpdateControllerCursorOnMap(float dT, bool IsMapOpen, bool IsUsingController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.UpdateControllerCursorOnMap");

	UUI_PauseMenu_C_UpdateControllerCursorOnMap_Params params {};
	params.dT = dT;
	params.IsMapOpen = IsMapOpen;
	params.IsUsingController = IsUsingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.Normalize Controller Cursor
//		Flags  -> ()
// Parameters:
void UUI_PauseMenu_C::Normalize_Controller_Cursor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.Normalize Controller Cursor");

	UUI_PauseMenu_C_Normalize_Controller_Cursor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.Update Map Inputs
//		Flags  -> ()
// Parameters:
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PauseMenu_C::Update_Map_Inputs(float dT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.Update Map Inputs");

	UUI_PauseMenu_C_Update_Map_Inputs_Params params {};
	params.dT = dT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.ResolutionFixup
//		Flags  -> ()
// Parameters:
void UUI_PauseMenu_C::ResolutionFixup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.ResolutionFixup");

	UUI_PauseMenu_C_ResolutionFixup_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.FixMapFocus
//		Flags  -> ()
// Parameters:
//		bool                                               DidFocus                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_PauseMenu_C::FixMapFocus(bool* DidFocus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.FixMapFocus");

	UUI_PauseMenu_C_FixMapFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DidFocus != nullptr)
		*DidFocus = params.DidFocus;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.HandleMapBack
//		Flags  -> ()
// Parameters:
//		bool                                               DidHandle                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_PauseMenu_C::HandleMapBack(bool* DidHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.HandleMapBack");

	UUI_PauseMenu_C_HandleMapBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DidHandle != nullptr)
		*DidHandle = params.DidHandle;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.IsMapOpen
//		Flags  -> ()
// Parameters:
//		bool                                               IsOpen                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_PauseMenu_C::IsMapOpen(bool* IsOpen)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.IsMapOpen");

	UUI_PauseMenu_C_IsMapOpen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsOpen != nullptr)
		*IsOpen = params.IsOpen;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.EndMapInteract
//		Flags  -> ()
void UUI_PauseMenu_C::EndMapInteract()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.EndMapInteract");

	UUI_PauseMenu_C_EndMapInteract_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.ResizeRadar
//		Flags  -> ()
// Parameters:
//		float                                              SetPosition                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               DoFullResize                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              RightSideOffset                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               CanResize                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_PauseMenu_C::ResizeRadar(float SetPosition, bool DoFullResize, float RightSideOffset, bool* CanResize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.ResizeRadar");

	UUI_PauseMenu_C_ResizeRadar_Params params {};
	params.SetPosition = SetPosition;
	params.DoFullResize = DoFullResize;
	params.RightSideOffset = RightSideOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanResize != nullptr)
		*CanResize = params.CanResize;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.ResetMapPosition
//		Flags  -> ()
// Parameters:
void UUI_PauseMenu_C::ResetMapPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.ResetMapPosition");

	UUI_PauseMenu_C_ResetMapPosition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.StartMapInteract
//		Flags  -> ()
void UUI_PauseMenu_C::StartMapInteract()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.StartMapInteract");

	UUI_PauseMenu_C_StartMapInteract_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.UpdateMap
//		Flags  -> ()
// Parameters:
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PauseMenu_C::UpdateMap(float dT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.UpdateMap");

	UUI_PauseMenu_C_UpdateMap_Params params {};
	params.dT = dT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.OnResumePageStart
//		Flags  -> ()
void UUI_PauseMenu_C::OnResumePageStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.OnResumePageStart");

	UUI_PauseMenu_C_OnResumePageStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.StartMap_1
//		Flags  -> ()
// Parameters:
void UUI_PauseMenu_C::StartMap_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.StartMap_1");

	UUI_PauseMenu_C_StartMap_1_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.IsPauseMenu
//		Flags  -> ()
// Parameters:
//		bool                                               IsPauseMenu                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_PauseMenu_C::IsPauseMenu(bool* IsPauseMenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.IsPauseMenu");

	UUI_PauseMenu_C_IsPauseMenu_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsPauseMenu != nullptr)
		*IsPauseMenu = params.IsPauseMenu;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.GetVersionNumber
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     VersionTextBox                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PauseMenu_C::GetVersionNumber(class UWidget** VersionTextBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.GetVersionNumber");

	UUI_PauseMenu_C_GetVersionNumber_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (VersionTextBox != nullptr)
		*VersionTextBox = params.VersionTextBox;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.GetBackgroundContainer
//		Flags  -> ()
// Parameters:
//		class UCanvasPanel*                                CanvasPanel                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PauseMenu_C::GetBackgroundContainer(class UCanvasPanel** CanvasPanel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.GetBackgroundContainer");

	UUI_PauseMenu_C_GetBackgroundContainer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanvasPanel != nullptr)
		*CanvasPanel = params.CanvasPanel;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.GetHolderCanvas
//		Flags  -> ()
// Parameters:
//		class UCanvasPanel*                                Canvas                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PauseMenu_C::GetHolderCanvas(class UCanvasPanel** Canvas)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.GetHolderCanvas");

	UUI_PauseMenu_C_GetHolderCanvas_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Canvas != nullptr)
		*Canvas = params.Canvas;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.GetSavesTab
//		Flags  -> ()
// Parameters:
//		class UUI_OptionsMenuTab_Game_C*                   OutSavesTab                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                IndexInWidgetSelector                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PauseMenu_C::GetSavesTab(class UUI_OptionsMenuTab_Game_C** OutSavesTab, int* IndexInWidgetSelector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.GetSavesTab");

	UUI_PauseMenu_C_GetSavesTab_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutSavesTab != nullptr)
		*OutSavesTab = params.OutSavesTab;
	if (IndexInWidgetSelector != nullptr)
		*IndexInWidgetSelector = params.IndexInWidgetSelector;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.SetupLayout
//		Flags  -> ()
void UUI_PauseMenu_C::SetupLayout()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.SetupLayout");

	UUI_PauseMenu_C_SetupLayout_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.Setup Misc
//		Flags  -> ()
void UUI_PauseMenu_C::Setup_Misc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.Setup Misc");

	UUI_PauseMenu_C_Setup_Misc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.OnSynchronizeProperties
//		Flags  -> ()
void UUI_PauseMenu_C::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.OnSynchronizeProperties");

	UUI_PauseMenu_C_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.SetTemplate
//		Flags  -> ()
// Parameters:
//		class UGTAMainMenuUITemplate*                      InTemplate                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IncludeSaveTab                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_PauseMenu_C::SetTemplate(class UGTAMainMenuUITemplate* InTemplate, bool IncludeSaveTab)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.SetTemplate");

	UUI_PauseMenu_C_SetTemplate_Params params {};
	params.InTemplate = InTemplate;
	params.IncludeSaveTab = IncludeSaveTab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PauseMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.Tick");

	UUI_PauseMenu_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.ShowMap
//		Flags  -> ()
void UUI_PauseMenu_C::ShowMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.ShowMap");

	UUI_PauseMenu_C_ShowMap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.HideMap
//		Flags  -> ()
void UUI_PauseMenu_C::HideMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.HideMap");

	UUI_PauseMenu_C_HideMap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.DelayedStartMap
//		Flags  -> ()
void UUI_PauseMenu_C::DelayedStartMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.DelayedStartMap");

	UUI_PauseMenu_C_DelayedStartMap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.BndEvt__MapControllerCursor_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
//		Flags  -> ()
void UUI_PauseMenu_C::BndEvt__MapControllerCursor_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.BndEvt__MapControllerCursor_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UUI_PauseMenu_C_BndEvt__MapControllerCursor_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.DelayedMapRefresh
//		Flags  -> ()
void UUI_PauseMenu_C::DelayedMapRefresh()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.DelayedMapRefresh");

	UUI_PauseMenu_C_DelayedMapRefresh_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.Construct
//		Flags  -> ()
void UUI_PauseMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.Construct");

	UUI_PauseMenu_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.DelayedMapResize
//		Flags  -> ()
void UUI_PauseMenu_C::DelayedMapResize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.DelayedMapResize");

	UUI_PauseMenu_C_DelayedMapResize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_PauseMenu.UI_PauseMenu_C.ExecuteUbergraph_UI_PauseMenu
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_PauseMenu_C::ExecuteUbergraph_UI_PauseMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_PauseMenu.UI_PauseMenu_C.ExecuteUbergraph_UI_PauseMenu");

	UUI_PauseMenu_C_ExecuteUbergraph_UI_PauseMenu_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
