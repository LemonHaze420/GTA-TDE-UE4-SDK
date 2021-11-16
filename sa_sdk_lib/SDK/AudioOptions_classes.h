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

// WidgetBlueprintGeneratedClass AudioOptions.AudioOptions_C
// 0x0008 (FullSize[0x0538] - InheritedSize[0x0530])
class UAudioOptions_C : public UUI_OptionsList_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0530(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AudioOptions.AudioOptions_C");
		return ptr;
	}



	void OnRestoreDefaultsConfirmationCallback(bool DidAccept);
	void OnOptionSelectionChanged(const struct FName& OptionName, bool Selected);
	void OptionChanged(const struct FName& OptionName);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PlayRadio();
	void StopRadio();
	void PlayDialog();
	void PlaySFX();
	void ExecuteUbergraph_AudioOptions(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
