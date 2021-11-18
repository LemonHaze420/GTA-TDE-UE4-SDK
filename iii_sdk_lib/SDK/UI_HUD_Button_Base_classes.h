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

// WidgetBlueprintGeneratedClass UI_HUD_Button_Base.UI_HUD_Button_Base_C
// 0x00AD (FullSize[0x0379] - InheritedSize[0x02CC])
class UUI_HUD_Button_Base_C : public UUI_HUDItem_Base_C
{
public:
	unsigned char                                      UnknownData_WICM[0x4];                                     // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            Hide;                                                      // 0x02D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Show;                                                      // 0x02E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                                ButtonCanvas;                                              // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                HelpCanvas;                                                // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Icon;                                                      // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Icon2;                                                     // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                TextCanvas;                                                // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterial*                                   SpriteMaterial;                                            // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      CurrentMappingWidget[0x28];                                // 0x0318(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FTimerHandle                                MappingTImerHandle;                                        // 0x0340(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      CurrentTextContent[0x28];                                  // 0x0348(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FTimerHandle                                TextTImerHandle;                                           // 0x0370(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               IgnoreTextTimer;                                           // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUD_Button_Base.UI_HUD_Button_Base_C");
		return ptr;
	}



	void Reset_Text_Content_Timer();
	void GetTextContent(class UUI_HUDText_C** Text);
	void DestroyTextContent();
	void CreateOrGetTextContent(class UUI_HUDText_C** Output);
	void Set_Main_Text(const struct FText& Text, const struct FLinearColor& Color);
	void GetMappingWidget(class UUI_HUD_MappingImage_C** Output);
	class UUI_HUD_MappingImage_C* CreateOrGetMappingWidget();
	void DestroyMappingWidget();
	void SetTextValue(const struct FText& InText, const struct FLinearColor& LinearColor, class UTextBlock* Target);
	void SetSpecificImageLocation(class UCanvasPanelSlot* Slot, float xMin, float yMin, float Xmax, float Ymax, bool Debug);
	void Set_Icon_Anchors(class UCanvasPanelSlot* Slot, const struct FAnchors& DefaultAnchor, float xMin, float Xmax, float yMin, float Ymax);
	void SetHelpImage(class UTexture2D* InTexture, float U, float V, float ULength, float VLength, const struct FLinearColor& InColor);
	void StartShowHide(bool DoShow);
	void SetImage(class UTexture2D* Texture);
	void SetImageColor(const struct FLinearColor& Color, bool forceVisible);
	void SetMappingImage(class UTexture2D* Tex, float U, float V, float ULength, float VLength, const struct FLinearColor& Color);
	void Construct();
	void OverrideMappingImageLocation(float XMinOverride, float XMaxOverride, float YMinOverride, float YMaxOverride);
	void SetSecondImageColor(const struct FLinearColor& Color);
	void SetImageOffsets(float xMin, float yMin, float Xmax, float Ymax);
	void SetImageAnchors(float xMin, float Xmax, float yMin, float Ymax);
	void SetContentText(const struct FText& Text, const struct FLinearColor& FontColorOverride);
	void SetContentTextAnchors(float xMin, float Xmax, float yMin, float Ymax);
	void SetImageWithSpriteSheet(class UTexture2D* Texture, float U, float V, float ULength, float VLength);
	void CheckMapping();
	void CheckTextContent();
	void ExecuteUbergraph_UI_HUD_Button_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
