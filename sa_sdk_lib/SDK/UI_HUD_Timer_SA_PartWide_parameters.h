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

// Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.SetTextColor
struct UUI_HUD_Timer_SA_PartWide_C_SetTextColor_Params
{
	class URichTextBlock*                              RichTextObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                NewColor;                                                  // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.CreateBar
struct UUI_HUD_Timer_SA_PartWide_C_CreateBar_Params
{
	TEnumAsByte<UMG_ESlateSizeRule>                    SizeRule;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.CreateOrUpdateBar
struct UUI_HUD_Timer_SA_PartWide_C_CreateOrUpdateBar_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.UpdateTimerText
struct UUI_HUD_Timer_SA_PartWide_C_UpdateTimerText_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class URichTextBlock*                              TextObject;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SetColor_;                                                 // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // 0x0024(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.OnSynchronizeProperties
struct UUI_HUD_Timer_SA_PartWide_C_OnSynchronizeProperties_Params
{
};

// Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.Tick
struct UUI_HUD_Timer_SA_PartWide_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.SetContentText
struct UUI_HUD_Timer_SA_PartWide_C_SetContentText_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FLinearColor                                FontColorOverride;                                         // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.SetContentPercentOffset
struct UUI_HUD_Timer_SA_PartWide_C_SetContentPercentOffset_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.SetPosition
struct UUI_HUD_Timer_SA_PartWide_C_SetPosition_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Xmax;                                                      // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Ymax;                                                      // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.SetImage
struct UUI_HUD_Timer_SA_PartWide_C_SetImage_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.SetImageColor
struct UUI_HUD_Timer_SA_PartWide_C_SetImageColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               forceVisible;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.CustomFunctionWithFloat
struct UUI_HUD_Timer_SA_PartWide_C_CustomFunctionWithFloat_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              floatNum;                                                  // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.CustomFunction
struct UUI_HUD_Timer_SA_PartWide_C_CustomFunction_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.SetContentTextAdditional
struct UUI_HUD_Timer_SA_PartWide_C_SetContentTextAdditional_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FLinearColor                                FontColorOverride;                                         // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.Reset
struct UUI_HUD_Timer_SA_PartWide_C_Reset_Params
{
};

// Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.Construct
struct UUI_HUD_Timer_SA_PartWide_C_Construct_Params
{
};

// Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.ExecuteUbergraph_UI_HUD_Timer_SA_PartWide
struct UUI_HUD_Timer_SA_PartWide_C_ExecuteUbergraph_UI_HUD_Timer_SA_PartWide_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
