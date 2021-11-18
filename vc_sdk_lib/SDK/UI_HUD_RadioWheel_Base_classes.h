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

// WidgetBlueprintGeneratedClass UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C
// 0x00FC (FullSize[0x0658] - InheritedSize[0x055C])
class UUI_HUD_RadioWheel_Base_C : public UUI_HUD_WeaponWheel_Base_C
{
public:
	unsigned char                                      UnknownData_H5UA[0x4];                                     // 0x055C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0560(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FRadioWheelColors                           ColorsOverride;                                            // 0x0568(0x00F0) (Edit, BlueprintVisible, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C");
		return ptr;
	}



	void GetWeaponWheelItemOffset(float* NewParam);
	void GetRadioWheelItemOffset(float* NewParam);
	void SetupSections(int NumSections);
	void AddTextToImages(TArray<struct FString> Array);
	void SetupImages(TArray<struct FSlotImageStruct>* Images);
	void SetSelection(int Index);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_UI_HUD_RadioWheel_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
