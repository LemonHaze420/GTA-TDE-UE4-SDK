#pragma once

// Name: SanAndreas, Version: 1.0.0


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

// Function UI_PasswordDialog.UI_PasswordDialog_C.CreateIncorrectPassDialog
struct UUI_PasswordDialog_C_CreateIncorrectPassDialog_Params
{
	class UConfirmationDialog_C*                       ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PasswordDialog.UI_PasswordDialog_C.OnPreviewKeyDown
struct UUI_PasswordDialog_C_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function UI_PasswordDialog.UI_PasswordDialog_C.OnKeyDown
struct UUI_PasswordDialog_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function UI_PasswordDialog.UI_PasswordDialog_C.SetNavigationRules
struct UUI_PasswordDialog_C_SetNavigationRules_Params
{
};

// Function UI_PasswordDialog.UI_PasswordDialog_C.OnMouseMove
struct UUI_PasswordDialog_C_OnMouseMove_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function UI_PasswordDialog.UI_PasswordDialog_C.ButtonFocusUpdate
struct UUI_PasswordDialog_C_ButtonFocusUpdate_Params
{
	bool                                               DidInputTypeJustChange;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_PasswordDialog.UI_PasswordDialog_C.InitFocus
struct UUI_PasswordDialog_C_InitFocus_Params
{
};

// Function UI_PasswordDialog.UI_PasswordDialog_C.CheckLastInputType
struct UUI_PasswordDialog_C_CheckLastInputType_Params
{
	bool                                               DidJustChange;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_PasswordDialog.UI_PasswordDialog_C.OnAnalogValueChanged
struct UUI_PasswordDialog_C_OnAnalogValueChanged_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FAnalogInputEvent                           InAnalogInputEvent;                                        // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function UI_PasswordDialog.UI_PasswordDialog_C.GrabFocus
struct UUI_PasswordDialog_C_GrabFocus_Params
{
};

// Function UI_PasswordDialog.UI_PasswordDialog_C.Construct
struct UUI_PasswordDialog_C_Construct_Params
{
};

// Function UI_PasswordDialog.UI_PasswordDialog_C.Tick
struct UUI_PasswordDialog_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PasswordDialog.UI_PasswordDialog_C.Cleanup
struct UUI_PasswordDialog_C_Cleanup_Params
{
	struct FString                                     OutPass;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_PasswordDialog.UI_PasswordDialog_C.BndEvt__ClearButton_K2Node_ComponentBoundEvent_2_ButtonDispatcher__DelegateSignature
struct UUI_PasswordDialog_C_BndEvt__ClearButton_K2Node_ComponentBoundEvent_2_ButtonDispatcher__DelegateSignature_Params
{
	unsigned char                                      Interaction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BoundValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PasswordDialog.UI_PasswordDialog_C.BndEvt__EnterButton_K2Node_ComponentBoundEvent_3_ButtonDispatcher__DelegateSignature
struct UUI_PasswordDialog_C_BndEvt__EnterButton_K2Node_ComponentBoundEvent_3_ButtonDispatcher__DelegateSignature_Params
{
	unsigned char                                      Interaction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BoundValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PasswordDialog.UI_PasswordDialog_C.IncorrectPassDialog
struct UUI_PasswordDialog_C_IncorrectPassDialog_Params
{
};

// Function UI_PasswordDialog.UI_PasswordDialog_C.CustomEvent_1
struct UUI_PasswordDialog_C_CustomEvent_1_Params
{
	bool                                               DidAccept;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_PasswordDialog.UI_PasswordDialog_C.ExecuteUbergraph_UI_PasswordDialog
struct UUI_PasswordDialog_C_ExecuteUbergraph_UI_PasswordDialog_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_PasswordDialog.UI_PasswordDialog_C.PasswordSent__DelegateSignature
struct UUI_PasswordDialog_C_PasswordSent__DelegateSignature_Params
{
	struct FString                                     OutPass;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
