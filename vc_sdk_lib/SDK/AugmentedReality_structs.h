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

// Enum AugmentedReality.EARTrackingState
enum class AugmentedReality_EARTrackingState : uint8_t
{
	EARTrackingState__Unknown      = 0,
	EARTrackingState__Tracking     = 1,
	EARTrackingState__NotTracking  = 2,
	EARTrackingState__StoppedTracking = 3,
	EARTrackingState__EARTrackingState_MAX = 4,

};

// Enum AugmentedReality.EGeoAnchorComponentDebugMode
enum class AugmentedReality_EGeoAnchorComponentDebugMode : uint8_t
{
	EGeoAnchorComponentDebugMode__None = 0,
	EGeoAnchorComponentDebugMode__ShowGeoData = 1,
	EGeoAnchorComponentDebugMode__EGeoAnchorComponentDebugMode_MAX = 2,

};

// Enum AugmentedReality.EPoseComponentDebugMode
enum class AugmentedReality_EPoseComponentDebugMode : uint8_t
{
	EPoseComponentDebugMode__None  = 0,
	EPoseComponentDebugMode__ShowSkeleton = 1,
	EPoseComponentDebugMode__EPoseComponentDebugMode_MAX = 2,

};

// Enum AugmentedReality.EQRCodeComponentDebugMode
enum class AugmentedReality_EQRCodeComponentDebugMode : uint8_t
{
	EQRCodeComponentDebugMode__None = 0,
	EQRCodeComponentDebugMode__ShowQRCode = 1,
	EQRCodeComponentDebugMode__EQRCodeComponentDebugMode_MAX = 2,

};

// Enum AugmentedReality.EImageComponentDebugMode
enum class AugmentedReality_EImageComponentDebugMode : uint8_t
{
	EImageComponentDebugMode__None = 0,
	EImageComponentDebugMode__ShowDetectedImage = 1,
	EImageComponentDebugMode__EImageComponentDebugMode_MAX = 2,

};

// Enum AugmentedReality.EARFaceTransformMixing
enum class AugmentedReality_EARFaceTransformMixing : uint8_t
{
	EARFaceTransformMixing__ComponentOnly = 0,
	EARFaceTransformMixing__ComponentLocationTrackedRotation = 1,
	EARFaceTransformMixing__ComponentWithTracked = 2,
	EARFaceTransformMixing__TrackingOnly = 3,
	EARFaceTransformMixing__EARFaceTransformMixing_MAX = 4,

};

// Enum AugmentedReality.EFaceComponentDebugMode
enum class AugmentedReality_EFaceComponentDebugMode : uint8_t
{
	EFaceComponentDebugMode__None  = 0,
	EFaceComponentDebugMode__ShowEyeVectors = 1,
	EFaceComponentDebugMode__ShowFaceMesh = 2,
	EFaceComponentDebugMode__EFaceComponentDebugMode_MAX = 3,

};

// Enum AugmentedReality.EPlaneComponentDebugMode
enum class AugmentedReality_EPlaneComponentDebugMode : uint8_t
{
	EPlaneComponentDebugMode__None = 0,
	EPlaneComponentDebugMode__ShowNetworkRole = 1,
	EPlaneComponentDebugMode__ShowClassification = 2,
	EPlaneComponentDebugMode__EPlaneComponentDebugMode_MAX = 3,

};

// Enum AugmentedReality.EARSessionConfigFlags
enum class AugmentedReality_EARSessionConfigFlags : uint8_t
{
	EARSessionConfigFlags__None    = 0,
	EARSessionConfigFlags__GenerateMeshData = 1,
	EARSessionConfigFlags__RenderMeshDataInWireframe = 2,
	EARSessionConfigFlags__GenerateCollisionForMeshData = 3,
	EARSessionConfigFlags__GenerateNavMeshForMeshData = 4,
	EARSessionConfigFlags__UseMeshDataForOcclusion = 5,
	EARSessionConfigFlags__EARSessionConfigFlags_MAX = 6,

};

