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

// Function UI_SlotButton_Version.UI_SlotButton_Version_C.UpdateTextColor
struct UUI_SlotButton_Version_C_UpdateTextColor_Params
{
};

// Function UI_SlotButton_Version.UI_SlotButton_Version_C.OverrideMainText
struct UUI_SlotButton_Version_C_OverrideMainText_Params
{
	struct FText                                       NewText;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_SlotButton_Version.UI_SlotButton_Version_C.SetMainText
struct UUI_SlotButton_Version_C_SetMainText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_SlotButton_Version.UI_SlotButton_Version_C.SetHeight
struct UUI_SlotButton_Version_C_SetHeight_Params
{
	float                                              NewHeight;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton_Version.UI_SlotButton_Version_C.GetSlotButton
struct UUI_SlotButton_Version_C_GetSlotButton_Params
{
	class UButton*                                     SlotButton;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_SlotButton_Version.UI_SlotButton_Version_C.SetBackgroundColor
struct UUI_SlotButton_Version_C_SetBackgroundColor_Params
{
	struct FSlateColor                                 InColor;                                                   // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
