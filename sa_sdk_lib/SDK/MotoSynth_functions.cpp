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
//		Name   -> Function MotoSynth.SynthComponentMoto.SetSettings
//		Flags  -> ()
// Parameters:
//		struct FMotoSynthRuntimeSettings                   InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void USynthComponentMoto::SetSettings(const struct FMotoSynthRuntimeSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MotoSynth.SynthComponentMoto.SetSettings");

	USynthComponentMoto_SetSettings_Params params {};
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MotoSynth.SynthComponentMoto.SetRPM
//		Flags  -> ()
// Parameters:
//		float                                              InRPM                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              InTimeSec                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMoto::SetRPM(float InRPM, float InTimeSec)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MotoSynth.SynthComponentMoto.SetRPM");

	USynthComponentMoto_SetRPM_Params params {};
	params.InRPM = InRPM;
	params.InTimeSec = InTimeSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MotoSynth.SynthComponentMoto.IsEnabled
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USynthComponentMoto::IsEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MotoSynth.SynthComponentMoto.IsEnabled");

	USynthComponentMoto_IsEnabled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MotoSynth.SynthComponentMoto.GetRPMRange
//		Flags  -> ()
// Parameters:
//		float                                              OutMinRPM                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              OutMaxRPM                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USynthComponentMoto::GetRPMRange(float* OutMinRPM, float* OutMaxRPM)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MotoSynth.SynthComponentMoto.GetRPMRange");

	USynthComponentMoto_GetRPMRange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutMinRPM != nullptr)
		*OutMinRPM = params.OutMinRPM;
	if (OutMaxRPM != nullptr)
		*OutMaxRPM = params.OutMaxRPM;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
