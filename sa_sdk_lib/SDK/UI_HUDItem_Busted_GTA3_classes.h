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

// WidgetBlueprintGeneratedClass UI_HUDItem_Busted_GTA3.UI_HUDItem_Busted_GTA3_C
// 0x0020 (FullSize[0x0308] - InheritedSize[0x02E8])
class UUI_HUDItem_Busted_GTA3_C : public UUI_HUDItem_FullScreenText_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Image_375;                                                 // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                              RichText;                                                  // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   TextScaleBox;                                              // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUDItem_Busted_GTA3.UI_HUDItem_Busted_GTA3_C");
		return ptr;
	}



	void GetMainContentCanvasSlot(class UCanvasPanelSlot** ContentCanvasSlot);
	void GetRichText(class URichTextBlock** Text);
	void Construct();
	void ExecuteUbergraph_UI_HUDItem_Busted_GTA3(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
