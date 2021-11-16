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
// Parameters
//---------------------------------------------------------------------------

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.GetSunDirectionAtTime
struct ABP_FastStylizedProceduralSky_C_GetSunDirectionAtTime_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rtation;                                                   // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetTimeOfDayExternal
struct ABP_FastStylizedProceduralSky_C_SetTimeOfDayExternal_Params
{
	class UClass*                                      Preset;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TransitionDuration;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateLightning
struct ABP_FastStylizedProceduralSky_C_UpdateLightning_Params
{
	class UClass*                                      Preset;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 Scale;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Intensity;                                                 // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetLightning
struct ABP_FastStylizedProceduralSky_C_SetLightning_Params
{
	class UClass*                                      Preset;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 Scale;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Iterations;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetTimeCycleDuration
struct ABP_FastStylizedProceduralSky_C_SetTimeCycleDuration_Params
{
	float                                              RealTimeMinutes;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.LerpTimeOfDayPreset
struct ABP_FastStylizedProceduralSky_C_LerpTimeOfDayPreset_Params
{
	struct FTimeOfDayData                              From;                                                      // 0x0000(0x00A4)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimeOfDayData                              To;                                                        // 0x00A4(0x00A4)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Alpha;                                                     // 0x0148(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimeOfDayData                              StructOut;                                                 // 0x014C(0x00A4)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.Versioning
struct ABP_FastStylizedProceduralSky_C_Versioning_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateMoon
struct ABP_FastStylizedProceduralSky_C_UpdateMoon_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetShadowFunction
struct ABP_FastStylizedProceduralSky_C_SetShadowFunction_Params
{
	class UMaterialInstanceConstant*                   Material;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateShadowParameters
struct ABP_FastStylizedProceduralSky_C_UpdateShadowParameters_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateSunParameters
struct ABP_FastStylizedProceduralSky_C_UpdateSunParameters_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateSkyLight
struct ABP_FastStylizedProceduralSky_C_UpdateSkyLight_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.LerpWeatherPreset
struct ABP_FastStylizedProceduralSky_C_LerpWeatherPreset_Params
{
	struct FWeatherData                                A;                                                         // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeatherData                                B;                                                         // 0x0068(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Alpha;                                                     // 0x00D0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeatherData                                StructOut;                                                 // 0x00D4(0x0068)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateExternalActors
struct ABP_FastStylizedProceduralSky_C_UpdateExternalActors_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SampleCurveBySunHeight
struct ABP_FastStylizedProceduralSky_C_SampleCurveBySunHeight_Params
{
	class UCurveLinearColor*                           Curve;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Default;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateNightParameters
struct ABP_FastStylizedProceduralSky_C_UpdateNightParameters_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateLayersParameters
struct ABP_FastStylizedProceduralSky_C_UpdateLayersParameters_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateCloudsParameters
struct ABP_FastStylizedProceduralSky_C_UpdateCloudsParameters_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateHorizonParameters
struct ABP_FastStylizedProceduralSky_C_UpdateHorizonParameters_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateCurves
struct ABP_FastStylizedProceduralSky_C_UpdateCurves_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateSkyParameters
struct ABP_FastStylizedProceduralSky_C_UpdateSkyParameters_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UserConstructionScript
struct ABP_FastStylizedProceduralSky_C_UserConstructionScript_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.LightningTimeline__FinishedFunc
struct ABP_FastStylizedProceduralSky_C_LightningTimeline__FinishedFunc_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.LightningTimeline__UpdateFunc
struct ABP_FastStylizedProceduralSky_C_LightningTimeline__UpdateFunc_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.ReceiveTick
struct ABP_FastStylizedProceduralSky_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.ReceiveBeginPlay
struct ABP_FastStylizedProceduralSky_C_ReceiveBeginPlay_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetTimeOfDay
struct ABP_FastStylizedProceduralSky_C_SetTimeOfDay_Params
{
	float                                              TimeOfDay;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.PlayLightning
struct ABP_FastStylizedProceduralSky_C_PlayLightning_Params
{
	class UClass*                                      Preset;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 Scale;                                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Delay;                                                     // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Intensity;                                                 // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.PostConstructionScript
struct ABP_FastStylizedProceduralSky_C_PostConstructionScript_Params
{
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.TimeChanged
struct ABP_FastStylizedProceduralSky_C_TimeChanged_Params
{
	bool                                               bEditor;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.ExecuteUbergraph_BP_FastStylizedProceduralSky
struct ABP_FastStylizedProceduralSky_C_ExecuteUbergraph_BP_FastStylizedProceduralSky_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.OnLightningPlayed__DelegateSignature
struct ABP_FastStylizedProceduralSky_C_OnLightningPlayed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
