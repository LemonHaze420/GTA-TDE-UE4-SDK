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
// Classes
//---------------------------------------------------------------------------

// Class InteractiveToolsFramework.InteractiveToolBuilder
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInteractiveToolBuilder : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InteractiveToolPropertySet
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UInteractiveToolPropertySet : public UObject
{
public:
	unsigned char                                      UnknownData_IY4L[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInteractiveToolPropertySet*                 CachedProperties;                                          // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bIsPropertySetEnabled;                                     // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_O9R8[0x1F];                                    // 0x0041(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolPropertySet");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InteractiveTool
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UInteractiveTool : public UObject
{
public:
	unsigned char                                      UnknownData_NMJ9[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInputBehaviorSet*                           InputBehaviors;                                            // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UObject*>                             ToolPropertyObjects;                                       // 0x0050(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_TZLQ[0x20];                                    // 0x0060(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveTool");
		return ptr;
	}



};

// Class InteractiveToolsFramework.MultiSelectionTool
// 0x0010 (FullSize[0x0090] - InheritedSize[0x0080])
class UMultiSelectionTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData_89YB[0x10];                                    // 0x0080(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.MultiSelectionTool");
		return ptr;
	}



};

// Class InteractiveToolsFramework.SingleSelectionTool
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class USingleSelectionTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData_FADH[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleSelectionTool");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InteractionMechanic
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UInteractionMechanic : public UObject
{
public:
	unsigned char                                      UnknownData_39BX[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractionMechanic");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InternalToolFrameworkActor
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class AInternalToolFrameworkActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InternalToolFrameworkActor");
		return ptr;
	}



};

// Class InteractiveToolsFramework.SingleClickTool
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class USingleClickTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData_5WQU[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleClickTool");
		return ptr;
	}



};

// Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UMeshSurfacePointToolBuilder : public UInteractiveToolBuilder
{
public:
	unsigned char                                      UnknownData_CNYR[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSurfacePointToolBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.MeshSurfacePointTool
// 0x0038 (FullSize[0x00C0] - InheritedSize[0x0088])
class UMeshSurfacePointTool : public USingleSelectionTool
{
public:
	unsigned char                                      UnknownData_9WEB[0x38];                                    // 0x0088(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSurfacePointTool");
		return ptr;
	}



};

// Class InteractiveToolsFramework.BaseBrushTool
// 0x0100 (FullSize[0x01C0] - InheritedSize[0x00C0])
class UBaseBrushTool : public UMeshSurfacePointTool
{
public:
	class UBrushBaseProperties*                        BrushProperties;                                           // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInBrushStroke;                                            // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AGF9[0x3];                                     // 0x00C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WorldToLocalScale;                                         // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBrushStampData                             LastBrushStamp;                                            // 0x00D0(0x00AC) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S3PC[0x14];                                    // 0x017C(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      PropertyClass[0x28];                                       // 0x017C(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	class UBrushStampIndicator*                        BrushStampIndicator;                                       // 0x01B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.BaseBrushTool");
		return ptr;
	}



};