// Enum AugmentedReality.EARServicePermissionRequestResult
enum class AugmentedReality_EARServicePermissionRequestResult : uint8_t
{
	EARServicePermissionRequestResult__Granted = 0,
	EARServicePermissionRequestResult__Denied = 1,
	EARServicePermissionRequestResult__EARServicePermissionRequestResult_MAX = 2,

};

// Enum AugmentedReality.EARServiceInstallRequestResult
enum class AugmentedReality_EARServiceInstallRequestResult : uint8_t
{
	EARServiceInstallRequestResult__Installed = 0,
	EARServiceInstallRequestResult__DeviceNotCompatible = 1,
	EARServiceInstallRequestResult__UserDeclinedInstallation = 2,
	EARServiceInstallRequestResult__FatalError = 3,
	EARServiceInstallRequestResult__EARServiceInstallRequestResult_MAX = 4,

};

// Enum AugmentedReality.EARServiceAvailability
enum class AugmentedReality_EARServiceAvailability : uint8_t
{
	EARServiceAvailability__UnknownError = 0,
	EARServiceAvailability__UnknownChecking = 1,
	EARServiceAvailability__UnknownTimedOut = 2,
	EARServiceAvailability__UnsupportedDeviceNotCapable = 3,
	EARServiceAvailability__SupportedNotInstalled = 4,
	EARServiceAvailability__SupportedVersionTooOld = 5,
	EARServiceAvailability__SupportedInstalled = 6,
	EARServiceAvailability__EARServiceAvailability_MAX = 7,

};

// Enum AugmentedReality.EARGeoTrackingAccuracy
enum class AugmentedReality_EARGeoTrackingAccuracy : uint8_t
{
	EARGeoTrackingAccuracy__Undetermined = 0,
	EARGeoTrackingAccuracy__Low    = 1,
	EARGeoTrackingAccuracy__Medium = 2,
	EARGeoTrackingAccuracy__High   = 3,
	EARGeoTrackingAccuracy__EARGeoTrackingAccuracy_MAX = 4,

};

// Enum AugmentedReality.EARGeoTrackingStateReason
enum class AugmentedReality_EARGeoTrackingStateReason : uint8_t
{
	EARGeoTrackingStateReason__None = 0,
	EARGeoTrackingStateReason__NotAvailableAtLocation = 1,
	EARGeoTrackingStateReason__NeedLocationPermissions = 2,
	EARGeoTrackingStateReason__DevicePointedTooLow = 3,
	EARGeoTrackingStateReason__WorldTrackingUnstable = 4,
	EARGeoTrackingStateReason__WaitingForLocation = 5,
	EARGeoTrackingStateReason__GeoDataNotLoaded = 6,
	EARGeoTrackingStateReason__VisualLocalizationFailed = 7,
	EARGeoTrackingStateReason__WaitingForAvailabilityCheck = 8,
	EARGeoTrackingStateReason__EARGeoTrackingStateReason_MAX = 9,

};

// Enum AugmentedReality.EARGeoTrackingState
enum class AugmentedReality_EARGeoTrackingState : uint8_t
{
	EARGeoTrackingState__Initializing = 0,
	EARGeoTrackingState__Localized = 1,
	EARGeoTrackingState__Localizing = 2,
	EARGeoTrackingState__NotAvailable = 3,
	EARGeoTrackingState__EARGeoTrackingState_MAX = 4,

};

// Enum AugmentedReality.EARSceneReconstruction
enum class AugmentedReality_EARSceneReconstruction : uint8_t
{
	EARSceneReconstruction__None   = 0,
	EARSceneReconstruction__MeshOnly = 1,
	EARSceneReconstruction__MeshWithClassification = 2,
	EARSceneReconstruction__EARSceneReconstruction_MAX = 3,

};

// Enum AugmentedReality.EARSessionTrackingFeature
enum class AugmentedReality_EARSessionTrackingFeature : uint8_t
{
	EARSessionTrackingFeature__None = 0,
	EARSessionTrackingFeature__PoseDetection2D = 1,
	EARSessionTrackingFeature__PersonSegmentation = 2,
	EARSessionTrackingFeature__PersonSegmentationWithDepth = 3,
	EARSessionTrackingFeature__SceneDepth = 4,
	EARSessionTrackingFeature__SmoothedSceneDepth = 5,
	EARSessionTrackingFeature__EARSessionTrackingFeature_MAX = 6,

};

