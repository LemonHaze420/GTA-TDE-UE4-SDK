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

// Enum MeshModelingTools.EMakeMeshPolygroupMode
enum class MeshModelingTools_EMakeMeshPolygroupMode : uint8_t
{
	EMakeMeshPolygroupMode__Single = 0,
	EMakeMeshPolygroupMode__PerFace = 1,
	EMakeMeshPolygroupMode__PerQuad = 2,
	EMakeMeshPolygroupMode__EMakeMeshPolygroupMode_MAX = 3,

};

// Enum MeshModelingTools.EMakeMeshPivotLocation
enum class MeshModelingTools_EMakeMeshPivotLocation : uint8_t
{
	EMakeMeshPivotLocation__Base   = 0,
	EMakeMeshPivotLocation__Centered = 1,
	EMakeMeshPivotLocation__Top    = 2,
	EMakeMeshPivotLocation__EMakeMeshPivotLocation_MAX = 3,

};

// Enum MeshModelingTools.EMakeMeshPlacementType
enum class MeshModelingTools_EMakeMeshPlacementType : uint8_t
{
	EMakeMeshPlacementType__GroundPlane = 0,
	EMakeMeshPlacementType__OnScene = 1,
	EMakeMeshPlacementType__EMakeMeshPlacementType_MAX = 2,

};

// Enum MeshModelingTools.EAlignObjectsBoxPoint
enum class MeshModelingTools_EAlignObjectsBoxPoint : uint8_t
{
	EAlignObjectsBoxPoint__Center  = 0,
	EAlignObjectsBoxPoint__Bottom  = 1,
	EAlignObjectsBoxPoint__Top     = 2,
	EAlignObjectsBoxPoint__Left    = 3,
	EAlignObjectsBoxPoint__Right   = 4,
	EAlignObjectsBoxPoint__Front   = 5,
	EAlignObjectsBoxPoint__Back    = 6,
	EAlignObjectsBoxPoint__Min     = 7,
	EAlignObjectsBoxPoint__Max     = 8,

};

// Enum MeshModelingTools.EAlignObjectsAlignToOptions
enum class MeshModelingTools_EAlignObjectsAlignToOptions : uint8_t
{
	EAlignObjectsAlignToOptions__FirstSelected = 0,
	EAlignObjectsAlignToOptions__LastSelected = 1,
	EAlignObjectsAlignToOptions__Combined = 2,
	EAlignObjectsAlignToOptions__EAlignObjectsAlignToOptions_MAX = 3,

};

// Enum MeshModelingTools.EAlignObjectsAlignTypes
enum class MeshModelingTools_EAlignObjectsAlignTypes : uint8_t
{
	EAlignObjectsAlignTypes__Pivots = 0,
	EAlignObjectsAlignTypes__BoundingBoxes = 1,
	EAlignObjectsAlignTypes__EAlignObjectsAlignTypes_MAX = 2,

};

// Enum MeshModelingTools.EBakedCurvatureClampMode
enum class MeshModelingTools_EBakedCurvatureClampMode : uint8_t
{
	EBakedCurvatureClampMode__None = 0,
	EBakedCurvatureClampMode__Positive = 1,
	EBakedCurvatureClampMode__Negative = 2,
	EBakedCurvatureClampMode__EBakedCurvatureClampMode_MAX = 3,

};

// Enum MeshModelingTools.EBakedCurvatureColorMode
enum class MeshModelingTools_EBakedCurvatureColorMode : uint8_t
{
	EBakedCurvatureColorMode__Grayscale = 0,
	EBakedCurvatureColorMode__RedBlue = 1,
	EBakedCurvatureColorMode__RedGreenBlue = 2,
	EBakedCurvatureColorMode__EBakedCurvatureColorMode_MAX = 3,

};

// Enum MeshModelingTools.EBakedCurvatureTypeMode
enum class MeshModelingTools_EBakedCurvatureTypeMode : uint8_t
{
	EBakedCurvatureTypeMode__MeanAverage = 0,
	EBakedCurvatureTypeMode__Max   = 1,
	EBakedCurvatureTypeMode__Min   = 2,
	EBakedCurvatureTypeMode__Gaussian = 3,

};

// Enum MeshModelingTools.EBakeTextureResolution
enum class MeshModelingTools_EBakeTextureResolution : uint8_t
{
	EBakeTextureResolution__Resolution16 = 0,
	EBakeTextureResolution__Resolution32 = 1,
	EBakeTextureResolution__Resolution64 = 2,
	EBakeTextureResolution__Resolution128 = 3,
	EBakeTextureResolution__Resolution256 = 4,
	EBakeTextureResolution__Resolution512 = 5,
	EBakeTextureResolution__Resolution1024 = 6,
	EBakeTextureResolution__Resolution2048 = 7,
	EBakeTextureResolution__Resolution4096 = 8,
	EBakeTextureResolution__Resolution8192 = 9,
	EBakeTextureResolution__EBakeTextureResolution_MAX = 10,

};

