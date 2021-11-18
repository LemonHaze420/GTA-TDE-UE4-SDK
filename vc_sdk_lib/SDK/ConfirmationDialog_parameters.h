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

// Function ConfirmationDialog.ConfirmationDialog_C.ForceDialogClose
struct UConfirmationDialog_C_ForceDialogClose_Params
{
};

// Function ConfirmationDialog.ConfirmationDialog_C.OnSelectionHovered
struct UConfirmationDialog_C_OnSelectionHovered_Params
{
};

// Function ConfirmationDialog.ConfirmationDialog_C.OnSelectionPicked
struct UConfirmationDialog_C_OnSelectionPicked_Params
{
	bool                                               Confirmed;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WasForced_;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ConfirmationDialog.ConfirmationDialog_C.IsUsingController
struct UConfirmationDialog_C_IsUsingController_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ConfirmationDialog.ConfirmationDialog_C.UpdateControllerFocus
struct UConfirmationDialog_C_UpdateControllerFocus_Params
{
};

// Function ConfirmationDialog.ConfirmationDialog_C.ForceDialogCancel
struct UConfirmationDialog_C_ForceDialogCancel_Params
{
};

// Function ConfirmationDialog.ConfirmationDialog_C.InitButton
struct UConfirmationDialog_C_InitButton_Params
{
	struct FJoinedButtonTemplateModifiers              ButtonStyle;                                               // 0x0000(0x0360)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UUI_Button_Base_C*                           Button;                                                    // 0x0360(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ConfirmationDialog.ConfirmationDialog_C.GrabFocus
struct UConfirmationDialog_C_GrabFocus_Params
{
};

// Function ConfirmationDialog.ConfirmationDialog_C.InitConfirmationDialog
struct UConfirmationDialog_C_InitConfirmationDialog_Params
{
};

// Function ConfirmationDialog.ConfirmationDialog_C.SetTextValues
struct UConfirmationDialog_C_SetTextValues_Params
{
	struct FText                                       Message;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       ConfirmText;                                               // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       CancelText;                                                // 0x0030(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ShouldRemoveCancel;                                        // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ConfirmationDialog.ConfirmationDialog_C.Construct
struct UConfirmationDialog_C_Construct_Params
{
};

// Function ConfirmationDialog.ConfirmationDialog_C.OnSynchronizeProperties
struct UConfirmationDialog_C_OnSynchronizeProperties_Params
{
};

// Function ConfirmationDialog.ConfirmationDialog_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_2_ButtonDispatcher__DelegateSignature
struct UConfirmationDialog_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_2_ButtonDispatcher__DelegateSignature_Params
{
	unsigned char                                      Interaction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BoundValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ConfirmationDialog.ConfirmationDialog_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_ButtonDispatcher__DelegateSignature
struct UConfirmationDialog_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_ButtonDispatcher__DelegateSignature_Params
{
	unsigned char                                      Interaction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BoundValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ConfirmationDialog.ConfirmationDialog_C.ForceButtonsSelected
struct UConfirmationDialog_C_ForceButtonsSelected_Params
{
};

// Function ConfirmationDialog.ConfirmationDialog_C.ForceButtonsHovered
struct UConfirmationDialog_C_ForceButtonsHovered_Params
{
};

// Function ConfirmationDialog.ConfirmationDialog_C.ForceButtonsNormal
struct UConfirmationDialog_C_ForceButtonsNormal_Params
{
};

// Function ConfirmationDialog.ConfirmationDialog_C.Tick
struct UConfirmationDialog_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ConfirmationDialog.ConfirmationDialog_C.ExecuteUbergraph_ConfirmationDialog
struct UConfirmationDialog_C_ExecuteUbergraph_ConfirmationDialog_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ConfirmationDialog.ConfirmationDialog_C.ConfirmationCallback__DelegateSignature
struct UConfirmationDialog_C_ConfirmationCallback__DelegateSignature_Params
{
	bool                                               DidAccept;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
