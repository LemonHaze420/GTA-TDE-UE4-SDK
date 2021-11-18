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

// WidgetBlueprintGeneratedClass UI_SlotButton_Bool.UI_SlotButton_Bool_C
// 0x0104 (FullSize[0x06DC] - InheritedSize[0x05D8])
class UUI_SlotButton_Bool_C : public UUI_SlotButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                                     BackButton;                                                // 0x05E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      BackImage;                                                 // 0x05E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ForwardButton;                                             // 0x05F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ForwardImage;                                              // 0x05F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image;                                                     // 0x0600(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    MainSizeBox;                                               // 0x0608(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  OptionNameText;                                            // 0x0610(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  SelectionText;                                             // 0x0618(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     SlotButton;                                                // 0x0620(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FText>                               SelectionNames;                                            // 0x0628(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                SelectedElement;                                           // 0x0638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IgnoreSettings;                                            // 0x063C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsBackButtonSelected;                                      // 0x063D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsForwardButtonSelected;                                   // 0x063E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A0FF[0x1];                                     // 0x063F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateBrush                                 ArrowBrush;                                                // 0x0640(0x0088) (Edit, BlueprintVisible)
	bool                                               ShouldArrowColorMatchText;                                 // 0x06C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SGQV[0x3];                                     // 0x06C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                ArrowColorOverride;                                        // 0x06CC(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SlotButton_Bool.UI_SlotButton_Bool_C");
		return ptr;
	}



	void ShouldShowConfirmation(bool IgnoreCurrentFocus, bool* DoConfirm);
	class UWidget* NavigateRight(SlateCore_EUINavigation Navigation);
	class UWidget* NavigateLeft(SlateCore_EUINavigation Navigation);
	void SetHeight(float NewHeight);
	void InitSlotButton(class UGameterSettings* SettingsObject);
	void SetBackgroundColor(const struct FSlateColor& InColor);
	void GetCurrentSettingText(struct FText* NewParam);
	void GetSlotButton(class UButton** SlotButton);
	void UpdateTextColor();
	void UpdateSettings(bool OverrideConfirmationLockout);
	void UpdateBGColor();
	void ToNumSelection(int SelectionValue);
	void PreviousSelection();
	void NextSelection();
	void InitSelectionStyle();
	void UpdateSettingForConfirmation();
	void BndEvt__ForwardButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void InteractedWithSelectionSlot(unsigned char InteractionType, int BoundValue, class UUI_SlotButton_C* SlotButton);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnSynchronizeProperties();
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__ForwardButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__ForwardButton_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_UI_SlotButton_Bool(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