// Enum AugmentedReality.EARFaceTrackingUpdate
enum class AugmentedReality_EARFaceTrackingUpdate : uint8_t
{
	EARFaceTrackingUpdate__CurvesAndGeo = 0,
	EARFaceTrackingUpdate__CurvesOnly = 1,
	EARFaceTrackingUpdate__EARFaceTrackingUpdate_MAX = 2,

};

// Enum AugmentedReality.EAREnvironmentCaptureProbeType
enum class AugmentedReality_EAREnvironmentCaptureProbeType : uint8_t
{
	EAREnvironmentCaptureProbeType__None = 0,
	EAREnvironmentCaptureProbeType__Manual = 1,
	EAREnvironmentCaptureProbeType__Automatic = 2,
	EAREnvironmentCaptureProbeType__EAREnvironmentCaptureProbeType_MAX = 3,

};

// Enum AugmentedReality.EARFrameSyncMode
enum class AugmentedReality_EARFrameSyncMode : uint8_t
{
	EARFrameSyncMode__SyncTickWithCameraImage = 0,
	EARFrameSyncMode__SyncTickWithoutCameraImage = 1,
	EARFrameSyncMode__EARFrameSyncMode_MAX = 2,

};

// Enum AugmentedReality.EARLightEstimationMode
enum class AugmentedReality_EARLightEstimationMode : uint8_t
{
	EARLightEstimationMode__None   = 0,
	EARLightEstimationMode__AmbientLightEstimate = 1,
	EARLightEstimationMode__DirectionalLightEstimate = 2,
	EARLightEstimationMode__EARLightEstimationMode_MAX = 3,

};

// Enum AugmentedReality.EARPlaneDetectionMode
enum class AugmentedReality_EARPlaneDetectionMode : uint8_t
{
	EARPlaneDetectionMode__None    = 0,
	EARPlaneDetectionMode__HorizontalPlaneDetection = 1,
	EARPlaneDetectionMode__VerticalPlaneDetection = 2,
	EARPlaneDetectionMode__EARPlaneDetectionMode_MAX = 3,

};

// Enum AugmentedReality.EARSessionType
enum class AugmentedReality_EARSessionType : uint8_t
{
	EARSessionType__None           = 0,
	EARSessionType__Orientation    = 1,
	EARSessionType__World          = 2,
	EARSessionType__Face           = 3,
	EARSessionType__Image          = 4,
	EARSessionType__ObjectScanning = 5,
	EARSessionType__PoseTracking   = 6,
	EARSessionType__GeoTracking    = 7,
	EARSessionType__EARSessionType_MAX = 8,

};

// Enum AugmentedReality.EARWorldAlignment
enum class AugmentedReality_EARWorldAlignment : uint8_t
{
	EARWorldAlignment__Gravity     = 0,
	EARWorldAlignment__GravityAndHeading = 1,
	EARWorldAlignment__Camera      = 2,
	EARWorldAlignment__EARWorldAlignment_MAX = 3,

};

// Enum AugmentedReality.EARDepthAccuracy
enum class AugmentedReality_EARDepthAccuracy : uint8_t
{
	EARDepthAccuracy__Unkown       = 0,
	EARDepthAccuracy__Approximate  = 1,
	EARDepthAccuracy__Accurate     = 2,
	EARDepthAccuracy__EARDepthAccuracy_MAX = 3,

};

// Enum AugmentedReality.EARDepthQuality
enum class AugmentedReality_EARDepthQuality : uint8_t
{
	EARDepthQuality__Unkown        = 0,
	EARDepthQuality__Low           = 1,
	EARDepthQuality__High          = 2,
	EARDepthQuality__EARDepthQuality_MAX = 3,

};

