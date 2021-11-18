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

// Enum InteractiveToolsFramework.EInputCaptureState
enum class InteractiveToolsFramework_EInputCaptureState : uint8_t
{
	EInputCaptureState__Begin      = 0,
	EInputCaptureState__Continue   = 1,
	EInputCaptureState__End        = 2,
	EInputCaptureState__Ignore     = 3,
	EInputCaptureState__EInputCaptureState_MAX = 4,

};

// Enum InteractiveToolsFramework.EInputCaptureRequestType
enum class InteractiveToolsFramework_EInputCaptureRequestType : uint8_t
{
	EInputCaptureRequestType__Begin = 0,
	EInputCaptureRequestType__Ignore = 1,
	EInputCaptureRequestType__EInputCaptureRequestType_MAX = 2,

};

// Enum InteractiveToolsFramework.EInputCaptureSide
enum class InteractiveToolsFramework_EInputCaptureSide : uint8_t
{
	EInputCaptureSide__None        = 0,
	EInputCaptureSide__Left        = 1,
	EInputCaptureSide__Right       = 2,
	EInputCaptureSide__Both        = 3,
	EInputCaptureSide__Any         = 4,
	EInputCaptureSide__EInputCaptureSide_MAX = 5,

};

// Enum InteractiveToolsFramework.EInputDevices
enum class InteractiveToolsFramework_EInputDevices : uint8_t
{
	EInputDevices__None            = 0,
	EInputDevices__Keyboard        = 1,
	EInputDevices__Mouse           = 2,
	EInputDevices__Gamepad         = 3,
	EInputDevices__OculusTouch     = 4,
	EInputDevices__HTCViveWands    = 5,
	EInputDevices__AnySpatialDevice = 6,
	EInputDevices__TabletFingers   = 7,
	EInputDevices__EInputDevices_MAX = 8,

};

// Enum InteractiveToolsFramework.ETransformGizmoSubElements
enum class InteractiveToolsFramework_ETransformGizmoSubElements : uint8_t
{
	ETransformGizmoSubElements__None = 0,
	ETransformGizmoSubElements__TranslateAxisX = 1,
	ETransformGizmoSubElements__TranslateAxisY = 2,
	ETransformGizmoSubElements__TranslateAxisZ = 3,
	ETransformGizmoSubElements__TranslateAllAxes = 4,
	ETransformGizmoSubElements__TranslatePlaneXY = 5,
	ETransformGizmoSubElements__TranslatePlaneXZ = 6,
	ETransformGizmoSubElements__TranslatePlaneYZ = 7,
	ETransformGizmoSubElements__TranslateAllPlanes = 8,
	ETransformGizmoSubElements__RotateAxisX = 9,
	ETransformGizmoSubElements__RotateAxisY = 10,
	ETransformGizmoSubElements__RotateAxisZ = 11,
	ETransformGizmoSubElements__RotateAllAxes = 12,
	ETransformGizmoSubElements__ScaleAxisX = 13,
	ETransformGizmoSubElements__ScaleAxisY = 14,
	ETransformGizmoSubElements__ScaleAxisZ = 15,
	ETransformGizmoSubElements__ScaleAllAxes = 16,
	ETransformGizmoSubElements__ScalePlaneYZ = 17,
	ETransformGizmoSubElements__ScalePlaneXZ = 18,
	ETransformGizmoSubElements__ScalePlaneXY = 19,
	ETransformGizmoSubElements__ScaleAllPlanes = 20,
	ETransformGizmoSubElements__ScaleUniform = 21,
	ETransformGizmoSubElements__StandardTranslateRotate = 22,
	ETransformGizmoSubElements__TranslateRotateUniformScale = 23,
	ETransformGizmoSubElements__FullTranslateRotateScale = 24,
	ETransformGizmoSubElements__ETransformGizmoSubElements_MAX = 25,

};

// Enum InteractiveToolsFramework.EToolChangeTrackingMode
enum class InteractiveToolsFramework_EToolChangeTrackingMode : uint8_t
{
	EToolChangeTrackingMode__NoChangeTracking = 0,
	EToolChangeTrackingMode__UndoToExit = 1,
	EToolChangeTrackingMode__FullUndoRedo = 2,
	EToolChangeTrackingMode__EToolChangeTrackingMode_MAX = 3,

};

