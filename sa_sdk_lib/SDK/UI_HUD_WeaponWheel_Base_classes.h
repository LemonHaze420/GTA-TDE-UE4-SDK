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

// WidgetBlueprintGeneratedClass UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C
// 0x0290 (FullSize[0x055C] - InheritedSize[0x02CC])
class UUI_HUD_WeaponWheel_Base_C : public UUI_HUDItem_Base_C
{
public:
	unsigned char                                      UnknownData_LS6W[0x4];                                     // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                                MainCanvas;                                                // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  MainText;                                                  // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   TextScaleBox;                                              // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  WeaponAmmo;                                                // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                WeaponImageContainer;                                      // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  WeaponName;                                                // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   WeaponScaleBox;                                            // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      WheelImage;                                                // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UUserWidget*>                         WheelWidgets;                                              // 0x0318(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UMaterialInstance*                           WheelMaterial;                                             // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ItemSizeMultiplier;                                        // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LastIndexSelected;                                         // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinWheelRadius;                                            // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxWheelRadius;                                            // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GetTimeSinceLastSelection;                                 // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SelectionFadeTime;                                         // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ItemWidget;                                                // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnchors                                    AreaAnchors;                                               // 0x0350(0x0010) (Edit, BlueprintVisible, NoDestructor)
	float                                              MinWheelRadiusOverride;                                    // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxWheelRadiusOverride;                                    // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                              MainTextFont;                                              // 0x0368(0x0058) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSlateColor                                 MainTextColor;                                             // 0x03C0(0x0028) (Edit, BlueprintVisible)
	float                                              ItemAngleOffset;                                           // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BackgroundFadeTime;                                        // 0x03EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   MainTextShadowOffset;                                      // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MainTextShadowColor;                                       // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                              AmmoTextFont;                                              // 0x0408(0x0058) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSlateColor                                 AmmoTextColor;                                             // 0x0460(0x0028) (Edit, BlueprintVisible)
	struct FVector2D                                   AmmoTextShadowOffset;                                      // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                AmmoTextShadowColor;                                       // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                              WeaponTextFont;                                            // 0x04A0(0x0058) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSlateColor                                 WeaponTextColor;                                           // 0x04F8(0x0028) (Edit, BlueprintVisible)
	struct FVector2D                                   WeaponTextShadowOffset;                                    // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                WeaponTextShadowColor;                                     // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bUseWeaponText;                                            // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9719[0x3];                                     // 0x0539(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                AvailableColor;                                            // 0x053C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                UnavailableColor;                                          // 0x054C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C");
		return ptr;
	}



	void GetWeaponWheelItemOffset(float* NewParam);
	void GetRadioWheelItemOffset(float* NewParam);
	void SetupDynamicMat();
	void AddTextToImages(TArray<struct FString> Array);
	void SetupStrings(TArray<struct FString>* Images);
	void SetupNewText(const struct FString& string, int Index, int Length);
	void UpdateSelection();
	void SetSelection(int Index);
	class UUserWidget* Setup_New_Image(class UObject* Texture, int Index, int Length, bool Enabled, const struct FString& string, const struct FString& extraString);
	void SetupSections(int NumSections);
	void SetupImages(TArray<struct FSlotImageStruct>* Images);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnSynchronizeProperties();
	void Construct();
	void CustomFunctionWithObjects(const struct FString& FunctionName, TArray<struct FSlotImageStruct> Objects);
	void CustomFunctionWithInteger(const struct FString& FunctionName, int integer);
	void CustomFunctionWithStrings(const struct FString& FunctionName, TArray<struct FString> Strings);
	void CustomFunctionWithFloat(const struct FString& FunctionName, float floatNum);
	void ExecuteUbergraph_UI_HUD_WeaponWheel_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
