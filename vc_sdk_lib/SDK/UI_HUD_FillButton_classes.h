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

// WidgetBlueprintGeneratedClass UI_HUD_FillButton.UI_HUD_FillButton_C
// 0x000F (FullSize[0x0388] - InheritedSize[0x0379])
class UUI_HUD_FillButton_C : public UUI_HUD_Button_Base_C
{
public:
	unsigned char                                      UnknownData_8ZZ6[0x7];                                     // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUD_FillButton.UI_HUD_FillButton_C");
		return ptr;
	}



	void SetImageFillAmmount(float Percentage);
	void SetupSecondImageFill(class UTexture2D* Texture, const struct FLinearColor& Color, float FillAmmount);
	void Construct();
	void SetSecondImageFill(class UTexture2D* Texture, const struct FLinearColor& FillColor, float FillAmmount);
	void SetSecondImageFillAmount(float FillAmmount);
	void SetImage(class UTexture2D* Texture);
	void ExecuteUbergraph_UI_HUD_FillButton(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
