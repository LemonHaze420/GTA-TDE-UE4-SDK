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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass AdjustableControls.AdjustableControls_C
// 0x0740 (FullSize[0x09D0] - InheritedSize[0x0290])
class UAdjustableControls_C : public UUI_DesignTimeUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUI_Button_Base_C*                           BackButton;                                                // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Base_C*                           ControllerBackButton;                                      // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMenuHelpText_Template_C*                    ControllerBackHelp;                                        // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                ControllerButtons;                                         // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ControllerImage;                                           // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                ControllerLayout;                                          // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SlotButton_CenterMessage_C*              ControllerSlot_A;                                          // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SlotButton_CenterMessage_C*              ControllerSlot_B;                                          // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SlotButton_CenterMessage_C*              ControllerSlot_DPad_Down;                                  // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SlotButton_CenterMessage_C*              ControllerSlot_DPad_Left;                                  // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SlotButton_CenterMessage_C*              ControllerSlot_DPad_Right;                                 // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SlotButton_CenterMessage_C*              ControllerSlot_DPad_Up;                                    // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SlotButton_CenterMessage_C*              ControllerSlot_L1;                                         // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SlotButton_CenterMessage_C*              ControllerSlot_L2;                                         // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SlotButton_CenterMessage_C*              ControllerSlot_L3;                                         // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SlotButton_CenterMessage_C*              ControllerSlot_R1;                                         // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SlotButton_CenterMessage_C*              ControllerSlot_R2;                                         // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SlotButton_CenterMessage_C*              ControllerSlot_R3;                                         // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SlotButton_CenterMessage_C*              ControllerSlot_Select;                                     // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SlotButton_CenterMessage_C*              ControllerSlot_Start;                                      // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SlotButton_CenterMessage_C*              ControllerSlot_X;                                          // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SlotButton_CenterMessage_C*              ControllerSlot_Y;                                          // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SlotButton_Selection_C*                  ControllerTemplateSelect;                                  // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                ControllerUICanvas;                                        // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      FillerImage_4;                                             // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              HelpContextBottomBox;                                      // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SlotButton_Selection_C*                  InvertLook;                                                // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                KeyboardLayout;                                            // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                LeftControllerTab;                                         // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                LeftPanel;                                                 // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ScrollingSlotList_C*                     LeftSlotList;                                              // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SlotButton_CenterMessage_C*              LeftSlotMessageButton;                                     // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Base_C*                           ResetButton;                                               // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                RightControllerTab;                                        // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                RightPanel;                                                // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ScrollingSlotList_C*                     RightSlotList;                                             // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SlotButton_CenterMessage_C*              RightSlotMessageButton;                                    // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SlotButton_Selection_C*                  Vibration;                                                 // 0x03C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScrollListStyle                            CombinedSlotStyle;                                         // 0x03C8(0x0158) (Edit, BlueprintVisible)
	TArray<struct FText>                               SlotTitles;                                                // 0x0520(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonTemplateCombo                        NormalButtonTemplate;                                      // 0x0530(0x0348) (Edit, BlueprintVisible, HasGetValueTypeHash)
	class UClass*                                      ButtonTemplate;                                            // 0x0878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      SlotTemplate;                                              // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ButtonInteractSound[0x28];                                 // 0x0888(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FText                                       RestoreControlsMessage;                                    // 0x08B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      ParentTabbedLayout[0x28];                                  // 0x08C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class UConfirmationDialog_C*                       ListeningDialog;                                           // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GTABase_EGTAInputType>                 LastInputType;                                             // 0x08F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_H8JR[0x3];                                     // 0x08F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurrentSelectedControllerMode;                             // 0x08FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UControllerUI_Base_C*                        Current_ControllerUI;                                      // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 ControllerBackgroundColor;                                 // 0x0908(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 ControllerBackgroundColor_Selected;                        // 0x0930(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 ControllerFontColor;                                       // 0x0958(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 ControllerFontColor_Selected;                              // 0x0980(0x0028) (Edit, BlueprintVisible)
	unsigned char                                      ParentOptionsList[0x28];                                   // 0x09A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AdjustableControls.AdjustableControls_C");
		return ptr;
	}



	void SetupHelpButtons();
	void VibrationOptionOverride();
	void RefreshMappings();
	void InitAdjustableSlotButton(class UUI_SlotButton_C* SlotItem, class UButton** SlotButton);
	void SetupButtonsWithTemplate();
	void Move_Controller_UI_Above_Slot_Buttons(float UIOffsetY);
	void CreateControllerUI(class UControllerUI_Base_C** UI);
	void GetControllerUIClass(class UClass** ControllerUIClass);
	void SetupControlSchemeButton();
	void Setup_Top_Slot_Buttons_and_Positions(bool OnSynchronize, class UWidget* BelowButtonsWidget, class UWidget* AboveButtonsWidget, class UGameterSettings* SettingsObject, float* OffsetBelowButtons, class UWidget** LastSlotButtonWidget, class UWidget** FirstSlotButtonWidget);
	void UpdateControllerUI();
	void UpdateUI(TEnumAsByte<GTABase_EGTAInputType> CurrentInput);
	void GetControllerNavigationWidgets(int ArrayIndex, TArray<class UWidget*>* Array, bool IsLeft, TArray<class UWidget*>* OtherArray, class UWidget** Up, class UWidget** Down, class UWidget** Left, class UWidget** Right);
	void SetupControllerSlots(bool OnSynchronize, class UControllerUI_Base_C* ControllerUI);
	void SetupForTouch();
	void SetupForController(bool OnSynchronize);
	void OnSaveKeyboardControlsDialog(bool DidAccept);
	void OnResetKeyboardControlsDialog(bool DidAccept);
	bool TakeFocus();
	void InitAdjustableControlsMenu();
	void OnListeningDialogComplete(bool DidAccept);
	void AdjustButtonPressed(unsigned char InteractionType, int BoundValue, class UUI_SlotButton_C* SlotButton);
	void Show_Window(TEnumAsByte<GTABase_EGTAInputType> CurrentTypeToShow);
	void SetupForKeyboard();
	TEnumAsByte<GTABase_EGTAInputType> GetInputType();
	void SetupRightSlots();
	void CreateMappingSlot(const struct FText& Main_Text, const struct FText& Alt_Text, int Index, class UUI_ScrollingSlotList_C* ListToAddTo, bool IsLeftPanel, int BoundMapping);
	void SetupLeftSlots();
	void SetupSlotTitles();
	void UpdateButtons();
	void UpdateSlotStyle();
	void Construct();
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_1_ButtonDispatcher__DelegateSignature(unsigned char Interaction, int BoundValue);
	void ForceButtonsHovered();
	void ForceButtonsNormal();
	void ForceButtonsSelected();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ControllerTemplateSelect_K2Node_ComponentBoundEvent_3_DidUpdateSettings__DelegateSignature(bool RequiresOptionRefresh, const struct FName& PropertyNameToSelect);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_AdjustableControls(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
