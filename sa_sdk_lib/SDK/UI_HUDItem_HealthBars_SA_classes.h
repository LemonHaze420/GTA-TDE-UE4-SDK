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

// WidgetBlueprintGeneratedClass UI_HUDItem_HealthBars_SA.UI_HUDItem_HealthBars_SA_C
// 0x00DC (FullSize[0x03A8] - InheritedSize[0x02CC])
class UUI_HUDItem_HealthBars_SA_C : public UUI_HUDItem_Base_C
{
public:
	unsigned char                                      UnknownData_77ZR[0x4];                                     // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                                MainCanvas;                                                // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBoxContainer;                                      // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDataTable*                                  OverrideTextStyleSet;                                      // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                                 extraItem;                                                 // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                              DefaultFont;                                               // 0x02F8(0x0058) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        TextAlignment;                                             // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0AT1[0x7];                                     // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       TestString;                                                // 0x0358(0x0018) (Edit, BlueprintVisible)
	float                                              BarSizeOverride;                                           // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                L;                                                         // 0x0374(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N38C[0x4];                                     // 0x0384(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      BarClass;                                                  // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       TestString2;                                               // 0x0390(0x0018) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUDItem_HealthBars_SA.UI_HUDItem_HealthBars_SA_C");
		return ptr;
	}



	void UpdateBars(const struct FString& FunctionName, TArray<float>* Array);
	void AlignText(const struct FString& AlignName);
	void CreateNewVerticalEntry();
	void UpdateStrings(const struct FString& Selection, TArray<struct FString> TargetArray);
	void SetElementNum(int NumItems);
	void Set_Text_for_Element(int Index, bool IsMainText, const struct FText& TextValue, bool SetColor_, const struct FLinearColor& Color);
	void UpdateTimerText(const struct FText& InText, const struct FLinearColor& SpecifiedColor, class URichTextBlock* TextToUpdate);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetContentText(const struct FText& Text, const struct FLinearColor& FontColorOverride);
	void OnSynchronizeProperties();
	void SetContentPercentOffset(float X, float Y);
	void SetPosition(float X, float Y, float Xmax, float Ymax);
	void SetImage(class UTexture2D* Texture);
	void SetImageColor(const struct FLinearColor& Color, bool forceVisible);
	void CustomFunctionWithFloat(const struct FString& FunctionName, float floatNum);
	void CustomFunction(const struct FString& FunctionName);
	void SetContentTextAdditional(const struct FText& Text, const struct FLinearColor& FontColorOverride);
	void CustomFunctionWithStrings(const struct FString& FunctionName, TArray<struct FString> Strings);
	void CustomFunctionWithInteger(const struct FString& FunctionName, int integer);
	void CustomFunctionWithColor(const struct FString& FunctionName, const struct FLinearColor& Color);
	void CustomFunctionWithColors(const struct FString& FunctionName, TArray<struct FLinearColor> Colors);
	void CustomFunctionWithFloats(const struct FString& FunctionName, TArray<float> Floats);
	void ExecuteUbergraph_UI_HUDItem_HealthBars_SA(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