// Class InteractiveToolsFramework.BrushBaseProperties
// 0x0018 (FullSize[0x0078] - InheritedSize[0x0060])
class UBrushBaseProperties : public UInteractiveToolPropertySet
{
public:
	float                                              BrushSize;                                                 // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSpecifyRadius;                                            // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ESNN[0x3];                                     // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BrushRadius;                                               // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BrushStrength;                                             // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BrushFalloffAmount;                                        // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowStrength;                                             // 0x0074(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowFalloff;                                              // 0x0075(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PX20[0x2];                                     // 0x0076(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.BrushBaseProperties");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InteractiveGizmoBuilder
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInteractiveGizmoBuilder : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmoBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InteractiveGizmo
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UInteractiveGizmo : public UObject
{
public:
	unsigned char                                      UnknownData_UMHP[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInputBehaviorSet*                           InputBehaviors;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmo");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InputBehavior
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UInputBehavior : public UObject
{
public:
	unsigned char                                      UnknownData_XCAQ[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InputBehavior");
		return ptr;
	}



};

// Class InteractiveToolsFramework.AnyButtonInputBehavior
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UAnyButtonInputBehavior : public UInputBehavior
{
public:
	unsigned char                                      UnknownData_B7MA[0x50];                                    // 0x0030(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.AnyButtonInputBehavior");
		return ptr;
	}



};

// Class InteractiveToolsFramework.AxisAngleGizmoBuilder
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisAngleGizmoBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.AxisAngleGizmo
// 0x00B8 (FullSize[0x00F0] - InheritedSize[0x0038])
class UAxisAngleGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData_0YSM[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      AxisSource[0x10];                                          // 0x0038(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	unsigned char                                      AngleSource[0x10];                                         // 0x0058(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	unsigned char                                      HitTarget[0x10];                                           // 0x0068(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	unsigned char                                      StateTarget[0x10];                                         // 0x0078(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	bool                                               bInInteraction;                                            // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OOOF[0x3];                                     // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     RotationOrigin;                                            // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RotationAxis;                                              // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RotationPlaneX;                                            // 0x00A4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RotationPlaneY;                                            // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InteractionStartPoint;                                     // 0x00BC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InteractionCurPoint;                                       // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InteractionStartAngle;                                     // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InteractionCurAngle;                                       // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DMRG[0x14];                                    // 0x00DC(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisAngleGizmo");
		return ptr;
	}



};

// Class InteractiveToolsFramework.AxisPositionGizmoBuilder
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisPositionGizmoBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.AxisPositionGizmo
// 0x00A0 (FullSize[0x00D8] - InheritedSize[0x0038])
class UAxisPositionGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData_9J3Y[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      AxisSource[0x10];                                          // 0x0038(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	unsigned char                                      ParameterSource[0x10];                                     // 0x0058(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	unsigned char                                      HitTarget[0x10];                                           // 0x0068(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	unsigned char                                      StateTarget[0x10];                                         // 0x0078(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	bool                                               bEnableSignedAxis;                                         // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInInteraction;                                            // 0x0089(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IZCC[0x2];                                     // 0x008A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     InteractionOrigin;                                         // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InteractionAxis;                                           // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InteractionStartPoint;                                     // 0x00A4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InteractionCurPoint;                                       // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InteractionStartParameter;                                 // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InteractionCurParameter;                                   // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ParameterSign;                                             // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U8Y9[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisPositionGizmo");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoConstantAxisSource
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UGizmoConstantAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData_49FZ[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Origin;                                                    // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Direction;                                                 // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoConstantAxisSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UGizmoConstantFrameAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData_QHF2[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Origin;                                                    // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Direction;                                                 // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TangentX;                                                  // 0x0048(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TangentY;                                                  // 0x0054(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoConstantFrameAxisSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoWorldAxisSource
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UGizmoWorldAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData_SABA[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Origin;                                                    // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AxisIndex;                                                 // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoWorldAxisSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoComponentAxisSource
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UGizmoComponentAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData_EFWV[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             Component;                                                 // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AxisIndex;                                                 // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLocalAxes;                                                // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XJPY[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentAxisSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.BrushStampIndicatorBuilder
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.BrushStampIndicatorBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.BrushStampIndicator
// 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
class UBrushStampIndicator : public UInteractiveGizmo
{
public:
	float                                              BrushRadius;                                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BrushFalloff;                                              // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BrushPosition;                                             // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BrushNormal;                                               // 0x004C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDrawIndicatorLines;                                       // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDrawRadiusCircle;                                         // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_351U[0x2];                                     // 0x005A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SampleStepCount;                                           // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                LineColor;                                                 // 0x0060(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LineThickness;                                             // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDepthTested;                                              // 0x0074(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDrawSecondaryLines;                                       // 0x0075(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X790[0x2];                                     // 0x0076(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SecondaryLineThickness;                                    // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                SecondaryLineColor;                                        // 0x007C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0NFN[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         AttachedComponent;                                         // 0x0090(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_38JZ[0x18];                                    // 0x0098(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.BrushStampIndicator");
		return ptr;
	}



};

// Class InteractiveToolsFramework.ClickDragInputBehavior
// 0x00C0 (FullSize[0x0140] - InheritedSize[0x0080])
class UClickDragInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData_V4OE[0xA0];                                    // 0x0080(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bUpdateModifiersDuringDrag;                                // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SY7N[0x1F];                                    // 0x0121(0x001F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.ClickDragInputBehavior");
		return ptr;
	}



};

// Class InteractiveToolsFramework.LocalClickDragInputBehavior
// 0x0140 (FullSize[0x0280] - InheritedSize[0x0140])
class ULocalClickDragInputBehavior : public UClickDragInputBehavior
{
public:
	unsigned char                                      UnknownData_JNY1[0x140];                                   // 0x0140(0x0140) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.LocalClickDragInputBehavior");
		return ptr;
	}



};

// Class InteractiveToolsFramework.ClickDragToolBuilder
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UClickDragToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.ClickDragToolBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.ClickDragTool
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class UClickDragTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData_CJ71[0x8];                                     // 0x0080(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.ClickDragTool");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoActor
// 0x0000 (FullSize[0x0220] - InheritedSize[0x0220])
class AGizmoActor : public AInternalToolFrameworkActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoActor");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoBaseComponent
// 0x0020 (FullSize[0x0468] - InheritedSize[0x0448])
class UGizmoBaseComponent : public UPrimitiveComponent
{
public:
	struct FLinearColor                                Color;                                                     // 0x0448(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HoverSizeMultiplier;                                       // 0x0458(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PixelHitDistanceThreshold;                                 // 0x045C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XBRT[0x8];                                     // 0x0460(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseComponent");
		return ptr;
	}



