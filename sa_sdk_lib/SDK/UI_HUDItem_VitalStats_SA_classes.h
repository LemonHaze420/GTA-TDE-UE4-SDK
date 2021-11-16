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

// WidgetBlueprintGeneratedClass UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C
// 0x0054 (FullSize[0x0320] - InheritedSize[0x02CC])
class UUI_HUDItem_VitalStats_SA_C : public UUI_HUDItem_Base_C
{
public:
	unsigned char                                      UnknownData_JXDG[0x4];                                     // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      BG1;                                                       // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      BG2;                                                       // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                Content;                                                   // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  DayText;                                                   // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                StatBox;                                                   // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                TitleBar;                                                  // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  TitleText;                                                 // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UUI_HUD_Text_Bar_SA_C*>               StatBlocks;                                                // 0x0310(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUDItem_VitalStats_SA.UI_HUDItem_VitalStats_SA_C");
		return ptr;
	}



	void ChangeContentSize(bool IsLarge);
	void DestroyStatBars();
	void CreateStatBars();
	void Construct();
	void CustomFunctionWithFloats(const struct FString& FunctionName, TArray<float> Floats);
	void CustomFunctionWithStrings(const struct FString& FunctionName, TArray<struct FString> Strings);
	void SetTotalWidgetColor(const struct FLinearColor& Color);
	void OnSynchronizeProperties();
	void SetContentText(const struct FText& Text, const struct FLinearColor& FontColorOverride);
	void SetContentTextAdditional(const struct FText& Text, const struct FLinearColor& FontColorOverride);
	void ExecuteUbergraph_UI_HUDItem_VitalStats_SA(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
