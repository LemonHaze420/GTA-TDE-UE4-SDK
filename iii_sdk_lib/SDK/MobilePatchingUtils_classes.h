﻿#pragma once

// Name: GTA III, Version: 1.0.0


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

// Class MobilePatchingUtils.MobileInstalledContent
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UMobileInstalledContent : public UObject
{
public:
	unsigned char                                      UnknownData_HCJK[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MobilePatchingUtils.MobileInstalledContent");
		return ptr;
	}



	bool Mount(int PakOrder, const struct FString& MountPoint);
	float GetInstalledContentSize();
	float GetDiskFreeSpace();
};

// Class MobilePatchingUtils.MobilePendingContent
// 0x0040 (FullSize[0x0088] - InheritedSize[0x0048])
class UMobilePendingContent : public UMobileInstalledContent
{
public:
	unsigned char                                      UnknownData_UPUT[0x40];                                    // 0x0048(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MobilePatchingUtils.MobilePendingContent");
		return ptr;
	}



	void StartInstall(const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed);
	float GetTotalDownloadedSize();
	float GetRequiredDiskSpace();
	float GetInstallProgress();
	struct FText GetDownloadStatusText();
	float GetDownloadSpeed();
	float GetDownloadSize();
};

// Class MobilePatchingUtils.MobilePatchingLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMobilePatchingLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MobilePatchingUtils.MobilePatchingLibrary");
		return ptr;
	}



	void STATIC_RequestContent(const struct FString& RemoteManifestURL, const struct FString& CloudURL, const struct FString& InstallDirectory, const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed);
	bool STATIC_HasActiveWiFiConnection();
	TArray<struct FString> STATIC_GetSupportedPlatformNames();
	class UMobileInstalledContent* STATIC_GetInstalledContent(const struct FString& InstallDirectory);
	struct FString STATIC_GetActiveDeviceProfileName();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
