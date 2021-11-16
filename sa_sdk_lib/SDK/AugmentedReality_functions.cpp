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
//		Name   -> Function AugmentedReality.ARActor.AddARComponent
//		Flags  -> ()
// Parameters:
//		class UClass*                                      InComponentClass                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGuid                                       NativeID                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UARComponent*                                ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARComponent* AARActor::AddARComponent(class UClass* InComponentClass, const struct FGuid& NativeID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARActor.AddARComponent");

	AARActor_AddARComponent_Params params {};
	params.InComponentClass = InComponentClass;
	params.NativeID = NativeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
//		Flags  -> ()
// Parameters:
//		class USceneComponent*                             ComponentToUnpin                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::UnpinComponent(class USceneComponent* ComponentToUnpin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.UnpinComponent");

	UARBlueprintLibrary_UnpinComponent_Params params {};
	params.ComponentToUnpin = ComponentToUnpin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.ToggleARCapture
//		Flags  -> ()
// Parameters:
//		bool                                               bOnOff                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		AugmentedReality_EARCaptureType                    CaptureType                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::ToggleARCapture(bool bOnOff, AugmentedReality_EARCaptureType CaptureType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.ToggleARCapture");

	UARBlueprintLibrary_ToggleARCapture_Params params {};
	params.bOnOff = bOnOff;
	params.CaptureType = CaptureType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.StopARSession
//		Flags  -> ()
void UARBlueprintLibrary::StopARSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.StopARSession");

	UARBlueprintLibrary_StopARSession_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.StartARSession
//		Flags  -> ()
// Parameters:
//		class UARSessionConfig*                            SessionConfig                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::StartARSession(class UARSessionConfig* SessionConfig)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.StartARSession");

	UARBlueprintLibrary_StartARSession_Params params {};
	params.SessionConfig = SessionConfig;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera
//		Flags  -> ()
// Parameters:
//		bool                                               bOnOff                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::SetEnabledXRCamera(bool bOnOff)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera");

	UARBlueprintLibrary_SetEnabledXRCamera_Params params {};
	params.bOnOff = bOnOff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.SetARWorldScale
//		Flags  -> ()
// Parameters:
//		float                                              InWorldScale                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::SetARWorldScale(float InWorldScale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetARWorldScale");

	UARBlueprintLibrary_SetARWorldScale_Params params {};
	params.InWorldScale = InWorldScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation
//		Flags  -> ()
// Parameters:
//		struct FVector                                     OriginLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    OriginRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               bIsTransformInWorldSpace                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bMaintainUpDirection                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::SetARWorldOriginLocationAndRotation(const struct FVector& OriginLocation, const struct FRotator& OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation");

	UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Params params {};
	params.OriginLocation = OriginLocation;
	params.OriginRotation = OriginRotation;
	params.bIsTransformInWorldSpace = bIsTransformInWorldSpace;
	params.bMaintainUpDirection = bMaintainUpDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
//		Flags  -> ()
// Parameters:
//		struct FTransform                                  InAlignmentTransform                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::SetAlignmentTransform(const struct FTransform& InAlignmentTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform");

	UARBlueprintLibrary_SetAlignmentTransform_Params params {};
	params.InAlignmentTransform = InAlignmentTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore
//		Flags  -> ()
// Parameters:
//		struct FName                                       InSaveName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UARPin*                                      InPin                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::SaveARPinToLocalStore(const struct FName& InSaveName, class UARPin* InPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore");

	UARBlueprintLibrary_SaveARPinToLocalStore_Params params {};
	params.InSaveName = InSaveName;
	params.InPin = InPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.ResizeXRCamera
//		Flags  -> ()
// Parameters:
//		struct FIntPoint                                   InSize                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FIntPoint                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FIntPoint UARBlueprintLibrary::ResizeXRCamera(const struct FIntPoint& InSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.ResizeXRCamera");

	UARBlueprintLibrary_ResizeXRCamera_Params params {};
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.RemovePin
//		Flags  -> ()
// Parameters:
//		class UARPin*                                      PinToRemove                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::RemovePin(class UARPin* PinToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.RemovePin");

	UARBlueprintLibrary_RemovePin_Params params {};
	params.PinToRemove = PinToRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore
//		Flags  -> ()
// Parameters:
//		struct FName                                       InSaveName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::RemoveARPinFromLocalStore(const struct FName& InSaveName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore");

	UARBlueprintLibrary_RemoveARPinFromLocalStore_Params params {};
	params.InSaveName = InSaveName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore
//		Flags  -> ()
void UARBlueprintLibrary::RemoveAllARPinsFromLocalStore()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore");

	UARBlueprintLibrary_RemoveAllARPinsFromLocalStore_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
//		Flags  -> ()
// Parameters:
//		class USceneComponent*                             ComponentToPin                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FName                                       DebugName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UARPin*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARPin* UARBlueprintLibrary::PinComponentToTraceResult(class USceneComponent* ComponentToPin, const struct FARTraceResult& TraceResult, const struct FName& DebugName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult");

	UARBlueprintLibrary_PinComponentToTraceResult_Params params {};
	params.ComponentToPin = ComponentToPin;
	params.TraceResult = TraceResult;
	params.DebugName = DebugName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.PinComponentToARPin
//		Flags  -> ()
// Parameters:
//		class USceneComponent*                             ComponentToPin                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UARPin*                                      Pin                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::PinComponentToARPin(class USceneComponent* ComponentToPin, class UARPin* Pin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponentToARPin");

	UARBlueprintLibrary_PinComponentToARPin_Params params {};
	params.ComponentToPin = ComponentToPin;
	params.Pin = Pin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.PinComponent
//		Flags  -> ()
// Parameters:
//		class USceneComponent*                             ComponentToPin                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  PinToWorldTransform                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		class UARTrackedGeometry*                          TrackedGeometry                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       DebugName                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UARPin*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARPin* UARBlueprintLibrary::PinComponent(class USceneComponent* ComponentToPin, const struct FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, const struct FName& DebugName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PinComponent");

	UARBlueprintLibrary_PinComponent_Params params {};
	params.ComponentToPin = ComponentToPin;
	params.PinToWorldTransform = PinToWorldTransform;
	params.TrackedGeometry = TrackedGeometry;
	params.DebugName = DebugName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.PauseARSession
//		Flags  -> ()
void UARBlueprintLibrary::PauseARSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.PauseARSession");

	UARBlueprintLibrary_PauseARSession_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore
