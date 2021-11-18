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

// BlueprintGeneratedClass UniversalGameSettings.UniversalGameSettings_C
// 0x0000 (FullSize[0x0320] - InheritedSize[0x0320])
class UUniversalGameSettings_C : public UGameterSettings
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass UniversalGameSettings.UniversalGameSettings_C");
		return ptr;
	}



	TArray<struct FText> GetListOfFidelityOptionNamesFromSettings(TEnumAsByte<GTABase_EGTAPlatforms> PlatformOverride, bool IsEditor);
	void GetPlatformFidelitySettings(TEnumAsByte<GTABase_EGTAPlatforms> PlatformOverride, bool Editor, struct FGTAFidelitySettings* PlatformSetting, bool* Found);
	int GetFidelityOptionsNum(TEnumAsByte<GTABase_EGTAPlatforms> PlatformOverride, bool IsEditor);
	void IsRunning4K(bool* _4kOrGreater);
	void GetPlatformFidelityOption(const struct FName& PlatformName, struct FGTAFidelitySettings* PlatformSetting, bool* Found);
	class UGTAFidelityOption* GetCurrentFidelityOption(int CurrentSelection, TEnumAsByte<GTABase_EGTAPlatforms> PlatformOverride, bool IsEditor);
	class UClass* GetPlatformDefaults(TEnumAsByte<GTABase_EGTAPlatforms> PlatformOverride, bool IsEditor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
