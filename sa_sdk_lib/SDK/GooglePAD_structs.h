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
// Enums
//---------------------------------------------------------------------------

// Enum GooglePAD.EGooglePADCellularDataConfirmStatus
enum class GooglePAD_EGooglePADCellularDataConfirmStatus : uint8_t
{
	EGooglePADCellularDataConfirmStatus__AssetPack_CONFIRM_UNKNOWN = 0,
	EGooglePADCellularDataConfirmStatus__AssetPack_CONFIRM_PENDING = 1,
	EGooglePADCellularDataConfirmStatus__AssetPack_CONFIRM_USER_APPROVED = 2,
	EGooglePADCellularDataConfirmStatus__AssetPack_CONFIRM_USER_CANCELED = 3,
	EGooglePADCellularDataConfirmStatus__AssetPack_CONFIRM_MAX = 4,

};

// Enum GooglePAD.EGooglePADStorageMethod
enum class GooglePAD_EGooglePADStorageMethod : uint8_t
{
	EGooglePADStorageMethod__AssetPack_STORAGE_FILES = 0,
	EGooglePADStorageMethod__AssetPack_STORAGE_APK = 1,
	EGooglePADStorageMethod__AssetPack_STORAGE_UNKNOWN = 2,
	EGooglePADStorageMethod__AssetPack_STORAGE_NOT_INSTALLED = 3,
	EGooglePADStorageMethod__AssetPack_STORAGE_MAX = 4,

};

// Enum GooglePAD.EGooglePADDownloadStatus
enum class GooglePAD_EGooglePADDownloadStatus : uint8_t
{
	EGooglePADDownloadStatus__AssetPack_UNKNOWN = 0,
	EGooglePADDownloadStatus__AssetPack_DOWNLOAD_PENDING = 1,
	EGooglePADDownloadStatus__AssetPack_DOWNLOADING = 2,
	EGooglePADDownloadStatus__AssetPack_TRANSFERRING = 3,
	EGooglePADDownloadStatus__AssetPack_DOWNLOAD_COMPLETED = 4,
	EGooglePADDownloadStatus__AssetPack_DOWNLOAD_FAILED = 5,
	EGooglePADDownloadStatus__AssetPack_DOWNLOAD_CANCELED = 6,
	EGooglePADDownloadStatus__AssetPack_WAITING_FOR_WIFI = 7,
	EGooglePADDownloadStatus__AssetPack_NOT_INSTALLED = 8,
	EGooglePADDownloadStatus__AssetPack_INFO_PENDING = 9,
	EGooglePADDownloadStatus__AssetPack_INFO_FAILED = 10,
	EGooglePADDownloadStatus__AssetPack_REMOVAL_PENDING = 11,
	EGooglePADDownloadStatus__AssetPack_REMOVAL_FAILED = 12,
	EGooglePADDownloadStatus__AssetPack_MAX = 13,

};

// Enum GooglePAD.EGooglePADErrorCode
enum class GooglePAD_EGooglePADErrorCode : uint8_t
{
	EGooglePADErrorCode__AssetPack_NO_ERROR = 0,
	EGooglePADErrorCode__AssetPack_APP_UNAVAILABLE = 1,
	EGooglePADErrorCode__AssetPack_UNAVAILABLE = 2,
	EGooglePADErrorCode__AssetPack_INVALID_REQUEST = 3,
	EGooglePADErrorCode__AssetPack_DOWNLOAD_NOT_FOUND = 4,
	EGooglePADErrorCode__AssetPack_API_NOT_AVAILABLE = 5,
	EGooglePADErrorCode__AssetPack_NETWORK_ERROR = 6,
	EGooglePADErrorCode__AssetPack_ACCESS_DENIED = 7,
	EGooglePADErrorCode__AssetPack_INSUFFICIENT_STORAGE = 8,
	EGooglePADErrorCode__AssetPack_PLAY_STORE_NOT_FOUND = 9,
	EGooglePADErrorCode__AssetPack_NETWORK_UNRESTRICTED = 10,
	EGooglePADErrorCode__AssetPack_INTERNAL_ERROR = 11,
	EGooglePADErrorCode__AssetPack_INITIALIZATION_NEEDED = 12,
	EGooglePADErrorCode__AssetPack_INITIALIZATION_FAILED = 13,
	EGooglePADErrorCode__AssetPack_MAX = 14,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
