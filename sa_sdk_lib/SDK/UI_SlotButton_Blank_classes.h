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

// WidgetBlueprintGeneratedClass UI_SlotButton_Blank.UI_SlotButton_Blank_C
// 0x0018 (FullSize[0x05F0] - InheritedSize[0x05D8])
class UUI_SlotButton_Blank_C : public UUI_SlotButton_C
{
public:
	class UImage*                                      Image;                                                     // 0x05D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    MainSizeBox;                                               // 0x05E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     SlotButton;                                                // 0x05E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SlotButton_Blank.UI_SlotButton_Blank_C");
		return ptr;
	}



	void SetHeight(float NewHeight);
	void GetSlotButton(class UButton** SlotButton);
	void SetBackgroundColor(const struct FSlateColor& InColor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
