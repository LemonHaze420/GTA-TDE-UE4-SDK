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

// WidgetBlueprintGeneratedClass UI_HUD_Button_TwoImage.UI_HUD_Button_TwoImage_C
// 0x000F (FullSize[0x0388] - InheritedSize[0x0379])
class UUI_HUD_Button_TwoImage_C : public UUI_HUD_Button_Base_C
{
public:
	unsigned char                                      UnknownData_CVLD[0x7];                                     // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUD_Button_TwoImage.UI_HUD_Button_TwoImage_C");
		return ptr;
	}



	void SetSecondImage(class UTexture2D* Texture);
	void SetSecondImageColor(const struct FLinearColor& Color);
	void SetSecondImageAnchors(float xMin, float Xmax, float yMin, float Ymax);
	void SetImageAnchors(float xMin, float Xmax, float yMin, float Ymax);
	void SetSecondImageOffsets(float xMin, float yMin, float Xmax, float Ymax);
	void ExecuteUbergraph_UI_HUD_Button_TwoImage(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
