#pragma once

// Name: ViceCity, Version: 1.0.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function UI_PauseMenu.UI_PauseMenu_C.GetLanguageTab
struct UUI_PauseMenu_C_GetLanguageTab_Params
{
	class ULanguageOptions_C*                          OutLanguageTab;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                IndexInWidgetSelector;                                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PauseMenu.UI_PauseMenu_C.ForceOpenMap
struct UUI_PauseMenu_C_ForceOpenMap_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.IsPauseMenuMapOpen
struct UUI_PauseMenu_C_IsPauseMenuMapOpen_Params
{
	bool                                               IsOpen;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_PauseMenu.UI_PauseMenu_C.GetAccountPickerButton
struct UUI_PauseMenu_C_GetAccountPickerButton_Params
{
	class UUI_DesignTimeUserWidget*                    AccountPickerButtonWidget;                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PauseMenu.UI_PauseMenu_C.GetLoginInfo
struct UUI_PauseMenu_C_GetLoginInfo_Params
{
	class UUI_DesignTimeUserWidget*                    LoginInfoWidget;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PauseMenu.UI_PauseMenu_C.Get Current Cursor Pos
struct UUI_PauseMenu_C_Get_Current_Cursor_Pos_Params
{
	struct FVector2D                                   ControllerCursorPos;                                       // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PauseMenu.UI_PauseMenu_C.UpdateLegend
struct UUI_PauseMenu_C_UpdateLegend_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.UpdateMapAreaText
struct UUI_PauseMenu_C_UpdateMapAreaText_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.ExtraButtonChecks
struct UUI_PauseMenu_C_ExtraButtonChecks_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.GetNonExtraWideLeftLockAnchors
struct UUI_PauseMenu_C_GetNonExtraWideLeftLockAnchors_Params
{
	float                                              LeftPanelSize;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              minX;                                                      // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              maxX;                                                      // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PauseMenu.UI_PauseMenu_C.MapFinishedMoving
struct UUI_PauseMenu_C_MapFinishedMoving_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.MoveControllerCursorToCenter
struct UUI_PauseMenu_C_MoveControllerCursorToCenter_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.Get Open Map Size
struct UUI_PauseMenu_C_Get_Open_Map_Size_Params
{
	float                                              XSize;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              YSize;                                                     // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PauseMenu.UI_PauseMenu_C.Get Map Right Side Offset
struct UUI_PauseMenu_C_Get_Map_Right_Side_Offset_Params
{
	float                                              RightSide;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PauseMenu.UI_PauseMenu_C.IsRatioExtraWide
struct UUI_PauseMenu_C_IsRatioExtraWide_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UI_PauseMenu.UI_PauseMenu_C.GetConfirmOptionHelpButton
struct UUI_PauseMenu_C_GetConfirmOptionHelpButton_Params
{
	class UWidget*                                     ConfirmHelpObject;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PauseMenu.UI_PauseMenu_C.ShowConfirmChangesHelpText
struct UUI_PauseMenu_C_ShowConfirmChangesHelpText_Params
{
	bool                                               ShouldShow;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_PauseMenu.UI_PauseMenu_C.ShouldShowGangsInMap
struct UUI_PauseMenu_C_ShouldShowGangsInMap_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UI_PauseMenu.UI_PauseMenu_C.DelayedMapStartup
struct UUI_PauseMenu_C_DelayedMapStartup_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.StartDelayedExit
struct UUI_PauseMenu_C_StartDelayedExit_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.DelayedStartGame
struct UUI_PauseMenu_C_DelayedStartGame_Params
{
	int                                                ForSaveSlot;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PauseMenu.UI_PauseMenu_C.DelayedMapJumpUpdate
struct UUI_PauseMenu_C_DelayedMapJumpUpdate_Params
{
	float                                              dT;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PauseMenu.UI_PauseMenu_C.DelayedMapJumpStart
struct UUI_PauseMenu_C_DelayedMapJumpStart_Params
{
	struct FVector2D                                   MouseLocation;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PauseMenu.UI_PauseMenu_C.DoControllerMapScrolling
struct UUI_PauseMenu_C_DoControllerMapScrolling_Params
{
	float                                              dT;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ControllerX;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ControllerY;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                     CursorMargin;                                              // 0x000C(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MapRightSideOffset;                                        // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PauseMenu.UI_PauseMenu_C.SetupMapLegend
struct UUI_PauseMenu_C_SetupMapLegend_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.Close Legend
struct UUI_PauseMenu_C_Close_Legend_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.InteractedButton
struct UUI_PauseMenu_C_InteractedButton_Params
{
	unsigned char                                      InteractionType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BoundValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PauseMenu.UI_PauseMenu_C.SetupMapButtons
struct UUI_PauseMenu_C_SetupMapButtons_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.SetupButtonMappingWithImage
struct UUI_PauseMenu_C_SetupButtonMappingWithImage_Params
{
	TEnumAsByte<GTABase_EHIDMapping>                   mapping;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMenuHelpText_Template_C*                    HelpTextObject;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMG_ESlateVisibility                               NewVisiblity;                                              // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PauseMenu.UI_PauseMenu_C.OnMapWaypointClear
struct UUI_PauseMenu_C_OnMapWaypointClear_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.UpdateMapNavigation
struct UUI_PauseMenu_C_UpdateMapNavigation_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.SetLastResolution
struct UUI_PauseMenu_C_SetLastResolution_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.ResetMapClosed
struct UUI_PauseMenu_C_ResetMapClosed_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.MoveMapPosition
struct UUI_PauseMenu_C_MoveMapPosition_Params
{
	float                                              dT;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PauseMenu.UI_PauseMenu_C.UpdateControllerCursorOnMap
struct UUI_PauseMenu_C_UpdateControllerCursorOnMap_Params
{
	float                                              dT;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsMapOpen;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsUsingController;                                         // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_PauseMenu.UI_PauseMenu_C.Normalize Controller Cursor
struct UUI_PauseMenu_C_Normalize_Controller_Cursor_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.Update Map Inputs
struct UUI_PauseMenu_C_Update_Map_Inputs_Params
{
	float                                              dT;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PauseMenu.UI_PauseMenu_C.ResolutionFixup
struct UUI_PauseMenu_C_ResolutionFixup_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.FixMapFocus
struct UUI_PauseMenu_C_FixMapFocus_Params
{
	bool                                               DidFocus;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_PauseMenu.UI_PauseMenu_C.HandleMapBack
struct UUI_PauseMenu_C_HandleMapBack_Params
{
	bool                                               DidHandle;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_PauseMenu.UI_PauseMenu_C.IsMapOpen
struct UUI_PauseMenu_C_IsMapOpen_Params
{
	bool                                               IsOpen;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_PauseMenu.UI_PauseMenu_C.EndMapInteract
struct UUI_PauseMenu_C_EndMapInteract_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.ResizeRadar
struct UUI_PauseMenu_C_ResizeRadar_Params
{
	float                                              SetPosition;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DoFullResize;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RightSideOffset;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanResize;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_PauseMenu.UI_PauseMenu_C.ResetMapPosition
struct UUI_PauseMenu_C_ResetMapPosition_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.StartMapInteract
struct UUI_PauseMenu_C_StartMapInteract_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.UpdateMap
struct UUI_PauseMenu_C_UpdateMap_Params
{
	float                                              dT;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PauseMenu.UI_PauseMenu_C.OnResumePageStart
struct UUI_PauseMenu_C_OnResumePageStart_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.StartMap_1
struct UUI_PauseMenu_C_StartMap_1_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.IsPauseMenu
struct UUI_PauseMenu_C_IsPauseMenu_Params
{
	bool                                               IsPauseMenu;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_PauseMenu.UI_PauseMenu_C.GetVersionNumber
struct UUI_PauseMenu_C_GetVersionNumber_Params
{
	class UWidget*                                     VersionTextBox;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PauseMenu.UI_PauseMenu_C.GetBackgroundContainer
struct UUI_PauseMenu_C_GetBackgroundContainer_Params
{
	class UCanvasPanel*                                CanvasPanel;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PauseMenu.UI_PauseMenu_C.GetHolderCanvas
struct UUI_PauseMenu_C_GetHolderCanvas_Params
{
	class UCanvasPanel*                                Canvas;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PauseMenu.UI_PauseMenu_C.GetSavesTab
struct UUI_PauseMenu_C_GetSavesTab_Params
{
	class UUI_OptionsMenuTab_Game_C*                   OutSavesTab;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                IndexInWidgetSelector;                                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PauseMenu.UI_PauseMenu_C.SetupLayout
struct UUI_PauseMenu_C_SetupLayout_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.Setup Misc
struct UUI_PauseMenu_C_Setup_Misc_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.OnSynchronizeProperties
struct UUI_PauseMenu_C_OnSynchronizeProperties_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.SetTemplate
struct UUI_PauseMenu_C_SetTemplate_Params
{
	class UGTAMainMenuUITemplate*                      InTemplate;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IncludeSaveTab;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_PauseMenu.UI_PauseMenu_C.Tick
struct UUI_PauseMenu_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PauseMenu.UI_PauseMenu_C.ShowMap
struct UUI_PauseMenu_C_ShowMap_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.HideMap
struct UUI_PauseMenu_C_HideMap_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.DelayedStartMap
struct UUI_PauseMenu_C_DelayedStartMap_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.BndEvt__MapControllerCursor_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
struct UUI_PauseMenu_C_BndEvt__MapControllerCursor_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.DelayedMapRefresh
struct UUI_PauseMenu_C_DelayedMapRefresh_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.Construct
struct UUI_PauseMenu_C_Construct_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.DelayedMapResize
struct UUI_PauseMenu_C_DelayedMapResize_Params
{
};

// Function UI_PauseMenu.UI_PauseMenu_C.ExecuteUbergraph_UI_PauseMenu
struct UUI_PauseMenu_C_ExecuteUbergraph_UI_PauseMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
