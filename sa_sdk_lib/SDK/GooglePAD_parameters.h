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

// Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation
struct UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Params
{
	GooglePAD_EGooglePADErrorCode                      ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval
struct UGooglePADFunctionLibrary_RequestRemoval_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GooglePAD_EGooglePADErrorCode                      ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GooglePAD.GooglePADFunctionLibrary.RequestInfo
struct UGooglePADFunctionLibrary_RequestInfo_Params
{
	TArray<struct FString>                             AssetPacks;                                                // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	GooglePAD_EGooglePADErrorCode                      ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GooglePAD.GooglePADFunctionLibrary.RequestDownload
struct UGooglePADFunctionLibrary_RequestDownload_Params
{
	TArray<struct FString>                             AssetPacks;                                                // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	GooglePAD_EGooglePADErrorCode                      ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState
struct UGooglePADFunctionLibrary_ReleaseDownloadState_Params
{
	int                                                State;                                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation
struct UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Params
{
	int                                                Location;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload
struct UGooglePADFunctionLibrary_GetTotalBytesToDownload_Params
{
	int                                                State;                                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod
struct UGooglePADFunctionLibrary_GetStorageMethod_Params
{
	int                                                Location;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GooglePAD_EGooglePADStorageMethod                  ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus
struct UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Params
{
	GooglePAD_EGooglePADCellularDataConfirmStatus      Status;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GooglePAD_EGooglePADErrorCode                      ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus
struct UGooglePADFunctionLibrary_GetDownloadStatus_Params
{
	int                                                State;                                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GooglePAD_EGooglePADDownloadStatus                 ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState
struct UGooglePADFunctionLibrary_GetDownloadState_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                State;                                                     // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GooglePAD_EGooglePADErrorCode                      ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded
struct UGooglePADFunctionLibrary_GetBytesDownloaded_Params
{
	int                                                State;                                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath
struct UGooglePADFunctionLibrary_GetAssetsPath_Params
{
	int                                                Location;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation
struct UGooglePADFunctionLibrary_GetAssetPackLocation_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Location;                                                  // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GooglePAD_EGooglePADErrorCode                      ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function GooglePAD.GooglePADFunctionLibrary.CancelDownload
struct UGooglePADFunctionLibrary_CancelDownload_Params
{
	TArray<struct FString>                             AssetPacks;                                                // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	GooglePAD_EGooglePADErrorCode                      ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
