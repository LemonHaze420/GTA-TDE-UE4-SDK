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

// BlueprintGeneratedClass VCWorld.VCWorld_C
// 0x000C (FullSize[0x0234] - InheritedSize[0x0228])
class AVCWorld_C : public AGTALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CurrentAdrenaline;                                         // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass VCWorld.VCWorld_C");
		return ptr;
	}



	void SetTimeOfDay(float Hours);
	void SetWeatherEffects(float CloudCoverage, float RainAmount, float SandstormAmount, float Wind, const struct FVector& WindDir, float ExtraSunny);
	void SetEnvironmentEffects(float Foggyness, float HeatHaze, float LightningFlash, float Riot);
	void SetLightColors(const struct FColor& ambient, const struct FColor& directional);
	void SetSkyColors(const struct FColor& skyBottom, const struct FColor& skyTop);
	void SetStreetlightAmount(float LightAmount, float LightDistance, float DecalFadeDistance);
	void SetWeatherImpactEffects(float RoadWetness, float WaveAmount);
	void SetupScalability(class AGTAScalability* ToSetup);
	void SetAdrenaline(float Amount);
	void SetCCTV(int Type);
	void ExecuteUbergraph_VCWorld(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
