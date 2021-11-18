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

// WidgetBlueprintGeneratedClass UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C
// 0x003C (FullSize[0x0308] - InheritedSize[0x02CC])
class UUI_HUDItem_SubtitleText_C : public UUI_HUDItem_Base_C
{
public:
	unsigned char                                      UnknownData_0NVJ[0x4];                                     // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UHorizontalBox*                              HorizontalBox_1;                                           // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                MainCanvas;                                                // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGTAScalableRichTextBlock*                   ScalableTextBox;                                           // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDataTable*                                  OverrideTextStyleSet;                                      // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 ExtraItem;                                                 // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 ExtraText;                                                 // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUDItem_SubtitleText.UI_HUDItem_SubtitleText_C");
		return ptr;
	}



	void GetCurrentTextObject(class URichTextBlock** TextBox);
	void UpdateMainText(const struct FText& InText, const struct FLinearColor& SpecifiedColor);
	void CreateOrUpdateAdditionalText(const struct FText& NewText, const struct FLinearColor& Color);
	void RemoveAdditionalText();
	void CreateAdditionalText();
	void CreateBar();
	void RemoveProgressBar();
	void CreateOrUpdateProgressBar(TArray<float>* Info, const struct FLinearColor& Color);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetImageColor(const struct FLinearColor& Color, bool forceVisible);
	void SetContentText(const struct FText& Text, const struct FLinearColor& FontColorOverride);
	void OnSynchronizeProperties();
	void SetContentPercentOffset(float X, float Y);
	void CustomFunctionWithFloats(const struct FString& FunctionName, TArray<float> Floats);
	void CustomFunctionWithColor(const struct FString& FunctionName, const struct FLinearColor& Color);
	void CustomFunctionWithFloat(const struct FString& FunctionName, float floatNum);
	void SetContentTextAdditional(const struct FText& Text, const struct FLinearColor& FontColorOverride);
	void RefreshAfterSettingsChange();
	void ExecuteUbergraph_UI_HUDItem_SubtitleText(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
