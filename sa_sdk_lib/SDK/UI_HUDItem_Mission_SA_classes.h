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

// WidgetBlueprintGeneratedClass UI_HUDItem_Mission_SA.UI_HUDItem_Mission_SA_C
// 0x003C (FullSize[0x0324] - InheritedSize[0x02E8])
class UUI_HUDItem_Mission_SA_C : public UUI_HUDItem_FullScreenText_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      BackgroundImage;                                           // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                ContentCanvas;                                             // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_HUDItem_MultiLineLargeText_C*            multiline_richtext;                                        // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              BackgroundVerticalPadding;                                 // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BackgroundHorizontalPadding;                               // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                     BackgroundOriginalMargins;                                 // 0x0310(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                              ExtraBottomPadding;                                        // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUDItem_Mission_SA.UI_HUDItem_Mission_SA_C");
		return ptr;
	}



	void UpdateText();
	void GetMainContentCanvasSlot(class UCanvasPanelSlot** ContentCanvasSlot);
	void GetRichText(class URichTextBlock** Text);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetContentText(const struct FText& Text, const struct FLinearColor& FontColorOverride);
	void ExecuteUbergraph_UI_HUDItem_Mission_SA(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
