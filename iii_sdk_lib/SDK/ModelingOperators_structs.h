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

// Enum ModelingOperators.ECSGOperation
enum class ModelingOperators_ECSGOperation : uint8_t
{
	ECSGOperation__DifferenceAB    = 0,
	ECSGOperation__DifferenceBA    = 1,
	ECSGOperation__Intersect       = 2,
	ECSGOperation__Union           = 3,
	ECSGOperation__TrimA           = 4,
	ECSGOperation__TrimB           = 5,
	ECSGOperation__ECSGOperation_MAX = 6,

};

// Enum ModelingOperators.ESplitNormalMethod
enum class ModelingOperators_ESplitNormalMethod : uint8_t
{
	ESplitNormalMethod__UseExistingTopology = 0,
	ESplitNormalMethod__FaceNormalThreshold = 1,
	ESplitNormalMethod__FaceGroupID = 2,
	ESplitNormalMethod__PerTriangle = 3,
	ESplitNormalMethod__PerVertex  = 4,
	ESplitNormalMethod__ESplitNormalMethod_MAX = 5,

};

// Enum ModelingOperators.ENormalCalculationMethod
enum class ModelingOperators_ENormalCalculationMethod : uint8_t
{
	ENormalCalculationMethod__AreaWeighted = 0,
	ENormalCalculationMethod__AngleWeighted = 1,
	ENormalCalculationMethod__AreaAngleWeighting = 2,
	ENormalCalculationMethod__ENormalCalculationMethod_MAX = 3,

};

// Enum ModelingOperators.EHoleFillOpFillType
enum class ModelingOperators_EHoleFillOpFillType : uint8_t
{
	EHoleFillOpFillType__TriangleFan = 0,
	EHoleFillOpFillType__PolygonEarClipping = 1,
	EHoleFillOpFillType__Planar    = 2,
	EHoleFillOpFillType__Minimal   = 3,
	EHoleFillOpFillType__Smooth    = 4,
	EHoleFillOpFillType__EHoleFillOpFillType_MAX = 5,

};

// Enum ModelingOperators.ERemeshSmoothingType
enum class ModelingOperators_ERemeshSmoothingType : uint8_t
{
	ERemeshSmoothingType__Uniform  = 0,
	ERemeshSmoothingType__Cotangent = 1,
	ERemeshSmoothingType__MeanValue = 2,
	ERemeshSmoothingType__ERemeshSmoothingType_MAX = 3,

};

// Enum ModelingOperators.ERemeshType
enum class ModelingOperators_ERemeshType : uint8_t
{
	ERemeshType__Standard          = 0,
	ERemeshType__FullPass          = 1,
	ERemeshType__NormalFlow        = 2,
	ERemeshType__ERemeshType_MAX   = 3,

};

// Enum ModelingOperators.EUVProjectionMethod
enum class ModelingOperators_EUVProjectionMethod : uint8_t
{
	EUVProjectionMethod__Cube      = 0,
	EUVProjectionMethod__Cylinder  = 1,
	EUVProjectionMethod__Plane     = 2,
	EUVProjectionMethod__EUVProjectionMethod_MAX = 3,

};

// Enum ModelingOperators.EMorphologyOperation
enum class ModelingOperators_EMorphologyOperation : uint8_t
{
	EMorphologyOperation__Dilate   = 0,
	EMorphologyOperation__Contract = 1,
	EMorphologyOperation__Close    = 2,
	EMorphologyOperation__Open     = 3,
	EMorphologyOperation__EMorphologyOperation_MAX = 4,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
