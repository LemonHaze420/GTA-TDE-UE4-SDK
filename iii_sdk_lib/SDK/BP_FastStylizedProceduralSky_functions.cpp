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
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.GetSunDirectionAtTime
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    Rtation                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FastStylizedProceduralSky_C::GetSunDirectionAtTime(float Time, struct FRotator* Rtation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.GetSunDirectionAtTime");

	ABP_FastStylizedProceduralSky_C_GetSunDirectionAtTime_Params params {};
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rtation != nullptr)
		*Rtation = params.Rtation;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetTimeOfDayExternal
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      Preset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              TransitionDuration                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::SetTimeOfDayExternal(class UClass* Preset, float TransitionDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetTimeOfDayExternal");

	ABP_FastStylizedProceduralSky_C_SetTimeOfDayExternal_Params params {};
	params.Preset = Preset;
	params.TransitionDuration = TransitionDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateLightning
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      Preset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCurveFloat*                                 Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Intensity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::UpdateLightning(class UClass* Preset, class UCurveFloat* Scale, float Intensity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateLightning");

	ABP_FastStylizedProceduralSky_C_UpdateLightning_Params params {};
	params.Preset = Preset;
	params.Scale = Scale;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetLightning
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      Preset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCurveFloat*                                 Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Iterations                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::SetLightning(class UClass* Preset, class UCurveFloat* Scale, int Iterations)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetLightning");

	ABP_FastStylizedProceduralSky_C_SetLightning_Params params {};
	params.Preset = Preset;
	params.Scale = Scale;
	params.Iterations = Iterations;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetTimeCycleDuration
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              RealTimeMinutes                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::SetTimeCycleDuration(float RealTimeMinutes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetTimeCycleDuration");

	ABP_FastStylizedProceduralSky_C_SetTimeCycleDuration_Params params {};
	params.RealTimeMinutes = RealTimeMinutes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.LerpTimeOfDayPreset
//		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FTimeOfDayData                              From                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTimeOfDayData                              To                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTimeOfDayData                              StructOut                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::LerpTimeOfDayPreset(const struct FTimeOfDayData& From, const struct FTimeOfDayData& To, float Alpha, struct FTimeOfDayData* StructOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.LerpTimeOfDayPreset");

	ABP_FastStylizedProceduralSky_C_LerpTimeOfDayPreset_Params params {};
	params.From = From;
	params.To = To;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StructOut != nullptr)
		*StructOut = params.StructOut;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.Versioning
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_FastStylizedProceduralSky_C::Versioning()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.Versioning");

	ABP_FastStylizedProceduralSky_C_Versioning_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateMoon
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::UpdateMoon(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateMoon");

	ABP_FastStylizedProceduralSky_C_UpdateMoon_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetShadowFunction
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UMaterialInstanceConstant*                   Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::SetShadowFunction(class UMaterialInstanceConstant* Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetShadowFunction");

	ABP_FastStylizedProceduralSky_C_SetShadowFunction_Params params {};
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateShadowParameters
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_FastStylizedProceduralSky_C::UpdateShadowParameters()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateShadowParameters");

	ABP_FastStylizedProceduralSky_C_UpdateShadowParameters_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateSunParameters
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_FastStylizedProceduralSky_C::UpdateSunParameters()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateSunParameters");

	ABP_FastStylizedProceduralSky_C_UpdateSunParameters_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateSkyLight
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_FastStylizedProceduralSky_C::UpdateSkyLight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateSkyLight");

	ABP_FastStylizedProceduralSky_C_UpdateSkyLight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.LerpWeatherPreset
//		Flags  -> (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FWeatherData                                A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FWeatherData                                B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FWeatherData                                StructOut                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::LerpWeatherPreset(const struct FWeatherData& A, const struct FWeatherData& B, float Alpha, struct FWeatherData* StructOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.LerpWeatherPreset");

	ABP_FastStylizedProceduralSky_C_LerpWeatherPreset_Params params {};
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StructOut != nullptr)
		*StructOut = params.StructOut;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateExternalActors
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_FastStylizedProceduralSky_C::UpdateExternalActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateExternalActors");

	ABP_FastStylizedProceduralSky_C_UpdateExternalActors_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SampleCurveBySunHeight
//		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UCurveLinearColor*                           Curve                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Default                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::SampleCurveBySunHeight(class UCurveLinearColor* Curve, const struct FLinearColor& Default, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SampleCurveBySunHeight");

	ABP_FastStylizedProceduralSky_C_SampleCurveBySunHeight_Params params {};
	params.Curve = Curve;
	params.Default = Default;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateNightParameters
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_FastStylizedProceduralSky_C::UpdateNightParameters()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateNightParameters");

	ABP_FastStylizedProceduralSky_C_UpdateNightParameters_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateLayersParameters
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::UpdateLayersParameters(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateLayersParameters");

	ABP_FastStylizedProceduralSky_C_UpdateLayersParameters_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateCloudsParameters
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_FastStylizedProceduralSky_C::UpdateCloudsParameters()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateCloudsParameters");

	ABP_FastStylizedProceduralSky_C_UpdateCloudsParameters_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateHorizonParameters
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_FastStylizedProceduralSky_C::UpdateHorizonParameters()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateHorizonParameters");

	ABP_FastStylizedProceduralSky_C_UpdateHorizonParameters_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateCurves
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_FastStylizedProceduralSky_C::UpdateCurves()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateCurves");

	ABP_FastStylizedProceduralSky_C_UpdateCurves_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateSkyParameters
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::UpdateSkyParameters(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UpdateSkyParameters");

	ABP_FastStylizedProceduralSky_C_UpdateSkyParameters_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_FastStylizedProceduralSky_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.UserConstructionScript");

	ABP_FastStylizedProceduralSky_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.LightningTimeline__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ABP_FastStylizedProceduralSky_C::LightningTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.LightningTimeline__FinishedFunc");

	ABP_FastStylizedProceduralSky_C_LightningTimeline__FinishedFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.LightningTimeline__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ABP_FastStylizedProceduralSky_C::LightningTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.LightningTimeline__UpdateFunc");

	ABP_FastStylizedProceduralSky_C_LightningTimeline__UpdateFunc_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.ReceiveTick");

	ABP_FastStylizedProceduralSky_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_FastStylizedProceduralSky_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.ReceiveBeginPlay");

	ABP_FastStylizedProceduralSky_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetTimeOfDay
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              TimeOfDay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::SetTimeOfDay(float TimeOfDay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.SetTimeOfDay");

	ABP_FastStylizedProceduralSky_C_SetTimeOfDay_Params params {};
	params.TimeOfDay = TimeOfDay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.PlayLightning
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      Preset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCurveFloat*                                 Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Intensity                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::PlayLightning(class UClass* Preset, class UCurveFloat* Scale, float Delay, float Intensity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.PlayLightning");

	ABP_FastStylizedProceduralSky_C_PlayLightning_Params params {};
	params.Preset = Preset;
	params.Scale = Scale;
	params.Delay = Delay;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.PostConstructionScript
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_FastStylizedProceduralSky_C::PostConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.PostConstructionScript");

	ABP_FastStylizedProceduralSky_C_PostConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.TimeChanged
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bEditor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FastStylizedProceduralSky_C::TimeChanged(bool bEditor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.TimeChanged");

	ABP_FastStylizedProceduralSky_C_TimeChanged_Params params {};
	params.bEditor = bEditor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.ExecuteUbergraph_BP_FastStylizedProceduralSky
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_FastStylizedProceduralSky_C::ExecuteUbergraph_BP_FastStylizedProceduralSky(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.ExecuteUbergraph_BP_FastStylizedProceduralSky");

	ABP_FastStylizedProceduralSky_C_ExecuteUbergraph_BP_FastStylizedProceduralSky_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.OnLightningPlayed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABP_FastStylizedProceduralSky_C::OnLightningPlayed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FastStylizedProceduralSky.BP_FastStylizedProceduralSky_C.OnLightningPlayed__DelegateSignature");

	ABP_FastStylizedProceduralSky_C_OnLightningPlayed__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
