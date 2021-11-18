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

// Function UI_HUDItem_Mission_VC.UI_HUDItem_Mission_VC_C.UpdateText
struct UUI_HUDItem_Mission_VC_C_UpdateText_Params
{
};

// Function UI_HUDItem_Mission_VC.UI_HUDItem_Mission_VC_C.GetMainContentCanvasSlot
struct UUI_HUDItem_Mission_VC_C_GetMainContentCanvasSlot_Params
{
	class UCanvasPanelSlot*                            ContentCanvasSlot;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_Mission_VC.UI_HUDItem_Mission_VC_C.GetRichText
struct UUI_HUDItem_Mission_VC_C_GetRichText_Params
{
	class URichTextBlock*                              Text;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_Mission_VC.UI_HUDItem_Mission_VC_C.SetContentText
struct UUI_HUDItem_Mission_VC_C_SetContentText_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FLinearColor                                FontColorOverride;                                         // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_Mission_VC.UI_HUDItem_Mission_VC_C.Tick
struct UUI_HUDItem_Mission_VC_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUDItem_Mission_VC.UI_HUDItem_Mission_VC_C.Construct
struct UUI_HUDItem_Mission_VC_C_Construct_Params
{
};

// Function UI_HUDItem_Mission_VC.UI_HUDItem_Mission_VC_C.ExecuteUbergraph_UI_HUDItem_Mission_VC
struct UUI_HUDItem_Mission_VC_C_ExecuteUbergraph_UI_HUDItem_Mission_VC_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