// Enum MeshModelingTools.EBakeMapType
enum class MeshModelingTools_EBakeMapType : uint8_t
{
	EBakeMapType__TangentSpaceNormalMap = 0,
	EBakeMapType__AmbientOcclusion = 1,
	EBakeMapType__Curvature        = 2,
	EBakeMapType__Texture2DImage   = 3,
	EBakeMapType__NormalImage      = 4,
	EBakeMapType__FaceNormalImage  = 5,
	EBakeMapType__PositionImage    = 6,
	EBakeMapType__EBakeMapType_MAX = 7,

};

// Enum MeshModelingTools.EBakeScaleMethod
enum class MeshModelingTools_EBakeScaleMethod : uint8_t
{
	EBakeScaleMethod__BakeFullScale = 0,
	EBakeScaleMethod__BakeNonuniformScale = 1,
	EBakeScaleMethod__DoNotBakeScale = 2,
	EBakeScaleMethod__EBakeScaleMethod_MAX = 3,

};

// Enum MeshModelingTools.ECollisionGeometryMode
enum class MeshModelingTools_ECollisionGeometryMode : uint8_t
{
	ECollisionGeometryMode__Default = 0,
	ECollisionGeometryMode__SimpleAndComplex = 1,
	ECollisionGeometryMode__UseSimpleAsComplex = 2,
	ECollisionGeometryMode__UseComplexAsSimple = 3,
	ECollisionGeometryMode__ECollisionGeometryMode_MAX = 4,

};

// Enum MeshModelingTools.ECombineTargetType
enum class MeshModelingTools_ECombineTargetType : uint8_t
{
	ECombineTargetType__NewAsset   = 0,
	ECombineTargetType__FirstInputAsset = 1,
	ECombineTargetType__LastInputAsset = 2,
	ECombineTargetType__ECombineTargetType_MAX = 3,

};

// Enum MeshModelingTools.EConvertToPolygonsMode
enum class MeshModelingTools_EConvertToPolygonsMode : uint8_t
{
	EConvertToPolygonsMode__FaceNormalDeviation = 0,
	EConvertToPolygonsMode__FromUVISlands = 1,
	EConvertToPolygonsMode__EConvertToPolygonsMode_MAX = 2,

};

// Enum MeshModelingTools.EQuickTransformerMode
enum class MeshModelingTools_EQuickTransformerMode : uint8_t
{
	EQuickTransformerMode__AxisTranslation = 0,
	EQuickTransformerMode__AxisRotation = 1,
	EQuickTransformerMode__EQuickTransformerMode_MAX = 2,

};

// Enum MeshModelingTools.EWeightScheme
enum class MeshModelingTools_EWeightScheme : uint8_t
{
	EWeightScheme__Uniform         = 0,
	EWeightScheme__Umbrella        = 1,
	EWeightScheme__Valence         = 2,
	EWeightScheme__MeanValue       = 3,
	EWeightScheme__Cotangent       = 4,
	EWeightScheme__ClampedCotangent = 5,
	EWeightScheme__EWeightScheme_MAX = 6,

};

// Enum MeshModelingTools.EGroupTopologyDeformationStrategy
enum class MeshModelingTools_EGroupTopologyDeformationStrategy : uint8_t
{
	EGroupTopologyDeformationStrategy__Linear = 0,
	EGroupTopologyDeformationStrategy__Laplacian = 1,
	EGroupTopologyDeformationStrategy__EGroupTopologyDeformationStrategy_MAX = 2,

};

// Enum MeshModelingTools.EDisplaceMeshToolDisplaceType
enum class MeshModelingTools_EDisplaceMeshToolDisplaceType : uint8_t
{
	EDisplaceMeshToolDisplaceType__Constant = 0,
	EDisplaceMeshToolDisplaceType__RandomNoise = 1,
	EDisplaceMeshToolDisplaceType__PerlinNoise = 2,
	EDisplaceMeshToolDisplaceType__DisplacementMap = 3,
	EDisplaceMeshToolDisplaceType__SineWave = 4,
	EDisplaceMeshToolDisplaceType__EDisplaceMeshToolDisplaceType_MAX = 5,

};

// Enum MeshModelingTools.EDrawPolygonOutputMode
enum class MeshModelingTools_EDrawPolygonOutputMode : uint8_t
{
	EDrawPolygonOutputMode__MeshedPolygon = 0,
	EDrawPolygonOutputMode__ExtrudedConstant = 1,
	EDrawPolygonOutputMode__ExtrudedInteractive = 2,
	EDrawPolygonOutputMode__EDrawPolygonOutputMode_MAX = 3,

};

