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

// BlueprintGeneratedClass BI_LightingSubLevel.BI_LightingSubLevel_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBI_LightingSubLevel_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BI_LightingSubLevel.BI_LightingSubLevel_C");
		return ptr;
	}



	void UpdateCCTV(int Type);
	void UpdateAdrenaline(float Amount);
	void UpdateLocationEffects(float Underwater, float Tunnel);
	void SetupScalability(class AGTAScalability* Scalability);
	void UpdateWeatherImpact(float RoadWetness, float WaveAmount);
	void UpdateSkyColors(const struct FColor& skyTop, const struct FColor& skyBottom);
	void UpdateLightColors(const struct FColor& directional, const struct FColor& ambient);
	void Update_Environment_Effects(float Foggyness, float Heat_Haze, float Lightning, float Riot);
	void UpdateWeatherEffects(float Cloud, float Rain, float Sandstorm, const struct FVector& WindDir, float WindPower, float ExtraSunny);
	void UpdateTimeOfDay(float Time);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
