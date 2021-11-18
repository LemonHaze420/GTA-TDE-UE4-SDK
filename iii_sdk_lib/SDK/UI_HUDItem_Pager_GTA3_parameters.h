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

// Function UI_HUDItem_Pager_GTA3.UI_HUDItem_Pager_GTA3_C.Construct
struct UUI_HUDItem_Pager_GTA3_C_Construct_Params
{
};

// Function UI_HUDItem_Pager_GTA3.UI_HUDItem_Pager_GTA3_C.OnSynchronizeProperties
struct UUI_HUDItem_Pager_GTA3_C_OnSynchronizeProperties_Params
{
};

// Function UI_HUDItem_Pager_GTA3.UI_HUDItem_Pager_GTA3_C.SetImage
struct UUI_HUDItem_Pager_GTA3_C_SetImage_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_Pager_GTA3.UI_HUDItem_Pager_GTA3_C.SetImageColor
struct UUI_HUDItem_Pager_GTA3_C_SetImageColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               forceVisible;                                              // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_HUDItem_Pager_GTA3.UI_HUDItem_Pager_GTA3_C.SetWidgetTranslationPercent
struct UUI_HUDItem_Pager_GTA3_C_SetWidgetTranslationPercent_Params
{
	float                                              X;                                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Y;                                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_Pager_GTA3.UI_HUDItem_Pager_GTA3_C.ExecuteUbergraph_UI_HUDItem_Pager_GTA3
struct UUI_HUDItem_Pager_GTA3_C_ExecuteUbergraph_UI_HUDItem_Pager_GTA3_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
