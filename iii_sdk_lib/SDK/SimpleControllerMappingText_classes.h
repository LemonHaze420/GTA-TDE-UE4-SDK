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

// WidgetBlueprintGeneratedClass SimpleControllerMappingText.SimpleControllerMappingText_C
// 0x001B (FullSize[0x02AB] - InheritedSize[0x0290])
class USimpleControllerMappingText_C : public UUI_DesignTimeUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UScaleBox*                                   Scale;                                                     // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Text;                                                      // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment;                                         // 0x02A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ControllerButtonIDDefinitions_EControllerButtonIDDefinitions> ButtonValue;                                               // 0x02AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SimpleControllerMappingText.SimpleControllerMappingText_C");
		return ptr;
	}



	void SetTextColor(const struct FSlateColor& InColorAndOpacity);
	void SetAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<SlateCore_EVerticalAlignment> VerticalAlignment, TEnumAsByte<ControllerButtonIDDefinitions_EControllerButtonIDDefinitions> ControllerButton);
	void SetTextFont(const struct FSlateFontInfo& InFontInfo);
	void SetTextValue(const struct FText& NewText);
	void Construct();
	void OnSynchronizeProperties();
	void ExecuteUbergraph_SimpleControllerMappingText(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
