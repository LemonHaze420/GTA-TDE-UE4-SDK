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
// Enums
//---------------------------------------------------------------------------

// Enum HeadMountedDisplay.EXRVisualType
enum class HeadMountedDisplay_EXRVisualType : uint8_t
{
	EXRVisualType__Controller      = 0,
	EXRVisualType__Hand            = 1,
	EXRVisualType__EXRVisualType_MAX = 2,

};

// Enum HeadMountedDisplay.EHandKeypoint
enum class HeadMountedDisplay_EHandKeypoint : uint8_t
{
	EHandKeypoint__Palm            = 0,
	EHandKeypoint__Wrist           = 1,
	EHandKeypoint__ThumbMetacarpal = 2,
	EHandKeypoint__ThumbProximal   = 3,
	EHandKeypoint__ThumbDistal     = 4,
	EHandKeypoint__ThumbTip        = 5,
	EHandKeypoint__IndexMetacarpal = 6,
	EHandKeypoint__IndexProximal   = 7,
	EHandKeypoint__IndexIntermediate = 8,
	EHandKeypoint__IndexDistal     = 9,
	EHandKeypoint__IndexTip        = 10,
	EHandKeypoint__MiddleMetacarpal = 11,
	EHandKeypoint__MiddleProximal  = 12,
	EHandKeypoint__MiddleIntermediate = 13,
	EHandKeypoint__MiddleDistal    = 14,
	EHandKeypoint__MiddleTip       = 15,
	EHandKeypoint__RingMetacarpal  = 16,
	EHandKeypoint__RingProximal    = 17,
	EHandKeypoint__RingIntermediate = 18,
	EHandKeypoint__RingDistal      = 19,
	EHandKeypoint__RingTip         = 20,
	EHandKeypoint__LittleMetacarpal = 21,
	EHandKeypoint__LittleProximal  = 22,
	EHandKeypoint__LittleIntermediate = 23,
	EHandKeypoint__LittleDistal    = 24,
	EHandKeypoint__LittleTip       = 25,
	EHandKeypoint__EHandKeypoint_MAX = 26,

};

// Enum HeadMountedDisplay.EXRTrackedDeviceType
enum class HeadMountedDisplay_EXRTrackedDeviceType : uint8_t
{
	EXRTrackedDeviceType__HeadMountedDisplay = 0,
	EXRTrackedDeviceType__Controller = 1,
	EXRTrackedDeviceType__TrackingReference = 2,
	EXRTrackedDeviceType__Other    = 3,
	EXRTrackedDeviceType__Invalid  = 4,
	EXRTrackedDeviceType__Any      = 5,
	EXRTrackedDeviceType__EXRTrackedDeviceType_MAX = 6,

};

// Enum HeadMountedDisplay.ESpectatorScreenMode
enum class HeadMountedDisplay_ESpectatorScreenMode : uint8_t
{
	ESpectatorScreenMode__Disabled = 0,
	ESpectatorScreenMode__SingleEyeLetterboxed = 1,
	ESpectatorScreenMode__Undistorted = 2,
	ESpectatorScreenMode__Distorted = 3,
	ESpectatorScreenMode__SingleEye = 4,
	ESpectatorScreenMode__SingleEyeCroppedToFill = 5,
	ESpectatorScreenMode__Texture  = 6,
	ESpectatorScreenMode__TexturePlusEye = 7,
	ESpectatorScreenMode__ESpectatorScreenMode_MAX = 8,

};

// Enum HeadMountedDisplay.EXRSystemFlags
enum class HeadMountedDisplay_EXRSystemFlags : uint8_t
{
	EXRSystemFlags__NoFlags        = 0,
	EXRSystemFlags__IsAR           = 1,
	EXRSystemFlags__IsTablet       = 2,
	EXRSystemFlags__IsHeadMounted  = 3,
	EXRSystemFlags__SupportsHandTracking = 4,
	EXRSystemFlags__EXRSystemFlags_MAX = 5,

};

// Enum HeadMountedDisplay.EXRDeviceConnectionResult
enum class HeadMountedDisplay_EXRDeviceConnectionResult : uint8_t
{
	EXRDeviceConnectionResult__NoTrackingSystem = 0,
	EXRDeviceConnectionResult__FeatureNotSupported = 1,
	EXRDeviceConnectionResult__NoValidViewport = 2,
	EXRDeviceConnectionResult__MiscFailure = 3,
	EXRDeviceConnectionResult__Success = 4,
	EXRDeviceConnectionResult__EXRDeviceConnectionResult_MAX = 5,

};

