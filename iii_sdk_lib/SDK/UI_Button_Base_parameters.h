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

// Function UI_Button_Base.UI_Button_Base_C.ButtonImageSetWithMapping
struct UUI_Button_Base_C_ButtonImageSetWithMapping_Params
{
	TEnumAsByte<GTABase_EHIDMapping>                   mapping;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Button_Base.UI_Button_Base_C.SetButtonImageVisibility
struct UUI_Button_Base_C_SetButtonImageVisibility_Params
{
	bool                                               Visible_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Button_Base.UI_Button_Base_C.Button Image Set
struct UUI_Button_Base_C_Button_Image_Set_Params
{
	class UTexture2D*                                  ImageTexture;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                                    UVs;                                                       // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Button_Base.UI_Button_Base_C.UpdateImage
struct UUI_Button_Base_C_UpdateImage_Params
{
	unsigned char                                      SelectionType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Button_Base.UI_Button_Base_C.UpdateText
struct UUI_Button_Base_C_UpdateText_Params
{
	unsigned char                                      SelectionStyle;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Button_Base.UI_Button_Base_C.FocusOff
struct UUI_Button_Base_C_FocusOff_Params
{
};

// Function UI_Button_Base.UI_Button_Base_C.OnFocus
struct UUI_Button_Base_C_OnFocus_Params
{
};

// Function UI_Button_Base.UI_Button_Base_C.IsSelected
struct UUI_Button_Base_C_IsSelected_Params
{
	bool                                               IsSelected;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Button_Base.UI_Button_Base_C.UpdateButton
struct UUI_Button_Base_C_UpdateButton_Params
{
	unsigned char                                      Set_Selected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Button_Base.UI_Button_Base_C.SetButtonTextValue
struct UUI_Button_Base_C_SetButtonTextValue_Params
{
	struct FText                                       Value;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               JustRebuild;                                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_Button_Base.UI_Button_Base_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_Button_Base_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_Button_Base.UI_Button_Base_C.ForceButtonSelected
struct UUI_Button_Base_C_ForceButtonSelected_Params
{
};

// Function UI_Button_Base.UI_Button_Base_C.ForceButtonNormal
struct UUI_Button_Base_C_ForceButtonNormal_Params
{
};

// Function UI_Button_Base.UI_Button_Base_C.Construct
struct UUI_Button_Base_C_Construct_Params
{
};

// Function UI_Button_Base.UI_Button_Base_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
struct UUI_Button_Base_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function UI_Button_Base.UI_Button_Base_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
struct UUI_Button_Base_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function UI_Button_Base.UI_Button_Base_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
struct UUI_Button_Base_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_Button_Base.UI_Button_Base_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UUI_Button_Base_C_BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function UI_Button_Base.UI_Button_Base_C.OnSynchronizeProperties
struct UUI_Button_Base_C_OnSynchronizeProperties_Params
{
};

// Function UI_Button_Base.UI_Button_Base_C.ForceButtonHovered
struct UUI_Button_Base_C_ForceButtonHovered_Params
{
};

// Function UI_Button_Base.UI_Button_Base_C.Tick
struct UUI_Button_Base_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Button_Base.UI_Button_Base_C.ExecuteUbergraph_UI_Button_Base
struct UUI_Button_Base_C_ExecuteUbergraph_UI_Button_Base_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_Button_Base.UI_Button_Base_C.ButtonDispatcher__DelegateSignature
struct UUI_Button_Base_C_ButtonDispatcher__DelegateSignature_Params
{
	unsigned char                                      Interaction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BoundValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