// Enum AugmentedReality.EARTextureType
enum class AugmentedReality_EARTextureType : uint8_t
{
	EARTextureType__Unknown        = 0,
	EARTextureType__CameraImage    = 1,
	EARTextureType__CameraDepth    = 2,
	EARTextureType__EnvironmentCapture = 3,
	EARTextureType__PersonSegmentationImage = 4,
	EARTextureType__PersonSegmentationDepth = 5,
	EARTextureType__SceneDepthMap  = 6,
	EARTextureType__SceneDepthConfidenceMap = 7,
	EARTextureType__EARTextureType_MAX = 8,

};

// Enum AugmentedReality.EAREye
enum class AugmentedReality_EAREye : uint8_t
{
	EAREye__LeftEye                = 0,
	EAREye__RightEye               = 1,
	EAREye__EAREye_MAX             = 2,

};

// Enum AugmentedReality.EARFaceBlendShape
enum class AugmentedReality_EARFaceBlendShape : uint8_t
{
	EARFaceBlendShape__EyeBlinkLeft = 0,
	EARFaceBlendShape__EyeLookDownLeft = 1,
	EARFaceBlendShape__EyeLookInLeft = 2,
	EARFaceBlendShape__EyeLookOutLeft = 3,
	EARFaceBlendShape__EyeLookUpLeft = 4,
	EARFaceBlendShape__EyeSquintLeft = 5,
	EARFaceBlendShape__EyeWideLeft = 6,
	EARFaceBlendShape__EyeBlinkRight = 7,
	EARFaceBlendShape__EyeLookDownRight = 8,
	EARFaceBlendShape__EyeLookInRight = 9,
	EARFaceBlendShape__EyeLookOutRight = 10,
	EARFaceBlendShape__EyeLookUpRight = 11,
	EARFaceBlendShape__EyeSquintRight = 12,
	EARFaceBlendShape__EyeWideRight = 13,
	EARFaceBlendShape__JawForward  = 14,
	EARFaceBlendShape__JawLeft     = 15,
	EARFaceBlendShape__JawRight    = 16,
	EARFaceBlendShape__JawOpen     = 17,
	EARFaceBlendShape__MouthClose  = 18,
	EARFaceBlendShape__MouthFunnel = 19,
	EARFaceBlendShape__MouthPucker = 20,
	EARFaceBlendShape__MouthLeft   = 21,
	EARFaceBlendShape__MouthRight  = 22,
	EARFaceBlendShape__MouthSmileLeft = 23,
	EARFaceBlendShape__MouthSmileRight = 24,
	EARFaceBlendShape__MouthFrownLeft = 25,
	EARFaceBlendShape__MouthFrownRight = 26,
	EARFaceBlendShape__MouthDimpleLeft = 27,
	EARFaceBlendShape__MouthDimpleRight = 28,
	EARFaceBlendShape__MouthStretchLeft = 29,
	EARFaceBlendShape__MouthStretchRight = 30,
	EARFaceBlendShape__MouthRollLower = 31,
	EARFaceBlendShape__MouthRollUpper = 32,
	EARFaceBlendShape__MouthShrugLower = 33,
	EARFaceBlendShape__MouthShrugUpper = 34,
	EARFaceBlendShape__MouthPressLeft = 35,
	EARFaceBlendShape__MouthPressRight = 36,
	EARFaceBlendShape__MouthLowerDownLeft = 37,
	EARFaceBlendShape__MouthLowerDownRight = 38,
	EARFaceBlendShape__MouthUpperUpLeft = 39,
	EARFaceBlendShape__MouthUpperUpRight = 40,
	EARFaceBlendShape__BrowDownLeft = 41,
	EARFaceBlendShape__BrowDownRight = 42,
	EARFaceBlendShape__BrowInnerUp = 43,
	EARFaceBlendShape__BrowOuterUpLeft = 44,
	EARFaceBlendShape__BrowOuterUpRight = 45,
	EARFaceBlendShape__CheekPuff   = 46,
	EARFaceBlendShape__CheekSquintLeft = 47,
	EARFaceBlendShape__CheekSquintRight = 48,
	EARFaceBlendShape__NoseSneerLeft = 49,
	EARFaceBlendShape__NoseSneerRight = 50,
	EARFaceBlendShape__TongueOut   = 51,
	EARFaceBlendShape__HeadYaw     = 52,
	EARFaceBlendShape__HeadPitch   = 53,
	EARFaceBlendShape__HeadRoll    = 54,
	EARFaceBlendShape__LeftEyeYaw  = 55,
	EARFaceBlendShape__LeftEyePitch = 56,
	EARFaceBlendShape__LeftEyeRoll = 57,
	EARFaceBlendShape__RightEyeYaw = 58,
	EARFaceBlendShape__RightEyePitch = 59,
	EARFaceBlendShape__RightEyeRoll = 60,
	EARFaceBlendShape__MAX         = 61,

};

