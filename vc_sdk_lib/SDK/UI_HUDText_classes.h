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

// WidgetBlueprintGeneratedClass UI_HUDText.UI_HUDText_C
// 0x0070 (FullSize[0x0300] - InheritedSize[0x0290])
class UUI_HUDText_C : public UUI_DesignTimeUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  MainButtonText;                                            // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   TextScaleBox;                                              // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                              Font;                                                      // 0x02A8(0x0058) (Edit, BlueprintVisible, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUDText.UI_HUDText_C");
		return ptr;
	}



	void GetTextScaleBox(class UScaleBox** ScaleBox);
	void GetTextContentObject(class UTextBlock** MainButtonText);
	void Construct();
	void OnSynchronizeProperties();
	void ExecuteUbergraph_UI_HUDText(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