// Enum HeadMountedDisplay.EHMDWornState
enum class HeadMountedDisplay_EHMDWornState : uint8_t
{
	EHMDWornState__Unknown         = 0,
	EHMDWornState__Worn            = 1,
	EHMDWornState__NotWorn         = 2,
	EHMDWornState__EHMDWornState_MAX = 3,

};

// Enum HeadMountedDisplay.EHMDTrackingOrigin
enum class HeadMountedDisplay_EHMDTrackingOrigin : uint8_t
{
	EHMDTrackingOrigin__Floor      = 0,
	EHMDTrackingOrigin__Eye        = 1,
	EHMDTrackingOrigin__Stage      = 2,
	EHMDTrackingOrigin__Unbounded  = 3,
	EHMDTrackingOrigin__EHMDTrackingOrigin_MAX = 4,

};

// Enum HeadMountedDisplay.EOrientPositionSelector
enum class HeadMountedDisplay_EOrientPositionSelector : uint8_t
{
	EOrientPositionSelector__Orientation = 0,
	EOrientPositionSelector__Position = 1,
	EOrientPositionSelector__OrientationAndPosition = 2,
	EOrientPositionSelector__EOrientPositionSelector_MAX = 3,

};

// Enum HeadMountedDisplay.ETrackingStatus
enum class HeadMountedDisplay_ETrackingStatus : uint8_t
{
	ETrackingStatus__NotTracked    = 0,
	ETrackingStatus__InertialOnly  = 1,
	ETrackingStatus__Tracked       = 2,
	ETrackingStatus__ETrackingStatus_MAX = 3,

};

// Enum HeadMountedDisplay.ESpatialInputGestureAxis
enum class HeadMountedDisplay_ESpatialInputGestureAxis : uint8_t
{
	ESpatialInputGestureAxis__None = 0,
	ESpatialInputGestureAxis__Manipulation = 1,
	ESpatialInputGestureAxis__Navigation = 2,
	ESpatialInputGestureAxis__NavigationRails = 3,
	ESpatialInputGestureAxis__ESpatialInputGestureAxis_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct HeadMountedDisplay.XRMotionControllerData
// 0x00A0
struct FXRMotionControllerData
{
	bool                                               bValid;                                                    // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_33T5[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       DeviceName;                                                // 0x0004(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ApplicationInstanceID;                                     // 0x000C(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	HeadMountedDisplay_EXRVisualType                   DeviceVisualType;                                          // 0x001C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	InputCore_EControllerHand                          HandIndex;                                                 // 0x001D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	HeadMountedDisplay_ETrackingStatus                 TrackingStatus;                                            // 0x001E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_06NP[0x1];                                     // 0x001F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     GripPosition;                                              // 0x0020(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QE3H[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       GripRotation;                                              // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     AimPosition;                                               // 0x0040(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NY53[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       AimRotation;                                               // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             HandKeyPositions;                                          // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQuat>                               HandKeyRotations;                                          // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      HandKeyRadii;                                              // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bIsGrasped;                                                // 0x0090(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1QII[0xF];                                     // 0x0091(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct HeadMountedDisplay.XRHMDData
// 0x0040
struct FXRHMDData
{
	bool                                               bValid;                                                    // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JP3X[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       DeviceName;                                                // 0x0004(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ApplicationInstanceID;                                     // 0x000C(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	HeadMountedDisplay_ETrackingStatus                 TrackingStatus;                                            // 0x001C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P9D1[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     position;                                                  // 0x0020(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S4QW[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Rotation;                                                  // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct HeadMountedDisplay.XRDeviceId
// 0x000C
struct FXRDeviceId
{
	struct FName                                       SystemName;                                                // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DeviceID;                                                  // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HeadMountedDisplay.XRGestureConfig
// 0x0006
struct FXRGestureConfig
{
	bool                                               bTap;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHold;                                                     // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	HeadMountedDisplay_ESpatialInputGestureAxis        AxisGesture;                                               // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNavigationAxisX;                                          // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNavigationAxisY;                                          // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNavigationAxisZ;                                          // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
