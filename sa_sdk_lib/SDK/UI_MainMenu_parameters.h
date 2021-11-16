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

// Function UI_MainMenu.UI_MainMenu_C.GetLanguageTab
struct UUI_MainMenu_C_GetLanguageTab_Params
{
	class ULanguageOptions_C*                          OutLanguageTab;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                IndexInWidgetSelector;                                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MainMenu.UI_MainMenu_C.GetAccountPickerButton
struct UUI_MainMenu_C_GetAccountPickerButton_Params
{
	class UUI_DesignTimeUserWidget*                    AccountPickerButtonWidget;                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MainMenu.UI_MainMenu_C.CustomFunctionWithBoolReturn
struct UUI_MainMenu_C_CustomFunctionWithBoolReturn_Params
{
	struct FString                                     FunctionString;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Handled;                                                   // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function UI_MainMenu.UI_MainMenu_C.GetLoginInfo
struct UUI_MainMenu_C_GetLoginInfo_Params
{
	class UUI_DesignTimeUserWidget*                    LoginInfoWidget;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MainMenu.UI_MainMenu_C.GetSocialClubTab
struct UUI_MainMenu_C_GetSocialClubTab_Params
{
	class UUI_SocialClub_C*                            OutSocialClubTab;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                IndexInWidgetSelector;                                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MainMenu.UI_MainMenu_C.StartupChecks
struct UUI_MainMenu_C_StartupChecks_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.StartLegalScreens
struct UUI_MainMenu_C_StartLegalScreens_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.Password
struct UUI_MainMenu_C_Password_Params
{
	bool                                               OnIncorrect_Pass;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_MainMenu.UI_MainMenu_C.GetConfirmOptionHelpButton
struct UUI_MainMenu_C_GetConfirmOptionHelpButton_Params
{
	class UWidget*                                     ConfirmHelpObject;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MainMenu.UI_MainMenu_C.ShowConfirmChangesHelpText
struct UUI_MainMenu_C_ShowConfirmChangesHelpText_Params
{
	bool                                               ShouldShow;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_MainMenu.UI_MainMenu_C.GetVersionNumber
struct UUI_MainMenu_C_GetVersionNumber_Params
{
	class UWidget*                                     VersionTextBox;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MainMenu.UI_MainMenu_C.GetBackgroundContainer
struct UUI_MainMenu_C_GetBackgroundContainer_Params
{
	class UCanvasPanel*                                CanvasPanel;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MainMenu.UI_MainMenu_C.GetHolderCanvas
struct UUI_MainMenu_C_GetHolderCanvas_Params
{
	class UCanvasPanel*                                Canvas;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MainMenu.UI_MainMenu_C.UseAltText
struct UUI_MainMenu_C_UseAltText_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldUse;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_MainMenu.UI_MainMenu_C.GetSavesTab
struct UUI_MainMenu_C_GetSavesTab_Params
{
	class UUI_OptionsMenuTab_Game_C*                   OutSavesTab;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                IndexInWidgetSelector;                                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MainMenu.UI_MainMenu_C.SetupLayout
struct UUI_MainMenu_C_SetupLayout_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.Setup Misc
struct UUI_MainMenu_C_Setup_Misc_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.OnSynchronizeProperties
struct UUI_MainMenu_C_OnSynchronizeProperties_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.SetTemplate
struct UUI_MainMenu_C_SetTemplate_Params
{
	class UGTAMainMenuUITemplate*                      InTemplate;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IncludeSaveTab;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UI_MainMenu.UI_MainMenu_C.Tick
struct UUI_MainMenu_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_MainMenu.UI_MainMenu_C.Construct
struct UUI_MainMenu_C_Construct_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.OnPass
struct UUI_MainMenu_C_OnPass_Params
{
	struct FString                                     OutPass;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_MainMenu.UI_MainMenu_C.Destruct
struct UUI_MainMenu_C_Destruct_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.NoLegal
struct UUI_MainMenu_C_NoLegal_Params
{
};

// Function UI_MainMenu.UI_MainMenu_C.CustomFunctionFromString
struct UUI_MainMenu_C_CustomFunctionFromString_Params
{
	struct FString                                     FunctionString;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function UI_MainMenu.UI_MainMenu_C.ExecuteUbergraph_UI_MainMenu
struct UUI_MainMenu_C_ExecuteUbergraph_UI_MainMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
