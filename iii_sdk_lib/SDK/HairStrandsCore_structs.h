#pragma once

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
// Enums
//---------------------------------------------------------------------------

// Enum HairStrandsCore.EHairCardsSourceType
enum class HairStrandsCore_EHairCardsSourceType : uint8_t
{
	EHairCardsSourceType__Procedural = 0,
	EHairCardsSourceType__Imported = 1,
	EHairCardsSourceType__EHairCardsSourceType_MAX = 2,

};

// Enum HairStrandsCore.EHairCardsGenerationType
enum class HairStrandsCore_EHairCardsGenerationType : uint8_t
{
	EHairCardsGenerationType__CardsCount = 0,
	EHairCardsGenerationType__UseGuides = 1,
	EHairCardsGenerationType__EHairCardsGenerationType_MAX = 2,

};

// Enum HairStrandsCore.EHairCardsClusterType
enum class HairStrandsCore_EHairCardsClusterType : uint8_t
{
	EHairCardsClusterType__Low     = 0,
	EHairCardsClusterType__High    = 1,
	EHairCardsClusterType__EHairCardsClusterType_MAX = 2,

};

// Enum HairStrandsCore.EGroomGeometryType
enum class HairStrandsCore_EGroomGeometryType : uint8_t
{
	EGroomGeometryType__Strands    = 0,
	EGroomGeometryType__Cards      = 1,
	EGroomGeometryType__Meshes     = 2,
	EGroomGeometryType__EGroomGeometryType_MAX = 3,

};

// Enum HairStrandsCore.EHairLODSelectionType
enum class HairStrandsCore_EHairLODSelectionType : uint8_t
{
	EHairLODSelectionType__Cpu     = 0,
	EHairLODSelectionType__Gpu     = 1,
	EHairLODSelectionType__EHairLODSelectionType_MAX = 2,

};

// Enum HairStrandsCore.EHairInterpolationWeight
enum class HairStrandsCore_EHairInterpolationWeight : uint8_t
{
	EHairInterpolationWeight__Parametric = 0,
	EHairInterpolationWeight__Root = 1,
	EHairInterpolationWeight__Index = 2,
	EHairInterpolationWeight__Unknown = 3,
	EHairInterpolationWeight__EHairInterpolationWeight_MAX = 4,

};

// Enum HairStrandsCore.EHairInterpolationQuality
enum class HairStrandsCore_EHairInterpolationQuality : uint8_t
{
	EHairInterpolationQuality__Low = 0,
	EHairInterpolationQuality__Medium = 1,
	EHairInterpolationQuality__High = 2,
	EHairInterpolationQuality__Unknown = 3,
	EHairInterpolationQuality__EHairInterpolationQuality_MAX = 4,

};

// Enum HairStrandsCore.EGroomInterpolationType
enum class HairStrandsCore_EGroomInterpolationType : uint8_t
{
	EGroomInterpolationType__None  = 0,
	EGroomInterpolationType__RigidTransform = 1,
	EGroomInterpolationType__OffsetTransform = 2,
	EGroomInterpolationType__SmoothTransform = 3,
	EGroomInterpolationType__EGroomInterpolationType_MAX = 4,

};

// Enum HairStrandsCore.EGroomStrandsSize
enum class HairStrandsCore_EGroomStrandsSize : uint8_t
{
	EGroomStrandsSize__None        = 0,
	EGroomStrandsSize__Size2       = 1,
	EGroomStrandsSize__Size4       = 2,
	EGroomStrandsSize__Size8       = 3,
	EGroomStrandsSize__Size16      = 4,
	EGroomStrandsSize__Size32      = 5,
	EGroomStrandsSize__EGroomStrandsSize_MAX = 6,

};

// Enum HairStrandsCore.EGroomNiagaraSolvers
enum class HairStrandsCore_EGroomNiagaraSolvers : uint8_t
{
	EGroomNiagaraSolvers__None     = 0,
	EGroomNiagaraSolvers__CosseratRods = 1,
	EGroomNiagaraSolvers__AngularSprings = 2,
	EGroomNiagaraSolvers__CustomSolver = 3,
	EGroomNiagaraSolvers__EGroomNiagaraSolvers_MAX = 4,

};

// Enum HairStrandsCore.EFollicleMaskChannel
enum class HairStrandsCore_EFollicleMaskChannel : uint8_t
{
	EFollicleMaskChannel__R        = 0,
	EFollicleMaskChannel__G        = 1,
	EFollicleMaskChannel__B        = 2,
	EFollicleMaskChannel__A        = 3,
	EFollicleMaskChannel__EFollicleMaskChannel_MAX = 4,

};

