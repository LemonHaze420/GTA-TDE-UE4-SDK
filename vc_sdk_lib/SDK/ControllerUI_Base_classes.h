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

// WidgetBlueprintGeneratedClass ControllerUI_Base.ControllerUI_Base_C
// 0x01C0 (FullSize[0x0450] - InheritedSize[0x0290])
class UControllerUI_Base_C : public UUI_DesignTimeUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UImage*                                      BackgroundImage;                                           // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                ButtonText;                                                // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ControllerImage;                                           // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      LeftArrow;                                                 // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   MainScaleBox;                                              // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      RightArrow;                                                // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ToggleButton;                                              // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              ToggleHolder;                                              // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  ToggleText;                                                // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                                  ImageOverride;                                             // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FControllerButtonLayout>             ButtonLayouts;                                             // 0x02E8(0x0010) (Edit, BlueprintVisible)
	struct FSlateFontInfo                              MappingFont;                                               // 0x02F8(0x0058) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FAnchors                                    MainScaleBoxAnchor;                                        // 0x0350(0x0010) (Edit, BlueprintVisible, NoDestructor)
	struct FAnchors                                    ToggleAnchors;                                             // 0x0360(0x0010) (Edit, BlueprintVisible, NoDestructor)
	int                                                CurrentToggleValue;                                        // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HXPE[0x4];                                     // 0x0374(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FText>                               ToggleValueTexts;                                          // 0x0378(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                                 SelectedTextColor;                                         // 0x0388(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 NormalTextColor;                                           // 0x03B0(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 SelectedBackgroundColor;                                   // 0x03D8(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 NormalBackgroundColor;                                     // 0x0400(0x0028) (Edit, BlueprintVisible)
	unsigned char                                      InteractSound[0x28];                                       // 0x0428(0x0028) UNKNOWN PROPERTY: SoftObjectProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ControllerUI_Base.ControllerUI_Base_C");
		return ptr;
	}



	void SetFontColors(const struct FSlateColor& NormalColor, const struct FSlateColor& SelectedColor);
	void GetCurrentToggleTextType(int* CurrentType);
	void GetToggleValueTexts(TArray<struct FText>* FullTextValues);
	void PlayInteractSound();
	void SetBackgroundColors(const struct FSlateColor& NormalColor, const struct FSlateColor& SelectedColor);
	void UpdateTextAndBackgroundColors();
	void SetupNavigation(class UWidget* Up, class UWidget* Down);
	void CreateButtonValues();
	void Set_Toggle_Value(int NewValue);
	class UWidget* OnToggleNext(SlateCore_EUINavigation Navigation);
	class UWidget* OnTogglePrevious(SlateCore_EUINavigation Navigation);
	void GetToggleButton(class UButton** ToggleButton);
	void GetCorrectedButtonValueForC__(TEnumAsByte<ControllerButtonIDDefinitions_EControllerButtonIDDefinitions> InValue, int* C___Value);
	void SetupControllerText();
	void GetMappingObjects(TArray<class USimpleControllerMappingText_C*>* ReturnArray1);
	class USimpleControllerMappingText_C* Create_Mapping_Text(const struct FControllerButtonLayout& ControllerButtonLayout, int ArrayIndex);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnSynchronizeProperties();
	void BndEvt__ToggleButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ControllerUI_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
