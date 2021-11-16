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

// WidgetBlueprintGeneratedClass UI_Menu_Base_BP.UI_Menu_Base_BP_C
// 0x0159 (FullSize[0x03F1] - InheritedSize[0x0298])
class UUI_Menu_Base_BP_C : public UUI_Menu_Base
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0298(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UGTAMainMenuUITemplate*                      MenuTemplate;                                              // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelWidget*                                MenuButtons;                                               // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                             Selector;                                                  // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MenuButtonOffset;                                          // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GTABase_EGTASaveTabState>              CurrentSaveTabState;                                       // 0x02BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AVNJ[0x3];                                     // 0x02BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurrentSaveIndexSelected;                                  // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_U200[0x4];                                     // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      LastUserSelectedWidget[0x28];                              // 0x02C4(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class UWidget*                                     LogoWidget;                                                // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     VersionWidget;                                             // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               WasJustUsingController;                                    // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               LastInputTypeWasController;                                // 0x0301(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ShouldShowSaveTab;                                         // 0x0302(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BuildOnConstruct;                                          // 0x0303(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DidConstruct;                                              // 0x0304(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SIG4[0x3];                                     // 0x0305(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      PlayInteractSound[0x28];                                   // 0x0305(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      PlayHoverSound[0x28];                                      // 0x0330(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class UUserWidget*                                 KeyListeningDialog;                                        // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DelayedGameLaunchSaveSlot;                                 // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DoingDelayedGameLaunch;                                    // 0x0364(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DoingDelayedExit;                                          // 0x0365(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TransitionHasFocus;                                        // 0x0366(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<GTABase_EGTASaveTabState>              SaveTabState;                                              // 0x0367(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DidAttemptConfirmOption;                                   // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsShowingConfirmation;                                     // 0x0369(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NQBN[0x6];                                     // 0x036A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAudioComponent*                             CurrentRadioSound;                                         // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      CurrentRadioCue[0x28];                                     // 0x0378(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FText                                       BrowserConfirmationDialog;                                 // 0x03A0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                LastLeftButtonSelected;                                    // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KUSU[0x4];                                     // 0x03BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UUserWidget*                                 WidgetBlockingInput;                                       // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsMissionRetry;                                            // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SkipNextHoverSound;                                        // 0x03C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsResuming;                                                // 0x03CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_R2FA[0x5];                                     // 0x03CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAudioComponent*                             CurrentDialogSound;                                        // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             CurrentSFXSound;                                           // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 CreatedBackgroundWidget;                                   // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeSinceBlocking;                                         // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DelayBeforeAllowingResumeButton;                           // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasLoggedIn;                                               // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Menu_Base_BP.UI_Menu_Base_BP_C");
		return ptr;
	}



	void GetLanguageTab(class ULanguageOptions_C** OutLanguageTab, int* IndexInWidgetSelector);
	void ForceOpenMap();
	void IsPauseMenuMapOpen(bool* IsOpen);
	void ShowAccountPickerButton(bool ShouldShow);
	void GetAccountPickerButton(class UUI_DesignTimeUserWidget** AccountPickerButtonWidget);
	void HasControllerDisconnectDialog(bool* Return, class UWidget** Widget);
	void ControllerDisconnectCallback(bool DidAccept);
	void CreateNewControllerDialog(const struct FText& DialogText);
	bool CustomFunctionWithBoolReturn(const struct FString& FunctionString, bool* Handled);
	void StopAllSamples();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void RefreshUserInfo();
	void GetLoginInfo(class UUI_DesignTimeUserWidget** LoginInfoWidget);
	void UpdateUserInfo(const struct FString& UserName, class UTexture2D* UserImage);
	void SetupHelpButtons();
	void StartSFXSample();
	void StartDialogSample();
	void StopSFXSample();
	void StopDialogSample();
	void StartupSound();
	void CloseExistingConfirmation();
	void CreateNewOkDialog(const struct FText& DialogText);
	void IsWidgetBlockingInput(bool* isBeingBlocked);
	void SetupSocialClubScreen(class UUI_SocialClub_C** SocialClubUI);
	void OnSocialClubSignUpConfirmation(bool DidConfirm);
	void OnSocialClubSignInConfirmation(bool DidConfirm);
	void CreateSocialClubSignUpConfirmation(class UUI_TabbedLayout_C* FromLayout);
	void CreateSocialClubSignInConfirmation(class UUI_TabbedLayout_C* FromLayout);
	void GetSocialClubTab(class UUI_SocialClub_C** OutSocialClubTab, int* IndexInWidgetSelector);
	void OnSocialClubUnlinkConfirmation(bool DidConfirm);
	void CreateSocialClubUnlinkConfirmation(class UUI_TabbedLayout_C* FromLayout);
	void SetupGenericTabbedLayout(class UUI_TabbedLayout_C** TabbedLayout);
	void IsLeftButtonAllowed(int Index, bool* Allowed);
	void IsPlatformAllowedExit(bool* CanExit);
	void CreateAndPlayRadioStation(class USoundCue* Sound);
	void UpdateSampleSounds();
	void Start_Radio(int Station);
	void StopRadio();
	void GetConfirmOptionHelpButton(class UWidget** ConfirmHelpObject);
	void ExtraButtonChecks();
	void ShowConfirmChangesHelpText(bool ShouldShow);
	void RefreshAllOptions();
	void UpdateTick(float dT);
	void UpdateOptions();
	void CheckForMenuTransition(bool* DidTransitionTakeFocus);
	void SetTransitionFocus(bool GiveTransitionFocus);
	void HandleTransition();
	void StartDelayedExit();
	void DoLaunchGameFromDelay(class UUITransition* CurrentTransition, bool* success);
	void IsInTransition(bool* IsInTransition);
	void Update_Delay_Fades(float dT);
	void RefreshGraphicsTab();
	void DelayedStartGame(int ForSaveSlot);
	void CallSelectedOnActiveTab();
	void SetActiveWidget(int Index);
	void LanguageUpdatedTasks();
	void HandleMapBack(bool* DidHandle);
	void EndMapInteract();
	void StartMapInteract();
	void GetLeftButtonOverrideImage(class UGTAMainMenuUITemplate* Template, int Index, class UTexture2D** Output);
	class UUserWidget* SetKeyListeningDialog(bool bTurnOn);
	void EndKeyListeningDialog();
	void StartKeyListeningDialog(class UUserWidget** Output_Dialog);
	void MiscSetup();
	void SetupTabsAndButtons();
	void SpecialTabStartupCode(class UObject* Tab);
	void Autosave_dialog_callback(bool DidAccept);
	void OnMissionRetryConfirmation(bool DidConfirm);
	void CreateMissionRetryConfirmation();
	void OnSaveCompleteDialogClosed(bool DidConfirm);
	void CreateSaveCompleteDialog(class UUI_TabbedLayout_C* FromLayout, bool WasSaveConfirmed);
	void IsResumeSelected();
	void GetResumeButton(class UUI_Button_Base_C** AsUI_Button_Base);
	void OnResumePageStart();
	void SetSlotClasses(class UUI_OptionsMenuTab_C* OptionsMenu);
	void Set_to_SaveTab(TEnumAsByte<GTABase_EGTASaveTabState> toState, int* IndexInWidgetSelector);
	void DoTabSpecial(int TabNum);
	void MoveToTabNum(int ToTab);
	void Alternate_Controller_Check(bool* DidJustChange);
	void IsPauseMenu(bool* IsPauseMenu);
	void HasConfirmationDialog(bool* Return, class UWidget** Widget);
	void BumperPressed(bool WasLeftButton);
	void GetNavigationButtonsForEntry(TArray<class UWidget*>* Array, int EntryNum, class UUI_Button_Base_C** Up, class UUI_Button_Base_C** Down);
	void SetupMainButtonsNavigation();
	void MoveFocusToNewlySelectedTab(bool* DidFocus);
	void ResetSelectedMainButtons();
	void UpdateMainButtonsForController();
	bool IsUsingController();
	TEnumAsByte<GTABase_EGTAInputType> GetCurrentInputType();
	void DefaultBackFunctionality(bool* DidExit);
	void BackPressed();
	void UpdateInputEvents(float dT);
	void SetUserFocusToSelectedWidget(bool CanTabTakeFocus);
	void OnExitGameConfirmation(bool DidConfirm);
	void CreateExitConfirmation();
	void IsDefaultSlotStyle(const struct FScrollListStyle& InStyle, bool* IsDefault);
	void GetVersionNumber(class UWidget** VersionTextBox);
	void SetMainAnchorsAndOffsets();
	void GetBackgroundContainer(class UCanvasPanel** CanvasPanel);
	void GetHolderCanvas(class UCanvasPanel** Canvas);
	void Set_BackgroundAndIcon();
	void IsDefaultMargin(const struct FMargin& InAnchor, bool* IsZero);
	void UpdateFocusWidget();
	void SetInitialUserFocus();
	void UseAltText(int Index, bool* ShouldUse);
	void UpdateButtonsOnInteract(TEnumAsByte<ButtonStateEnum_EButtonStateEnum> InteractButton, int BoundValue);
	void SetCurrentSaveTabState(TEnumAsByte<GTABase_EGTASaveTabState> NewSaveTabState, class UUI_TabbedLayout_C* FromTabbedLayout);
	void GetSavesTab(class UUI_OptionsMenuTab_Game_C** OutSavesTab, int* IndexInWidgetSelector);
	void InteractedSaveStateButtonPressed(int SaveNumber, class UUI_TabbedLayout_C* FromTabbedLayout);
	void Refresh_Saves();
	void OnDeleteSave(bool success);
	void OnLoadSave(bool success);
	void DidConfirmSaveState(bool DidAccept);
	void OnNewGameConfirmation(bool DidConfirm);
	void CreateNewGameConfirmation(class UUI_TabbedLayout_C* FromLayout);
	void CreateSaveConfirmation(class UUI_TabbedLayout_C* FromLayout);
	void SetupOptionsMenuTab(class UUI_OptionsMenuTab_C** options_menu);
	void AddEmptyTab();
	void CreateMainBaseButtonFromClass(class UClass* ButtonClass, const struct FText& ButtonText, int ValueToBind, class UTexture2D* SelectedImageOverride, class UUI_Button_Base_C** OutButton);
	void InteractedButton(unsigned char InteractionType, int BoundValue);
	void SetupMainTabSelector();
	void InitVariables(class UPanelWidget* MenuButtons, class UWidgetSwitcher* Selector, class UWidget* Logo);
	void SetupSaveMenu(class UUI_OptionsMenuTab_C* SaveMenu);
	void SetLeftButtons();
	void IsDefaultAnchor(const struct FAnchors& InAnchor, bool* IsZero);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetTemplate(class UGTAMainMenuUITemplate* InTemplate, bool IncludeSaveTab);
	void OnSynchronizeProperties();
	void SetVersionNumber(const struct FString& VersionNum);
	void SetMenuToSpecificGameTab(TEnumAsByte<GTABase_EGTASaveTabState> toState);
	void DelayedSaveGameConfirm(bool WasSaveConfirmed);
	void SetMenuToMissionRetry();
	void GrabFocus();
	void Construct();
	void Destruct();
	void PeriodicScreenModeCheck();
	void CustomFunctionFromString(const struct FString& FunctionString);
	void OnConfirmOptionButton();
	void OnOptionConfirmationStarted();
	void EndMenuRadio();
	void StartMenuRadio(int Station);
	void CustomFunctionFromStringWithText(const struct FString& FunctionString, const struct FText& UsableText);
	void StartMenuDialog();
	void EndMenuDialogue();
	void EndMenuSFX();
	void StartMenuSFX();
	void SCSignUp();
	void SCSignIn();
	void SCSignOut();
	void SaveDataInSlotEvent(bool success, int SlotIndex);
	void DeleteDataInSlotEvent(bool success, int SlotIndex);
	void LoadDataInSlotEvent(bool success, int SlotIndex);
	void ExecuteUbergraph_UI_Menu_Base_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
