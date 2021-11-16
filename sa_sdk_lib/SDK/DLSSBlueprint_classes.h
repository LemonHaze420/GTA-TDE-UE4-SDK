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

// Class DLSSBlueprint.DLSSLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDLSSLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DLSSBlueprint.DLSSLibrary");
		return ptr;
	}



	void SetDLSSSharpness(float Sharpness);
	void SetDLSSMode(DLSSBlueprint_EUDLSSMode DLSSMode);
	DLSSBlueprint_EUDLSSSupport QueryDLSSSupport();
	bool IsDLSSSupported();
	bool IsDLSSModeSupported(DLSSBlueprint_EUDLSSMode DLSSMode);
	TArray<DLSSBlueprint_EUDLSSMode> GetSupportedDLSSModes();
	float GetDLSSSharpness();
	void GetDLSSScreenPercentageRange(float* MinScreenPercentage, float* MaxScreenPercentage);
	void GetDLSSModeInformation(DLSSBlueprint_EUDLSSMode DLSSMode, const struct FVector2D& ScreenResolution, bool* bIsSupported, float* OptimalScreenPercentage, bool* bIsFixedScreenPercentage, float* MinScreenPercentage, float* MaxScreenPercentage, float* OptimalSharpness);
	DLSSBlueprint_EUDLSSMode GetDLSSMode();
	void GetDLSSMinimumDriverVersion(int* MinDriverVersionMajor, int* MinDriverVersionMinor);
	DLSSBlueprint_EUDLSSMode GetDefaultDLSSMode();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
