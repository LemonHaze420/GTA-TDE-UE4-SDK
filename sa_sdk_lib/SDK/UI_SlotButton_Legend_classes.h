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

// WidgetBlueprintGeneratedClass UI_SlotButton_Legend.UI_SlotButton_Legend_C
// 0x0020 (FullSize[0x05F8] - InheritedSize[0x05D8])
class UUI_SlotButton_Legend_C : public UUI_SlotButton_C
{
public:
	class UImage*                                      BackgroundImage;                                           // 0x05D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      MainImage;                                                 // 0x05E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    MainSizeBox;                                               // 0x05E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  Text;                                                      // 0x05F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SlotButton_Legend.UI_SlotButton_Legend_C");
		return ptr;
	}



	void OverrideBGImage(const struct FSlateBrush& InBrush);
	void SetLegendImage(class UTexture2D* Texture);
	void OverrideMainText(const struct FText& NewText);
	void SetFont(const struct FSlateFontInfo& NewFont);
	void UpdateBGColor();
	void UpdateTextColor();
	void InitSlotButton(class UGameterSettings* SettingsObject);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
