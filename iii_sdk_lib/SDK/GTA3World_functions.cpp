// Name: GTA III, Version: 1.0.0

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
//		Offset -> 0x0188C180
//		Name   -> Function GTA3World.GTA3World_C.SetTimeOfDay
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Hours                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGTA3World_C::SetTimeOfDay(float Hours)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTA3World.GTA3World_C.SetTimeOfDay");

	AGTA3World_C_SetTimeOfDay_Params params {};
	params.Hours = Hours;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTA3World.GTA3World_C.SetWeatherEffects
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		float                                              CloudCoverage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              RainAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              SandstormAmount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Wind                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     WindDir                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ExtraSunny                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGTA3World_C::SetWeatherEffects(float CloudCoverage, float RainAmount, float SandstormAmount, float Wind, const struct FVector& WindDir, float ExtraSunny)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTA3World.GTA3World_C.SetWeatherEffects");

	AGTA3World_C_SetWeatherEffects_Params params {};
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
//		Offset -> 0x0188C180
//		Name   -> Function GTA3World.GTA3World_C.SetEnvironmentEffects
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Foggyness                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              HeatHaze                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              LightningFlash                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Riot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGTA3World_C::SetEnvironmentEffects(float Foggyness, float HeatHaze, float LightningFlash, float Riot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTA3World.GTA3World_C.SetEnvironmentEffects");

	AGTA3World_C_SetEnvironmentEffects_Params params {};
	params.Foggyness = Foggyness;
	params.HeatHaze = HeatHaze;
	params.LightningFlash = LightningFlash;
	params.Riot = Riot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTA3World.GTA3World_C.SetLightColors
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FColor                                      ambient                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FColor                                      directional                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGTA3World_C::SetLightColors(const struct FColor& ambient, const struct FColor& directional)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTA3World.GTA3World_C.SetLightColors");

	AGTA3World_C_SetLightColors_Params params {};
	params.ambient = ambient;
	params.directional = directional;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTA3World.GTA3World_C.SetSkyColors
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FColor                                      skyBottom                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FColor                                      skyTop                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGTA3World_C::SetSkyColors(const struct FColor& skyBottom, const struct FColor& skyTop)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTA3World.GTA3World_C.SetSkyColors");

	AGTA3World_C_SetSkyColors_Params params {};
	params.skyBottom = skyBottom;
	params.skyTop = skyTop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTA3World.GTA3World_C.SetStreetlightAmount
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              LightAmount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              LightDistance                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              DecalFadeDistance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGTA3World_C::SetStreetlightAmount(float LightAmount, float LightDistance, float DecalFadeDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTA3World.GTA3World_C.SetStreetlightAmount");

	AGTA3World_C_SetStreetlightAmount_Params params {};
	params.LightAmount = LightAmount;
	params.LightDistance = LightDistance;
	params.DecalFadeDistance = DecalFadeDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTA3World.GTA3World_C.SetupScalability
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AGTAScalability*                             ToSetup                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGTA3World_C::SetupScalability(class AGTAScalability* ToSetup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTA3World.GTA3World_C.SetupScalability");

	AGTA3World_C_SetupScalability_Params params {};
	params.ToSetup = ToSetup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTA3World.GTA3World_C.SetAdrenaline
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGTA3World_C::SetAdrenaline(float Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTA3World.GTA3World_C.SetAdrenaline");

	AGTA3World_C_SetAdrenaline_Params params {};
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTA3World.GTA3World_C.SetWeatherImpactEffects
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              RoadWetness                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WaveAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGTA3World_C::SetWeatherImpactEffects(float RoadWetness, float WaveAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTA3World.GTA3World_C.SetWeatherImpactEffects");

	AGTA3World_C_SetWeatherImpactEffects_Params params {};
	params.RoadWetness = RoadWetness;
	params.WaveAmount = WaveAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function GTA3World.GTA3World_C.ExecuteUbergraph_GTA3World
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGTA3World_C::ExecuteUbergraph_GTA3World(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GTA3World.GTA3World_C.ExecuteUbergraph_GTA3World");

	AGTA3World_C_ExecuteUbergraph_GTA3World_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
