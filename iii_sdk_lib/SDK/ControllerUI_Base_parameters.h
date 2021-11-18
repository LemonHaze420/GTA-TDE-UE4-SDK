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

// Function ControllerUI_Base.ControllerUI_Base_C.SetFontColors
struct UControllerUI_Base_C_SetFontColors_Params
{
	struct FSlateColor                                 NormalColor;                                               // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                                 SelectedColor;                                             // 0x0028(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ControllerUI_Base.ControllerUI_Base_C.GetCurrentToggleTextType
struct UControllerUI_Base_C_GetCurrentToggleTextType_Params
{
	int                                                CurrentType;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ControllerUI_Base.ControllerUI_Base_C.GetToggleValueTexts
struct UControllerUI_Base_C_GetToggleValueTexts_Params
{
	TArray<struct FText>                               FullTextValues;                                            // 0x0000(0x0010)  (Parm, OutParm)
};

// Function ControllerUI_Base.ControllerUI_Base_C.PlayInteractSound
struct UControllerUI_Base_C_PlayInteractSound_Params
{
};

// Function ControllerUI_Base.ControllerUI_Base_C.SetBackgroundColors
struct UControllerUI_Base_C_SetBackgroundColors_Params
{
	struct FSlateColor                                 NormalColor;                                               // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                                 SelectedColor;                                             // 0x0028(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ControllerUI_Base.ControllerUI_Base_C.UpdateTextAndBackgroundColors
struct UControllerUI_Base_C_UpdateTextAndBackgroundColors_Params
{
};

// Function ControllerUI_Base.ControllerUI_Base_C.SetupNavigation
struct UControllerUI_Base_C_SetupNavigation_Params
{
	class UWidget*                                     Up;                                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     Down;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ControllerUI_Base.ControllerUI_Base_C.CreateButtonValues
struct UControllerUI_Base_C_CreateButtonValues_Params
{
};

// Function ControllerUI_Base.ControllerUI_Base_C.Set Toggle Value
struct UControllerUI_Base_C_Set_Toggle_Value_Params
{
	int                                                NewValue;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ControllerUI_Base.ControllerUI_Base_C.OnToggleNext
struct UControllerUI_Base_C_OnToggleNext_Params
{
	SlateCore_EUINavigation                            Navigation;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ControllerUI_Base.ControllerUI_Base_C.OnTogglePrevious
struct UControllerUI_Base_C_OnTogglePrevious_Params
{
	SlateCore_EUINavigation                            Navigation;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ControllerUI_Base.ControllerUI_Base_C.GetToggleButton
struct UControllerUI_Base_C_GetToggleButton_Params
{
	class UButton*                                     ToggleButton;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ControllerUI_Base.ControllerUI_Base_C.GetCorrectedButtonValueForC++
struct UControllerUI_Base_C_GetCorrectedButtonValueForC___Params
{
	TEnumAsByte<ControllerButtonIDDefinitions_EControllerButtonIDDefinitions> InValue;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                C___Value;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ControllerUI_Base.ControllerUI_Base_C.SetupControllerText
struct UControllerUI_Base_C_SetupControllerText_Params
{
};

// Function ControllerUI_Base.ControllerUI_Base_C.GetMappingObjects
struct UControllerUI_Base_C_GetMappingObjects_Params
{
	TArray<class USimpleControllerMappingText_C*>      ReturnArray1;                                              // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
};

// Function ControllerUI_Base.ControllerUI_Base_C.Create Mapping Text
struct UControllerUI_Base_C_Create_Mapping_Text_Params
{
	struct FControllerButtonLayout                     ControllerButtonLayout;                                    // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	int                                                ArrayIndex;                                                // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USimpleControllerMappingText_C*              ReturnValue;                                               // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ControllerUI_Base.ControllerUI_Base_C.Construct
struct UControllerUI_Base_C_Construct_Params
{
};

// Function ControllerUI_Base.ControllerUI_Base_C.Tick
struct UControllerUI_Base_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ControllerUI_Base.ControllerUI_Base_C.OnSynchronizeProperties
struct UControllerUI_Base_C_OnSynchronizeProperties_Params
{
};

// Function ControllerUI_Base.ControllerUI_Base_C.BndEvt__ToggleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UControllerUI_Base_C_BndEvt__ToggleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ControllerUI_Base.ControllerUI_Base_C.PreConstruct
struct UControllerUI_Base_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ControllerUI_Base.ControllerUI_Base_C.ExecuteUbergraph_ControllerUI_Base
struct UControllerUI_Base_C_ExecuteUbergraph_ControllerUI_Base_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
