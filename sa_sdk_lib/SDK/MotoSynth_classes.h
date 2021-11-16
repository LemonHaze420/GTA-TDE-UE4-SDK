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

// Class MotoSynth.MotoSynthPreset
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UMotoSynthPreset : public UObject
{
public:
	struct FMotoSynthRuntimeSettings                   Settings;                                                  // 0x0028(0x0068) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MotoSynth.MotoSynthPreset");
		return ptr;
	}



};

// Class MotoSynth.MotoSynthSource
// 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
class UMotoSynthSource : public UObject
{
public:
	bool                                               bConvertTo8Bit;                                            // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1XUD[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DownSampleFactor;                                          // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          RPMCurve;                                                  // 0x0030(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<float>                                      SourceData;                                                // 0x00B8(0x0010) (ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected)
	TArray<int16_t>                                    SourceDataPCM;                                             // 0x00C8(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int                                                SourceSampleRate;                                          // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_7DNP[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGrainTableEntry>                    GrainTable;                                                // 0x00E0(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_LX2M[0x8];                                     // 0x00F0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MotoSynth.MotoSynthSource");
		return ptr;
	}



};

// Class MotoSynth.SynthComponentMoto
// 0x00C0 (FullSize[0x0780] - InheritedSize[0x06C0])
class USynthComponentMoto : public USynthComponent
{
public:
	class UMotoSynthPreset*                            MotoSynthPreset;                                           // 0x06C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RPM;                                                       // 0x06C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FMLV[0xB4];                                    // 0x06CC(0x00B4) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MotoSynth.SynthComponentMoto");
		return ptr;
	}



	void SetSettings(const struct FMotoSynthRuntimeSettings& InSettings);
	void SetRPM(float InRPM, float InTimeSec);
	bool IsEnabled();
	void GetRPMRange(float* OutMinRPM, float* OutMaxRPM);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
