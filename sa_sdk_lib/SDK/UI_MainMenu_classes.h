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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_MainMenu.UI_MainMenu_C
// 0x0098 (FullSize[0x0489] - InheritedSize[0x03F1])
class UUI_MainMenu_C : public UUI_Menu_Base_BP_C
{
public:
	unsigned char                                      UnknownData_T1L7[0x7];                                     // 0x03F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMenuHelpText_Template_C*                    AcceptOptionsChangesHelp;                                  // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                BackgroundContainer;                                       // 0x0408(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      FillerImage_4;                                             // 0x0410(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              HelpContextBottomBox;                                      // 0x0418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                HelpContextItems;                                          // 0x0420(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                HolderCanvas;                                              // 0x0428(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                LeftPanels;                                                // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_UserInfo_C*                              LoginInfo;                                                 // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      LogoImage;                                                 // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                MainCanvas;                                                // 0x0448(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                MenuButtonPanel;                                           // 0x0450(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuHelpText_Template_C*                    SCSignIn;                                                  // 0x0458(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuHelpText_Template_C*                    SCSignUp;                                                  // 0x0460(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuHelpText_Template_C*                    SCUnlink;                                                  // 0x0468(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             SelectorWidget;                                            // 0x0470(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_AccountPicker_C*                  UI_Button_AccountPicker;                                   // 0x0478(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  VersionTextBox;                                            // 0x0480(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               ForceNoLegal;                                              // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MainMenu.UI_MainMenu_C");
		return ptr;
	}



	void GetLanguageTab(class ULanguageOptions_C** OutLanguageTab, int* IndexInWidgetSelector);
	void GetAccountPickerButton(class UUI_DesignTimeUserWidget** AccountPickerButtonWidget);
	bool CustomFunctionWithBoolReturn(const struct FString& FunctionString, bool* Handled);
	void GetLoginInfo(class UUI_DesignTimeUserWidget** LoginInfoWidget);
	void GetSocialClubTab(class UUI_SocialClub_C** OutSocialClubTab, int* IndexInWidgetSelector);
	void StartupChecks();
	void StartLegalScreens();
	void Password(bool OnIncorrect_Pass);
	void GetConfirmOptionHelpButton(class UWidget** ConfirmHelpObject);
	void ShowConfirmChangesHelpText(bool ShouldShow);
	void GetVersionNumber(class UWidget** VersionTextBox);
	void GetBackgroundContainer(class UCanvasPanel** CanvasPanel);
	void GetHolderCanvas(class UCanvasPanel** Canvas);
	void UseAltText(int Index, bool* ShouldUse);
	void GetSavesTab(class UUI_OptionsMenuTab_Game_C** OutSavesTab, int* IndexInWidgetSelector);
	void SetupLayout();
	void Setup_Misc();
	void OnSynchronizeProperties();
	void SetTemplate(class UGTAMainMenuUITemplate* InTemplate, bool IncludeSaveTab);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void OnPass(const struct FString& OutPass);
	void Destruct();
	void NoLegal();
	void CustomFunctionFromString(const struct FString& FunctionString);
	void ExecuteUbergraph_UI_MainMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