	void UpdateWorldLocalState(bool bWorldIn);
	void UpdateHoverState(bool bHoveringIn);
};

// Class InteractiveToolsFramework.GizmoArrowComponent
// 0x0028 (FullSize[0x0490] - InheritedSize[0x0468])
class UGizmoArrowComponent : public UGizmoBaseComponent
{
public:
	struct FVector                                     Direction;                                                 // 0x0468(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Gap;                                                       // 0x0474(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Length;                                                    // 0x0478(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Thickness;                                                 // 0x047C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KSKR[0x10];                                    // 0x0480(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoArrowComponent");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoBoxComponent
// 0x0048 (FullSize[0x04B0] - InheritedSize[0x0468])
class UGizmoBoxComponent : public UGizmoBaseComponent
{
public:
	struct FVector                                     Origin;                                                    // 0x0468(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JD8B[0xC];                                     // 0x0474(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Rotation;                                                  // 0x0480(0x0010) (Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Dimensions;                                                // 0x0490(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LineThickness;                                             // 0x049C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRemoveHiddenLines;                                        // 0x04A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableAxisFlip;                                           // 0x04A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZJZF[0xE];                                     // 0x04A2(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBoxComponent");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoCircleComponent
// 0x0028 (FullSize[0x0490] - InheritedSize[0x0468])
class UGizmoCircleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                                     Normal;                                                    // 0x0468(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Radius;                                                    // 0x0474(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Thickness;                                                 // 0x0478(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumSides;                                                  // 0x047C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bViewAligned;                                              // 0x0480(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlyAllowFrontFacingHits;                                 // 0x0481(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IKNP[0xE];                                     // 0x0482(0x000E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoCircleComponent");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoTransformSource
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGizmoTransformSource : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformSource");
		return ptr;
	}



	void SetTransform(const struct FTransform& NewTransform);
	struct FTransform GetTransform();
};

// Class InteractiveToolsFramework.GizmoAxisSource
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGizmoAxisSource : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisSource");
		return ptr;
	}



	bool HasTangentVectors();
	void GetTangentVectors(struct FVector* TangentXOut, struct FVector* TangentYOut);
	struct FVector GetOrigin();
	struct FVector GetDirection();
};

