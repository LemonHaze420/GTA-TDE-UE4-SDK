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

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.GetSkyLightActor
struct ABP_GTA_ProceduralSky_C_GetSkyLightActor_Params
{
	class ASkyLight*                                   ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.GetMoonDirection
struct ABP_GTA_ProceduralSky_C_GetMoonDirection_Params
{
	struct FRotator                                    ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.EnableCloudMaterial
struct ABP_GTA_ProceduralSky_C_EnableCloudMaterial_Params
{
	bool                                               bEnabled;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateSkyVisibility
struct ABP_GTA_ProceduralSky_C_UpdateSkyVisibility_Params
{
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateLatentRotation
struct ABP_GTA_ProceduralSky_C_UpdateLatentRotation_Params
{
	class USceneComponent*                             Component;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    NewRotation;                                               // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.CheckSkyCapture
struct ABP_GTA_ProceduralSky_C_CheckSkyCapture_Params
{
	bool                                               bForce;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.SetRoadWetness
struct ABP_GTA_ProceduralSky_C_SetRoadWetness_Params
{
	float                                              Wetness;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.GetSkyHSV
struct ABP_GTA_ProceduralSky_C_GetSkyHSV_Params
{
	struct FVector                                     HSV;                                                       // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.SetCloudSettings
struct ABP_GTA_ProceduralSky_C_SetCloudSettings_Params
{
	float                                              ambient;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ShadowSize;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Translucency;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Background;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudDensity;                                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudWindSpeed;                                            // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateClouds
struct ABP_GTA_ProceduralSky_C_UpdateClouds_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.GetSunDirectionAtTime
struct ABP_GTA_ProceduralSky_C_GetSunDirectionAtTime_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rtation;                                                   // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateLightning
struct ABP_GTA_ProceduralSky_C_UpdateLightning_Params
{
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.SetTimeCycleDuration
struct ABP_GTA_ProceduralSky_C_SetTimeCycleDuration_Params
{
	float                                              RealTimeMinutes;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateMoon
struct ABP_GTA_ProceduralSky_C_UpdateMoon_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateSunParameters
struct ABP_GTA_ProceduralSky_C_UpdateSunParameters_Params
{
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateSkyLight
struct ABP_GTA_ProceduralSky_C_UpdateSkyLight_Params
{
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateExternalActors
struct ABP_GTA_ProceduralSky_C_UpdateExternalActors_Params
{
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateNightParameters
struct ABP_GTA_ProceduralSky_C_UpdateNightParameters_Params
{
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateLayersParameters
struct ABP_GTA_ProceduralSky_C_UpdateLayersParameters_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateCloudsParameters
struct ABP_GTA_ProceduralSky_C_UpdateCloudsParameters_Params
{
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateHorizonParameters
struct ABP_GTA_ProceduralSky_C_UpdateHorizonParameters_Params
{
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateCurves
struct ABP_GTA_ProceduralSky_C_UpdateCurves_Params
{
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateSkyParameters
struct ABP_GTA_ProceduralSky_C_UpdateSkyParameters_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UserConstructionScript
struct ABP_GTA_ProceduralSky_C_UserConstructionScript_Params
{
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.ReceiveBeginPlay
struct ABP_GTA_ProceduralSky_C_ReceiveBeginPlay_Params
{
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.ReceiveTick
struct ABP_GTA_ProceduralSky_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.SetTimeOfDay
struct ABP_GTA_ProceduralSky_C_SetTimeOfDay_Params
{
	float                                              TimeOfDay;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.PostConstructionScript
struct ABP_GTA_ProceduralSky_C_PostConstructionScript_Params
{
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.TimeChanged
struct ABP_GTA_ProceduralSky_C_TimeChanged_Params
{
	bool                                               bEditor;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.PreviewWeatherChanged
struct ABP_GTA_ProceduralSky_C_PreviewWeatherChanged_Params
{
	TEnumAsByte<GTABase_EGTAWeather>                   NewWeather;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.RecaptureSkyNextFrame
struct ABP_GTA_ProceduralSky_C_RecaptureSkyNextFrame_Params
{
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.DoSkyCapture
struct ABP_GTA_ProceduralSky_C_DoSkyCapture_Params
{
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.ResetRealTimeSky
struct ABP_GTA_ProceduralSky_C_ResetRealTimeSky_Params
{
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.CycleMoonSize
struct ABP_GTA_ProceduralSky_C_CycleMoonSize_Params
{
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.ExecuteUbergraph_BP_GTA_ProceduralSky
struct ABP_GTA_ProceduralSky_C_ExecuteUbergraph_BP_GTA_ProceduralSky_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.OnLightningPlayed__DelegateSignature
struct ABP_GTA_ProceduralSky_C_OnLightningPlayed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