// Enum MeshModelingTools.EDrawPolygonDrawMode
enum class MeshModelingTools_EDrawPolygonDrawMode : uint8_t
{
	EDrawPolygonDrawMode__Freehand = 0,
	EDrawPolygonDrawMode__Circle   = 1,
	EDrawPolygonDrawMode__Square   = 2,
	EDrawPolygonDrawMode__Rectangle = 3,
	EDrawPolygonDrawMode__RoundedRectangle = 4,
	EDrawPolygonDrawMode__HoleyCircle = 5,
	EDrawPolygonDrawMode__EDrawPolygonDrawMode_MAX = 6,

};

// Enum MeshModelingTools.EDrawPolyPathExtrudeDirection
enum class MeshModelingTools_EDrawPolyPathExtrudeDirection : uint8_t
{
	EDrawPolyPathExtrudeDirection__SelectionNormal = 0,
	EDrawPolyPathExtrudeDirection__WorldX = 1,
	EDrawPolyPathExtrudeDirection__WorldY = 2,
	EDrawPolyPathExtrudeDirection__WorldZ = 3,
	EDrawPolyPathExtrudeDirection__LocalX = 4,
	EDrawPolyPathExtrudeDirection__LocalY = 5,
	EDrawPolyPathExtrudeDirection__LocalZ = 6,
	EDrawPolyPathExtrudeDirection__EDrawPolyPathExtrudeDirection_MAX = 7,

};

// Enum MeshModelingTools.EDrawPolyPathHeightMode
enum class MeshModelingTools_EDrawPolyPathHeightMode : uint8_t
{
	EDrawPolyPathHeightMode__Interactive = 0,
	EDrawPolyPathHeightMode__Constant = 1,
	EDrawPolyPathHeightMode__EDrawPolyPathHeightMode_MAX = 2,

};

// Enum MeshModelingTools.EDrawPolyPathWidthMode
enum class MeshModelingTools_EDrawPolyPathWidthMode : uint8_t
{
	EDrawPolyPathWidthMode__Interactive = 0,
	EDrawPolyPathWidthMode__Constant = 1,
	EDrawPolyPathWidthMode__EDrawPolyPathWidthMode_MAX = 2,

};

// Enum MeshModelingTools.EDrawPolyPathOutputMode
enum class MeshModelingTools_EDrawPolyPathOutputMode : uint8_t
{
	EDrawPolyPathOutputMode__Ribbon = 0,
	EDrawPolyPathOutputMode__Extrusion = 1,
	EDrawPolyPathOutputMode__Ramp  = 2,
	EDrawPolyPathOutputMode__EDrawPolyPathOutputMode_MAX = 3,

};

// Enum MeshModelingTools.EDynamicMeshSculptBrushType
enum class MeshModelingTools_EDynamicMeshSculptBrushType : uint8_t
{
	EDynamicMeshSculptBrushType__Move = 0,
	EDynamicMeshSculptBrushType__PullKelvin = 1,
	EDynamicMeshSculptBrushType__PullSharpKelvin = 2,
	EDynamicMeshSculptBrushType__Smooth = 3,
	EDynamicMeshSculptBrushType__Offset = 4,
	EDynamicMeshSculptBrushType__SculptView = 5,
	EDynamicMeshSculptBrushType__SculptMax = 6,
	EDynamicMeshSculptBrushType__Inflate = 7,
	EDynamicMeshSculptBrushType__ScaleKelvin = 8,
	EDynamicMeshSculptBrushType__Pinch = 9,
	EDynamicMeshSculptBrushType__TwistKelvin = 10,
	EDynamicMeshSculptBrushType__Flatten = 11,
	EDynamicMeshSculptBrushType__Plane = 12,
	EDynamicMeshSculptBrushType__PlaneViewAligned = 13,
	EDynamicMeshSculptBrushType__FixedPlane = 14,
	EDynamicMeshSculptBrushType__Resample = 15,
	EDynamicMeshSculptBrushType__LastValue = 16,
	EDynamicMeshSculptBrushType__EDynamicMeshSculptBrushType_MAX = 17,

};

// Enum MeshModelingTools.EEdgeLoopInsertionMode
enum class MeshModelingTools_EEdgeLoopInsertionMode : uint8_t
{
	EEdgeLoopInsertionMode__Retriangulate = 0,
	EEdgeLoopInsertionMode__PlaneCut = 1,
	EEdgeLoopInsertionMode__EEdgeLoopInsertionMode_MAX = 2,

};

// Enum MeshModelingTools.EEdgeLoopPositioningMode
enum class MeshModelingTools_EEdgeLoopPositioningMode : uint8_t
{
	EEdgeLoopPositioningMode__Even = 0,
	EEdgeLoopPositioningMode__ProportionOffset = 1,
	EEdgeLoopPositioningMode__DistanceOffset = 2,
	EEdgeLoopPositioningMode__EEdgeLoopPositioningMode_MAX = 3,

};

