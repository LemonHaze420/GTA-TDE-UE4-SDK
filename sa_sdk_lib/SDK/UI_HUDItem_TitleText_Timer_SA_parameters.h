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

// Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CreateNewVerticalEntry
struct UUI_HUDItem_TitleText_Timer_SA_C_CreateNewVerticalEntry_Params
{
};

// Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.UpdateStrings
struct UUI_HUDItem_TitleText_Timer_SA_C_UpdateStrings_Params
{
	struct FString                                     Selection;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FString>                             TargetArray;                                               // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetElementNum
struct UUI_HUDItem_TitleText_Timer_SA_C_SetElementNum_Params
{
	int                                                NumItems;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               NeedsWideElement;                                          // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.Set Text for Element
struct UUI_HUDItem_TitleText_Timer_SA_C_Set_Text_for_Element_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsMainText;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       TextValue;                                                 // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               SetColor_;                                                 // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // 0x0024(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.UpdateTimerText
struct UUI_HUDItem_TitleText_Timer_SA_C_UpdateTimerText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                SpecifiedColor;                                            // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URichTextBlock*                              TextToUpdate;                                              // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.Construct
struct UUI_HUDItem_TitleText_Timer_SA_C_Construct_Params
{
};

// Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.Tick
struct UUI_HUDItem_TitleText_Timer_SA_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetContentText
struct UUI_HUDItem_TitleText_Timer_SA_C_SetContentText_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FLinearColor                                FontColorOverride;                                         // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.OnSynchronizeProperties
struct UUI_HUDItem_TitleText_Timer_SA_C_OnSynchronizeProperties_Params
{
};

// Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetContentPercentOffset
struct UUI_HUDItem_TitleText_Timer_SA_C_SetContentPercentOffset_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetPosition
struct UUI_HUDItem_TitleText_Timer_SA_C_SetPosition_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Xmax;                                                      // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Ymax;                                                      // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetImage
struct UUI_HUDItem_TitleText_Timer_SA_C_SetImage_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetImageColor
struct UUI_HUDItem_TitleText_Timer_SA_C_SetImageColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               forceVisible;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithFloat
struct UUI_HUDItem_TitleText_Timer_SA_C_CustomFunctionWithFloat_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              floatNum;                                                  // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunction
struct UUI_HUDItem_TitleText_Timer_SA_C_CustomFunction_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetContentTextAdditional
struct UUI_HUDItem_TitleText_Timer_SA_C_SetContentTextAdditional_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FLinearColor                                FontColorOverride;                                         // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithStrings
struct UUI_HUDItem_TitleText_Timer_SA_C_CustomFunctionWithStrings_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FString>                             Strings;                                                   // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithInteger
struct UUI_HUDItem_TitleText_Timer_SA_C_CustomFunctionWithInteger_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                integer;                                                   // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithColor
struct UUI_HUDItem_TitleText_Timer_SA_C_CustomFunctionWithColor_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithColors
struct UUI_HUDItem_TitleText_Timer_SA_C_CustomFunctionWithColors_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FLinearColor>                        Colors;                                                    // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.ExecuteUbergraph_UI_HUDItem_TitleText_Timer_SA
struct UUI_HUDItem_TitleText_Timer_SA_C_ExecuteUbergraph_UI_HUDItem_TitleText_Timer_SA_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