// Enum AugmentedReality.EARFaceTrackingDirection
enum class AugmentedReality_EARFaceTrackingDirection : uint8_t
{
	EARFaceTrackingDirection__FaceRelative = 0,
	EARFaceTrackingDirection__FaceMirrored = 1,
	EARFaceTrackingDirection__EARFaceTrackingDirection_MAX = 2,

};

// Enum AugmentedReality.EARCandidateImageOrientation
enum class AugmentedReality_EARCandidateImageOrientation : uint8_t
{
	EARCandidateImageOrientation__Landscape = 0,
	EARCandidateImageOrientation__Portrait = 1,
	EARCandidateImageOrientation__EARCandidateImageOrientation_MAX = 2,

};

// Enum AugmentedReality.EARAltitudeSource
enum class AugmentedReality_EARAltitudeSource : uint8_t
{
	EARAltitudeSource__Precise     = 0,
	EARAltitudeSource__Coarse      = 1,
	EARAltitudeSource__UserDefined = 2,
	EARAltitudeSource__Unknown     = 3,
	EARAltitudeSource__EARAltitudeSource_MAX = 4,

};

// Enum AugmentedReality.EARJointTransformSpace
enum class AugmentedReality_EARJointTransformSpace : uint8_t
{
	EARJointTransformSpace__Model  = 0,
	EARJointTransformSpace__ParentJoint = 1,
	EARJointTransformSpace__EARJointTransformSpace_MAX = 2,

};

// Enum AugmentedReality.EARObjectClassification
enum class AugmentedReality_EARObjectClassification : uint8_t
{
	EARObjectClassification__NotApplicable = 0,
	EARObjectClassification__Unknown = 1,
	EARObjectClassification__Wall  = 2,
	EARObjectClassification__Ceiling = 3,
	EARObjectClassification__Floor = 4,
	EARObjectClassification__Table = 5,
	EARObjectClassification__Seat  = 6,
	EARObjectClassification__Face  = 7,
	EARObjectClassification__Image = 8,
	EARObjectClassification__World = 9,
	EARObjectClassification__SceneObject = 10,
	EARObjectClassification__HandMesh = 11,
	EARObjectClassification__Door  = 12,
	EARObjectClassification__Window = 13,
	EARObjectClassification__EARObjectClassification_MAX = 14,

};

// Enum AugmentedReality.EARPlaneOrientation
enum class AugmentedReality_EARPlaneOrientation : uint8_t
{
	EARPlaneOrientation__Horizontal = 0,
	EARPlaneOrientation__Vertical  = 1,
	EARPlaneOrientation__Diagonal  = 2,
	EARPlaneOrientation__EARPlaneOrientation_MAX = 3,

};

// Enum AugmentedReality.EARWorldMappingState
enum class AugmentedReality_EARWorldMappingState : uint8_t
{
	EARWorldMappingState__NotAvailable = 0,
	EARWorldMappingState__StillMappingNotRelocalizable = 1,
	EARWorldMappingState__StillMappingRelocalizable = 2,
	EARWorldMappingState__Mapped   = 3,
	EARWorldMappingState__EARWorldMappingState_MAX = 4,

};