// Enum MeshModelingTools.EPolyEditCutPlaneOrientation
enum class MeshModelingTools_EPolyEditCutPlaneOrientation : uint8_t
{
	EPolyEditCutPlaneOrientation__FaceNormals = 0,
	EPolyEditCutPlaneOrientation__ViewDirection = 1,
	EPolyEditCutPlaneOrientation__EPolyEditCutPlaneOrientation_MAX = 2,

};

// Enum MeshModelingTools.EPolyEditExtrudeDirection
enum class MeshModelingTools_EPolyEditExtrudeDirection : uint8_t
{
	EPolyEditExtrudeDirection__SelectionNormal = 0,
	EPolyEditExtrudeDirection__WorldX = 1,
	EPolyEditExtrudeDirection__WorldY = 2,
	EPolyEditExtrudeDirection__WorldZ = 3,
	EPolyEditExtrudeDirection__LocalX = 4,
	EPolyEditExtrudeDirection__LocalY = 5,
	EPolyEditExtrudeDirection__LocalZ = 6,
	EPolyEditExtrudeDirection__EPolyEditExtrudeDirection_MAX = 7,

};

// Enum MeshModelingTools.EEditMeshPolygonsToolActions
enum class MeshModelingTools_EEditMeshPolygonsToolActions : uint8_t
{
	EEditMeshPolygonsToolActions__NoAction = 0,
	EEditMeshPolygonsToolActions__PlaneCut = 1,
	EEditMeshPolygonsToolActions__Extrude = 2,
	EEditMeshPolygonsToolActions__Offset = 3,
	EEditMeshPolygonsToolActions__Inset = 4,
	EEditMeshPolygonsToolActions__Outset = 5,
	EEditMeshPolygonsToolActions__Merge = 6,
	EEditMeshPolygonsToolActions__Delete = 7,
	EEditMeshPolygonsToolActions__CutFaces = 8,
	EEditMeshPolygonsToolActions__RecalculateNormals = 9,
	EEditMeshPolygonsToolActions__FlipNormals = 10,
	EEditMeshPolygonsToolActions__Retriangulate = 11,
	EEditMeshPolygonsToolActions__Decompose = 12,
	EEditMeshPolygonsToolActions__Disconnect = 13,
	EEditMeshPolygonsToolActions__CollapseEdge = 14,
	EEditMeshPolygonsToolActions__WeldEdges = 15,
	EEditMeshPolygonsToolActions__StraightenEdge = 16,
	EEditMeshPolygonsToolActions__FillHole = 17,
	EEditMeshPolygonsToolActions__PlanarProjectionUV = 18,
	EEditMeshPolygonsToolActions__PokeSingleFace = 19,
	EEditMeshPolygonsToolActions__SplitSingleEdge = 20,
	EEditMeshPolygonsToolActions__FlipSingleEdge = 21,
	EEditMeshPolygonsToolActions__CollapseSingleEdge = 22,
	EEditMeshPolygonsToolActions__EEditMeshPolygonsToolActions_MAX = 23,

};

// Enum MeshModelingTools.ELocalFrameMode
enum class MeshModelingTools_ELocalFrameMode : uint8_t
{
	ELocalFrameMode__FromObject    = 0,
	ELocalFrameMode__FromGeometry  = 1,
	ELocalFrameMode__ELocalFrameMode_MAX = 2,

};

// Enum MeshModelingTools.EEditPivotToolActions
enum class MeshModelingTools_EEditPivotToolActions : uint8_t
{
	EEditPivotToolActions__NoAction = 0,
	EEditPivotToolActions__Center  = 1,
	EEditPivotToolActions__Bottom  = 2,
	EEditPivotToolActions__Top     = 3,
	EEditPivotToolActions__Left    = 4,
	EEditPivotToolActions__Right   = 5,
	EEditPivotToolActions__Front   = 6,
	EEditPivotToolActions__Back    = 7,
	EEditPivotToolActions__EEditPivotToolActions_MAX = 8,

};

// Enum MeshModelingTools.EEditPivotSnapDragRotationMode
enum class MeshModelingTools_EEditPivotSnapDragRotationMode : uint8_t
{
	EEditPivotSnapDragRotationMode__Ignore = 0,
	EEditPivotSnapDragRotationMode__Align = 1,
	EEditPivotSnapDragRotationMode__AlignFlipped = 2,
	EEditPivotSnapDragRotationMode__LastValue = 3,
	EEditPivotSnapDragRotationMode__EEditPivotSnapDragRotationMode_MAX = 4,

};

// Enum MeshModelingTools.EGroupEdgeInsertionMode
enum class MeshModelingTools_EGroupEdgeInsertionMode : uint8_t
{
	EGroupEdgeInsertionMode__Retriangulate = 0,
	EGroupEdgeInsertionMode__PlaneCut = 1,
	EGroupEdgeInsertionMode__EGroupEdgeInsertionMode_MAX = 2,

};