//		Flags  -> ()
// Parameters:
//		TMap<struct FName, class UARPin*>                  ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
TMap<struct FName, class UARPin*> UARBlueprintLibrary::LoadARPinsFromLocalStore()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore");

	UARBlueprintLibrary_LoadARPinsFromLocalStore_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Start                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     End                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTestFeaturePoints                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTestGroundPlane                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTestPlaneExtents                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTestPlaneBoundaryPolygon                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FARTraceResult>                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FARTraceResult> UARBlueprintLibrary::LineTraceTrackedObjects3D(const struct FVector& Start, const struct FVector& End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D");

	UARBlueprintLibrary_LineTraceTrackedObjects3D_Params params {};
	params.Start = Start;
	params.End = End;
	params.bTestFeaturePoints = bTestFeaturePoints;
	params.bTestGroundPlane = bTestGroundPlane;
	params.bTestPlaneExtents = bTestPlaneExtents;
	params.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   ScreenCoord                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTestFeaturePoints                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTestGroundPlane                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTestPlaneExtents                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTestPlaneBoundaryPolygon                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FARTraceResult>                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FARTraceResult> UARBlueprintLibrary::LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects");

	UARBlueprintLibrary_LineTraceTrackedObjects_Params params {};
	params.ScreenCoord = ScreenCoord;
	params.bTestFeaturePoints = bTestFeaturePoints;
	params.bTestGroundPlane = bTestGroundPlane;
	params.bTestPlaneExtents = bTestPlaneExtents;
	params.bTestPlaneBoundaryPolygon = bTestPlaneBoundaryPolygon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARSessionType                    SessionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::IsSessionTypeSupported(AugmentedReality_EARSessionType SessionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported");

	UARBlueprintLibrary_IsSessionTypeSupported_Params params {};
	params.SessionType = SessionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARSessionType                    SessionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		AugmentedReality_EARSessionTrackingFeature         SessionTrackingFeature                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::IsSessionTrackingFeatureSupported(AugmentedReality_EARSessionType SessionType, AugmentedReality_EARSessionTrackingFeature SessionTrackingFeature)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported");

	UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Params params {};
	params.SessionType = SessionType;
	params.SessionTrackingFeature = SessionTrackingFeature;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARSessionType                    SessionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		AugmentedReality_EARSceneReconstruction            SceneReconstructionMethod                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::IsSceneReconstructionSupported(AugmentedReality_EARSessionType SessionType, AugmentedReality_EARSceneReconstruction SceneReconstructionMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported");

	UARBlueprintLibrary_IsSceneReconstructionSupported_Params params {};
	params.SessionType = SessionType;
	params.SceneReconstructionMethod = SceneReconstructionMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsARSupported
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::IsARSupported()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsARSupported");

	UARBlueprintLibrary_IsARSupported_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::IsARPinLocalStoreSupported()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported");

	UARBlueprintLibrary_IsARPinLocalStoreSupported_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::IsARPinLocalStoreReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady");

	UARBlueprintLibrary_IsARPinLocalStoreReady_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARWorldMappingState              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARWorldMappingState UARBlueprintLibrary::GetWorldMappingStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus");

	UARBlueprintLibrary_GetWorldMappingStatus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARTrackingQualityReason          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARTrackingQualityReason UARBlueprintLibrary::GetTrackingQualityReason()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason");

	UARBlueprintLibrary_GetTrackingQualityReason_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARTrackingQuality                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARTrackingQuality UARBlueprintLibrary::GetTrackingQuality()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality");

	UARBlueprintLibrary_GetTrackingQuality_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARSessionType                    SessionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FARVideoFormat>                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FARVideoFormat> UARBlueprintLibrary::GetSupportedVideoFormats(AugmentedReality_EARSessionType SessionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats");

	UARBlueprintLibrary_GetSupportedVideoFormats_Params params {};
	params.SessionType = SessionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
//		Flags  -> ()
// Parameters:
//		class UARSessionConfig*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARSessionConfig* UARBlueprintLibrary::GetSessionConfig()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig");

	UARBlueprintLibrary_GetSessionConfig_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
//		Flags  -> ()
// Parameters:
//		TArray<struct FVector>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FVector> UARBlueprintLibrary::GetPointCloud()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPointCloud");

	UARBlueprintLibrary_GetPointCloud_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
//		Flags  -> ()
// Parameters:
//		class UARTexture*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARTexture* UARBlueprintLibrary::GetPersonSegmentationImage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage");

	UARBlueprintLibrary_GetPersonSegmentationImage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
//		Flags  -> ()
// Parameters:
//		class UARTexture*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARTexture* UARBlueprintLibrary::GetPersonSegmentationDepthImage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage");

	UARBlueprintLibrary_GetPersonSegmentationDepthImage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation
//		Flags  -> ()
// Parameters:
//		struct FVector                                     InWorldLocation                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		AugmentedReality_EARObjectClassification           OutClassification                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     OutClassificationLocation                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MaxLocationDiff                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, AugmentedReality_EARObjectClassification* OutClassification, struct FVector* OutClassificationLocation, float MaxLocationDiff)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation");

	UARBlueprintLibrary_GetObjectClassificationAtLocation_Params params {};
	params.InWorldLocation = InWorldLocation;
	params.MaxLocationDiff = MaxLocationDiff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutClassification != nullptr)
		*OutClassification = params.OutClassification;
	if (OutClassificationLocation != nullptr)
		*OutClassificationLocation = params.OutClassificationLocation;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UARBlueprintLibrary::GetNumberOfTrackedFacesSupported()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported");

	UARBlueprintLibrary_GetNumberOfTrackedFacesSupported_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
//		Flags  -> ()
// Parameters:
//		class UARLightEstimate*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARLightEstimate* UARBlueprintLibrary::GetCurrentLightEstimate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate");

	UARBlueprintLibrary_GetCurrentLightEstimate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics
//		Flags  -> ()
// Parameters:
//		struct FARCameraIntrinsics                         OutCameraIntrinsics                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::GetCameraIntrinsics(struct FARCameraIntrinsics* OutCameraIntrinsics)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics");

	UARBlueprintLibrary_GetCameraIntrinsics_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutCameraIntrinsics != nullptr)
		*OutCameraIntrinsics = params.OutCameraIntrinsics;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
//		Flags  -> ()
// Parameters:
//		class UARTextureCameraImage*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARTextureCameraImage* UARBlueprintLibrary::GetCameraImage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCameraImage");

	UARBlueprintLibrary_GetCameraImage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
//		Flags  -> ()
// Parameters:
//		class UARTextureCameraDepth*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARTextureCameraDepth* UARBlueprintLibrary::GetCameraDepth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth");

	UARBlueprintLibrary_GetCameraDepth_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetARWorldScale
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARBlueprintLibrary::GetARWorldScale()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetARWorldScale");

	UARBlueprintLibrary_GetARWorldScale_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetARTexture
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARTextureType                    TextureType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UARTexture*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARTexture* UARBlueprintLibrary::GetARTexture(AugmentedReality_EARTextureType TextureType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetARTexture");

	UARBlueprintLibrary_GetARTexture_Params params {};
	params.TextureType = TextureType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
//		Flags  -> ()
// Parameters:
//		struct FARSessionStatus                            ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FARSessionStatus UARBlueprintLibrary::GetARSessionStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus");

	UARBlueprintLibrary_GetARSessionStatus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
//		Flags  -> ()
// Parameters:
//		TArray<class UARTrackedPose*>                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UARTrackedPose*> UARBlueprintLibrary::GetAllTrackedPoses()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses");

	UARBlueprintLibrary_GetAllTrackedPoses_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
//		Flags  -> ()
// Parameters:
//		TArray<class UARTrackedPoint*>                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UARTrackedPoint*> UARBlueprintLibrary::GetAllTrackedPoints()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints");

	UARBlueprintLibrary_GetAllTrackedPoints_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
//		Flags  -> ()
// Parameters:
//		TArray<class UARPlaneGeometry*>                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UARPlaneGeometry*> UARBlueprintLibrary::GetAllTrackedPlanes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes");

	UARBlueprintLibrary_GetAllTrackedPlanes_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
//		Flags  -> ()
// Parameters:
//		TArray<class UARTrackedImage*>                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UARTrackedImage*> UARBlueprintLibrary::GetAllTrackedImages()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages");

	UARBlueprintLibrary_GetAllTrackedImages_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
//		Flags  -> ()
// Parameters:
//		TArray<class UAREnvironmentCaptureProbe*>          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UAREnvironmentCaptureProbe*> UARBlueprintLibrary::GetAllTrackedEnvironmentCaptureProbes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes");

	UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
//		Flags  -> ()
// Parameters:
//		TArray<struct FARPose2D>                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FARPose2D> UARBlueprintLibrary::GetAllTracked2DPoses()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses");

	UARBlueprintLibrary_GetAllTracked2DPoses_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllPins
//		Flags  -> ()
// Parameters:
//		TArray<class UARPin*>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UARPin*> UARBlueprintLibrary::GetAllPins()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllPins");

	UARBlueprintLibrary_GetAllPins_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass
//		Flags  -> ()
// Parameters:
//		class UClass*                                      GeometryClass                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class UARTrackedGeometry*>                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UARTrackedGeometry*> UARBlueprintLibrary::GetAllGeometriesByClass(class UClass* GeometryClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass");

	UARBlueprintLibrary_GetAllGeometriesByClass_Params params {};
	params.GeometryClass = GeometryClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
//		Flags  -> ()
// Parameters:
//		TArray<class UARTrackedGeometry*>                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UARTrackedGeometry*> UARBlueprintLibrary::GetAllGeometries()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries");

	UARBlueprintLibrary_GetAllGeometries_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform
//		Flags  -> ()
// Parameters:
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARBlueprintLibrary::GetAlignmentTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform");

	UARBlueprintLibrary_GetAlignmentTransform_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName
//		Flags  -> ()
// Parameters:
//		struct FString                                     PointName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class UARTrackedPoint*>                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class UARTrackedPoint*> UARBlueprintLibrary::FindTrackedPointsByName(const struct FString& PointName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName");

	UARBlueprintLibrary_FindTrackedPointsByName_Params params {};
	params.PointName = PointName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
//		Flags  -> ()
// Parameters:
//		class UARTrackedGeometry*                          TrackedGeometry                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              OutlineThickness                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PersistForSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry");

	UARBlueprintLibrary_DebugDrawTrackedGeometry_Params params {};
	params.TrackedGeometry = TrackedGeometry;
	params.WorldContextObject = WorldContextObject;
	params.Color = Color;
	params.OutlineThickness = OutlineThickness;
	params.PersistForSeconds = PersistForSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
//		Flags  -> ()
// Parameters:
//		class UARPin*                                      ARPin                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PersistForSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin");

	UARBlueprintLibrary_DebugDrawPin_Params params {};
	params.ARPin = ARPin;
	params.WorldContextObject = WorldContextObject;
	params.Color = Color;
	params.Scale = Scale;
	params.PersistForSeconds = PersistForSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection
//		Flags  -> ()
// Parameters:
//		TArray<struct FVector>                             StartPoints                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             EndPoints                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FVector                                     ClosestIntersection                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::CalculateClosestIntersection(TArray<struct FVector> StartPoints, TArray<struct FVector> EndPoints, struct FVector* ClosestIntersection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection");

	UARBlueprintLibrary_CalculateClosestIntersection_Params params {};
	params.StartPoints = StartPoints;
	params.EndPoints = EndPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ClosestIntersection != nullptr)
		*ClosestIntersection = params.ClosestIntersection;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform
//		Flags  -> ()
// Parameters:
//		struct FTransform                                  TransformInFirstCoordinateSystem                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FTransform                                  TransformInSecondCoordinateSystem                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FTransform                                  AlignmentTransform                                         (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UARBlueprintLibrary::CalculateAlignmentTransform(const struct FTransform& TransformInFirstCoordinateSystem, const struct FTransform& TransformInSecondCoordinateSystem, struct FTransform* AlignmentTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform");

	UARBlueprintLibrary_CalculateAlignmentTransform_Params params {};
	params.TransformInFirstCoordinateSystem = TransformInFirstCoordinateSystem;
	params.TransformInSecondCoordinateSystem = TransformInSecondCoordinateSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AlignmentTransform != nullptr)
		*AlignmentTransform = params.AlignmentTransform;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName
//		Flags  -> ()
// Parameters:
//		struct FTransform                                  WorldTransform                                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     PointName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bDeletePointsWithSameName                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::AddTrackedPointWithName(const struct FTransform& WorldTransform, const struct FString& PointName, bool bDeletePointsWithSameName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName");

	UARBlueprintLibrary_AddTrackedPointWithName_Params params {};
	params.WorldTransform = WorldTransform;
	params.PointName = PointName;
	params.bDeletePointsWithSameName = bDeletePointsWithSameName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
//		Flags  -> ()
// Parameters:
//		class UARSessionConfig*                            SessionConfig                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  CandidateTexture                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     FriendlyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PhysicalWidth                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UARCandidateImage*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARCandidateImage* UARBlueprintLibrary::AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const struct FString& FriendlyName, float PhysicalWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage");

	UARBlueprintLibrary_AddRuntimeCandidateImage_Params params {};
	params.SessionConfig = SessionConfig;
	params.CandidateTexture = CandidateTexture;
	params.FriendlyName = FriendlyName;
	params.PhysicalWidth = PhysicalWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Extent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARBlueprintLibrary::AddManualEnvironmentCaptureProbe(const struct FVector& Location, const struct FVector& Extent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe");

	UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Params params {};
	params.Location = Location;
	params.Extent = Extent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
//		Flags  -> ()
// Parameters:
//		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UARTrackedGeometry*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARTrackedGeometry* UARTraceResultLibrary::GetTrackedGeometry(const struct FARTraceResult& TraceResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry");

	UARTraceResultLibrary_GetTrackedGeometry_Params params {};
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
//		Flags  -> ()
// Parameters:
//		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		AugmentedReality_EARLineTraceChannels              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARLineTraceChannels UARTraceResultLibrary::GetTraceChannel(const struct FARTraceResult& TraceResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel");

	UARTraceResultLibrary_GetTraceChannel_Params params {};
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetLocalTransform
//		Flags  -> ()
// Parameters:
//		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARTraceResultLibrary::GetLocalTransform(const struct FARTraceResult& TraceResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalTransform");

	UARTraceResultLibrary_GetLocalTransform_Params params {};
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
//		Flags  -> ()
// Parameters:
//		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARTraceResultLibrary::GetLocalToWorldTransform(const struct FARTraceResult& TraceResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform");

	UARTraceResultLibrary_GetLocalToWorldTransform_Params params {};
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
//		Flags  -> ()
// Parameters:
//		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARTraceResultLibrary::GetLocalToTrackingTransform(const struct FARTraceResult& TraceResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform");

	UARTraceResultLibrary_GetLocalToTrackingTransform_Params params {};
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
//		Flags  -> ()
// Parameters:
//		struct FARTraceResult                              TraceResult                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARTraceResultLibrary::GetDistanceFromCamera(const struct FARTraceResult& TraceResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera");

	UARTraceResultLibrary_GetDistanceFromCamera_Params params {};
	params.TraceResult = TraceResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UARSaveWorldAsyncTaskBlueprintProxy*         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARSaveWorldAsyncTaskBlueprintProxy* UARSaveWorldAsyncTaskBlueprintProxy::ARSaveWorld(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld");

	UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Extent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARGetCandidateObjectAsyncTaskBlueprintProxy* UARGetCandidateObjectAsyncTaskBlueprintProxy::ARGetCandidateObject(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject");

	UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;
	params.Extent = Extent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARComponent.UpdateVisualization
//		Flags  -> ()
void UARComponent::UpdateVisualization()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARComponent.UpdateVisualization");

	UARComponent_UpdateVisualization_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARComponent.SetNativeID
//		Flags  -> ()
// Parameters:
//		struct FGuid                                       NativeID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARComponent::SetNativeID(const struct FGuid& NativeID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARComponent.SetNativeID");

	UARComponent_SetNativeID_Params params {};
	params.NativeID = NativeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARComponent.ReceiveRemove
//		Flags  -> ()
void UARComponent::ReceiveRemove()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARComponent.ReceiveRemove");

	UARComponent_ReceiveRemove_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARComponent.OnRep_Payload
//		Flags  -> ()
void UARComponent::OnRep_Payload()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARComponent.OnRep_Payload");

	UARComponent_OnRep_Payload_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARComponent.GetMRMesh
//		Flags  -> ()
// Parameters:
//		class UMRMeshComponent*                            ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMRMeshComponent* UARComponent::GetMRMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARComponent.GetMRMesh");

	UARComponent_GetMRMesh_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EPlaneComponentDebugMode          NewDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARPlaneComponent::SetPlaneComponentDebugMode(AugmentedReality_EPlaneComponentDebugMode NewDebugMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode");

	UARPlaneComponent_SetPlaneComponentDebugMode_Params params {};
	params.NewDebugMode = NewDebugMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors
//		Flags  -> ()
// Parameters:
//		TMap<AugmentedReality_EARObjectClassification, struct FLinearColor> InColors                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UARPlaneComponent::SetObjectClassificationDebugColors(TMap<AugmentedReality_EARObjectClassification, struct FLinearColor> InColors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors");

	UARPlaneComponent_SetObjectClassificationDebugColors_Params params {};
	params.InColors = InColors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARPlaneComponent.ServerUpdatePayload
//		Flags  -> ()
// Parameters:
//		struct FARPlaneUpdatePayload                       NewPayload                                                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void UARPlaneComponent::ServerUpdatePayload(const struct FARPlaneUpdatePayload& NewPayload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.ServerUpdatePayload");

	UARPlaneComponent_ServerUpdatePayload_Params params {};
	params.NewPayload = NewPayload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARPlaneComponent.ReceiveUpdate
//		Flags  -> ()
// Parameters:
//		struct FARPlaneUpdatePayload                       Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UARPlaneComponent::ReceiveUpdate(const struct FARPlaneUpdatePayload& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.ReceiveUpdate");

	UARPlaneComponent_ReceiveUpdate_Params params {};
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARPlaneComponent.ReceiveAdd
//		Flags  -> ()
// Parameters:
//		struct FARPlaneUpdatePayload                       Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UARPlaneComponent::ReceiveAdd(const struct FARPlaneUpdatePayload& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.ReceiveAdd");

	UARPlaneComponent_ReceiveAdd_Params params {};
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors
//		Flags  -> ()
// Parameters:
//		TMap<AugmentedReality_EARObjectClassification, struct FLinearColor> ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TMap<AugmentedReality_EARObjectClassification, struct FLinearColor> UARPlaneComponent::GetObjectClassificationDebugColors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors");

	UARPlaneComponent_GetObjectClassificationDebugColors_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARPointComponent.ServerUpdatePayload
//		Flags  -> ()
// Parameters:
//		struct FARPointUpdatePayload                       NewPayload                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UARPointComponent::ServerUpdatePayload(const struct FARPointUpdatePayload& NewPayload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPointComponent.ServerUpdatePayload");

	UARPointComponent_ServerUpdatePayload_Params params {};
	params.NewPayload = NewPayload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARPointComponent.ReceiveUpdate
//		Flags  -> ()
// Parameters:
//		struct FARPointUpdatePayload                       Payload                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UARPointComponent::ReceiveUpdate(const struct FARPointUpdatePayload& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPointComponent.ReceiveUpdate");

	UARPointComponent_ReceiveUpdate_Params params {};
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARPointComponent.ReceiveAdd
//		Flags  -> ()
// Parameters:
//		struct FARPointUpdatePayload                       Payload                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UARPointComponent::ReceiveAdd(const struct FARPointUpdatePayload& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPointComponent.ReceiveAdd");

	UARPointComponent_ReceiveAdd_Params params {};
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EFaceComponentDebugMode           NewDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARFaceComponent::SetFaceComponentDebugMode(AugmentedReality_EFaceComponentDebugMode NewDebugMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode");

	UARFaceComponent_SetFaceComponentDebugMode_Params params {};
	params.NewDebugMode = NewDebugMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARFaceComponent.ServerUpdatePayload
//		Flags  -> ()
// Parameters:
//		struct FARFaceUpdatePayload                        NewPayload                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UARFaceComponent::ServerUpdatePayload(const struct FARFaceUpdatePayload& NewPayload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceComponent.ServerUpdatePayload");

	UARFaceComponent_ServerUpdatePayload_Params params {};
	params.NewPayload = NewPayload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARFaceComponent.ReceiveUpdate
//		Flags  -> ()
// Parameters:
//		struct FARFaceUpdatePayload                        Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UARFaceComponent::ReceiveUpdate(const struct FARFaceUpdatePayload& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceComponent.ReceiveUpdate");

	UARFaceComponent_ReceiveUpdate_Params params {};
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARFaceComponent.ReceiveAdd
//		Flags  -> ()
// Parameters:
//		struct FARFaceUpdatePayload                        Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UARFaceComponent::ReceiveAdd(const struct FARFaceUpdatePayload& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceComponent.ReceiveAdd");

	UARFaceComponent_ReceiveAdd_Params params {};
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARImageComponent.SetImageComponentDebugMode
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EImageComponentDebugMode          NewDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARImageComponent::SetImageComponentDebugMode(AugmentedReality_EImageComponentDebugMode NewDebugMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARImageComponent.SetImageComponentDebugMode");

	UARImageComponent_SetImageComponentDebugMode_Params params {};
	params.NewDebugMode = NewDebugMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARImageComponent.ServerUpdatePayload
//		Flags  -> ()
// Parameters:
//		struct FARImageUpdatePayload                       NewPayload                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UARImageComponent::ServerUpdatePayload(const struct FARImageUpdatePayload& NewPayload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARImageComponent.ServerUpdatePayload");

	UARImageComponent_ServerUpdatePayload_Params params {};
	params.NewPayload = NewPayload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARImageComponent.ReceiveUpdate
//		Flags  -> ()
// Parameters:
//		struct FARImageUpdatePayload                       Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UARImageComponent::ReceiveUpdate(const struct FARImageUpdatePayload& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARImageComponent.ReceiveUpdate");

	UARImageComponent_ReceiveUpdate_Params params {};
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARImageComponent.ReceiveAdd
//		Flags  -> ()
// Parameters:
//		struct FARImageUpdatePayload                       Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UARImageComponent::ReceiveAdd(const struct FARImageUpdatePayload& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARImageComponent.ReceiveAdd");

	UARImageComponent_ReceiveAdd_Params params {};
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EQRCodeComponentDebugMode         NewDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARQRCodeComponent::SetQRCodeComponentDebugMode(AugmentedReality_EQRCodeComponentDebugMode NewDebugMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode");

	UARQRCodeComponent_SetQRCodeComponentDebugMode_Params params {};
	params.NewDebugMode = NewDebugMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARQRCodeComponent.ServerUpdatePayload
//		Flags  -> ()
// Parameters:
//		struct FARQRCodeUpdatePayload                      NewPayload                                                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void UARQRCodeComponent::ServerUpdatePayload(const struct FARQRCodeUpdatePayload& NewPayload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARQRCodeComponent.ServerUpdatePayload");

	UARQRCodeComponent_ServerUpdatePayload_Params params {};
	params.NewPayload = NewPayload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARQRCodeComponent.ReceiveUpdate
//		Flags  -> ()
// Parameters:
//		struct FARQRCodeUpdatePayload                      Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UARQRCodeComponent::ReceiveUpdate(const struct FARQRCodeUpdatePayload& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARQRCodeComponent.ReceiveUpdate");

	UARQRCodeComponent_ReceiveUpdate_Params params {};
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARQRCodeComponent.ReceiveAdd
//		Flags  -> ()
// Parameters:
//		struct FARQRCodeUpdatePayload                      Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UARQRCodeComponent::ReceiveAdd(const struct FARQRCodeUpdatePayload& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARQRCodeComponent.ReceiveAdd");

	UARQRCodeComponent_ReceiveAdd_Params params {};
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EPoseComponentDebugMode           NewDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARPoseComponent::SetPoseComponentDebugMode(AugmentedReality_EPoseComponentDebugMode NewDebugMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode");

	UARPoseComponent_SetPoseComponentDebugMode_Params params {};
	params.NewDebugMode = NewDebugMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARPoseComponent.ServerUpdatePayload
//		Flags  -> ()
// Parameters:
//		struct FARPoseUpdatePayload                        NewPayload                                                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void UARPoseComponent::ServerUpdatePayload(const struct FARPoseUpdatePayload& NewPayload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPoseComponent.ServerUpdatePayload");

	UARPoseComponent_ServerUpdatePayload_Params params {};
	params.NewPayload = NewPayload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARPoseComponent.ReceiveUpdate
//		Flags  -> ()
// Parameters:
//		struct FARPoseUpdatePayload                        Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UARPoseComponent::ReceiveUpdate(const struct FARPoseUpdatePayload& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPoseComponent.ReceiveUpdate");

	UARPoseComponent_ReceiveUpdate_Params params {};
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARPoseComponent.ReceiveAdd
//		Flags  -> ()
// Parameters:
//		struct FARPoseUpdatePayload                        Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UARPoseComponent::ReceiveAdd(const struct FARPoseUpdatePayload& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPoseComponent.ReceiveAdd");

	UARPoseComponent_ReceiveAdd_Params params {};
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload
//		Flags  -> ()
// Parameters:
//		struct FAREnvironmentProbeUpdatePayload            NewPayload                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAREnvironmentProbeComponent::ServerUpdatePayload(const struct FAREnvironmentProbeUpdatePayload& NewPayload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload");

	UAREnvironmentProbeComponent_ServerUpdatePayload_Params params {};
	params.NewPayload = NewPayload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate
//		Flags  -> ()
// Parameters:
//		struct FAREnvironmentProbeUpdatePayload            Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAREnvironmentProbeComponent::ReceiveUpdate(const struct FAREnvironmentProbeUpdatePayload& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate");

	UAREnvironmentProbeComponent_ReceiveUpdate_Params params {};
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd
//		Flags  -> ()
// Parameters:
//		struct FAREnvironmentProbeUpdatePayload            Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAREnvironmentProbeComponent::ReceiveAdd(const struct FAREnvironmentProbeUpdatePayload& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd");

	UAREnvironmentProbeComponent_ReceiveAdd_Params params {};
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARObjectComponent.ServerUpdatePayload
//		Flags  -> ()
// Parameters:
//		struct FARObjectUpdatePayload                      NewPayload                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UARObjectComponent::ServerUpdatePayload(const struct FARObjectUpdatePayload& NewPayload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARObjectComponent.ServerUpdatePayload");

	UARObjectComponent_ServerUpdatePayload_Params params {};
	params.NewPayload = NewPayload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARObjectComponent.ReceiveUpdate
//		Flags  -> ()
// Parameters:
//		struct FARObjectUpdatePayload                      Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UARObjectComponent::ReceiveUpdate(const struct FARObjectUpdatePayload& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARObjectComponent.ReceiveUpdate");

	UARObjectComponent_ReceiveUpdate_Params params {};
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARObjectComponent.ReceiveAdd
//		Flags  -> ()
// Parameters:
//		struct FARObjectUpdatePayload                      Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UARObjectComponent::ReceiveAdd(const struct FARObjectUpdatePayload& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARObjectComponent.ReceiveAdd");

	UARObjectComponent_ReceiveAdd_Params params {};
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARMeshComponent.ServerUpdatePayload
//		Flags  -> ()
// Parameters:
//		struct FARMeshUpdatePayload                        NewPayload                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UARMeshComponent::ServerUpdatePayload(const struct FARMeshUpdatePayload& NewPayload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARMeshComponent.ServerUpdatePayload");

	UARMeshComponent_ServerUpdatePayload_Params params {};
	params.NewPayload = NewPayload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARMeshComponent.ReceiveUpdate
//		Flags  -> ()
// Parameters:
//		struct FARMeshUpdatePayload                        Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UARMeshComponent::ReceiveUpdate(const struct FARMeshUpdatePayload& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARMeshComponent.ReceiveUpdate");

	UARMeshComponent_ReceiveUpdate_Params params {};
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARMeshComponent.ReceiveAdd
//		Flags  -> ()
// Parameters:
//		struct FARMeshUpdatePayload                        Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UARMeshComponent::ReceiveAdd(const struct FARMeshUpdatePayload& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARMeshComponent.ReceiveAdd");

	UARMeshComponent_ReceiveAdd_Params params {};
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EGeoAnchorComponentDebugMode      NewDebugMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARGeoAnchorComponent::SetGeoAnchorComponentDebugMode(AugmentedReality_EGeoAnchorComponentDebugMode NewDebugMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode");

	UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Params params {};
	params.NewDebugMode = NewDebugMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload
//		Flags  -> ()
// Parameters:
//		struct FARGeoAnchorUpdatePayload                   NewPayload                                                 (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void UARGeoAnchorComponent::ServerUpdatePayload(const struct FARGeoAnchorUpdatePayload& NewPayload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload");

	UARGeoAnchorComponent_ServerUpdatePayload_Params params {};
	params.NewPayload = NewPayload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate
//		Flags  -> ()
// Parameters:
//		struct FARGeoAnchorUpdatePayload                   Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UARGeoAnchorComponent::ReceiveUpdate(const struct FARGeoAnchorUpdatePayload& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate");

	UARGeoAnchorComponent_ReceiveUpdate_Params params {};
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARGeoAnchorComponent.ReceiveAdd
//		Flags  -> ()
// Parameters:
//		struct FARGeoAnchorUpdatePayload                   Payload                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UARGeoAnchorComponent::ReceiveAdd(const struct FARGeoAnchorUpdatePayload& Payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchorComponent.ReceiveAdd");

	UARGeoAnchorComponent_ReceiveAdd_Params params {};
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARDependencyHandler.StartARSessionLatent
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UARSessionConfig*                            SessionConfig                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UARDependencyHandler::StartARSessionLatent(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARDependencyHandler.StartARSessionLatent");

	UARDependencyHandler_StartARSessionLatent_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.SessionConfig = SessionConfig;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARDependencyHandler.RequestARSessionPermission
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UARSessionConfig*                            SessionConfig                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		AugmentedReality_EARServicePermissionRequestResult OutPermissionResult                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARDependencyHandler::RequestARSessionPermission(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, const struct FLatentActionInfo& LatentInfo, AugmentedReality_EARServicePermissionRequestResult* OutPermissionResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARDependencyHandler.RequestARSessionPermission");

	UARDependencyHandler_RequestARSessionPermission_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.SessionConfig = SessionConfig;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPermissionResult != nullptr)
		*OutPermissionResult = params.OutPermissionResult;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARDependencyHandler.InstallARService
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		AugmentedReality_EARServiceInstallRequestResult    OutInstallResult                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARDependencyHandler::InstallARService(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, AugmentedReality_EARServiceInstallRequestResult* OutInstallResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARDependencyHandler.InstallARService");

	UARDependencyHandler_InstallARService_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInstallResult != nullptr)
		*OutInstallResult = params.OutInstallResult;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARDependencyHandler.GetARDependencyHandler
//		Flags  -> ()
// Parameters:
//		class UARDependencyHandler*                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARDependencyHandler* UARDependencyHandler::GetARDependencyHandler()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARDependencyHandler.GetARDependencyHandler");

	UARDependencyHandler_GetARDependencyHandler_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARDependencyHandler.CheckARServiceAvailability
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		AugmentedReality_EARServiceAvailability            OutAvailability                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARDependencyHandler::CheckARServiceAvailability(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, AugmentedReality_EARServiceAvailability* OutAvailability)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARDependencyHandler.CheckARServiceAvailability");

	UARDependencyHandler_CheckARServiceAvailability_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAvailability != nullptr)
		*OutAvailability = params.OutAvailability;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport
//		Flags  -> ()
// Parameters:
//		class UARGeoTrackingSupport*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARGeoTrackingSupport* UARGeoTrackingSupport::GetGeoTrackingSupport()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport");

	UARGeoTrackingSupport_GetGeoTrackingSupport_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARGeoTrackingStateReason         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARGeoTrackingStateReason UARGeoTrackingSupport::GetGeoTrackingStateReason()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason");

	UARGeoTrackingSupport_GetGeoTrackingStateReason_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARGeoTrackingState               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARGeoTrackingState UARGeoTrackingSupport::GetGeoTrackingState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState");

	UARGeoTrackingSupport_GetGeoTrackingState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARGeoTrackingAccuracy            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARGeoTrackingAccuracy UARGeoTrackingSupport::GetGeoTrackingAccuracy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy");

	UARGeoTrackingSupport_GetGeoTrackingAccuracy_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude
//		Flags  -> ()
// Parameters:
//		float                                              Longitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Latitude                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              AltitudeMeters                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     OptionalAnchorName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARGeoTrackingSupport::AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, const struct FString& OptionalAnchorName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude");

	UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Params params {};
	params.Longitude = Longitude;
	params.Latitude = Latitude;
	params.AltitudeMeters = AltitudeMeters;
	params.OptionalAnchorName = OptionalAnchorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation
//		Flags  -> ()
// Parameters:
//		float                                              Longitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Latitude                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     OptionalAnchorName                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARGeoTrackingSupport::AddGeoAnchorAtLocation(float Longitude, float Latitude, const struct FString& OptionalAnchorName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation");

	UARGeoTrackingSupport_AddGeoAnchorAtLocation_Params params {};
	params.Longitude = Longitude;
	params.Latitude = Latitude;
	params.OptionalAnchorName = OptionalAnchorName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature
//		Flags  -> ()
// Parameters:
//		bool                                               bIsAvailable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, const struct FString& Error)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature");

	UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Params params {};
	params.bIsAvailable = bIsAvailable;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Longitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Latitude                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::CheckGeoTrackingAvailabilityAtLocation(class UObject* WorldContextObject, float Longitude, float Latitude)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation");

	UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Longitude = Longitude;
	params.Latitude = Latitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::CheckGeoTrackingAvailability(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability");

	UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature
//		Flags  -> ()
// Parameters:
//		float                                              Longitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Latitude                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Altitude                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Error                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGetGeoLocationAsyncTaskBlueprintProxy::GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, const struct FString& Error)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature");

	UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Params params {};
	params.Longitude = Longitude;
	params.Latitude = Latitude;
	params.Altitude = Altitude;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     WorldPosition                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UGetGeoLocationAsyncTaskBlueprintProxy*      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGetGeoLocationAsyncTaskBlueprintProxy* UGetGeoLocationAsyncTaskBlueprintProxy::GetGeoLocationAtWorldPosition(class UObject* WorldContextObject, const struct FVector& WorldPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition");

	UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.WorldPosition = WorldPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor
//		Flags  -> ()
// Parameters:
//		class UClass*                                      ComponentClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGuid                                       NativeID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARLifeCycleComponent::ServerSpawnARActor(class UClass* ComponentClass, const struct FGuid& NativeID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor");

	UARLifeCycleComponent_ServerSpawnARActor_Params params {};
	params.ComponentClass = ComponentClass;
	params.NativeID = NativeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor
//		Flags  -> ()
// Parameters:
//		class AARActor*                                    Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARLifeCycleComponent::ServerDestroyARActor(class AARActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor");

	UARLifeCycleComponent_ServerDestroyARActor_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class AARActor*                                    Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARLifeCycleComponent::InstanceARActorToBeDestroyedDelegate__DelegateSignature(class AARActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature");

	UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature_Params params {};
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UClass*                                      ComponentClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGuid                                       NativeID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AARActor*                                    SpawnedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARLifeCycleComponent::InstanceARActorSpawnedDelegate__DelegateSignature(class UClass* ComponentClass, const struct FGuid& NativeID, class AARActor* SpawnedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature");

	UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Params params {};
	params.ComponentClass = ComponentClass;
	params.NativeID = NativeID;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARBasicLightEstimate::GetAmbientIntensityLumens()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens");

	UARBasicLightEstimate_GetAmbientIntensityLumens_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARBasicLightEstimate::GetAmbientColorTemperatureKelvin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin");

	UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UARBasicLightEstimate::GetAmbientColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor");

	UARBasicLightEstimate_GetAmbientColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARPin.GetTrackingState
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARTrackingState                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARTrackingState UARPin::GetTrackingState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackingState");

	UARPin_GetTrackingState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARPin.GetTrackedGeometry
//		Flags  -> ()
// Parameters:
//		class UARTrackedGeometry*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARTrackedGeometry* UARPin::GetTrackedGeometry()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetTrackedGeometry");

	UARPin_GetTrackedGeometry_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARPin.GetPinnedComponent
//		Flags  -> ()
// Parameters:
//		class USceneComponent*                             ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USceneComponent* UARPin::GetPinnedComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetPinnedComponent");

	UARPin_GetPinnedComponent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARPin.GetLocalToWorldTransform
//		Flags  -> ()
// Parameters:
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARPin::GetLocalToWorldTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToWorldTransform");

	UARPin_GetLocalToWorldTransform_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARPin.GetLocalToTrackingTransform
//		Flags  -> ()
// Parameters:
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARPin::GetLocalToTrackingTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetLocalToTrackingTransform");

	UARPin_GetLocalToTrackingTransform_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARPin.GetDebugName
//		Flags  -> ()
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UARPin::GetDebugName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.GetDebugName");

	UARPin_GetDebugName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARPin.DebugDraw
//		Flags  -> ()
// Parameters:
//		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                Color                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PersistForSeconds                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARPin::DebugDraw(class UWorld* World, const struct FLinearColor& Color, float Scale, float PersistForSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPin.DebugDraw");

	UARPin_DebugDraw_Params params {};
	params.World = World;
	params.Color = Color;
	params.Scale = Scale;
	params.PersistForSeconds = PersistForSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARSessionConfig::ShouldResetTrackedObjects()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects");

	UARSessionConfig_ShouldResetTrackedObjects_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARSessionConfig::ShouldResetCameraTracking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking");

	UARSessionConfig_ShouldResetCameraTracking_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARSessionConfig::ShouldRenderCameraOverlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay");

	UARSessionConfig_ShouldRenderCameraOverlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARSessionConfig::ShouldEnableCameraTracking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking");

	UARSessionConfig_ShouldEnableCameraTracking_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARSessionConfig::ShouldEnableAutoFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus");

	UARSessionConfig_ShouldEnableAutoFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.SetWorldMapData
//		Flags  -> ()
// Parameters:
//		TArray<unsigned char>                              WorldMapData                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UARSessionConfig::SetWorldMapData(TArray<unsigned char> WorldMapData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetWorldMapData");

	UARSessionConfig_SetWorldMapData_Params params {};
	params.WorldMapData = WorldMapData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARSessionTrackingFeature         InSessionTrackingFeature                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSessionConfig::SetSessionTrackingFeatureToEnable(AugmentedReality_EARSessionTrackingFeature InSessionTrackingFeature)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable");

	UARSessionConfig_SetSessionTrackingFeatureToEnable_Params params {};
	params.InSessionTrackingFeature = InSessionTrackingFeature;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARSceneReconstruction            InSceneReconstructionMethod                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSessionConfig::SetSceneReconstructionMethod(AugmentedReality_EARSceneReconstruction InSceneReconstructionMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod");

	UARSessionConfig_SetSceneReconstructionMethod_Params params {};
	params.InSceneReconstructionMethod = InSceneReconstructionMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
//		Flags  -> ()
// Parameters:
//		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSessionConfig::SetResetTrackedObjects(bool bNewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects");

	UARSessionConfig_SetResetTrackedObjects_Params params {};
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
//		Flags  -> ()
// Parameters:
//		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSessionConfig::SetResetCameraTracking(bool bNewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetResetCameraTracking");

	UARSessionConfig_SetResetCameraTracking_Params params {};
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARFaceTrackingUpdate             InUpdate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSessionConfig::SetFaceTrackingUpdate(AugmentedReality_EARFaceTrackingUpdate InUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate");

	UARSessionConfig_SetFaceTrackingUpdate_Params params {};
	params.InUpdate = InUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARFaceTrackingDirection          InDirection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSessionConfig::SetFaceTrackingDirection(AugmentedReality_EARFaceTrackingDirection InDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection");

	UARSessionConfig_SetFaceTrackingDirection_Params params {};
	params.InDirection = InDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
//		Flags  -> ()
// Parameters:
//		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSessionConfig::SetEnableAutoFocus(bool bNewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus");

	UARSessionConfig_SetEnableAutoFocus_Params params {};
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
//		Flags  -> ()
// Parameters:
//		struct FARVideoFormat                              NewFormat                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UARSessionConfig::SetDesiredVideoFormat(const struct FARVideoFormat& NewFormat)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat");

	UARSessionConfig_SetDesiredVideoFormat_Params params {};
	params.NewFormat = NewFormat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
//		Flags  -> ()
// Parameters:
//		TArray<class UARCandidateObject*>                  InCandidateObjects                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UARSessionConfig::SetCandidateObjectList(TArray<class UARCandidateObject*> InCandidateObjects)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.SetCandidateObjectList");

	UARSessionConfig_SetCandidateObjectList_Params params {};
	params.InCandidateObjects = InCandidateObjects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.GetWorldMapData
//		Flags  -> ()
// Parameters:
//		TArray<unsigned char>                              ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<unsigned char> UARSessionConfig::GetWorldMapData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetWorldMapData");

	UARSessionConfig_GetWorldMapData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.GetWorldAlignment
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARWorldAlignment                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARWorldAlignment UARSessionConfig::GetWorldAlignment()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetWorldAlignment");

	UARSessionConfig_GetWorldAlignment_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.GetSessionType
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARSessionType                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARSessionType UARSessionConfig::GetSessionType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetSessionType");

	UARSessionConfig_GetSessionType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARSceneReconstruction            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARSceneReconstruction UARSessionConfig::GetSceneReconstructionMethod()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod");

	UARSessionConfig_GetSceneReconstructionMethod_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARPlaneDetectionMode             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARPlaneDetectionMode UARSessionConfig::GetPlaneDetectionMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode");

	UARSessionConfig_GetPlaneDetectionMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UARSessionConfig::GetMaxNumSimultaneousImagesTracked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked");

	UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARLightEstimationMode            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARLightEstimationMode UARSessionConfig::GetLightEstimationMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetLightEstimationMode");

	UARSessionConfig_GetLightEstimationMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARFrameSyncMode                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARFrameSyncMode UARSessionConfig::GetFrameSyncMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFrameSyncMode");

	UARSessionConfig_GetFrameSyncMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARFaceTrackingUpdate             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARFaceTrackingUpdate UARSessionConfig::GetFaceTrackingUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate");

	UARSessionConfig_GetFaceTrackingUpdate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARFaceTrackingDirection          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARFaceTrackingDirection UARSessionConfig::GetFaceTrackingDirection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection");

	UARSessionConfig_GetFaceTrackingDirection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EAREnvironmentCaptureProbeType    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EAREnvironmentCaptureProbeType UARSessionConfig::GetEnvironmentCaptureProbeType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType");

	UARSessionConfig_GetEnvironmentCaptureProbeType_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARSessionTrackingFeature         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARSessionTrackingFeature UARSessionConfig::GetEnabledSessionTrackingFeature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature");

	UARSessionConfig_GetEnabledSessionTrackingFeature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
//		Flags  -> ()
// Parameters:
//		struct FARVideoFormat                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FARVideoFormat UARSessionConfig::GetDesiredVideoFormat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat");

	UARSessionConfig_GetDesiredVideoFormat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
//		Flags  -> ()
// Parameters:
//		TArray<class UARCandidateObject*>                  ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<class UARCandidateObject*> UARSessionConfig::GetCandidateObjectList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetCandidateObjectList");

	UARSessionConfig_GetCandidateObjectList_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.GetCandidateImageList
//		Flags  -> ()
// Parameters:
//		TArray<class UARCandidateImage*>                   ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<class UARCandidateImage*> UARSessionConfig::GetCandidateImageList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.GetCandidateImageList");

	UARSessionConfig_GetCandidateImageList_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.AddCandidateObject
//		Flags  -> ()
// Parameters:
//		class UARCandidateObject*                          CandidateObject                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSessionConfig::AddCandidateObject(class UARCandidateObject* CandidateObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.AddCandidateObject");

	UARSessionConfig_AddCandidateObject_Params params {};
	params.CandidateObject = CandidateObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSessionConfig.AddCandidateImage
//		Flags  -> ()
// Parameters:
//		class UARCandidateImage*                           NewCandidateImage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARSessionConfig::AddCandidateImage(class UARCandidateImage* NewCandidateImage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSessionConfig.AddCandidateImage");

	UARSessionConfig_AddCandidateImage_Params params {};
	params.NewCandidateImage = NewCandidateImage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
//		Flags  -> ()
// Parameters:
//		TArray<unsigned char>                              ImageData                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void AARSharedWorldGameMode::SetPreviewImageData(TArray<unsigned char> ImageData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData");

	AARSharedWorldGameMode_SetPreviewImageData_Params params {};
	params.ImageData = ImageData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
//		Flags  -> ()
void AARSharedWorldGameMode::SetARWorldSharingIsReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady");

	AARSharedWorldGameMode_SetARWorldSharingIsReady_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
//		Flags  -> ()
// Parameters:
//		TArray<unsigned char>                              ARWorldData                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void AARSharedWorldGameMode::SetARSharedWorldData(TArray<unsigned char> ARWorldData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData");

	AARSharedWorldGameMode_SetARSharedWorldData_Params params {};
	params.ARWorldData = ARWorldData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
//		Flags  -> ()
// Parameters:
//		class AARSharedWorldGameState*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AARSharedWorldGameState* AARSharedWorldGameMode::GetARSharedWorldGameState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState");

	AARSharedWorldGameMode_GetARSharedWorldGameState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
//		Flags  -> ()
void AARSharedWorldGameState::K2_OnARWorldMapIsReady()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady");

	AARSharedWorldGameState_K2_OnARWorldMapIsReady_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
//		Flags  -> ()
void AARSharedWorldPlayerController::ServerMarkReadyForReceiving()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving");

	AARSharedWorldPlayerController_ServerMarkReadyForReceiving_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
//		Flags  -> ()
// Parameters:
//		int                                                Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              Buffer                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AARSharedWorldPlayerController::ClientUpdatePreviewImageData(int Offset, TArray<unsigned char> Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData");

	AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Params params {};
	params.Offset = Offset;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
//		Flags  -> ()
// Parameters:
//		int                                                Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<unsigned char>                              Buffer                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void AARSharedWorldPlayerController::ClientUpdateARWorldData(int Offset, TArray<unsigned char> Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData");

	AARSharedWorldPlayerController_ClientUpdateARWorldData_Params params {};
	params.Offset = Offset;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
//		Flags  -> ()
// Parameters:
//		int                                                PreviewImageSize                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ARWorldDataSize                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AARSharedWorldPlayerController::ClientInitSharedWorld(int PreviewImageSize, int ARWorldDataSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld");

	AARSharedWorldPlayerController_ClientInitSharedWorld_Params params {};
	params.PreviewImageSize = PreviewImageSize;
	params.ARWorldDataSize = ARWorldDataSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
//		Flags  -> ()
// Parameters:
//		class UAREnvironmentCaptureProbe*                  InCaptureProbe                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AARSkyLight::SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe");

	AARSkyLight_SetEnvironmentCaptureProbe_Params params {};
	params.InCaptureProbe = InCaptureProbe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARTrackedGeometry.IsTracked
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARTrackedGeometry::IsTracked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.IsTracked");

	UARTrackedGeometry_IsTracked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
//		Flags  -> ()
// Parameters:
//		class UMRMeshComponent*                            ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMRMeshComponent* UARTrackedGeometry::GetUnderlyingMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh");

	UARTrackedGeometry_GetUnderlyingMesh_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARTrackedGeometry.GetTrackingState
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARTrackingState                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARTrackingState UARTrackedGeometry::GetTrackingState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetTrackingState");

	UARTrackedGeometry_GetTrackingState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARObjectClassification           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARObjectClassification UARTrackedGeometry::GetObjectClassification()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetObjectClassification");

	UARTrackedGeometry_GetObjectClassification_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARTrackedGeometry.GetName
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UARTrackedGeometry::GetName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetName");

	UARTrackedGeometry_GetName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
//		Flags  -> ()
// Parameters:
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARTrackedGeometry::GetLocalToWorldTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform");

	UARTrackedGeometry_GetLocalToWorldTransform_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
//		Flags  -> ()
// Parameters:
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARTrackedGeometry::GetLocalToTrackingTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform");

	UARTrackedGeometry_GetLocalToTrackingTransform_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARTrackedGeometry::GetLastUpdateTimestamp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp");

	UARTrackedGeometry_GetLastUpdateTimestamp_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UARTrackedGeometry::GetLastUpdateFrameNumber()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber");

	UARTrackedGeometry_GetLastUpdateFrameNumber_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARTrackedGeometry.GetDebugName
//		Flags  -> ()
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UARTrackedGeometry::GetDebugName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedGeometry.GetDebugName");

	UARTrackedGeometry_GetDebugName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
//		Flags  -> ()
// Parameters:
//		class UARPlaneGeometry*                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARPlaneGeometry* UARPlaneGeometry::GetSubsumedBy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy");

	UARPlaneGeometry_GetSubsumedBy_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARPlaneGeometry.GetOrientation
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARPlaneOrientation               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARPlaneOrientation UARPlaneGeometry::GetOrientation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetOrientation");

	UARPlaneGeometry_GetOrientation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARPlaneGeometry.GetExtent
//		Flags  -> ()
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UARPlaneGeometry::GetExtent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetExtent");

	UARPlaneGeometry_GetExtent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARPlaneGeometry.GetCenter
//		Flags  -> ()
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UARPlaneGeometry::GetCenter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetCenter");

	UARPlaneGeometry_GetCenter_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
//		Flags  -> ()
// Parameters:
//		TArray<struct FVector>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FVector> UARPlaneGeometry::GetBoundaryPolygonInLocalSpace()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace");

	UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARTrackedImage.GetEstimateSize
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UARTrackedImage::GetEstimateSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedImage.GetEstimateSize");

	UARTrackedImage_GetEstimateSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARTrackedImage.GetDetectedImage
//		Flags  -> ()
// Parameters:
//		class UARCandidateImage*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARCandidateImage* UARTrackedImage::GetDetectedImage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedImage.GetDetectedImage");

	UARTrackedImage_GetDetectedImage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EAREye                            Eye                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARFaceGeometry::GetWorldSpaceEyeTransform(AugmentedReality_EAREye Eye)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform");

	UARFaceGeometry_GetWorldSpaceEyeTransform_Params params {};
	params.Eye = Eye;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EAREye                            Eye                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UARFaceGeometry::GetLocalSpaceEyeTransform(AugmentedReality_EAREye Eye)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform");

	UARFaceGeometry_GetLocalSpaceEyeTransform_Params params {};
	params.Eye = Eye;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARFaceBlendShape                 BlendShape                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARFaceGeometry::GetBlendShapeValue(AugmentedReality_EARFaceBlendShape BlendShape)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue");

	UARFaceGeometry_GetBlendShapeValue_Params params {};
	params.BlendShape = BlendShape;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARFaceGeometry.GetBlendShapes
//		Flags  -> ()
// Parameters:
//		TMap<AugmentedReality_EARFaceBlendShape, float>    ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
TMap<AugmentedReality_EARFaceBlendShape, float> UARFaceGeometry::GetBlendShapes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARFaceGeometry.GetBlendShapes");

	UARFaceGeometry_GetBlendShapes_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
//		Flags  -> ()
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UAREnvironmentCaptureProbe::GetExtent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent");

	UAREnvironmentCaptureProbe_GetExtent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
//		Flags  -> ()
// Parameters:
//		class UAREnvironmentCaptureProbeTexture*           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAREnvironmentCaptureProbeTexture* UAREnvironmentCaptureProbe::GetEnvironmentCaptureTexture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture");

	UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARTrackedObject.GetDetectedObject
//		Flags  -> ()
// Parameters:
//		class UARCandidateObject*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UARCandidateObject* UARTrackedObject::GetDetectedObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedObject.GetDetectedObject");

	UARTrackedObject_GetDetectedObject_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARTrackedPose.GetTrackedPoseData
//		Flags  -> ()
// Parameters:
//		struct FARPose3D                                   ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
struct FARPose3D UARTrackedPose::GetTrackedPoseData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARTrackedPose.GetTrackedPoseData");

	UARTrackedPose_GetTrackedPoseData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation
//		Flags  -> ()
// Parameters:
//		struct FVector                                     InWorldLocation                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		AugmentedReality_EARObjectClassification           OutClassification                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     OutClassificationLocation                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MaxLocationDiff                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UARMeshGeometry::GetObjectClassificationAtLocation(const struct FVector& InWorldLocation, AugmentedReality_EARObjectClassification* OutClassification, struct FVector* OutClassificationLocation, float MaxLocationDiff)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation");

	UARMeshGeometry_GetObjectClassificationAtLocation_Params params {};
	params.InWorldLocation = InWorldLocation;
	params.MaxLocationDiff = MaxLocationDiff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutClassification != nullptr)
		*OutClassification = params.OutClassification;
	if (OutClassificationLocation != nullptr)
		*OutClassificationLocation = params.OutClassificationLocation;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARGeoAnchor.GetLongitude
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARGeoAnchor::GetLongitude()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchor.GetLongitude");

	UARGeoAnchor_GetLongitude_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARGeoAnchor.GetLatitude
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARGeoAnchor::GetLatitude()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchor.GetLatitude");

	UARGeoAnchor_GetLatitude_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARGeoAnchor.GetAltitudeSource
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARAltitudeSource                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARAltitudeSource UARGeoAnchor::GetAltitudeSource()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchor.GetAltitudeSource");

	UARGeoAnchor_GetAltitudeSource_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARGeoAnchor.GetAltitudeMeters
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARGeoAnchor::GetAltitudeMeters()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARGeoAnchor.GetAltitudeMeters");

	UARGeoAnchor_GetAltitudeMeters_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARCandidateImage::GetPhysicalWidth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetPhysicalWidth");

	UARCandidateImage_GetPhysicalWidth_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UARCandidateImage::GetPhysicalHeight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetPhysicalHeight");

	UARCandidateImage_GetPhysicalHeight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARCandidateImage.GetOrientation
//		Flags  -> ()
// Parameters:
//		AugmentedReality_EARCandidateImageOrientation      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AugmentedReality_EARCandidateImageOrientation UARCandidateImage::GetOrientation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetOrientation");

	UARCandidateImage_GetOrientation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARCandidateImage.GetFriendlyName
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UARCandidateImage::GetFriendlyName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetFriendlyName");

	UARCandidateImage_GetFriendlyName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARCandidateImage.GetCandidateTexture
//		Flags  -> ()
// Parameters:
//		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UARCandidateImage::GetCandidateTexture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateImage.GetCandidateTexture");

	UARCandidateImage_GetCandidateTexture_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARCandidateObject.SetFriendlyName
//		Flags  -> ()
// Parameters:
//		struct FString                                     NewName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UARCandidateObject::SetFriendlyName(const struct FString& NewName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetFriendlyName");

	UARCandidateObject_SetFriendlyName_Params params {};
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
//		Flags  -> ()
// Parameters:
//		TArray<unsigned char>                              InCandidateObject                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UARCandidateObject::SetCandidateObjectData(TArray<unsigned char> InCandidateObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetCandidateObjectData");

	UARCandidateObject_SetCandidateObjectData_Params params {};
	params.InCandidateObject = InCandidateObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARCandidateObject.SetBoundingBox
//		Flags  -> ()
// Parameters:
//		struct FBox                                        InBoundingBox                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UARCandidateObject::SetBoundingBox(const struct FBox& InBoundingBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.SetBoundingBox");

	UARCandidateObject_SetBoundingBox_Params params {};
	params.InBoundingBox = InBoundingBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARCandidateObject.GetFriendlyName
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UARCandidateObject::GetFriendlyName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetFriendlyName");

	UARCandidateObject_GetFriendlyName_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
//		Flags  -> ()
// Parameters:
//		TArray<unsigned char>                              ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<unsigned char> UARCandidateObject::GetCandidateObjectData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetCandidateObjectData");

	UARCandidateObject_GetCandidateObjectData_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AugmentedReality.ARCandidateObject.GetBoundingBox
//		Flags  -> ()
// Parameters:
//		struct FBox                                        ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FBox UARCandidateObject::GetBoundingBox()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AugmentedReality.ARCandidateObject.GetBoundingBox");

	UARCandidateObject_GetBoundingBox_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
