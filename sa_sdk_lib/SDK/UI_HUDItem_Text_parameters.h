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

// Function UI_HUDItem_Text.UI_HUDItem_Text_C.ScaleTextDown
struct UUI_HUDItem_Text_C_ScaleTextDown_Params
{
};

// Function UI_HUDItem_Text.UI_HUDItem_Text_C.CalcRightSideBackground
struct UUI_HUDItem_Text_C_CalcRightSideBackground_Params
{
	float                                              Right;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_Text.UI_HUDItem_Text_C.SetBackgroundSize
struct UUI_HUDItem_Text_C_SetBackgroundSize_Params
{
	float                                              Bottom;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Right;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_Text.UI_HUDItem_Text_C.ResizeTextToFitReasonably
struct UUI_HUDItem_Text_C_ResizeTextToFitReasonably_Params
{
	float                                              TextSize;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExtraTextSizeMult;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DesiredSize;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_Text.UI_HUDItem_Text_C.UpdateBoxSize
struct UUI_HUDItem_Text_C_UpdateBoxSize_Params
{
};

// Function UI_HUDItem_Text.UI_HUDItem_Text_C.UpdateMainText
struct UUI_HUDItem_Text_C_UpdateMainText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FLinearColor                                SpecifiedColor;                                            // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_Text.UI_HUDItem_Text_C.CreateOrUpdateAdditionalText
struct UUI_HUDItem_Text_C_CreateOrUpdateAdditionalText_Params
{
	struct FText                                       NewText;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                Color;                                                     // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_Text.UI_HUDItem_Text_C.RemoveAdditionalText
struct UUI_HUDItem_Text_C_RemoveAdditionalText_Params
{
};

// Function UI_HUDItem_Text.UI_HUDItem_Text_C.CreateAdditionalText
struct UUI_HUDItem_Text_C_CreateAdditionalText_Params
{
};

// Function UI_HUDItem_Text.UI_HUDItem_Text_C.CreateBar
struct UUI_HUDItem_Text_C_CreateBar_Params
{
};

// Function UI_HUDItem_Text.UI_HUDItem_Text_C.RemoveProgressBar
struct UUI_HUDItem_Text_C_RemoveProgressBar_Params
{
};

// Function UI_HUDItem_Text.UI_HUDItem_Text_C.CreateOrUpdateProgressBar
struct UUI_HUDItem_Text_C_CreateOrUpdateProgressBar_Params
{
	TArray<float>                                      Info;                                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FLinearColor                                Color;                                                     // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_Text.UI_HUDItem_Text_C.Construct
struct UUI_HUDItem_Text_C_Construct_Params
{
};

// Function UI_HUDItem_Text.UI_HUDItem_Text_C.Tick
struct UUI_HUDItem_Text_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_Text.UI_HUDItem_Text_C.SetImageColor
struct UUI_HUDItem_Text_C_SetImageColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               forceVisible;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUDItem_Text.UI_HUDItem_Text_C.SetContentText
struct UUI_HUDItem_Text_C_SetContentText_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FLinearColor                                FontColorOverride;                                         // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_Text.UI_HUDItem_Text_C.OnSynchronizeProperties
struct UUI_HUDItem_Text_C_OnSynchronizeProperties_Params
{
};

// Function UI_HUDItem_Text.UI_HUDItem_Text_C.SetContentPercentOffset
struct UUI_HUDItem_Text_C_SetContentPercentOffset_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_Text.UI_HUDItem_Text_C.CustomFunctionWithFloats
struct UUI_HUDItem_Text_C_CustomFunctionWithFloats_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<float>                                      Floats;                                                    // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_HUDItem_Text.UI_HUDItem_Text_C.CustomFunctionWithColor
struct UUI_HUDItem_Text_C_CustomFunctionWithColor_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_Text.UI_HUDItem_Text_C.CustomFunctionWithFloat
struct UUI_HUDItem_Text_C_CustomFunctionWithFloat_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              floatNum;                                                  // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_Text.UI_HUDItem_Text_C.SetContentTextAdditional
struct UUI_HUDItem_Text_C_SetContentTextAdditional_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FLinearColor                                FontColorOverride;                                         // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_Text.UI_HUDItem_Text_C.RefreshAfterSettingsChange
struct UUI_HUDItem_Text_C_RefreshAfterSettingsChange_Params
{
};

// Function UI_HUDItem_Text.UI_HUDItem_Text_C.ExecuteUbergraph_UI_HUDItem_Text
struct UUI_HUDItem_Text_C_ExecuteUbergraph_UI_HUDItem_Text_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
