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

// Enum VectorVM.EVectorVMOp
enum class VectorVM_EVectorVMOp : uint8_t
{
	EVectorVMOp__done              = 0,
	EVectorVMOp__add               = 1,
	EVectorVMOp__sub               = 2,
	EVectorVMOp__mul               = 3,
	EVectorVMOp__div               = 4,
	EVectorVMOp__mad               = 5,
	EVectorVMOp__lerp              = 6,
	EVectorVMOp__rcp               = 7,
	EVectorVMOp__rsq               = 8,
	EVectorVMOp__sqrt              = 9,
	EVectorVMOp__neg               = 10,
	EVectorVMOp__abs               = 11,
	EVectorVMOp__exp               = 12,
	EVectorVMOp__exp2              = 13,
	EVectorVMOp__log               = 14,
	EVectorVMOp__log2              = 15,
	EVectorVMOp__sin               = 16,
	EVectorVMOp__cos               = 17,
	EVectorVMOp__tan               = 18,
	EVectorVMOp__asin              = 19,
	EVectorVMOp__acos              = 20,
	EVectorVMOp__atan              = 21,
	EVectorVMOp__atan2             = 22,
	EVectorVMOp__ceil              = 23,
	EVectorVMOp__floor             = 24,
	EVectorVMOp__fmod              = 25,
	EVectorVMOp__frac              = 26,
	EVectorVMOp__trunc             = 27,
	EVectorVMOp__clamp             = 28,
	EVectorVMOp__min               = 29,
	EVectorVMOp__max               = 30,
	EVectorVMOp__pow               = 31,
	EVectorVMOp__round             = 32,
	EVectorVMOp__sign              = 33,
	EVectorVMOp__step              = 34,
	EVectorVMOp__random            = 35,
	EVectorVMOp__noise             = 36,
	EVectorVMOp__cmplt             = 37,
	EVectorVMOp__cmple             = 38,
	EVectorVMOp__cmpgt             = 39,
	EVectorVMOp__cmpge             = 40,
	EVectorVMOp__cmpeq             = 41,
	EVectorVMOp__cmpneq            = 42,
	EVectorVMOp__select            = 43,
	EVectorVMOp__addi              = 44,
	EVectorVMOp__subi              = 45,
	EVectorVMOp__muli              = 46,
	EVectorVMOp__divi              = 47,
	EVectorVMOp__clampi            = 48,
	EVectorVMOp__mini              = 49,
	EVectorVMOp__maxi              = 50,
	EVectorVMOp__absi              = 51,
	EVectorVMOp__negi              = 52,
	EVectorVMOp__signi             = 53,
	EVectorVMOp__randomi           = 54,
	EVectorVMOp__cmplti            = 55,
	EVectorVMOp__cmplei            = 56,
	EVectorVMOp__cmpgti            = 57,
	EVectorVMOp__cmpgei            = 58,
	EVectorVMOp__cmpeqi            = 59,
	EVectorVMOp__cmpneqi           = 60,
	EVectorVMOp__bit_and           = 61,
	EVectorVMOp__bit_or            = 62,
	EVectorVMOp__bit_xor           = 63,
	EVectorVMOp__bit_not           = 64,
	EVectorVMOp__bit_lshift        = 65,
	EVectorVMOp__bit_rshift        = 66,
	EVectorVMOp__logic_and         = 67,
	EVectorVMOp__logic_or          = 68,
	EVectorVMOp__logic_xor         = 69,
	EVectorVMOp__logic_not         = 70,
	EVectorVMOp__f2i               = 71,
	EVectorVMOp__i2f               = 72,
	EVectorVMOp__f2b               = 73,
	EVectorVMOp__b2f               = 74,
	EVectorVMOp__i2b               = 75,
	EVectorVMOp__b2i               = 76,
	EVectorVMOp__inputdata_float   = 77,
	EVectorVMOp__inputdata_int32   = 78,
	EVectorVMOp__inputdata_half    = 79,
	EVectorVMOp__inputdata_noadvance_float = 80,
	EVectorVMOp__inputdata_noadvance_int32 = 81,
	EVectorVMOp__inputdata_noadvance_half = 82,
	EVectorVMOp__outputdata_float  = 83,
	EVectorVMOp__outputdata_int32  = 84,
	EVectorVMOp__outputdata_half   = 85,
	EVectorVMOp__acquireindex      = 86,
	EVectorVMOp__external_func_call = 87,
	EVectorVMOp__exec_index        = 88,
	EVectorVMOp__noise2D           = 89,
	EVectorVMOp__noise3D           = 90,
	EVectorVMOp__enter_stat_scope  = 91,
	EVectorVMOp__exit_stat_scope   = 92,
	EVectorVMOp__update_id         = 93,
	EVectorVMOp__acquire_id        = 94,
	EVectorVMOp__NumOpcodes        = 95,

};

// Enum VectorVM.EVectorVMOperandLocation
enum class VectorVM_EVectorVMOperandLocation : uint8_t
{
	EVectorVMOperandLocation__Register = 0,
	EVectorVMOperandLocation__Constant = 1,
	EVectorVMOperandLocation__Num  = 2,
	EVectorVMOperandLocation__EVectorVMOperandLocation_MAX = 3,

};

// Enum VectorVM.EVectorVMBaseTypes
enum class VectorVM_EVectorVMBaseTypes : uint8_t
{
	EVectorVMBaseTypes__Float      = 0,
	EVectorVMBaseTypes__Int        = 1,
	EVectorVMBaseTypes__Bool       = 2,
	EVectorVMBaseTypes__Num        = 3,
	EVectorVMBaseTypes__EVectorVMBaseTypes_MAX = 4,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
