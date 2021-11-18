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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_TabbedLayout.UI_TabbedLayout_C
// 0x02F8 (FullSize[0x0588] - InheritedSize[0x0290])
class UUI_TabbedLayout_C : public UUI_DesignTimeUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UScaleBox*                                   LeftBumperBox;                                             // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      LeftBumperImage;                                           // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   RightBumperBox;                                            // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      RightBumperImage;                                          // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                RightPanels;                                               // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              TabButtons;                                                // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSelector;                                            // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	unsigned char                                      OpenConfirmation[0x28];                                    // 0x02D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FTabbedMenuStyle                            TabStyle;                                                  // 0x02F8(0x0070) (Edit, BlueprintVisible)
	struct FScrollListStyle                            SlotStyle;                                                 // 0x0368(0x0158) (Edit, BlueprintVisible)
	struct FSlotListSlotClasses                        SlotClasses;                                               // 0x04C0(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	unsigned char                                      LastUserSelectedWidget[0x28];                              // 0x04E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               IsForceClosing_Confirmation;                               // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               UsingControllerIcons;                                      // 0x0509(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FJDQ[0x6];                                     // 0x050A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      TabMoveSound[0x28];                                        // 0x050A(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      SlotButtonInteractSound[0x28];                             // 0x0538(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      HoverSound[0x28];                                          // 0x0560(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_TabbedLayout.UI_TabbedLayout_C");
		return ptr;
	}



	void ShouldSkipEntry(int EntryIndex, bool* ShouldSkip);
	void SetupTabButtonNavigation();
	void LostFocus();
	void SetActiveTab(int TabIndex);
	bool TakeFocus();
	void UpdateBumperImageMaterials();
	class UGameterface* Get_Gameterface_BP();
	void UpdateButtonImages();
	void SetupButtonImages();
	void ResetTabs();
	bool IsUsingController();
	void HasTabConfirmationDialog(bool* Return, class UConfirmationDialog_C** Widget);
	void GetCurrentMenu(class UUI_Menu_Base_BP_C** OutMenu);
	bool HandleBack();
	void SetToTab(int Index, bool ForceNoFocusChange, bool ForceNoSound);
	void PrevTab();
	void NextTab();
	void GrabFocus();
	void UpdateFocusWidget();
	void OnConfirmationClose(bool DidAccept);
	void ShowConfirmationDialog(const struct FText& Message, const struct FText& ConfirmText, const struct FText& CancelText, bool ShouldRemoveCancel, class UConfirmationDialog_C** CreatedWidget);
	void AddTab(const struct FText& TabText, int TabPosition, class UUI_Button_Base_C** CreatedTab);
	void AddContentToSelector(class UClass* Widget_Class, class UWidgetSwitcher* Selector_to_add_to, class UUserWidget** ContentCreated);
	void UpdateButtonsOnInteract(TEnumAsByte<ButtonStateEnum_EButtonStateEnum> Interact_Type, int Bound_Value);
	void InteractedButton(TEnumAsByte<ButtonStateEnum_EButtonStateEnum> Interact_Type, int Bound_Value);
	void SetupTabs(TArray<class UUI_Button_Base_C*>* TabsButtonsCreated);
	void Construct();
	void TabUsed(unsigned char Interaction, int BoundValue);
	void OnSynchronizeProperties();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void CreateTabs();
	void DelayedSetToTab(int Index, bool ForceNoFocusChange, bool ForceNoSound);
	void ExecuteUbergraph_UI_TabbedLayout(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
