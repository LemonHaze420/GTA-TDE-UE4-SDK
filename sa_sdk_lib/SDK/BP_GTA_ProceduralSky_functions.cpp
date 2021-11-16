// Name: SanAndreas, Version: 1.0.0

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
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.GetSkyLightActor
//		Flags  -> ()
// Parameters:
//		class ASkyLight*                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class ASkyLight* ABP_GTA_ProceduralSky_C::GetSkyLightActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.GetSkyLightActor");

	ABP_GTA_ProceduralSky_C_GetSkyLightActor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.GetMoonDirection
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FRotator ABP_GTA_ProceduralSky_C::GetMoonDirection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.GetMoonDirection");

	ABP_GTA_ProceduralSky_C_GetMoonDirection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.EnableCloudMaterial
//		Flags  -> ()
// Parameters:
//		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ABP_GTA_ProceduralSky_C::EnableCloudMaterial(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.EnableCloudMaterial");

	ABP_GTA_ProceduralSky_C_EnableCloudMaterial_Params params {};
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateSkyVisibility
//		Flags  -> ()
// Parameters:
void ABP_GTA_ProceduralSky_C::UpdateSkyVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateSkyVisibility");

	ABP_GTA_ProceduralSky_C_UpdateSkyVisibility_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateLatentRotation
//		Flags  -> ()
// Parameters:
//		class USceneComponent*                             Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    NewRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GTA_ProceduralSky_C::UpdateLatentRotation(class USceneComponent* Component, const struct FRotator& NewRotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateLatentRotation");

	ABP_GTA_ProceduralSky_C_UpdateLatentRotation_Params params {};
	params.Component = Component;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.CheckSkyCapture
//		Flags  -> ()
// Parameters:
//		bool                                               bForce                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GTA_ProceduralSky_C::CheckSkyCapture(bool bForce)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.CheckSkyCapture");

	ABP_GTA_ProceduralSky_C_CheckSkyCapture_Params params {};
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.SetRoadWetness
//		Flags  -> ()
// Parameters:
//		float                                              Wetness                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GTA_ProceduralSky_C::SetRoadWetness(float Wetness)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.SetRoadWetness");

	ABP_GTA_ProceduralSky_C_SetRoadWetness_Params params {};
	params.Wetness = Wetness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.GetSkyHSV
//		Flags  -> ()
// Parameters:
//		struct FVector                                     HSV                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GTA_ProceduralSky_C::GetSkyHSV(struct FVector* HSV)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.GetSkyHSV");

	ABP_GTA_ProceduralSky_C_GetSkyHSV_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HSV != nullptr)
		*HSV = params.HSV;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.SetCloudSettings
//		Flags  -> ()
// Parameters:
//		float                                              ambient                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ShadowSize                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Translucency                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Background                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              CloudDensity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              CloudWindSpeed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GTA_ProceduralSky_C::SetCloudSettings(float ambient, float ShadowSize, float Translucency, float Background, float CloudDensity, float CloudWindSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.SetCloudSettings");

	ABP_GTA_ProceduralSky_C_SetCloudSettings_Params params {};
	params.ambient = ambient;
	params.ShadowSize = ShadowSize;
	params.Translucency = Translucency;
	params.Background = Background;
	params.CloudDensity = CloudDensity;
	params.CloudWindSpeed = CloudWindSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateClouds
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GTA_ProceduralSky_C::UpdateClouds(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateClouds");

	ABP_GTA_ProceduralSky_C_UpdateClouds_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.GetSunDirectionAtTime
//		Flags  -> ()
// Parameters:
//		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    Rtation                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GTA_ProceduralSky_C::GetSunDirectionAtTime(float Time, struct FRotator* Rtation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.GetSunDirectionAtTime");

	ABP_GTA_ProceduralSky_C_GetSunDirectionAtTime_Params params {};
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rtation != nullptr)
		*Rtation = params.Rtation;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateLightning
//		Flags  -> ()
// Parameters:
void ABP_GTA_ProceduralSky_C::UpdateLightning()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateLightning");

	ABP_GTA_ProceduralSky_C_UpdateLightning_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.SetTimeCycleDuration