// Class InteractiveToolsFramework.GizmoClickTarget
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGizmoClickTarget : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoClickTarget");
		return ptr;
	}



	void UpdateHoverState(bool bHovering);
};

// Class InteractiveToolsFramework.GizmoStateTarget
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGizmoStateTarget : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoStateTarget");
		return ptr;
	}



	void EndUpdate();
	void BeginUpdate();
};

// Class InteractiveToolsFramework.GizmoFloatParameterSource
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGizmoFloatParameterSource : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoFloatParameterSource");
		return ptr;
	}



	void SetParameter(float NewValue);
	float GetParameter();
	void EndModify();
	void BeginModify();
};

// Class InteractiveToolsFramework.GizmoVec2ParameterSource
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGizmoVec2ParameterSource : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoVec2ParameterSource");
		return ptr;
	}



	void SetParameter(const struct FVector2D& NewValue);
	struct FVector2D GetParameter();
	void EndModify();
	void BeginModify();
};

// Class InteractiveToolsFramework.GizmoLineHandleComponent
// 0x0028 (FullSize[0x0490] - InheritedSize[0x0468])
class UGizmoLineHandleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                                     Normal;                                                    // 0x0468(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HandleSize;                                                // 0x0474(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Thickness;                                                 // 0x0478(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Direction;                                                 // 0x047C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Length;                                                    // 0x0488(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bImageScale;                                               // 0x048C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XF2U[0x3];                                     // 0x048D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLineHandleComponent");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoRectangleComponent
// 0x0038 (FullSize[0x04A0] - InheritedSize[0x0468])
class UGizmoRectangleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                                     DirectionX;                                                // 0x0468(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DirectionY;                                                // 0x0474(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OffsetX;                                                   // 0x0480(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OffsetY;                                                   // 0x0484(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LengthX;                                                   // 0x0488(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LengthY;                                                   // 0x048C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Thickness;                                                 // 0x0490(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SegmentFlags;                                              // 0x0494(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U36E[0xB];                                     // 0x0495(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoRectangleComponent");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoLambdaHitTarget
// 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
class UGizmoLambdaHitTarget : public UObject
{
public:
	unsigned char                                      UnknownData_N3ZU[0x88];                                    // 0x0028(0x0088) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLambdaHitTarget");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoComponentHitTarget
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UGizmoComponentHitTarget : public UObject
{
public:
	unsigned char                                      UnknownData_UBQM[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         Component;                                                 // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T73V[0x48];                                    // 0x0038(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentHitTarget");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InputBehaviorSet
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UInputBehaviorSet : public UObject
{
public:
	TArray<struct FBehaviorInfo>                       Behaviors;                                                 // 0x0028(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InputBehaviorSet");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InputBehaviorSource
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInputBehaviorSource : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InputBehaviorSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InputRouter
// 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
class UInputRouter : public UObject
{
public:
	bool                                               bAutoInvalidateOnHover;                                    // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAutoInvalidateOnCapture;                                  // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FCXK[0xE];                                     // 0x002A(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInputBehaviorSet*                           ActiveInputBehaviors;                                      // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_GKH4[0x70];                                    // 0x0040(0x0070) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InputRouter");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InteractiveGizmoManager
// 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
class UInteractiveGizmoManager : public UObject
{
public:
	unsigned char                                      UnknownData_HXVX[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FActiveGizmo>                        ActiveGizmos;                                              // 0x0030(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_1RBP[0x18];                                    // 0x0040(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, class UInteractiveGizmoBuilder*> GizmoBuilders;                                             // 0x0058(0x0050) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ZTHD[0x10];                                    // 0x00A8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmoManager");
		return ptr;
	}



};

// Class InteractiveToolsFramework.ToolContextTransactionProvider
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UToolContextTransactionProvider : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.ToolContextTransactionProvider");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InteractiveToolManager
// 0x0110 (FullSize[0x0138] - InheritedSize[0x0028])
class UInteractiveToolManager : public UObject
{
public:
	unsigned char                                      UnknownData_V5R6[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInteractiveTool*                            ActiveLeftTool;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInteractiveTool*                            ActiveRightTool;                                           // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IV6A[0x50];                                    // 0x0040(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, class UInteractiveToolBuilder*> ToolBuilders;                                              // 0x0090(0x0050) (Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_AWGX[0x58];                                    // 0x00E0(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolManager");
		return ptr;
	}



};

// Class InteractiveToolsFramework.ToolFrameworkComponent
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UToolFrameworkComponent : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.ToolFrameworkComponent");
		return ptr;
	}



};

// Class InteractiveToolsFramework.InteractiveToolsContext
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class UInteractiveToolsContext : public UObject
{
public:
	unsigned char                                      UnknownData_L7U5[0x30];                                    // 0x0028(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UInputRouter*                                InputRouter;                                               // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInteractiveToolManager*                     ToolManager;                                               // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInteractiveGizmoManager*                    GizmoManager;                                              // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ToolManagerClass[0x28];                                    // 0x0070(0x0028) UNKNOWN PROPERTY: SoftClassProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolsContext");
		return ptr;
	}



};

// Class InteractiveToolsFramework.IntervalGizmoActor
// 0x0018 (FullSize[0x0238] - InheritedSize[0x0220])
class AIntervalGizmoActor : public AGizmoActor
{
public:
	class UGizmoLineHandleComponent*                   UpIntervalComponent;                                       // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGizmoLineHandleComponent*                   DownIntervalComponent;                                     // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGizmoLineHandleComponent*                   ForwardIntervalComponent;                                  // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.IntervalGizmoActor");
		return ptr;
	}



};

// Class InteractiveToolsFramework.IntervalGizmoBuilder
// 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
	unsigned char                                      UnknownData_8GG9[0x98];                                    // 0x0028(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.IntervalGizmoBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.IntervalGizmo
// 0x00F8 (FullSize[0x0130] - InheritedSize[0x0038])
class UIntervalGizmo : public UInteractiveGizmo
{
public:
	class UGizmoTransformChangeStateTarget*            StateTarget;                                               // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PUVW[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTransformProxy*                             TransformProxy;                                            // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UPrimitiveComponent*>                 ActiveComponents;                                          // 0x0058(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UInteractiveGizmo*>                   ActiveGizmos;                                              // 0x0068(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_Z9D4[0x18];                                    // 0x0078(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGizmoComponentAxisSource*                   AxisYSource;                                               // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*                   AxisZSource;                                               // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4VUB[0x90];                                    // 0x00A0(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.IntervalGizmo");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UGizmoBaseFloatParameterSource : public UObject
{
public:
	unsigned char                                      UnknownData_M1PC[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseFloatParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
// 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	unsigned char                                      FloatParameterSource[0x10];                                // 0x0048(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	float                                              MinParameter;                                              // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxParameter;                                              // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.KeyAsModifierInputBehavior
// 0x00E0 (FullSize[0x0110] - InheritedSize[0x0030])
class UKeyAsModifierInputBehavior : public UInputBehavior
{
public:
	unsigned char                                      UnknownData_88IP[0xE0];                                    // 0x0030(0x00E0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.KeyAsModifierInputBehavior");
		return ptr;
	}



};

// Class InteractiveToolsFramework.MouseHoverBehavior
// 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
class UMouseHoverBehavior : public UInputBehavior
{
public:
	unsigned char                                      UnknownData_XU6R[0x68];                                    // 0x0030(0x0068) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.MouseHoverBehavior");
		return ptr;
	}



};

// Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
// 0x00B0 (FullSize[0x0130] - InheritedSize[0x0080])
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData_BIP2[0xB0];                                    // 0x0080(0x00B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.MultiClickSequenceInputBehavior");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	float                                              Value;                                                     // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoFloatParameterChange                  LastChange;                                                // 0x004C(0x0008) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FU4D[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLocalFloatParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UGizmoBaseVec2ParameterSource : public UObject
{
public:
	unsigned char                                      UnknownData_LKO2[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
// 0x0018 (FullSize[0x0060] - InheritedSize[0x0048])
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	struct FVector2D                                   Value;                                                     // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoVec2ParameterChange                   LastChange;                                                // 0x0050(0x0010) (NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
// 0x00C8 (FullSize[0x0110] - InheritedSize[0x0048])
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	unsigned char                                      UnknownData_80YP[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      AxisSource[0x10];                                          // 0x0048(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	unsigned char                                      TransformSource[0x10];                                     // 0x00A0(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	float                                              Parameter;                                                 // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoFloatParameterChange                  LastChange;                                                // 0x00B4(0x0008) (NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     CurTranslationAxis;                                        // 0x00BC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CurTranslationOrigin;                                      // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YKC4[0xC];                                     // 0x00D4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  InitialTransform;                                          // 0x00E0(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
// 0x00E8 (FullSize[0x0130] - InheritedSize[0x0048])
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	unsigned char                                      UnknownData_77NJ[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      AxisSource[0x10];                                          // 0x0048(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	unsigned char                                      TransformSource[0x10];                                     // 0x00A0(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	struct FVector2D                                   Parameter;                                                 // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoVec2ParameterChange                   LastChange;                                                // 0x00B8(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     CurTranslationOrigin;                                      // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CurTranslationNormal;                                      // 0x00D4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CurTranslationAxisX;                                       // 0x00E0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CurTranslationAxisY;                                       // 0x00EC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5C1Y[0x8];                                     // 0x00F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  InitialTransform;                                          // 0x0100(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
// 0x00C8 (FullSize[0x0110] - InheritedSize[0x0048])
class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	unsigned char                                      UnknownData_0O2C[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      AxisSource[0x10];                                          // 0x0048(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	unsigned char                                      TransformSource[0x10];                                     // 0x00A0(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	float                                              Angle;                                                     // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoFloatParameterChange                  LastChange;                                                // 0x00B4(0x0008) (NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     CurRotationAxis;                                           // 0x00BC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CurRotationOrigin;                                         // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6JWN[0xC];                                     // 0x00D4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  InitialTransform;                                          // 0x00E0(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisRotationParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
// 0x00A8 (FullSize[0x00F0] - InheritedSize[0x0048])
class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	unsigned char                                      AxisSource[0x10];                                          // 0x0048(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	unsigned char                                      TransformSource[0x10];                                     // 0x0058(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	float                                              ScaleMultiplier;                                           // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Parameter;                                                 // 0x006C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoVec2ParameterChange                   LastChange;                                                // 0x0074(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     CurScaleOrigin;                                            // 0x0084(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CurScaleNormal;                                            // 0x0090(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CurScaleAxisX;                                             // 0x009C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CurScaleAxisY;                                             // 0x00A8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NATW[0xC];                                     // 0x00B4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  InitialTransform;                                          // 0x00C0(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoUniformScaleParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
// 0x0078 (FullSize[0x00C0] - InheritedSize[0x0048])
class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	unsigned char                                      AxisSource[0x10];                                          // 0x0048(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	unsigned char                                      TransformSource[0x10];                                     // 0x0058(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	float                                              ScaleMultiplier;                                           // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Parameter;                                                 // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoFloatParameterChange                  LastChange;                                                // 0x0070(0x0008) (NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     CurScaleAxis;                                              // 0x0078(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CurScaleOrigin;                                            // 0x0084(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  InitialTransform;                                          // 0x0090(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisScaleParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
// 0x00E8 (FullSize[0x0130] - InheritedSize[0x0048])
class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	unsigned char                                      UnknownData_45FS[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      AxisSource[0x10];                                          // 0x0048(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	unsigned char                                      TransformSource[0x10];                                     // 0x00A0(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	float                                              ScaleMultiplier;                                           // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Parameter;                                                 // 0x00B4(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGizmoVec2ParameterChange                   LastChange;                                                // 0x00BC(0x0010) (NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     CurScaleOrigin;                                            // 0x00CC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CurScaleNormal;                                            // 0x00D8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CurScaleAxisX;                                             // 0x00E4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     CurScaleAxisY;                                             // 0x00F0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5K9P[0x4];                                     // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  InitialTransform;                                          // 0x0100(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.PlanePositionGizmoBuilder
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.PlanePositionGizmoBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.PlanePositionGizmo
// 0x00C8 (FullSize[0x0100] - InheritedSize[0x0038])
class UPlanePositionGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData_1S7M[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      AxisSource[0x10];                                          // 0x0038(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	unsigned char                                      ParameterSource[0x10];                                     // 0x0058(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	unsigned char                                      HitTarget[0x10];                                           // 0x0068(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	unsigned char                                      StateTarget[0x10];                                         // 0x0078(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	bool                                               bEnableSignedAxis;                                         // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlipX;                                                    // 0x0089(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bFlipY;                                                    // 0x008A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInInteraction;                                            // 0x008B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InteractionOrigin;                                         // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InteractionNormal;                                         // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InteractionAxisX;                                          // 0x00A4(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InteractionAxisY;                                          // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InteractionStartPoint;                                     // 0x00BC(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InteractionCurPoint;                                       // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   InteractionStartParameter;                                 // 0x00D4(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   InteractionCurParameter;                                   // 0x00DC(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   ParameterSigns;                                            // 0x00E4(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5NWR[0x14];                                    // 0x00EC(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.PlanePositionGizmo");
		return ptr;
	}



};

// Class InteractiveToolsFramework.SelectionSet
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class USelectionSet : public UObject
{
public:
	unsigned char                                      UnknownData_AE02[0x18];                                    // 0x0028(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.SelectionSet");
		return ptr;
	}



};

// Class InteractiveToolsFramework.MeshSelectionSet
// 0x0040 (FullSize[0x0080] - InheritedSize[0x0040])
class UMeshSelectionSet : public USelectionSet
{
public:
	TArray<int>                                        Vertices;                                                  // 0x0040(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        Edges;                                                     // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        Faces;                                                     // 0x0060(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        Groups;                                                    // 0x0070(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSelectionSet");
		return ptr;
	}



};

// Class InteractiveToolsFramework.SingleClickInputBehavior
// 0x00B0 (FullSize[0x0130] - InheritedSize[0x0080])
class USingleClickInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData_CKPJ[0x40];                                    // 0x0080(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               HitTestOnRelease;                                          // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XZ91[0x6F];                                    // 0x00C1(0x006F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleClickInputBehavior");
		return ptr;
	}



};

// Class InteractiveToolsFramework.SingleClickToolBuilder
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USingleClickToolBuilder : public UInteractiveToolBuilder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleClickToolBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoNilStateTarget
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UGizmoNilStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData_F83X[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoNilStateTarget");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoLambdaStateTarget
// 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
class UGizmoLambdaStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData_J4JQ[0x88];                                    // 0x0028(0x0088) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLambdaStateTarget");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UGizmoObjectModifyStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData_2XB5[0x30];                                    // 0x0028(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoObjectModifyStateTarget");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
// 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
class UGizmoTransformChangeStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData_5KTG[0x28];                                    // 0x0028(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      TransactionManager[0x10];                                  // 0x0028(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	unsigned char                                      UnknownData_EDJM[0x80];                                    // 0x0060(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformChangeStateTarget");
		return ptr;
	}



};

// Class InteractiveToolsFramework.TransformGizmoActor
// 0x0080 (FullSize[0x02A0] - InheritedSize[0x0220])
class ATransformGizmoActor : public AGizmoActor
{
public:
	class UPrimitiveComponent*                         TranslateX;                                                // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         TranslateY;                                                // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         TranslateZ;                                                // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         TranslateYZ;                                               // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         TranslateXZ;                                               // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         TranslateXY;                                               // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         RotateX;                                                   // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         RotateY;                                                   // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         RotateZ;                                                   // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         UniformScale;                                              // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         AxisScaleX;                                                // 0x0270(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         AxisScaleY;                                                // 0x0278(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         AxisScaleZ;                                                // 0x0280(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         PlaneScaleYZ;                                              // 0x0288(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         PlaneScaleXZ;                                              // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                         PlaneScaleXY;                                              // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformGizmoActor");
		return ptr;
	}



};

// Class InteractiveToolsFramework.TransformGizmoBuilder
// 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
class UTransformGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
	unsigned char                                      UnknownData_4HPO[0x98];                                    // 0x0028(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformGizmoBuilder");
		return ptr;
	}



};

