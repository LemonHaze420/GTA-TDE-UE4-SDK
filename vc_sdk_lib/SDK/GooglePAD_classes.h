#pragma once

// Name: ViceCity, Version: 1.0.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class GooglePAD.GooglePADFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGooglePADFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GooglePAD.GooglePADFunctionLibrary");
		return ptr;
	}



	GooglePAD_EGooglePADErrorCode ShowCellularDataConfirmation();
	GooglePAD_EGooglePADErrorCode RequestRemoval(const struct FString& Name);
	GooglePAD_EGooglePADErrorCode RequestInfo(TArray<struct FString> AssetPacks);
	GooglePAD_EGooglePADErrorCode RequestDownload(TArray<struct FString> AssetPacks);
	void ReleaseDownloadState(int State);
	void ReleaseAssetPackLocation(int Location);
	int GetTotalBytesToDownload(int State);
	GooglePAD_EGooglePADStorageMethod GetStorageMethod(int Location);
	GooglePAD_EGooglePADErrorCode GetShowCellularDataConfirmationStatus(GooglePAD_EGooglePADCellularDataConfirmStatus* Status);
	GooglePAD_EGooglePADDownloadStatus GetDownloadStatus(int State);
	GooglePAD_EGooglePADErrorCode GetDownloadState(const struct FString& Name, int* State);
	int GetBytesDownloaded(int State);
	struct FString GetAssetsPath(int Location);
	GooglePAD_EGooglePADErrorCode GetAssetPackLocation(const struct FString& Name, int* Location);
	GooglePAD_EGooglePADErrorCode CancelDownload(TArray<struct FString> AssetPacks);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
