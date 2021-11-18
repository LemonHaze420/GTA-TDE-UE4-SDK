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

// WidgetBlueprintGeneratedClass UI_SplashScreen_VC.UI_SplashScreen_VC_C
// 0x001C (FullSize[0x02E8] - InheritedSize[0x02CC])
class UUI_SplashScreen_VC_C : public UUI_HUDItem_Base_C
{
public:
	unsigned char                                      UnknownData_YU3S[0x4];                                     // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      MainImage;                                                 // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  MainText;                                                  // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SplashScreen_VC.UI_SplashScreen_VC_C");
		return ptr;
	}



	void SetImage(class UTexture2D* Texture);
	void SetImageColor(const struct FLinearColor& Color, bool forceVisible);
	void SetContentText(const struct FText& Text, const struct FLinearColor& FontColorOverride);
	void ExecuteUbergraph_UI_SplashScreen_VC(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