//		Flags  -> ()
// Parameters:
//		float                                              RealTimeMinutes                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GTA_ProceduralSky_C::SetTimeCycleDuration(float RealTimeMinutes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.SetTimeCycleDuration");

	ABP_GTA_ProceduralSky_C_SetTimeCycleDuration_Params params {};
	params.RealTimeMinutes = RealTimeMinutes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateMoon
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GTA_ProceduralSky_C::UpdateMoon(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateMoon");

	ABP_GTA_ProceduralSky_C_UpdateMoon_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateSunParameters
//		Flags  -> ()
// Parameters:
void ABP_GTA_ProceduralSky_C::UpdateSunParameters()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateSunParameters");

	ABP_GTA_ProceduralSky_C_UpdateSunParameters_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateSkyLight
//		Flags  -> ()
// Parameters:
void ABP_GTA_ProceduralSky_C::UpdateSkyLight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateSkyLight");

	ABP_GTA_ProceduralSky_C_UpdateSkyLight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateExternalActors
//		Flags  -> ()
// Parameters:
void ABP_GTA_ProceduralSky_C::UpdateExternalActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateExternalActors");

	ABP_GTA_ProceduralSky_C_UpdateExternalActors_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateNightParameters
//		Flags  -> ()
// Parameters:
void ABP_GTA_ProceduralSky_C::UpdateNightParameters()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateNightParameters");

	ABP_GTA_ProceduralSky_C_UpdateNightParameters_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateLayersParameters
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GTA_ProceduralSky_C::UpdateLayersParameters(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateLayersParameters");

	ABP_GTA_ProceduralSky_C_UpdateLayersParameters_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateCloudsParameters
//		Flags  -> ()
// Parameters:
void ABP_GTA_ProceduralSky_C::UpdateCloudsParameters()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateCloudsParameters");

	ABP_GTA_ProceduralSky_C_UpdateCloudsParameters_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateHorizonParameters
//		Flags  -> ()
// Parameters:
void ABP_GTA_ProceduralSky_C::UpdateHorizonParameters()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateHorizonParameters");

	ABP_GTA_ProceduralSky_C_UpdateHorizonParameters_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateCurves
//		Flags  -> ()
// Parameters:
void ABP_GTA_ProceduralSky_C::UpdateCurves()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateCurves");

	ABP_GTA_ProceduralSky_C_UpdateCurves_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateSkyParameters
//		Flags  -> ()
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GTA_ProceduralSky_C::UpdateSkyParameters(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UpdateSkyParameters");

	ABP_GTA_ProceduralSky_C_UpdateSkyParameters_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UserConstructionScript
//		Flags  -> ()
// Parameters:
void ABP_GTA_ProceduralSky_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.UserConstructionScript");

	ABP_GTA_ProceduralSky_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.ReceiveBeginPlay
//		Flags  -> ()
void ABP_GTA_ProceduralSky_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.ReceiveBeginPlay");

	ABP_GTA_ProceduralSky_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GTA_ProceduralSky_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.ReceiveTick");

	ABP_GTA_ProceduralSky_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.SetTimeOfDay
//		Flags  -> ()
// Parameters:
//		float                                              TimeOfDay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GTA_ProceduralSky_C::SetTimeOfDay(float TimeOfDay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.SetTimeOfDay");

	ABP_GTA_ProceduralSky_C_SetTimeOfDay_Params params {};
	params.TimeOfDay = TimeOfDay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.PostConstructionScript
//		Flags  -> ()
void ABP_GTA_ProceduralSky_C::PostConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.PostConstructionScript");

	ABP_GTA_ProceduralSky_C_PostConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.TimeChanged
//		Flags  -> ()
// Parameters:
//		bool                                               bEditor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GTA_ProceduralSky_C::TimeChanged(bool bEditor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.TimeChanged");

	ABP_GTA_ProceduralSky_C_TimeChanged_Params params {};
	params.bEditor = bEditor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.PreviewWeatherChanged
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTAWeather>                   NewWeather                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GTA_ProceduralSky_C::PreviewWeatherChanged(TEnumAsByte<GTABase_EGTAWeather> NewWeather)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.PreviewWeatherChanged");

	ABP_GTA_ProceduralSky_C_PreviewWeatherChanged_Params params {};
	params.NewWeather = NewWeather;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.RecaptureSkyNextFrame
//		Flags  -> ()
void ABP_GTA_ProceduralSky_C::RecaptureSkyNextFrame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.RecaptureSkyNextFrame");

	ABP_GTA_ProceduralSky_C_RecaptureSkyNextFrame_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.DoSkyCapture
//		Flags  -> ()
void ABP_GTA_ProceduralSky_C::DoSkyCapture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.DoSkyCapture");

	ABP_GTA_ProceduralSky_C_DoSkyCapture_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.ResetRealTimeSky
//		Flags  -> ()
void ABP_GTA_ProceduralSky_C::ResetRealTimeSky()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.ResetRealTimeSky");

	ABP_GTA_ProceduralSky_C_ResetRealTimeSky_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.CycleMoonSize
//		Flags  -> ()
void ABP_GTA_ProceduralSky_C::CycleMoonSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.CycleMoonSize");

	ABP_GTA_ProceduralSky_C_CycleMoonSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.ExecuteUbergraph_BP_GTA_ProceduralSky
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_GTA_ProceduralSky_C::ExecuteUbergraph_BP_GTA_ProceduralSky(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.ExecuteUbergraph_BP_GTA_ProceduralSky");

	ABP_GTA_ProceduralSky_C_ExecuteUbergraph_BP_GTA_ProceduralSky_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.OnLightningPlayed__DelegateSignature
//		Flags  -> ()
void ABP_GTA_ProceduralSky_C::OnLightningPlayed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_GTA_ProceduralSky.BP_GTA_ProceduralSky_C.OnLightningPlayed__DelegateSignature");

	ABP_GTA_ProceduralSky_C_OnLightningPlayed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
