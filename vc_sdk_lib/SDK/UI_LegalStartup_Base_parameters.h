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

// Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.DoSkip
struct UUI_LegalStartup_Base_C_DoSkip_Params
{
};

// Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.AllowMenuControl
struct UUI_LegalStartup_Base_C_AllowMenuControl_Params
{
	bool                                               allow_menu_control;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.SetFocusToMenu
struct UUI_LegalStartup_Base_C_SetFocusToMenu_Params
{
};

// Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.UpdateSkipImage
struct UUI_LegalStartup_Base_C_UpdateSkipImage_Params
{
	bool                                               ValidImage;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.Update Skip
struct UUI_LegalStartup_Base_C_Update_Skip_Params
{
	bool                                               DidSkip;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.CleanupScreens
struct UUI_LegalStartup_Base_C_CleanupScreens_Params
{
};

// Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.UpdateScreens
struct UUI_LegalStartup_Base_C_UpdateScreens_Params
{
	float                                              dT;                                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.CreateScreens
struct UUI_LegalStartup_Base_C_CreateScreens_Params
{
};

// Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.Construct
struct UUI_LegalStartup_Base_C_Construct_Params
{
};

// Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.Tick
struct UUI_LegalStartup_Base_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.SetBackgroundColor
struct UUI_LegalStartup_Base_C_SetBackgroundColor_Params
{
	struct FSlateColor                                 TintColor;                                                 // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.BndEvt__SkipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UUI_LegalStartup_Base_C_BndEvt__SkipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UI_LegalStartup_Base.UI_LegalStartup_Base_C.ExecuteUbergraph_UI_LegalStartup_Base
struct UUI_LegalStartup_Base_C_ExecuteUbergraph_UI_LegalStartup_Base_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