// Enum MeshModelingTools.EHoleFillToolActions
enum class MeshModelingTools_EHoleFillToolActions : uint8_t
{
	EHoleFillToolActions__NoAction = 0,
	EHoleFillToolActions__SelectAll = 1,
	EHoleFillToolActions__ClearSelection = 2,
	EHoleFillToolActions__EHoleFillToolActions_MAX = 3,

};

// Enum MeshModelingTools.EMeshAttributePaintToolActions
enum class MeshModelingTools_EMeshAttributePaintToolActions : uint8_t
{
	EMeshAttributePaintToolActions__NoAction = 0,
	EMeshAttributePaintToolActions__EMeshAttributePaintToolActions_MAX = 1,

};

// Enum MeshModelingTools.EPlaneBrushSideMode
enum class MeshModelingTools_EPlaneBrushSideMode : uint8_t
{
	EPlaneBrushSideMode__BothSides = 0,
	EPlaneBrushSideMode__PushDown  = 1,
	EPlaneBrushSideMode__PullTowards = 2,
	EPlaneBrushSideMode__EPlaneBrushSideMode_MAX = 3,

};

// Enum MeshModelingTools.EMeshEditingMaterialModes
enum class MeshModelingTools_EMeshEditingMaterialModes : uint8_t
{
	EMeshEditingMaterialModes__ExistingMaterial = 0,
	EMeshEditingMaterialModes__Diffuse = 1,
	EMeshEditingMaterialModes__Grey = 2,
	EMeshEditingMaterialModes__Soft = 3,
	EMeshEditingMaterialModes__TangentNormal = 4,
	EMeshEditingMaterialModes__Custom = 5,
	EMeshEditingMaterialModes__EMeshEditingMaterialModes_MAX = 6,

};

// Enum MeshModelingTools.ESetMeshMaterialMode
enum class MeshModelingTools_ESetMeshMaterialMode : uint8_t
{
	ESetMeshMaterialMode__KeepOriginal = 0,
	ESetMeshMaterialMode__Checkerboard = 1,
	ESetMeshMaterialMode__Override = 2,
	ESetMeshMaterialMode__ESetMeshMaterialMode_MAX = 3,

};

// Enum MeshModelingTools.EMeshSculptFalloffType
enum class MeshModelingTools_EMeshSculptFalloffType : uint8_t
{
	EMeshSculptFalloffType__Smooth = 0,
	EMeshSculptFalloffType__Linear = 1,
	EMeshSculptFalloffType__Inverse = 2,
	EMeshSculptFalloffType__Round  = 3,
	EMeshSculptFalloffType__BoxSmooth = 4,
	EMeshSculptFalloffType__BoxLinear = 5,
	EMeshSculptFalloffType__BoxInverse = 6,
	EMeshSculptFalloffType__BoxRound = 7,
	EMeshSculptFalloffType__LastValue = 8,
	EMeshSculptFalloffType__EMeshSculptFalloffType_MAX = 9,

};

// Enum MeshModelingTools.EMeshFacesColorMode
enum class MeshModelingTools_EMeshFacesColorMode : uint8_t
{
	EMeshFacesColorMode__None      = 0,
	EMeshFacesColorMode__ByGroup   = 1,
	EMeshFacesColorMode__ByMaterialID = 2,
	EMeshFacesColorMode__ByUVIsland = 3,
	EMeshFacesColorMode__EMeshFacesColorMode_MAX = 4,

};

// Enum MeshModelingTools.EMeshSelectionToolPrimaryMode
enum class MeshModelingTools_EMeshSelectionToolPrimaryMode : uint8_t
{
	EMeshSelectionToolPrimaryMode__Brush = 0,
	EMeshSelectionToolPrimaryMode__VolumetricBrush = 1,
	EMeshSelectionToolPrimaryMode__AngleFiltered = 2,
	EMeshSelectionToolPrimaryMode__Visible = 3,
	EMeshSelectionToolPrimaryMode__AllConnected = 4,
	EMeshSelectionToolPrimaryMode__AllInGroup = 5,
	EMeshSelectionToolPrimaryMode__ByMaterial = 6,
	EMeshSelectionToolPrimaryMode__ByUVIsland = 7,
	EMeshSelectionToolPrimaryMode__AllWithinAngle = 8,
	EMeshSelectionToolPrimaryMode__EMeshSelectionToolPrimaryMode_MAX = 9,

};

