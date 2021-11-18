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

// Function UI_Brief.UI_Brief_C.SetupButtonColors
struct UUI_Brief_C_SetupButtonColors_Params
{
};

// Function UI_Brief.UI_Brief_C.UpdateScrollIndicators
struct UUI_Brief_C_UpdateScrollIndicators_Params
{
	float                                              dT;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Brief.UI_Brief_C.OnMouseButtonDown
struct UUI_Brief_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function UI_Brief.UI_Brief_C.OnMouseMove
struct UUI_Brief_C_OnMouseMove_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function UI_Brief.UI_Brief_C.UpdateBriefStrings
struct UUI_Brief_C_UpdateBriefStrings_Params
{
};

// Function UI_Brief.UI_Brief_C.Scroll
struct UUI_Brief_C_Scroll_Params
{
	SlateCore_EUINavigation                            Navigation;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Brief.UI_Brief_C.TakeFocus
struct UUI_Brief_C_TakeFocus_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UI_Brief.UI_Brief_C.Tick
struct UUI_Brief_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Brief.UI_Brief_C.Construct
struct UUI_Brief_C_Construct_Params
{
};

// Function UI_Brief.UI_Brief_C.OnSynchronizeProperties
struct UUI_Brief_C_OnSynchronizeProperties_Params
{
};

// Function UI_Brief.UI_Brief_C.BndEvt__UpButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
struct UUI_Brief_C_BndEvt__UpButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_Brief.UI_Brief_C.BndEvt__UpButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UUI_Brief_C_BndEvt__UpButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Brief.UI_Brief_C.BndEvt__DownButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UUI_Brief_C_BndEvt__DownButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Brief.UI_Brief_C.BndEvt__DownButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
struct UUI_Brief_C_BndEvt__DownButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_Brief.UI_Brief_C.BndEvt__DownButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
struct UUI_Brief_C_BndEvt__DownButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function UI_Brief.UI_Brief_C.BndEvt__UpButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
struct UUI_Brief_C_BndEvt__UpButton_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function UI_Brief.UI_Brief_C.BndEvt__UpButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
struct UUI_Brief_C_BndEvt__UpButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_Brief.UI_Brief_C.BndEvt__DownButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
struct UUI_Brief_C_BndEvt__DownButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_Brief.UI_Brief_C.ExecuteUbergraph_UI_Brief
struct UUI_Brief_C_ExecuteUbergraph_UI_Brief_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
