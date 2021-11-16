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

// WidgetBlueprintGeneratedClass UI_SlotButton_Slider.UI_SlotButton_Slider_C
// 0x0530 (FullSize[0x0B08] - InheritedSize[0x05D8])
class UUI_SlotButton_Slider_C : public UUI_SlotButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UEditableTextBox*                            EditableTextBox;                                           // 0x05E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image;                                                     // 0x05E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    MainSizeBox;                                               // 0x05F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                     MainSlider;                                                // 0x05F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  OptionNameText;                                            // 0x0600(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                                SliderBar;                                                 // 0x0608(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     SlotButton;                                                // 0x0610(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FProgressBarStyle                           ProgressBarStyle;                                          // 0x0618(0x01A0) (Edit, BlueprintVisible)
	struct FSliderStyle                                SliderStyle;                                               // 0x07B8(0x0340) (Edit, BlueprintVisible)
	struct FLinearColor                                SliderHandleColor;                                         // 0x0AF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SlotButton_Slider.UI_SlotButton_Slider_C");
		return ptr;
	}



	void UpdateSettingForConfirmation();
	void GetCurrentSettingText(struct FText* NewParam);
	float GetSliderStepSizeForController();
	void InitSliderStyle();
	void UpdateSliderWithValue(class USlider* Slider, float NewValue);
	class UWidget* NavigateRight(SlateCore_EUINavigation Navigation);
	class UWidget* NavigateLeft(SlateCore_EUINavigation Navigation);
	void SetHeight(float NewHeight);
	void GetSlotButton(class UButton** SlotButton);
	void UpdateBGColor();
	void UpdateTextColor();
	float GetPercent_1();
	void UpdateSettings(bool OverrideConfirmationLockout);
	void UpdateSlider(float InValue);
	void UpdateText(float InValue);
	void InitSlotButton(class UGameterSettings* SettingsObject);
	void SetBackgroundColor(const struct FSlateColor& InColor);
	void BndEvt__TextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void InteractedWithSliderSlot(unsigned char InteractionType, int BoundValue, class UUI_SlotButton_C* SlotButton);
	void BndEvt__MainSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void OnSynchronizeProperties();
	void BndEvt__MainSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature();
	void ExecuteUbergraph_UI_SlotButton_Slider(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