// Enum MeshModelingTools.EMeshSelectionToolActions
enum class MeshModelingTools_EMeshSelectionToolActions : uint8_t
{
	EMeshSelectionToolActions__NoAction = 0,
	EMeshSelectionToolActions__SelectAll = 1,
	EMeshSelectionToolActions__ClearSelection = 2,
	EMeshSelectionToolActions__InvertSelection = 3,
	EMeshSelectionToolActions__GrowSelection = 4,
	EMeshSelectionToolActions__ShrinkSelection = 5,
	EMeshSelectionToolActions__ExpandToConnected = 6,
	EMeshSelectionToolActions__SelectLargestComponentByTriCount = 7,
	EMeshSelectionToolActions__SelectLargestComponentByArea = 8,
	EMeshSelectionToolActions__OptimizeSelection = 9,
	EMeshSelectionToolActions__DeleteSelected = 10,
	EMeshSelectionToolActions__DisconnectSelected = 11,
	EMeshSelectionToolActions__SeparateSelected = 12,
	EMeshSelectionToolActions__FlipSelected = 13,
	EMeshSelectionToolActions__CreateGroup = 14,
	EMeshSelectionToolActions__CycleSelectionMode = 15,
	EMeshSelectionToolActions__CycleViewMode = 16,
	EMeshSelectionToolActions__EMeshSelectionToolActions_MAX = 17,

};

// Enum MeshModelingTools.ENonlinearOperationType
enum class MeshModelingTools_ENonlinearOperationType : uint8_t
{
	ENonlinearOperationType__Bend  = 0,
	ENonlinearOperationType__Flare = 1,
	ENonlinearOperationType__Twist = 2,
	ENonlinearOperationType__ENonlinearOperationType_MAX = 3,

};

// Enum MeshModelingTools.EMeshVertexSculptBrushType
enum class MeshModelingTools_EMeshVertexSculptBrushType : uint8_t
{
	EMeshVertexSculptBrushType__Move = 0,
	EMeshVertexSculptBrushType__PullKelvin = 1,
	EMeshVertexSculptBrushType__PullSharpKelvin = 2,
	EMeshVertexSculptBrushType__Smooth = 3,
	EMeshVertexSculptBrushType__SmoothFill = 4,
	EMeshVertexSculptBrushType__Offset = 5,
	EMeshVertexSculptBrushType__SculptView = 6,
	EMeshVertexSculptBrushType__SculptMax = 7,
	EMeshVertexSculptBrushType__Inflate = 8,
	EMeshVertexSculptBrushType__ScaleKelvin = 9,
	EMeshVertexSculptBrushType__Pinch = 10,
	EMeshVertexSculptBrushType__TwistKelvin = 11,
	EMeshVertexSculptBrushType__Flatten = 12,
	EMeshVertexSculptBrushType__Plane = 13,
	EMeshVertexSculptBrushType__PlaneViewAligned = 14,
	EMeshVertexSculptBrushType__FixedPlane = 15,
	EMeshVertexSculptBrushType__LastValue = 16,
	EMeshVertexSculptBrushType__EMeshVertexSculptBrushType_MAX = 17,

};

// Enum MeshModelingTools.EMirrorToolAction
enum class MeshModelingTools_EMirrorToolAction : uint8_t
{
	EMirrorToolAction__NoAction    = 0,
	EMirrorToolAction__ShiftToCenter = 1,
	EMirrorToolAction__Left        = 2,
	EMirrorToolAction__Right       = 3,
	EMirrorToolAction__Up          = 4,
	EMirrorToolAction__Down        = 5,
	EMirrorToolAction__Forward     = 6,
	EMirrorToolAction__Backward    = 7,
	EMirrorToolAction__EMirrorToolAction_MAX = 8,

};

// Enum MeshModelingTools.EMirrorCtrlClickBehavior
enum class MeshModelingTools_EMirrorCtrlClickBehavior : uint8_t
{
	EMirrorCtrlClickBehavior__Reposition = 0,
	EMirrorCtrlClickBehavior__RepositionAndReorient = 1,
	EMirrorCtrlClickBehavior__EMirrorCtrlClickBehavior_MAX = 2,

};

// Enum MeshModelingTools.EMirrorOperationMode
enum class MeshModelingTools_EMirrorOperationMode : uint8_t
{
	EMirrorOperationMode__MirrorAndAppend = 0,
	EMirrorOperationMode__MirrorExisting = 1,
	EMirrorOperationMode__EMirrorOperationMode_MAX = 2,

};

// Enum MeshModelingTools.EMirrorSaveMode
enum class MeshModelingTools_EMirrorSaveMode : uint8_t
{
	EMirrorSaveMode__UpdateAssets  = 0,
	EMirrorSaveMode__CreateNewAssets = 1,
	EMirrorSaveMode__EMirrorSaveMode_MAX = 2,

};

// Enum MeshModelingTools.EOffsetMeshToolOffsetType
enum class MeshModelingTools_EOffsetMeshToolOffsetType : uint8_t
{
	EOffsetMeshToolOffsetType__Iterative = 0,
	EOffsetMeshToolOffsetType__Implicit = 1,
	EOffsetMeshToolOffsetType__EOffsetMeshToolOffsetType_MAX = 2,

};

