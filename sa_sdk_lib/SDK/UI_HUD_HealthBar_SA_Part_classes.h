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

// WidgetBlueprintGeneratedClass UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C
// 0x0104 (FullSize[0x03D0] - InheritedSize[0x02CC])
class UUI_HUD_HealthBar_SA_Part_C : public UUI_HUDItem_Base_C
{
public:
	unsigned char                                      UnknownData_XBFH[0x4];                                     // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUI_HUDBar_C*                                Bar;                                                       // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   BarScaleBox;                                               // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                MainCanvas;                                                // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              MainHorizontalBox;                                         // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                              RichText;                                                  // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                              RichText2;                                                 // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   RightTextScaleBox;                                         // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                                 extraItem;                                                 // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       TestString;                                                // 0x0318(0x0018) (Edit, BlueprintVisible)
	class UDataTable*                                  OverrideTextStyleSet;                                      // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        LeftTextAlignment;                                         // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_I6W1[0x7];                                     // 0x0339(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSlateFontInfo                              DefaultFont;                                               // 0x0340(0x0058) (Edit, BlueprintVisible, HasGetValueTypeHash)
	class UClass*                                      BarClass;                                                  // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BarSizeOverride;                                           // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                PrimaryBarColor;                                           // 0x03A4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                SecondaryBarColor;                                         // 0x03B4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        RightTextAlignment;                                        // 0x03C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CKB8[0x3];                                     // 0x03C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  BoarderImageOverride;                                      // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUD_HealthBar_SA_Part.UI_HUD_HealthBar_SA_Part_C");
		return ptr;
	}



	void SetBarColor(const struct FLinearColor& Color);
	void SetTextColor(class URichTextBlock* RichTextObject, const struct FLinearColor& NewColor);
	void UpdateBar(float Value);
	void UpdateTimerText(const struct FText& Text, class URichTextBlock* TextObject, bool SetColor_, const struct FLinearColor& Color);
	void Construct();
	void OnSynchronizeProperties();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetContentText(const struct FText& Text, const struct FLinearColor& FontColorOverride);
	void SetContentPercentOffset(float X, float Y);
	void SetPosition(float X, float Y, float Xmax, float Ymax);
	void SetImage(class UTexture2D* Texture);
	void SetImageColor(const struct FLinearColor& Color, bool forceVisible);
	void CustomFunctionWithFloat(const struct FString& FunctionName, float floatNum);
	void CustomFunction(const struct FString& FunctionName);
	void Reset();
	void SetContentTextAdditional(const struct FText& Text, const struct FLinearColor& FontColorOverride);
	void ExecuteUbergraph_UI_HUD_HealthBar_SA_Part(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