// Enum AugmentedReality.EARSessionStatus
enum class AugmentedReality_EARSessionStatus : uint8_t
{
	EARSessionStatus__NotStarted   = 0,
	EARSessionStatus__Running      = 1,
	EARSessionStatus__NotSupported = 2,
	EARSessionStatus__FatalError   = 3,
	EARSessionStatus__PermissionNotGranted = 4,
	EARSessionStatus__UnsupportedConfiguration = 5,
	EARSessionStatus__Other        = 6,
	EARSessionStatus__EARSessionStatus_MAX = 7,

};

// Enum AugmentedReality.EARTrackingQualityReason
enum class AugmentedReality_EARTrackingQualityReason : uint8_t
{
	EARTrackingQualityReason__None = 0,
	EARTrackingQualityReason__Initializing = 1,
	EARTrackingQualityReason__Relocalizing = 2,
	EARTrackingQualityReason__ExcessiveMotion = 3,
	EARTrackingQualityReason__InsufficientFeatures = 4,
	EARTrackingQualityReason__InsufficientLight = 5,
	EARTrackingQualityReason__BadState = 6,
	EARTrackingQualityReason__EARTrackingQualityReason_MAX = 7,

};

// Enum AugmentedReality.EARTrackingQuality
enum class AugmentedReality_EARTrackingQuality : uint8_t
{
	EARTrackingQuality__NotTracking = 0,
	EARTrackingQuality__OrientationOnly = 1,
	EARTrackingQuality__OrientationAndPosition = 2,
	EARTrackingQuality__EARTrackingQuality_MAX = 3,

};

// Enum AugmentedReality.EARLineTraceChannels
enum class AugmentedReality_EARLineTraceChannels : uint8_t
{
	EARLineTraceChannels__None     = 0,
	EARLineTraceChannels__FeaturePoint = 1,
	EARLineTraceChannels__GroundPlane = 2,
	EARLineTraceChannels__PlaneUsingExtent = 3,
	EARLineTraceChannels__PlaneUsingBoundaryPolygon = 4,
	EARLineTraceChannels__EARLineTraceChannels_MAX = 5,

};

