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

// WidgetBlueprintGeneratedClass UI_HUDItem_Base.UI_HUDItem_Base_C
// 0x002C (FullSize[0x02CC] - InheritedSize[0x02A0])
class UUI_HUDItem_Base_C : public UUI_GTAHUDItem
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData_78LG[0x8];                                     // 0x02A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector4                                    LastInPos;                                                 // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   LastViewportSize;                                          // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DrawOffset;                                                // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUDItem_Base.UI_HUDItem_Base_C");
		return ptr;
	}



	void GetConvertedLocFromC__(float InLeft, float InTop, float InRight, float InBottom, float XMult, float YMult, float XOffset, float YOffset, float* OutLeft, float* OutTop, float* OutRight, float* OutBottom);
	void GetPosition(float* X, float* Y, float* Xmax, float* Ymax);
	void SetAnchors(float minX, float maxX, float minY, float maxY);
	void SetImageWithSprite(class UImage* ImageToChange, class UMaterial* Material, class UTexture2D* Texture, float U, float V, float ULength, float VLength);
	void MovePositionAndSize(float Left, float Top, float Right, float Bottom);
	void MakeDynamicOfType(class UImage* Image, class UMaterial* MatType, class UMaterialInstanceDynamic** DynamicMat);
	void SetImageWithColor(class UImage* ImageToChange, const struct FLinearColor& InColor, bool ForceNoVisibilityChange, bool forceVisible);
	void SetImageWithTexture(class UImage* ImageToChange, class UTexture2D* Texture, bool* DidChange);
	void SetupSpriteMaterialValues(class UMaterialInstanceDynamic* DynamicMat, class UTexture2D* InTexture, float U, float V, float ULength, float VLength);
	void SetVisible(bool IsVisible);
	void SetPosition(float X, float Y, float Xmax, float Ymax);
	void SetAnchorsInDrawer(float minX, float maxX, float minY, float maxY);
	void SetWidgetTranslationPercent(float X, float Y);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_UI_HUDItem_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
