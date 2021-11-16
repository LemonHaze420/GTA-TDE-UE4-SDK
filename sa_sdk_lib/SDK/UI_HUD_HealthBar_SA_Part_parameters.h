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

// Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.SetBarColor
struct UUI_HUD_HealthBar_SA_Part_C_SetBarColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.SetTextColor
struct UUI_HUD_HealthBar_SA_Part_C_SetTextColor_Params
{
	class URichTextBlock*                              RichTextObject;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                NewColor;                                                  // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.UpdateBar
struct UUI_HUD_HealthBar_SA_Part_C_UpdateBar_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.UpdateTimerText
struct UUI_HUD_HealthBar_SA_Part_C_UpdateTimerText_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class URichTextBlock*                              TextObject;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SetColor_;                                                 // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                Color;                                                     // 0x0024(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.Construct
struct UUI_HUD_HealthBar_SA_Part_C_Construct_Params
{
};

// Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.OnSynchronizeProperties
struct UUI_HUD_HealthBar_SA_Part_C_OnSynchronizeProperties_Params
{
};

// Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.Tick
struct UUI_HUD_HealthBar_SA_Part_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.SetContentText
struct UUI_HUD_HealthBar_SA_Part_C_SetContentText_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FLinearColor                                FontColorOverride;                                         // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.SetContentPercentOffset
struct UUI_HUD_HealthBar_SA_Part_C_SetContentPercentOffset_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.SetPosition
struct UUI_HUD_HealthBar_SA_Part_C_SetPosition_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Xmax;                                                      // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Ymax;                                                      // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.SetImage
struct UUI_HUD_HealthBar_SA_Part_C_SetImage_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.SetImageColor
struct UUI_HUD_HealthBar_SA_Part_C_SetImageColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               forceVisible;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.CustomFunctionWithFloat
struct UUI_HUD_HealthBar_SA_Part_C_CustomFunctionWithFloat_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              floatNum;                                                  // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.CustomFunction
struct UUI_HUD_HealthBar_SA_Part_C_CustomFunction_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.Reset
struct UUI_HUD_HealthBar_SA_Part_C_Reset_Params
{
};

// Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.SetContentTextAdditional
struct UUI_HUD_HealthBar_SA_Part_C_SetContentTextAdditional_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FLinearColor                                FontColorOverride;                                         // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C.ExecuteUbergraph_UI_HUD_HealthBar_SA_Part
struct UUI_HUD_HealthBar_SA_Part_C_ExecuteUbergraph_UI_HUD_HealthBar_SA_Part_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