// Class InteractiveToolsFramework.TransformGizmo
// 0x0168 (FullSize[0x01A0] - InheritedSize[0x0038])
class UTransformGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData_O7IS[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTransformProxy*                             ActiveTarget;                                              // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSnapToWorldGrid;                                          // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bGridSizeIsExplicit;                                       // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NN9U[0x2];                                     // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     ExplicitGridSize;                                          // 0x004C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRotationGridSizeIsExplicit;                               // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WHL6[0x3];                                     // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    ExplicitRotationGridSize;                                  // 0x005C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bSnapToWorldRotGrid;                                       // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseContextCoordinateSystem;                               // 0x0069(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SXR5[0x2];                                     // 0x006A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	InteractiveToolsFramework_EToolContextCoordinateSystem CurrentCoordinateSystem;                                   // 0x006C(0x0001) ELEMENT_SIZE_MISMATCH (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3SDP[0x3];                                     // 0x006A(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_CJSX[0x90];                                    // 0x0070(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPrimitiveComponent*>                 ActiveComponents;                                          // 0x0100(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UPrimitiveComponent*>                 NonuniformScaleComponents;                                 // 0x0110(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class UInteractiveGizmo*>                   ActiveGizmos;                                              // 0x0120(0x0010) (ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_ACWG[0x10];                                    // 0x0130(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGizmoConstantFrameAxisSource*               CameraAxisSource;                                          // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*                   AxisXSource;                                               // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*                   AxisYSource;                                               // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*                   AxisZSource;                                               // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*                   UnitAxisXSource;                                           // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*                   UnitAxisYSource;                                           // 0x0168(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoComponentAxisSource*                   UnitAxisZSource;                                           // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoTransformChangeStateTarget*            StateTarget;                                               // 0x0178(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UGizmoScaledTransformSource*                 ScaledTransformSource;                                     // 0x0180(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_S9NM[0x18];                                    // 0x0188(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformGizmo");
		return ptr;
	}



};

