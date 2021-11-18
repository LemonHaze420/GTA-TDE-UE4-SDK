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

// Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.UpdateBoxSize
struct UUI_HUDItem_MultiLineLargeText_C_UpdateBoxSize_Params
{
};

// Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.UpdateTextBox
struct UUI_HUDItem_MultiLineLargeText_C_UpdateTextBox_Params
{
};

// Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.UpdateMainText
struct UUI_HUDItem_MultiLineLargeText_C_UpdateMainText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FLinearColor                                SpecifiedColor;                                            // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.Construct
struct UUI_HUDItem_MultiLineLargeText_C_Construct_Params
{
};

// Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.Tick
struct UUI_HUDItem_MultiLineLargeText_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.SetContentText
struct UUI_HUDItem_MultiLineLargeText_C_SetContentText_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FLinearColor                                FontColorOverride;                                         // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.OnSynchronizeProperties
struct UUI_HUDItem_MultiLineLargeText_C_OnSynchronizeProperties_Params
{
};

// Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.SetContentPercentOffset
struct UUI_HUDItem_MultiLineLargeText_C_SetContentPercentOffset_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.SetPosition
struct UUI_HUDItem_MultiLineLargeText_C_SetPosition_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Xmax;                                                      // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Ymax;                                                      // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.SetImage
struct UUI_HUDItem_MultiLineLargeText_C_SetImage_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.SetImageColor
struct UUI_HUDItem_MultiLineLargeText_C_SetImageColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               forceVisible;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.ExecuteUbergraph_UI_HUDItem_MultiLineLargeText
struct UUI_HUDItem_MultiLineLargeText_C_ExecuteUbergraph_UI_HUDItem_MultiLineLargeText_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
