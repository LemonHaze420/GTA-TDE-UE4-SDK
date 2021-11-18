// Name: ViceCity, Version: 1.0.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00000000
//		Name   -> Function VCWorld.VCWorld_C.SetTimeOfDay
//		Flags  -> ()
// Parameters:
//		float                                              Hours                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVCWorld_C::SetTimeOfDay(float Hours)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VCWorld.VCWorld_C.SetTimeOfDay");

	AVCWorld_C_SetTimeOfDay_Params params {};
	params.Hours = Hours;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VCWorld.VCWorld_C.SetWeatherEffects
//		Flags  -> ()
// Parameters:
//		float                                              CloudCoverage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              RainAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              SandstormAmount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Wind                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     WindDir                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ExtraSunny                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVCWorld_C::SetWeatherEffects(float CloudCoverage, float RainAmount, float SandstormAmount, float Wind, const struct FVector& WindDir, float ExtraSunny)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VCWorld.VCWorld_C.SetWeatherEffects");

	AVCWorld_C_SetWeatherEffects_Params params {};
	params.CloudCoverage = CloudCoverage;
	params.RainAmount = RainAmount;
	params.SandstormAmount = SandstormAmount;
	params.Wind = Wind;
	params.WindDir = WindDir;
	params.ExtraSunny = ExtraSunny;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VCWorld.VCWorld_C.SetEnvironmentEffects
//		Flags  -> ()
// Parameters:
//		float                                              Foggyness                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              HeatHaze                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              LightningFlash                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Riot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVCWorld_C::SetEnvironmentEffects(float Foggyness, float HeatHaze, float LightningFlash, float Riot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VCWorld.VCWorld_C.SetEnvironmentEffects");

	AVCWorld_C_SetEnvironmentEffects_Params params {};
	params.Foggyness = Foggyness;
	params.HeatHaze = HeatHaze;
	params.LightningFlash = LightningFlash;
	params.Riot = Riot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VCWorld.VCWorld_C.SetLightColors
//		Flags  -> ()
// Parameters:
//		struct FColor                                      ambient                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FColor                                      directional                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVCWorld_C::SetLightColors(const struct FColor& ambient, const struct FColor& directional)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VCWorld.VCWorld_C.SetLightColors");

	AVCWorld_C_SetLightColors_Params params {};
	params.ambient = ambient;
	params.directional = directional;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VCWorld.VCWorld_C.SetSkyColors
//		Flags  -> ()
// Parameters:
//		struct FColor                                      skyBottom                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FColor                                      skyTop                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVCWorld_C::SetSkyColors(const struct FColor& skyBottom, const struct FColor& skyTop)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VCWorld.VCWorld_C.SetSkyColors");

	AVCWorld_C_SetSkyColors_Params params {};
	params.skyBottom = skyBottom;
	params.skyTop = skyTop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VCWorld.VCWorld_C.SetStreetlightAmount
//		Flags  -> ()
// Parameters:
//		float                                              LightAmount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              LightDistance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              DecalFadeDistance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVCWorld_C::SetStreetlightAmount(float LightAmount, float LightDistance, float DecalFadeDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VCWorld.VCWorld_C.SetStreetlightAmount");

	AVCWorld_C_SetStreetlightAmount_Params params {};
	params.LightAmount = LightAmount;
	params.LightDistance = LightDistance;
	params.DecalFadeDistance = DecalFadeDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VCWorld.VCWorld_C.SetWeatherImpactEffects
//		Flags  -> ()
// Parameters:
//		float                                              RoadWetness                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WaveAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVCWorld_C::SetWeatherImpactEffects(float RoadWetness, float WaveAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VCWorld.VCWorld_C.SetWeatherImpactEffects");

	AVCWorld_C_SetWeatherImpactEffects_Params params {};
	params.RoadWetness = RoadWetness;
	params.WaveAmount = WaveAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VCWorld.VCWorld_C.SetupScalability
//		Flags  -> ()
// Parameters:
//		class AGTAScalability*                             ToSetup                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVCWorld_C::SetupScalability(class AGTAScalability* ToSetup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VCWorld.VCWorld_C.SetupScalability");

	AVCWorld_C_SetupScalability_Params params {};
	params.ToSetup = ToSetup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VCWorld.VCWorld_C.SetAdrenaline
//		Flags  -> ()
// Parameters:
//		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVCWorld_C::SetAdrenaline(float Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VCWorld.VCWorld_C.SetAdrenaline");

	AVCWorld_C_SetAdrenaline_Params params {};
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VCWorld.VCWorld_C.SetCCTV
//		Flags  -> ()
// Parameters:
//		int                                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVCWorld_C::SetCCTV(int Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VCWorld.VCWorld_C.SetCCTV");

	AVCWorld_C_SetCCTV_Params params {};
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function VCWorld.VCWorld_C.ExecuteUbergraph_VCWorld
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AVCWorld_C::ExecuteUbergraph_VCWorld(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function VCWorld.VCWorld_C.ExecuteUbergraph_VCWorld");

	AVCWorld_C_ExecuteUbergraph_VCWorld_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
