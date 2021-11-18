#pragma once

// Name: GTA III, Version: 1.0.0


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

// Function UI_MenuRadar.UI_MenuRadar_C.UpdateMouseZoom
struct UUI_MenuRadar_C_UpdateMouseZoom_Params
{
};

// Function UI_MenuRadar.UI_MenuRadar_C.Zoom Map to Cursor
struct UUI_MenuRadar_C_Zoom_Map_to_Cursor_Params
{
};

// Function UI_MenuRadar.UI_MenuRadar_C.GetCursorPosition
struct UUI_MenuRadar_C_GetCursorPosition_Params
{
	struct FVector2D                                   PositionVector;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MenuRadar.UI_MenuRadar_C.GetCurrentUVs
struct UUI_MenuRadar_C_GetCurrentUVs_Params
{
	struct FBox2D                                      ReturnValue;                                               // 0x0000(0x0014)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor)
};

// Function UI_MenuRadar.UI_MenuRadar_C.OnKeyChar
struct UUI_MenuRadar_C_OnKeyChar_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FCharacterEvent                             InCharacterEvent;                                          // 0x0038(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0058(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function UI_MenuRadar.UI_MenuRadar_C.OnKeyDown
struct UUI_MenuRadar_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function UI_MenuRadar.UI_MenuRadar_C.SetMapZoom
struct UUI_MenuRadar_C_SetMapZoom_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DidChange;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_MenuRadar.UI_MenuRadar_C.SetMapPosition
struct UUI_MenuRadar_C_SetMapPosition_Params
{
	struct FVector                                     InVec;                                                     // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ForceUpdate;                                               // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_MenuRadar.UI_MenuRadar_C.ClickedCheck
struct UUI_MenuRadar_C_ClickedCheck_Params
{
};

// Function UI_MenuRadar.UI_MenuRadar_C.OnControllerZoom
struct UUI_MenuRadar_C_OnControllerZoom_Params
{
	float                                              AmmountToZoom;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              dT;                                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MenuRadar.UI_MenuRadar_C.OnControllerMove
struct UUI_MenuRadar_C_OnControllerMove_Params
{
	struct FVector2D                                   ControllerDelta;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              dT;                                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MenuRadar.UI_MenuRadar_C.OnMouseButtonDoubleClick
struct UUI_MenuRadar_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               InMouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function UI_MenuRadar.UI_MenuRadar_C.OnMouseButtonUp
struct UUI_MenuRadar_C_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function UI_MenuRadar.UI_MenuRadar_C.OnMouseButtonDown
struct UUI_MenuRadar_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function UI_MenuRadar.UI_MenuRadar_C.OnMouseMove
struct UUI_MenuRadar_C_OnMouseMove_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function UI_MenuRadar.UI_MenuRadar_C.OnMouseWheel
struct UUI_MenuRadar_C_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function UI_MenuRadar.UI_MenuRadar_C.Destruct
struct UUI_MenuRadar_C_Destruct_Params
{
};

// Function UI_MenuRadar.UI_MenuRadar_C.OnMouseLeave
struct UUI_MenuRadar_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_MenuRadar.UI_MenuRadar_C.OnInitialized
struct UUI_MenuRadar_C_OnInitialized_Params
{
};

// Function UI_MenuRadar.UI_MenuRadar_C.Tick
struct UUI_MenuRadar_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MenuRadar.UI_MenuRadar_C.SetUVs
struct UUI_MenuRadar_C_SetUVs_Params
{
	struct FBox2D                                      newUVs;                                                    // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
};

// Function UI_MenuRadar.UI_MenuRadar_C.DelayedMapForceMode
struct UUI_MenuRadar_C_DelayedMapForceMode_Params
{
};

// Function UI_MenuRadar.UI_MenuRadar_C.ExecuteUbergraph_UI_MenuRadar
struct UUI_MenuRadar_C_ExecuteUbergraph_UI_MenuRadar_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
