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

// WidgetBlueprintGeneratedClass UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C
// 0x00DC (FullSize[0x03A8] - InheritedSize[0x02CC])
class UUI_HUDItem_TitleText_Timer_C : public UUI_HUDItem_Base_C
{
public:
	unsigned char                                      UnknownData_QOX2[0x4];                                     // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UScaleBox*                                   ExtraItemScaleBox;                                         // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                MainCanvas;                                                // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              MainHorizontalBox;                                         // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                              RichText;                                                  // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   TextScaleBox;                                              // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDataTable*                                  OverrideTextStyleSet;                                      // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 ExtraItem;                                                 // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                              DefaultFont;                                               // 0x0310(0x0058) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        TextAlignment;                                             // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Y9U6[0x7];                                     // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       TestString;                                                // 0x0370(0x0018) (Edit, BlueprintVisible)
	float                                              BarSizeOverride;                                           // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                L;                                                         // 0x038C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L6K0[0x4];                                     // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      BarClass;                                                  // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C");
		return ptr;
	}



	void CreateBar(TEnumAsByte<UMG_ESlateSizeRule> Size_Rule, const struct FVector2D& SizeBoxOverride);
	void CreateOrUpdateBar(float NewValue);
	void UpdateTimerText(const struct FText& InText, const struct FLinearColor& SpecifiedColor);
	void SetPosition(float X, float Y, float Xmax, float Ymax);
	void SetImage(class UTexture2D* Texture);
	void SetImageColor(const struct FLinearColor& Color, bool forceVisible);
	void CustomFunctionWithFloat(const struct FString& FunctionName, float floatNum);
	void CustomFunction(const struct FString& FunctionName);
	void SetContentText(const struct FText& Text, const struct FLinearColor& FontColorOverride);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void SetContentPercentOffset(float X, float Y);
	void OnSynchronizeProperties();
	void ExecuteUbergraph_UI_HUDItem_TitleText_Timer(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