// Enum MeshModelingTools.EMaterialBoundaryConstraint
enum class MeshModelingTools_EMaterialBoundaryConstraint : uint8_t
{
	EMaterialBoundaryConstraint__Fixed = 0,
	EMaterialBoundaryConstraint__Refine = 1,
	EMaterialBoundaryConstraint__Free = 2,
	EMaterialBoundaryConstraint__Ignore = 3,
	EMaterialBoundaryConstraint__EMaterialBoundaryConstraint_MAX = 4,

};

// Enum MeshModelingTools.EGroupBoundaryConstraint
enum class MeshModelingTools_EGroupBoundaryConstraint : uint8_t
{
	EGroupBoundaryConstraint__Fixed = 0,
	EGroupBoundaryConstraint__Refine = 1,
	EGroupBoundaryConstraint__Free = 2,
	EGroupBoundaryConstraint__Ignore = 3,
	EGroupBoundaryConstraint__EGroupBoundaryConstraint_MAX = 4,

};

// Enum MeshModelingTools.EMeshBoundaryConstraint
enum class MeshModelingTools_EMeshBoundaryConstraint : uint8_t
{
	EMeshBoundaryConstraint__Fixed = 0,
	EMeshBoundaryConstraint__Refine = 1,
	EMeshBoundaryConstraint__Free  = 2,
	EMeshBoundaryConstraint__EMeshBoundaryConstraint_MAX = 3,

};

// Enum MeshModelingTools.EOcclusionCalculationUIMode
enum class MeshModelingTools_EOcclusionCalculationUIMode : uint8_t
{
	EOcclusionCalculationUIMode__GeneralizedWindingNumber = 0,
	EOcclusionCalculationUIMode__RaycastOcclusionSamples = 1,
	EOcclusionCalculationUIMode__EOcclusionCalculationUIMode_MAX = 2,

};

// Enum MeshModelingTools.EOcclusionTriangleSamplingUIMode
enum class MeshModelingTools_EOcclusionTriangleSamplingUIMode : uint8_t
{
	EOcclusionTriangleSamplingUIMode__Vertices = 0,
	EOcclusionTriangleSamplingUIMode__VerticesAndCentroids = 1,
	EOcclusionTriangleSamplingUIMode__EOcclusionTriangleSamplingUIMode_MAX = 2,

};

// Enum MeshModelingTools.ERevolvePropertiesQuadSplit
enum class MeshModelingTools_ERevolvePropertiesQuadSplit : uint8_t
{
	ERevolvePropertiesQuadSplit__Uniform = 0,
	ERevolvePropertiesQuadSplit__ShortestDiagonal = 1,
	ERevolvePropertiesQuadSplit__ERevolvePropertiesQuadSplit_MAX = 2,

};

// Enum MeshModelingTools.ERevolvePropertiesPolygroupMode
enum class MeshModelingTools_ERevolvePropertiesPolygroupMode : uint8_t
{
	ERevolvePropertiesPolygroupMode__Single = 0,
	ERevolvePropertiesPolygroupMode__PerFace = 1,
	ERevolvePropertiesPolygroupMode__PerStep = 2,
	ERevolvePropertiesPolygroupMode__AccordingToProfileCurve = 3,
	ERevolvePropertiesPolygroupMode__ERevolvePropertiesPolygroupMode_MAX = 4,

};

// Enum MeshModelingTools.ERevolvePropertiesCapFillMode
enum class MeshModelingTools_ERevolvePropertiesCapFillMode : uint8_t
{
	ERevolvePropertiesCapFillMode__None = 0,
	ERevolvePropertiesCapFillMode__Delaunay = 1,
	ERevolvePropertiesCapFillMode__EarClipping = 2,
	ERevolvePropertiesCapFillMode__CenterFan = 3,
	ERevolvePropertiesCapFillMode__ERevolvePropertiesCapFillMode_MAX = 4,

};

// Enum MeshModelingTools.EProjectedHullAxis
enum class MeshModelingTools_EProjectedHullAxis : uint8_t
{
	EProjectedHullAxis__X          = 0,
	EProjectedHullAxis__Y          = 1,
	EProjectedHullAxis__Z          = 2,
	EProjectedHullAxis__SmallestBoxDimension = 3,
	EProjectedHullAxis__SmallestVolume = 4,
	EProjectedHullAxis__EProjectedHullAxis_MAX = 5,

};

// Enum MeshModelingTools.ECollisionGeometryType
enum class MeshModelingTools_ECollisionGeometryType : uint8_t
{
	ECollisionGeometryType__KeepExisting = 0,
	ECollisionGeometryType__AlignedBoxes = 1,
	ECollisionGeometryType__OrientedBoxes = 2,
	ECollisionGeometryType__MinimalSpheres = 3,
	ECollisionGeometryType__Capsules = 4,
	ECollisionGeometryType__ConvexHulls = 5,
	ECollisionGeometryType__SweptHulls = 6,
	ECollisionGeometryType__MinVolume = 7,
	ECollisionGeometryType__None   = 8,
	ECollisionGeometryType__ECollisionGeometryType_MAX = 9,

};

