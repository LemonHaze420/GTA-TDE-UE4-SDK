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
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation
//		Flags  -> ()
// Parameters:
//		GooglePAD_EGooglePADErrorCode                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::ShowCellularDataConfirmation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation");

	UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GooglePAD_EGooglePADErrorCode                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::RequestRemoval(const struct FString& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval");

	UGooglePADFunctionLibrary_RequestRemoval_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.RequestInfo
//		Flags  -> ()
// Parameters:
//		TArray<struct FString>                             AssetPacks                                                 (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		GooglePAD_EGooglePADErrorCode                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::RequestInfo(TArray<struct FString> AssetPacks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.RequestInfo");

	UGooglePADFunctionLibrary_RequestInfo_Params params {};
	params.AssetPacks = AssetPacks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.RequestDownload
//		Flags  -> ()
// Parameters:
//		TArray<struct FString>                             AssetPacks                                                 (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		GooglePAD_EGooglePADErrorCode                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::RequestDownload(TArray<struct FString> AssetPacks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.RequestDownload");

	UGooglePADFunctionLibrary_RequestDownload_Params params {};
	params.AssetPacks = AssetPacks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState
//		Flags  -> ()
// Parameters:
//		int                                                State                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGooglePADFunctionLibrary::ReleaseDownloadState(int State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState");

	UGooglePADFunctionLibrary_ReleaseDownloadState_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation
//		Flags  -> ()
// Parameters:
//		int                                                Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGooglePADFunctionLibrary::ReleaseAssetPackLocation(int Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation");

	UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Params params {};
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload
//		Flags  -> ()
// Parameters:
//		int                                                State                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGooglePADFunctionLibrary::GetTotalBytesToDownload(int State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload");

	UGooglePADFunctionLibrary_GetTotalBytesToDownload_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod
//		Flags  -> ()
// Parameters:
//		int                                                Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GooglePAD_EGooglePADStorageMethod                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADStorageMethod UGooglePADFunctionLibrary::GetStorageMethod(int Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod");

	UGooglePADFunctionLibrary_GetStorageMethod_Params params {};
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus
//		Flags  -> ()
// Parameters:
//		GooglePAD_EGooglePADCellularDataConfirmStatus      Status                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GooglePAD_EGooglePADErrorCode                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::GetShowCellularDataConfirmationStatus(GooglePAD_EGooglePADCellularDataConfirmStatus* Status)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus");

	UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Status != nullptr)
		*Status = params.Status;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus
//		Flags  -> ()
// Parameters:
//		int                                                State                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GooglePAD_EGooglePADDownloadStatus                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADDownloadStatus UGooglePADFunctionLibrary::GetDownloadStatus(int State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus");

	UGooglePADFunctionLibrary_GetDownloadStatus_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GooglePAD_EGooglePADErrorCode                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::GetDownloadState(const struct FString& Name, int* State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState");

	UGooglePADFunctionLibrary_GetDownloadState_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded
//		Flags  -> ()
// Parameters:
//		int                                                State                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UGooglePADFunctionLibrary::GetBytesDownloaded(int State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded");

	UGooglePADFunctionLibrary_GetBytesDownloaded_Params params {};
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath
//		Flags  -> ()
// Parameters:
//		int                                                Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UGooglePADFunctionLibrary::GetAssetsPath(int Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath");

	UGooglePADFunctionLibrary_GetAssetsPath_Params params {};
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation
//		Flags  -> ()
// Parameters:
//		struct FString                                     Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		GooglePAD_EGooglePADErrorCode                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::GetAssetPackLocation(const struct FString& Name, int* Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation");

	UGooglePADFunctionLibrary_GetAssetPackLocation_Params params {};
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function GooglePAD.GooglePADFunctionLibrary.CancelDownload
//		Flags  -> ()
// Parameters:
//		TArray<struct FString>                             AssetPacks                                                 (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		GooglePAD_EGooglePADErrorCode                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
GooglePAD_EGooglePADErrorCode UGooglePADFunctionLibrary::CancelDownload(TArray<struct FString> AssetPacks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GooglePAD.GooglePADFunctionLibrary.CancelDownload");

	UGooglePADFunctionLibrary_CancelDownload_Params params {};
	params.AssetPacks = AssetPacks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
