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
//		Name   -> Function UniversalGameSettings.UniversalGameSettings_C.GetListOfFidelityOptionNamesFromSettings
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<GTABase_EGTAPlatforms>                 PlatformOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsEditor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<struct FText>                               ReturnValue                                                (Parm, OutParm, ReturnParm)
TArray<struct FText> UUniversalGameSettings_C::GetListOfFidelityOptionNamesFromSettings(TEnumAsByte<GTABase_EGTAPlatforms> PlatformOverride, bool IsEditor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UniversalGameSettings.UniversalGameSettings_C.GetListOfFidelityOptionNamesFromSettings");

	UUniversalGameSettings_C_GetListOfFidelityOptionNamesFromSettings_Params params {};
	params.PlatformOverride = PlatformOverride;
	params.IsEditor = IsEditor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UniversalGameSettings.UniversalGameSettings_C.GetPlatformFidelitySettings
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<GTABase_EGTAPlatforms>                 PlatformOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Editor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
//		struct FGTAFidelitySettings                        PlatformSetting                                            (Parm, OutParm)
//		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUniversalGameSettings_C::GetPlatformFidelitySettings(TEnumAsByte<GTABase_EGTAPlatforms> PlatformOverride, bool Editor, struct FGTAFidelitySettings* PlatformSetting, bool* Found)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UniversalGameSettings.UniversalGameSettings_C.GetPlatformFidelitySettings");

	UUniversalGameSettings_C_GetPlatformFidelitySettings_Params params {};
	params.PlatformOverride = PlatformOverride;
	params.Editor = Editor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlatformSetting != nullptr)
		*PlatformSetting = params.PlatformSetting;
	if (Found != nullptr)
		*Found = params.Found;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UniversalGameSettings.UniversalGameSettings_C.GetFidelityOptionsNum
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<GTABase_EGTAPlatforms>                 PlatformOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsEditor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UUniversalGameSettings_C::GetFidelityOptionsNum(TEnumAsByte<GTABase_EGTAPlatforms> PlatformOverride, bool IsEditor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UniversalGameSettings.UniversalGameSettings_C.GetFidelityOptionsNum");

	UUniversalGameSettings_C_GetFidelityOptionsNum_Params params {};
	params.PlatformOverride = PlatformOverride;
	params.IsEditor = IsEditor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UniversalGameSettings.UniversalGameSettings_C.IsRunning4K
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               _4kOrGreater                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUniversalGameSettings_C::IsRunning4K(bool* _4kOrGreater)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UniversalGameSettings.UniversalGameSettings_C.IsRunning4K");

	UUniversalGameSettings_C_IsRunning4K_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (_4kOrGreater != nullptr)
		*_4kOrGreater = params._4kOrGreater;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UniversalGameSettings.UniversalGameSettings_C.GetPlatformFidelityOption
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       PlatformName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGTAFidelitySettings                        PlatformSetting                                            (Parm, OutParm)
//		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUniversalGameSettings_C::GetPlatformFidelityOption(const struct FName& PlatformName, struct FGTAFidelitySettings* PlatformSetting, bool* Found)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UniversalGameSettings.UniversalGameSettings_C.GetPlatformFidelityOption");

	UUniversalGameSettings_C_GetPlatformFidelityOption_Params params {};
	params.PlatformName = PlatformName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlatformSetting != nullptr)
		*PlatformSetting = params.PlatformSetting;
	if (Found != nullptr)
		*Found = params.Found;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UniversalGameSettings.UniversalGameSettings_C.GetCurrentFidelityOption
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrentSelection                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<GTABase_EGTAPlatforms>                 PlatformOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsEditor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UGTAFidelityOption*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UGTAFidelityOption* UUniversalGameSettings_C::GetCurrentFidelityOption(int CurrentSelection, TEnumAsByte<GTABase_EGTAPlatforms> PlatformOverride, bool IsEditor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UniversalGameSettings.UniversalGameSettings_C.GetCurrentFidelityOption");

	UUniversalGameSettings_C_GetCurrentFidelityOption_Params params {};
	params.CurrentSelection = CurrentSelection;
	params.PlatformOverride = PlatformOverride;
	params.IsEditor = IsEditor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UniversalGameSettings.UniversalGameSettings_C.GetPlatformDefaults
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<GTABase_EGTAPlatforms>                 PlatformOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsEditor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UClass*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
class UClass* UUniversalGameSettings_C::GetPlatformDefaults(TEnumAsByte<GTABase_EGTAPlatforms> PlatformOverride, bool IsEditor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UniversalGameSettings.UniversalGameSettings_C.GetPlatformDefaults");

	UUniversalGameSettings_C_GetPlatformDefaults_Params params {};
	params.PlatformOverride = PlatformOverride;
	params.IsEditor = IsEditor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