// Enum MeshModelingTools.ESetCollisionGeometryInputMode
enum class MeshModelingTools_ESetCollisionGeometryInputMode : uint8_t
{
	ESetCollisionGeometryInputMode__CombineAll = 0,
	ESetCollisionGeometryInputMode__PerInputObject = 1,
	ESetCollisionGeometryInputMode__PerMeshComponent = 2,
	ESetCollisionGeometryInputMode__PerMeshGroup = 3,
	ESetCollisionGeometryInputMode__ESetCollisionGeometryInputMode_MAX = 4,

};

// Enum MeshModelingTools.ESmoothMeshToolSmoothType
enum class MeshModelingTools_ESmoothMeshToolSmoothType : uint8_t
{
	ESmoothMeshToolSmoothType__Iterative = 0,
	ESmoothMeshToolSmoothType__Implicit = 1,
	ESmoothMeshToolSmoothType__Diffusion = 2,
	ESmoothMeshToolSmoothType__ESmoothMeshToolSmoothType_MAX = 3,

};

// Enum MeshModelingTools.ETransformMeshesSnapDragRotationMode
enum class MeshModelingTools_ETransformMeshesSnapDragRotationMode : uint8_t
{
	ETransformMeshesSnapDragRotationMode__Ignore = 0,
	ETransformMeshesSnapDragRotationMode__Align = 1,
	ETransformMeshesSnapDragRotationMode__AlignFlipped = 2,
	ETransformMeshesSnapDragRotationMode__LastValue = 3,
	ETransformMeshesSnapDragRotationMode__ETransformMeshesSnapDragRotationMode_MAX = 4,

};

// Enum MeshModelingTools.ETransformMeshesSnapDragSource
enum class MeshModelingTools_ETransformMeshesSnapDragSource : uint8_t
{
	ETransformMeshesSnapDragSource__ClickPoint = 0,
	ETransformMeshesSnapDragSource__Pivot = 1,
	ETransformMeshesSnapDragSource__LastValue = 2,
	ETransformMeshesSnapDragSource__ETransformMeshesSnapDragSource_MAX = 3,

};

// Enum MeshModelingTools.ETransformMeshesTransformMode
enum class MeshModelingTools_ETransformMeshesTransformMode : uint8_t
{
	ETransformMeshesTransformMode__SharedGizmo = 0,
	ETransformMeshesTransformMode__SharedGizmoLocal = 1,
	ETransformMeshesTransformMode__PerObjectGizmo = 2,
	ETransformMeshesTransformMode__LastValue = 3,
	ETransformMeshesTransformMode__ETransformMeshesTransformMode_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MeshModelingTools.PhysicsSphereData
// 0x0070
struct FPhysicsSphereData
{
	float                                              Radius;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K61B[0xC];                                     // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x0010(0x0030) (Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FKShapeElem                                 Element;                                                   // 0x0040(0x0030) (Edit, EditConst, NativeAccessSpecifierPublic)

};

// ScriptStruct MeshModelingTools.PhysicsBoxData
// 0x0070
struct FPhysicsBoxData
{
	struct FVector                                     Dimensions;                                                // 0x0000(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G4QV[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x0010(0x0030) (Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FKShapeElem                                 Element;                                                   // 0x0040(0x0030) (Edit, EditConst, NativeAccessSpecifierPublic)

};

// ScriptStruct MeshModelingTools.PhysicsCapsuleData
// 0x0070
struct FPhysicsCapsuleData
{
	float                                              Radius;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Length;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W9UL[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x0010(0x0030) (Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FKShapeElem                                 Element;                                                   // 0x0040(0x0030) (Edit, EditConst, NativeAccessSpecifierPublic)

};

// ScriptStruct MeshModelingTools.PhysicsConvexData
// 0x0038
struct FPhysicsConvexData
{
	int                                                NumVertices;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumFaces;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKShapeElem                                 Element;                                                   // 0x0008(0x0030) (Edit, EditConst, NativeAccessSpecifierPublic)

};

// ScriptStruct MeshModelingTools.PerlinLayerProperties
// 0x0008
struct FPerlinLayerProperties
{
	float                                              Frequency;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Intensity;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MeshModelingTools.EditPivotTarget
// 0x0010
struct FEditPivotTarget
{
	class UTransformProxy*                             TransformProxy;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformGizmo*                             TransformGizmo;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct MeshModelingTools.TransformMeshesTarget
// 0x0010
struct FTransformMeshesTarget
{
	class UTransformProxy*                             TransformProxy;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTransformGizmo*                             TransformGizmo;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
