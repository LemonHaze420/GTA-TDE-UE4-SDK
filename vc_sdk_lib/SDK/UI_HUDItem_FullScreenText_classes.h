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

// WidgetBlueprintGeneratedClass UI_HUDItem_FullScreenText.UI_HUDItem_FullScreenText_C
// 0x001C (FullSize[0x02E8] - InheritedSize[0x02CC])
class UUI_HUDItem_FullScreenText_C : public UUI_HUDItem_Base_C
{
public:
	unsigned char                                      UnknownData_1024[0x4];                                     // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnchors                                    OriginalAnchorPos;                                         // 0x02D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUDItem_FullScreenText.UI_HUDItem_FullScreenText_C");
		return ptr;
	}



	void GetMainContentCanvasSlot(class UCanvasPanelSlot** ContentCanvasSlot);
	void SetMainContentOriginalAnchors();
	void GetRichText(class URichTextBlock** Text);
	void UpdateOpacity(float Alpha);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetContentText(const struct FText& Text, const struct FLinearColor& FontColorOverride);
	void SetContentPercentOffset(float X, float Y);
	void ExecuteUbergraph_UI_HUDItem_FullScreenText(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
