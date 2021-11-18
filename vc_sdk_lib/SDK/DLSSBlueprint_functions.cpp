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
//		Name   -> Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
//		Flags  -> ()
// Parameters:
//		float                                              Sharpness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDLSSLibrary::SetDLSSSharpness(float Sharpness)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness");

	UDLSSLibrary_SetDLSSSharpness_Params params {};
	params.Sharpness = Sharpness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DLSSBlueprint.DLSSLibrary.SetDLSSMode
//		Flags  -> ()
// Parameters:
//		DLSSBlueprint_EUDLSSMode                           DLSSMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDLSSLibrary::SetDLSSMode(DLSSBlueprint_EUDLSSMode DLSSMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.SetDLSSMode");

	UDLSSLibrary_SetDLSSMode_Params params {};
	params.DLSSMode = DLSSMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
//		Flags  -> ()
// Parameters:
//		DLSSBlueprint_EUDLSSSupport                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
DLSSBlueprint_EUDLSSSupport UDLSSLibrary::QueryDLSSSupport()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport");

	UDLSSLibrary_QueryDLSSSupport_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDLSSLibrary::IsDLSSSupported()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported");

	UDLSSLibrary_IsDLSSSupported_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
//		Flags  -> ()
// Parameters:
//		DLSSBlueprint_EUDLSSMode                           DLSSMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UDLSSLibrary::IsDLSSModeSupported(DLSSBlueprint_EUDLSSMode DLSSMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported");

	UDLSSLibrary_IsDLSSModeSupported_Params params {};
	params.DLSSMode = DLSSMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
//		Flags  -> ()
// Parameters:
//		TArray<DLSSBlueprint_EUDLSSMode>                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<DLSSBlueprint_EUDLSSMode> UDLSSLibrary::GetSupportedDLSSModes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes");

	UDLSSLibrary_GetSupportedDLSSModes_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UDLSSLibrary::GetDLSSSharpness()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness");

	UDLSSLibrary_GetDLSSSharpness_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
//		Flags  -> ()
// Parameters:
//		float                                              MinScreenPercentage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MaxScreenPercentage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDLSSLibrary::GetDLSSScreenPercentageRange(float* MinScreenPercentage, float* MaxScreenPercentage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange");

	UDLSSLibrary_GetDLSSScreenPercentageRange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MinScreenPercentage != nullptr)
		*MinScreenPercentage = params.MinScreenPercentage;
	if (MaxScreenPercentage != nullptr)
		*MaxScreenPercentage = params.MaxScreenPercentage;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
//		Flags  -> ()
// Parameters:
//		DLSSBlueprint_EUDLSSMode                           DLSSMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   ScreenResolution                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bIsSupported                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              OptimalScreenPercentage                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bIsFixedScreenPercentage                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MinScreenPercentage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MaxScreenPercentage                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              OptimalSharpness                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDLSSLibrary::GetDLSSModeInformation(DLSSBlueprint_EUDLSSMode DLSSMode, const struct FVector2D& ScreenResolution, bool* bIsSupported, float* OptimalScreenPercentage, bool* bIsFixedScreenPercentage, float* MinScreenPercentage, float* MaxScreenPercentage, float* OptimalSharpness)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation");

	UDLSSLibrary_GetDLSSModeInformation_Params params {};
	params.DLSSMode = DLSSMode;
	params.ScreenResolution = ScreenResolution;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsSupported != nullptr)
		*bIsSupported = params.bIsSupported;
	if (OptimalScreenPercentage != nullptr)
		*OptimalScreenPercentage = params.OptimalScreenPercentage;
	if (bIsFixedScreenPercentage != nullptr)
		*bIsFixedScreenPercentage = params.bIsFixedScreenPercentage;
	if (MinScreenPercentage != nullptr)
		*MinScreenPercentage = params.MinScreenPercentage;
	if (MaxScreenPercentage != nullptr)
		*MaxScreenPercentage = params.MaxScreenPercentage;
	if (OptimalSharpness != nullptr)
		*OptimalSharpness = params.OptimalSharpness;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDLSSMode
//		Flags  -> ()
// Parameters:
//		DLSSBlueprint_EUDLSSMode                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
DLSSBlueprint_EUDLSSMode UDLSSLibrary::GetDLSSMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDLSSMode");

	UDLSSLibrary_GetDLSSMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
//		Flags  -> ()
// Parameters:
//		int                                                MinDriverVersionMajor                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                MinDriverVersionMinor                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDLSSLibrary::GetDLSSMinimumDriverVersion(int* MinDriverVersionMajor, int* MinDriverVersionMinor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion");

	UDLSSLibrary_GetDLSSMinimumDriverVersion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MinDriverVersionMajor != nullptr)
		*MinDriverVersionMajor = params.MinDriverVersionMajor;
	if (MinDriverVersionMinor != nullptr)
		*MinDriverVersionMinor = params.MinDriverVersionMinor;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
//		Flags  -> ()
// Parameters:
//		DLSSBlueprint_EUDLSSMode                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
DLSSBlueprint_EUDLSSMode UDLSSLibrary::GetDefaultDLSSMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode");

	UDLSSLibrary_GetDefaultDLSSMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