// Enum AugmentedReality.EARCaptureType
enum class AugmentedReality_EARCaptureType : uint8_t
{
	EARCaptureType__Camera         = 0,
	EARCaptureType__QRCode         = 1,
	EARCaptureType__SpatialMapping = 2,
	EARCaptureType__SceneUnderstanding = 3,
	EARCaptureType__EARCaptureType_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AugmentedReality.ARSessionPayload
// 0x0018
struct FARSessionPayload
{
	int                                                ConfigFlags;                                               // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CMF1[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          DefaultMeshMaterial;                                       // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          DefaultWireframeMeshMaterial;                              // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AugmentedReality.ARPlaneUpdatePayload
// 0x0080
struct FARPlaneUpdatePayload
{
	struct FARSessionPayload                           SessionPayload;                                            // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QH9Q[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  WorldTransform;                                            // 0x0020(0x0030) (BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Center;                                                    // 0x0050(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Extents;                                                   // 0x005C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             BoundaryVertices;                                          // 0x0068(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	AugmentedReality_EARObjectClassification           ObjectClassification;                                      // 0x0078(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VGFJ[0x7];                                     // 0x0079(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AugmentedReality.ARPointUpdatePayload
// 0x0001
struct FARPointUpdatePayload
{
	unsigned char                                      UnknownData_B6C7[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct AugmentedReality.ARFaceUpdatePayload
// 0x0040
struct FARFaceUpdatePayload
{
	struct FARSessionPayload                           SessionPayload;                                            // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     LeftEyePosition;                                           // 0x0018(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RightEyePosition;                                          // 0x0024(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LookAtTarget;                                              // 0x0030(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2K0X[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct AugmentedReality.ARImageUpdatePayload
// 0x0060
struct FARImageUpdatePayload
{
	struct FARSessionPayload                           SessionPayload;                                            // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A5GX[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  WorldTransform;                                            // 0x0020(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UARCandidateImage*                           DetectedImage;                                             // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   EstimatedSize;                                             // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AugmentedReality.ARQRCodeUpdatePayload
// 0x0070
struct FARQRCodeUpdatePayload
{
	struct FARSessionPayload                           SessionPayload;                                            // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2S3B[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  WorldTransform;                                            // 0x0020(0x0030) (BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Extents;                                                   // 0x0050(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ON4E[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     QRCode;                                                    // 0x0060(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AugmentedReality.ARPoseUpdatePayload
// 0x0040
struct FARPoseUpdatePayload
{
	struct FTransform                                  WorldTransform;                                            // 0x0000(0x0030) (BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          JointTransforms;                                           // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AugmentedReality.AREnvironmentProbeUpdatePayload
// 0x0030
struct FAREnvironmentProbeUpdatePayload
{
	struct FTransform                                  WorldTransform;                                            // 0x0000(0x0030) (BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AugmentedReality.ARObjectUpdatePayload
// 0x0030
struct FARObjectUpdatePayload
{
	struct FTransform                                  WorldTransform;                                            // 0x0000(0x0030) (BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AugmentedReality.ARMeshUpdatePayload
// 0x0060
struct FARMeshUpdatePayload
{
	struct FARSessionPayload                           SessionPayload;                                            // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AA0X[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  WorldTransform;                                            // 0x0020(0x0030) (BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	AugmentedReality_EARObjectClassification           ObjectClassification;                                      // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QB0A[0xF];                                     // 0x0051(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct AugmentedReality.ARGeoAnchorUpdatePayload
// 0x0070
struct FARGeoAnchorUpdatePayload
{
	struct FARSessionPayload                           SessionPayload;                                            // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I3ZR[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  WorldTransform;                                            // 0x0020(0x0030) (BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Longitude;                                                 // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Latitude;                                                  // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AltitudeMeters;                                            // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AugmentedReality_EARAltitudeSource                 AltitudeSource;                                            // 0x005C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R001[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AnchorName;                                                // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AugmentedReality.ARVideoFormat
// 0x000C
struct FARVideoFormat
{
	int                                                FPS;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Width;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Height;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AugmentedReality.ARSkeletonDefinition
// 0x0028
struct FARSkeletonDefinition
{
	int                                                NumJoints;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JLT0[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               JointNames;                                                // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        ParentIndices;                                             // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AugmentedReality.ARPose3D
// 0x0050
struct FARPose3D
{
	struct FARSkeletonDefinition                       SkeletonDefinition;                                        // 0x0000(0x0028) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          JointTransforms;                                           // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                       IsJointTracked;                                            // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	AugmentedReality_EARJointTransformSpace            JointTransformSpace;                                       // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KEA2[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct AugmentedReality.TrackedGeometryGroup
// 0x0018
struct FTrackedGeometryGroup
{
	class AARActor*                                    ARActor;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UARComponent*                                ARComponent;                                               // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UARTrackedGeometry*                          TrackedGeometry;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AugmentedReality.ARSharedWorldReplicationState
// 0x0008
struct FARSharedWorldReplicationState
{
	int                                                PreviewImageOffset;                                        // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ARWorldOffset;                                             // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AugmentedReality.ARTraceResult
// 0x0060
struct FARTraceResult
{
	float                                              DistanceFromCamera;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	AugmentedReality_EARLineTraceChannels              TraceChannel;                                              // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_QMP3[0xB];                                     // 0x0005(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  LocalTransform;                                            // 0x0010(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	class UARTrackedGeometry*                          TrackedGeometry;                                           // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_1TSM[0x18];                                    // 0x0048(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct AugmentedReality.ARCameraIntrinsics
// 0x0018
struct FARCameraIntrinsics
{
	struct FIntPoint                                   ImageResolution;                                           // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   FocalLength;                                               // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   PrincipalPoint;                                            // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct AugmentedReality.ARPose2D
// 0x0048
struct FARPose2D
{
	struct FARSkeletonDefinition                       SkeletonDefinition;                                        // 0x0000(0x0028) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                           JointLocations;                                            // 0x0028(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                       IsJointTracked;                                            // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct AugmentedReality.ARSessionStatus
// 0x0018
struct FARSessionStatus
{
	struct FString                                     AdditionalInfo;                                            // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AugmentedReality_EARSessionStatus                  Status;                                                    // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_41XG[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