// Enum HairStrandsCore.EStrandsTexturesMeshType
enum class HairStrandsCore_EStrandsTexturesMeshType : uint8_t
{
	EStrandsTexturesMeshType__Static = 0,
	EStrandsTexturesMeshType__Skeletal = 1,
	EStrandsTexturesMeshType__EStrandsTexturesMeshType_MAX = 2,

};

// Enum HairStrandsCore.EStrandsTexturesTraceType
enum class HairStrandsCore_EStrandsTexturesTraceType : uint8_t
{
	EStrandsTexturesTraceType__TraceInside = 0,
	EStrandsTexturesTraceType__TraceOuside = 1,
	EStrandsTexturesTraceType__TraceBidirectional = 2,
	EStrandsTexturesTraceType__EStrandsTexturesTraceType_MAX = 3,

};

// Enum HairStrandsCore.EGroomInterpolationWeight
enum class HairStrandsCore_EGroomInterpolationWeight : uint8_t
{
	EGroomInterpolationWeight__Parametric = 0,
	EGroomInterpolationWeight__Root = 1,
	EGroomInterpolationWeight__Index = 2,
	EGroomInterpolationWeight__Unknown = 3,
	EGroomInterpolationWeight__EGroomInterpolationWeight_MAX = 4,

};

// Enum HairStrandsCore.EGroomInterpolationQuality
enum class HairStrandsCore_EGroomInterpolationQuality : uint8_t
{
	EGroomInterpolationQuality__Low = 0,
	EGroomInterpolationQuality__Medium = 1,
	EGroomInterpolationQuality__High = 2,
	EGroomInterpolationQuality__Unknown = 3,
	EGroomInterpolationQuality__EGroomInterpolationQuality_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct HairStrandsCore.HairGroupInfo
// 0x0014
struct FHairGroupInfo
{
	int                                                GroupId;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumCurves;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumGuides;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumCurveVertices;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumGuideVertices;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.HairGroupInfoWithVisibility
// 0x0004 (0x0018 - 0x0014)
struct FHairGroupInfoWithVisibility : public FHairGroupInfo
{
	bool                                               bIsVisible;                                                // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UFH1[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct HairStrandsCore.HairGeometrySettings
// 0x0010
struct FHairGeometrySettings
{
	float                                              HairWidth;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HairRootScale;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HairTipScale;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HairClipScale;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.HairShadowSettings
// 0x000C
struct FHairShadowSettings
{
	float                                              HairShadowDensity;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HairRaytracingRadiusScale;                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseHairRaytracingGeometry;                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVoxelize;                                                 // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O7V4[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct HairStrandsCore.HairAdvancedRenderingSettings
// 0x0002
struct FHairAdvancedRenderingSettings
{
	bool                                               bUseStableRasterization;                                   // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bScatterSceneLighting;                                     // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.HairSolverSettings
// 0x0038
struct FHairSolverSettings
{
	bool                                               EnableSimulation;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	HairStrandsCore_EGroomNiagaraSolvers               NiagaraSolver;                                             // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HIMC[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      CustomSystem[0x28];                                        // 0x0002(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	int                                                SubSteps;                                                  // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IterationCount;                                            // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.HairDecimationSettings
// 0x0008
struct FHairDecimationSettings
{
	float                                              CurveDecimation;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VertexDecimation;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.HairInterpolationSettings
// 0x000C
struct FHairInterpolationSettings
{
	bool                                               bOverrideGuides;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VPFN[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HairToGuideDensity;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	HairStrandsCore_EHairInterpolationQuality          InterpolationQuality;                                      // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	HairStrandsCore_EHairInterpolationWeight           InterpolationDistance;                                     // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRandomizeGuide;                                           // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseUniqueGuide;                                           // 0x000B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.HairLODSettings
// 0x0018
struct FHairLODSettings
{
	float                                              CurveDecimation;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VertexDecimation;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularThreshold;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScreenSize;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThicknessScale;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVisible;                                                  // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	HairStrandsCore_EGroomGeometryType                 GeometryType;                                              // 0x0015(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B1ZJ[0x2];                                     // 0x0016(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct HairStrandsCore.HairCardsClusterSettings
// 0x0008
struct FHairCardsClusterSettings
{
	float                                              ClusterDecimation;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	HairStrandsCore_EHairCardsClusterType              Type;                                                      // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseGuide;                                                 // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BVEP[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct HairStrandsCore.HairCardsGeometrySettings
// 0x001C
struct FHairCardsGeometrySettings
{
	HairStrandsCore_EHairCardsGenerationType           GenerationType;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RWLH[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CardsCount;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	HairStrandsCore_EHairCardsClusterType              ClusterType;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S09V[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinSegmentLength;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularThreshold;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinCardsLength;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxCardsLength;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.HairCardsTextureSettings
// 0x0010
struct FHairCardsTextureSettings
{
	int                                                AtlasMaxResolution;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PixelPerCentimeters;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LengthTextureCount;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DensityTextureCount;                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.HairGroupCardsTextures
// 0x0030
struct FHairGroupCardsTextures
{
	class UTexture2D*                                  DepthTexture;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  CoverageTexture;                                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  TangentTexture;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  AttributeTexture;                                          // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  AuxilaryDataTexture;                                       // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1D3F[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct HairStrandsCore.HairGroupCardsInfo
// 0x0008
struct FHairGroupCardsInfo
{
	int                                                NumCards;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumCardVertices;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.HairGroupsMaterial
// 0x0010
struct FHairGroupsMaterial
{
	class UMaterialInterface*                          Material;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SlotName;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.GoomBindingGroupInfo
// 0x0010
struct FGoomBindingGroupInfo
{
	int                                                RenRootCount;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RenLODCount;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SimRootCount;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SimLODCount;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.HairGroupsRendering
// 0x0030
struct FHairGroupsRendering
{
	struct FName                                       MaterialSlotName;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          Material;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHairGeometrySettings                       GeometrySettings;                                          // 0x0010(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHairShadowSettings                         ShadowSettings;                                            // 0x0020(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHairAdvancedRenderingSettings              AdvancedSettings;                                          // 0x002C(0x0002) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3JOC[0x2];                                     // 0x002E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct HairStrandsCore.HairGroupsMeshesSourceDescription
// 0x0060
struct FHairGroupsMeshesSourceDescription
{
	class UMaterialInterface*                          Material;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MaterialSlotName;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 ImportedMesh;                                              // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHairGroupCardsTextures                     Textures;                                                  // 0x0018(0x0030) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	int                                                GroupIndex;                                                // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LodIndex;                                                  // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ImportedMeshKey;                                           // 0x0050(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.HairGroupDesc
// 0x004C
struct FHairGroupDesc
{
	int                                                HairCount;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GuideCount;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HairLength;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HairWidth;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HairWidth_Override;                                        // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I54Z[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HairRootScale;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HairRootScale_Override;                                    // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NZAM[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HairTipScale;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HairTipScale_Override;                                     // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NXRQ[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HairClipLength;                                            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HairClipLength_Override;                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O3XO[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HairShadowDensity;                                         // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HairShadowDensity_Override;                                // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MX6M[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HairRaytracingRadiusScale;                                 // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               HairRaytracingRadiusScale_Override;                        // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseHairRaytracingGeometry;                                // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseHairRaytracingGeometry_Override;                       // 0x003A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BC9Q[0x1];                                     // 0x003B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              LODBias;                                                   // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseStableRasterization;                                   // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseStableRasterization_Override;                          // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bScatterSceneLighting;                                     // 0x0042(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bScatterSceneLighting_Override;                            // 0x0043(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSupportVoxelization;                                      // 0x0044(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSupportVoxelization_Override;                             // 0x0045(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7O4F[0x2];                                     // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LODForcedIndex;                                            // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.HairExternalForces
// 0x001C
struct FHairExternalForces
{
	struct FVector                                     GravityVector;                                             // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AirDrag;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     AirVelocity;                                               // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.HairBendConstraint
// 0x0098
struct FHairBendConstraint
{
	bool                                               SolveBend;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ProjectBend;                                               // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FYGI[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BendDamping;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BendStiffness;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1O6K[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          BendScale;                                                 // 0x0010(0x0088) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.HairStretchConstraint
// 0x0098
struct FHairStretchConstraint
{
	bool                                               SolveStretch;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ProjectStretch;                                            // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UWZ6[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StretchDamping;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StretchStiffness;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9WAC[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          StretchScale;                                              // 0x0010(0x0088) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.HairCollisionConstraint
// 0x00A8
struct FHairCollisionConstraint
{
	bool                                               SolveCollision;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ProjectCollision;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FYV6[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StaticFriction;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              KineticFriction;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StrandsViscosity;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                                  GridDimension;                                             // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionRadius;                                           // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          RadiusScale;                                               // 0x0020(0x0088) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.HairMaterialConstraints
// 0x01D8
struct FHairMaterialConstraints
{
	struct FHairBendConstraint                         BendConstraint;                                            // 0x0000(0x0098) (Edit, NativeAccessSpecifierPublic)
	struct FHairStretchConstraint                      StretchConstraint;                                         // 0x0098(0x0098) (Edit, NativeAccessSpecifierPublic)
	struct FHairCollisionConstraint                    CollisionConstraint;                                       // 0x0130(0x00A8) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.HairGroupsInterpolation
// 0x0014
struct FHairGroupsInterpolation
{
	struct FHairDecimationSettings                     DecimationSettings;                                        // 0x0000(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHairInterpolationSettings                  InterpolationSettings;                                     // 0x0008(0x000C) (Edit, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.HairStrandsParameters
// 0x0098
struct FHairStrandsParameters
{
	HairStrandsCore_EGroomStrandsSize                  StrandsSize;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BFNZ[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StrandsDensity;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StrandsSmoothing;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StrandsThickness;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                          ThicknessScale;                                            // 0x0010(0x0088) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.HairGroupsPhysics
// 0x02C8
struct FHairGroupsPhysics
{
	struct FHairSolverSettings                         SolverSettings;                                            // 0x0000(0x0038) (Edit, NativeAccessSpecifierPublic)
	struct FHairExternalForces                         ExternalForces;                                            // 0x0038(0x001C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IMV9[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FHairMaterialConstraints                    MaterialConstraints;                                       // 0x0058(0x01D8) (Edit, NativeAccessSpecifierPublic)
	struct FHairStrandsParameters                      StrandsParameters;                                         // 0x0230(0x0098) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.HairGroupsLOD
// 0x0018
struct FHairGroupsLOD
{
	TArray<struct FHairLODSettings>                    LODs;                                                      // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              ClusterWorldSize;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClusterScreenSizeScale;                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.HairGroupsProceduralCards
// 0x0038
struct FHairGroupsProceduralCards
{
	struct FHairCardsClusterSettings                   ClusterSettings;                                           // 0x0000(0x0008) (NoDestructor, NativeAccessSpecifierPublic)
	struct FHairCardsGeometrySettings                  GeometrySettings;                                          // 0x0008(0x001C) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHairCardsTextureSettings                   TextureSettings;                                           // 0x0024(0x0010) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	int                                                Version;                                                   // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.HairGroupsCardsSourceDescription
// 0x00C0
struct FHairGroupsCardsSourceDescription
{
	class UMaterialInterface*                          Material;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MaterialSlotName;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	HairStrandsCore_EHairCardsSourceType               SourceType;                                                // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_72A5[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMesh*                                 ProceduralMesh;                                            // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProceduralMeshKey;                                         // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 ImportedMesh;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHairGroupsProceduralCards                  ProceduralSettings;                                        // 0x0038(0x0038) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FHairGroupCardsTextures                     Textures;                                                  // 0x0070(0x0030) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	int                                                GroupIndex;                                                // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LodIndex;                                                  // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHairGroupCardsInfo                         CardsInfo;                                                 // 0x00A8(0x0008) (Edit, Transient, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ImportedMeshKey;                                           // 0x00B0(0x0010) (ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.FollicleMaskOptions
// 0x0010
struct FFollicleMaskOptions
{
	class UGroomAsset*                                 Groom;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	HairStrandsCore_EFollicleMaskChannel               Channel;                                                   // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MKIA[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct HairStrandsCore.GroomHairGroupPreview
// 0x0020
struct FGroomHairGroupPreview
{
	int                                                GroupId;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurveCount;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GuideCount;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHairGroupsInterpolation                    InterpolationSettings;                                     // 0x000C(0x0014) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.GroomBuildSettings
// 0x000C
struct FGroomBuildSettings
{
	bool                                               bOverrideGuides;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E6RJ[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HairToGuideDensity;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	HairStrandsCore_EGroomInterpolationQuality         InterpolationQuality;                                      // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	HairStrandsCore_EGroomInterpolationWeight          InterpolationDistance;                                     // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRandomizeGuide;                                           // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseUniqueGuide;                                           // 0x000B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct HairStrandsCore.GroomConversionSettings
// 0x0018
struct FGroomConversionSettings
{
	struct FVector                                     Rotation;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Scale;                                                     // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
