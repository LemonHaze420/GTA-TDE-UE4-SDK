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

// WidgetBlueprintGeneratedClass UI_HUDItem_Pager_GTA3.UI_HUDItem_Pager_GTA3_C
// 0x008F (FullSize[0x0408] - InheritedSize[0x0379])
class UUI_HUDItem_Pager_GTA3_C : public UUI_HUD_Button_Base_C
{
public:
	unsigned char                                      UnknownData_W212[0x7];                                     // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTexture2D*                                  PagerImage;                                                // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                                    TextAnchors;                                               // 0x0390(0x0010) (Edit, BlueprintVisible, NoDestructor)
	struct FString                                     TestText;                                                  // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FSlateFontInfo                              Font;                                                      // 0x03B0(0x0058) (Edit, BlueprintVisible, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUDItem_Pager_GTA3.UI_HUDItem_Pager_GTA3_C");
		return ptr;
	}



	void Construct();
	void OnSynchronizeProperties();
	void SetImage(class UTexture2D* Texture);
	void SetImageColor(const struct FLinearColor& Color, bool forceVisible);
	void SetWidgetTranslationPercent(float X, float Y);
	void ExecuteUbergraph_UI_HUDItem_Pager_GTA3(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