// Class InteractiveToolsFramework.TransformProxy
// 0x00C8 (FullSize[0x00F0] - InheritedSize[0x0028])
class UTransformProxy : public UObject
{
public:
	unsigned char                                      UnknownData_N1QU[0x48];                                    // 0x0028(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bRotatePerObject;                                          // 0x0070(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetPivotMode;                                             // 0x0071(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GHCW[0x1E];                                    // 0x0072(0x001E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  SharedTransform;                                           // 0x0090(0x0030) (IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FTransform                                  InitialSharedTransform;                                    // 0x00C0(0x0030) (IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformProxy");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoBaseTransformSource
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UGizmoBaseTransformSource : public UObject
{
public:
	unsigned char                                      UnknownData_QFME[0x20];                                    // 0x0028(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseTransformSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{
public:
	class USceneComponent*                             Component;                                                 // 0x0048(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bModifyComponentOnTransform;                               // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R5GU[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentWorldTransformSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoScaledTransformSource
// 0x0098 (FullSize[0x00E0] - InheritedSize[0x0048])
class UGizmoScaledTransformSource : public UGizmoBaseTransformSource
{
public:
	unsigned char                                      ChildTransformSource[0x10];                                // 0x0048(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	unsigned char                                      UnknownData_NRCI[0x88];                                    // 0x0058(0x0088) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoScaledTransformSource");
		return ptr;
	}



};

// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
{
public:
	class UTransformProxy*                             Proxy;                                                     // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformProxyTransformSource");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