// Enum InteractiveToolsFramework.EToolSide
enum class InteractiveToolsFramework_EToolSide : uint8_t
{
	EToolSide__Left                = 0,
	EToolSide__Mouse               = 1,
	EToolSide__Right               = 2,
	EToolSide__EToolSide_MAX       = 3,

};

// Enum InteractiveToolsFramework.EViewInteractionState
enum class InteractiveToolsFramework_EViewInteractionState : uint8_t
{
	EViewInteractionState__None    = 0,
	EViewInteractionState__Hovered = 1,
	EViewInteractionState__Focused = 2,
	EViewInteractionState__EViewInteractionState_MAX = 3,

};

// Enum InteractiveToolsFramework.ESelectedObjectsModificationType
enum class InteractiveToolsFramework_ESelectedObjectsModificationType : uint8_t
{
	ESelectedObjectsModificationType__Replace = 0,
	ESelectedObjectsModificationType__Add = 1,
	ESelectedObjectsModificationType__Remove = 2,
	ESelectedObjectsModificationType__Clear = 3,
	ESelectedObjectsModificationType__ESelectedObjectsModificationType_MAX = 4,

};

// Enum InteractiveToolsFramework.EToolMessageLevel
enum class InteractiveToolsFramework_EToolMessageLevel : uint8_t
{
	EToolMessageLevel__Internal    = 0,
	EToolMessageLevel__UserMessage = 1,
	EToolMessageLevel__UserNotification = 2,
	EToolMessageLevel__UserWarning = 3,
	EToolMessageLevel__UserError   = 4,
	EToolMessageLevel__EToolMessageLevel_MAX = 5,

};

// Enum InteractiveToolsFramework.EToolContextCoordinateSystem
enum class InteractiveToolsFramework_EToolContextCoordinateSystem : uint8_t
{
	EToolContextCoordinateSystem__World = 0,
	EToolContextCoordinateSystem__Local = 1,
	EToolContextCoordinateSystem__EToolContextCoordinateSystem_MAX = 2,

};

// Enum InteractiveToolsFramework.EStandardToolContextMaterials
enum class InteractiveToolsFramework_EStandardToolContextMaterials : uint8_t
{
	EStandardToolContextMaterials__VertexColorMaterial = 0,
	EStandardToolContextMaterials__EStandardToolContextMaterials_MAX = 1,

};

// Enum InteractiveToolsFramework.ESceneSnapQueryTargetType
enum class InteractiveToolsFramework_ESceneSnapQueryTargetType : uint8_t
{
	ESceneSnapQueryTargetType__None = 0,
	ESceneSnapQueryTargetType__MeshVertex = 1,
	ESceneSnapQueryTargetType__MeshEdge = 2,
	ESceneSnapQueryTargetType__Grid = 3,
	ESceneSnapQueryTargetType__All = 4,
	ESceneSnapQueryTargetType__ESceneSnapQueryTargetType_MAX = 5,

};

// Enum InteractiveToolsFramework.ESceneSnapQueryType
enum class InteractiveToolsFramework_ESceneSnapQueryType : uint8_t
{
	ESceneSnapQueryType__Position  = 0,
	ESceneSnapQueryType__Rotation  = 1,
	ESceneSnapQueryType__ESceneSnapQueryType_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct InteractiveToolsFramework.BrushStampData
// 0x00AC
struct FBrushStampData
{
	unsigned char                                      UnknownData_ZHTE[0xAC];                                    // 0x0000(0x00AC) MISSED OFFSET (PADDING)

};

// ScriptStruct InteractiveToolsFramework.BehaviorInfo
// 0x0020
struct FBehaviorInfo
{
	class UInputBehavior*                              Behavior;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5C3B[0x18];                                    // 0x0008(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct InteractiveToolsFramework.ActiveGizmo
// 0x0030
struct FActiveGizmo
{
	unsigned char                                      UnknownData_E3SW[0x30];                                    // 0x0000(0x0030) MISSED OFFSET (PADDING)

};

// ScriptStruct InteractiveToolsFramework.GizmoFloatParameterChange
// 0x0008
struct FGizmoFloatParameterChange
{
	float                                              InitialValue;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentValue;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct InteractiveToolsFramework.GizmoVec2ParameterChange
// 0x0010
struct FGizmoVec2ParameterChange
{
	struct FVector2D                                   InitialValue;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   CurrentValue;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct InteractiveToolsFramework.InputRayHit
// 0x0028
struct FInputRayHit
{
	unsigned char                                      UnknownData_YADW[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
