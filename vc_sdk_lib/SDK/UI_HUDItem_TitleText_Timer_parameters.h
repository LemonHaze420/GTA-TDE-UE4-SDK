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

// Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.CreateBar
struct UUI_HUDItem_TitleText_Timer_C_CreateBar_Params
{
	TEnumAsByte<UMG_ESlateSizeRule>                    Size_Rule;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   SizeBoxOverride;                                           // 0x0004(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.CreateOrUpdateBar
struct UUI_HUDItem_TitleText_Timer_C_CreateOrUpdateBar_Params
{
	float                                              NewValue;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.UpdateTimerText
struct UUI_HUDItem_TitleText_Timer_C_UpdateTimerText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                SpecifiedColor;                                            // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.SetPosition
struct UUI_HUDItem_TitleText_Timer_C_SetPosition_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Xmax;                                                      // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Ymax;                                                      // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.SetImage
struct UUI_HUDItem_TitleText_Timer_C_SetImage_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.SetImageColor
struct UUI_HUDItem_TitleText_Timer_C_SetImageColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               forceVisible;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.CustomFunctionWithFloat
struct UUI_HUDItem_TitleText_Timer_C_CustomFunctionWithFloat_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              floatNum;                                                  // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.CustomFunction
struct UUI_HUDItem_TitleText_Timer_C_CustomFunction_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.SetContentText
struct UUI_HUDItem_TitleText_Timer_C_SetContentText_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FLinearColor                                FontColorOverride;                                         // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.Tick
struct UUI_HUDItem_TitleText_Timer_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.Construct
struct UUI_HUDItem_TitleText_Timer_C_Construct_Params
{
};

// Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.SetContentPercentOffset
struct UUI_HUDItem_TitleText_Timer_C_SetContentPercentOffset_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.OnSynchronizeProperties
struct UUI_HUDItem_TitleText_Timer_C_OnSynchronizeProperties_Params
{
};

// Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.ExecuteUbergraph_UI_HUDItem_TitleText_Timer
struct UUI_HUDItem_TitleText_Timer_C_ExecuteUbergraph_UI_HUDItem_TitleText_Timer_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
