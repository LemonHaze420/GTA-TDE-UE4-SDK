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

// BlueprintGeneratedClass SAWorld.SAWorld_C
// 0x0024 (FullSize[0x024C] - InheritedSize[0x0228])
class ASAWorld_C : public AGTALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UObject*                                     SkySequence;                                               // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    UpdateTimeOfDay;                                           // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              CurrentAdrenaline;                                         // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SAWorld.SAWorld_C");
		return ptr;
	}



	void SetTimeOfDay(float Hours);
	void SetWeatherEffects(float CloudCoverage, float RainAmount, float SandstormAmount, float Wind, const struct FVector& WindDir, float ExtraSunny);
	void SetEnvironmentEffects(float Foggyness, float HeatHaze, float LightningFlash, float RIOT);
	void SetLightColors(const struct FColor& ambient, const struct FColor& directional);
	void SetSkyColors(const struct FColor& skyBottom, const struct FColor& skyTop);
	void SetStreetlightAmount(float LightAmount, float LightDistance, float DecalFadeDistance);
	void SetWeatherImpactEffects(float RoadWetness, float WaveAmount);
	void SetupScalability(class AGTAScalability* ToSetup);
	void SetLocationEffects(float UnderwaterAmt, float TunnelAmt);
	void SetAdrenaline(float Amount);
	void ExecuteUbergraph_SAWorld(int EntryPoint);
	void UpdateTimeOfDay__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
