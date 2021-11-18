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

// Enum PropertyAccess.EPropertyAccessCopyBatch
enum class PropertyAccess_EPropertyAccessCopyBatch : uint8_t
{
	EPropertyAccessCopyBatch__InternalUnbatched = 0,
	EPropertyAccessCopyBatch__ExternalUnbatched = 1,
	EPropertyAccessCopyBatch__InternalBatched = 2,
	EPropertyAccessCopyBatch__ExternalBatched = 3,
	EPropertyAccessCopyBatch__Count = 4,
	EPropertyAccessCopyBatch__EPropertyAccessCopyBatch_MAX = 5,

};

// Enum PropertyAccess.EPropertyAccessCopyType
enum class PropertyAccess_EPropertyAccessCopyType : uint8_t
{
	EPropertyAccessCopyType__None  = 0,
	EPropertyAccessCopyType__Plain = 1,
	EPropertyAccessCopyType__Complex = 2,
	EPropertyAccessCopyType__Bool  = 3,
	EPropertyAccessCopyType__Struct = 4,
	EPropertyAccessCopyType__Object = 5,
	EPropertyAccessCopyType__Name  = 6,
	EPropertyAccessCopyType__Array = 7,
	EPropertyAccessCopyType__PromoteBoolToByte = 8,
	EPropertyAccessCopyType__PromoteBoolToInt32 = 9,
	EPropertyAccessCopyType__PromoteBoolToInt64 = 10,
	EPropertyAccessCopyType__PromoteBoolToFloat = 11,
	EPropertyAccessCopyType__PromoteByteToInt32 = 12,
	EPropertyAccessCopyType__PromoteByteToInt64 = 13,
	EPropertyAccessCopyType__PromoteByteToFloat = 14,
	EPropertyAccessCopyType__PromoteInt32ToInt64 = 15,
	EPropertyAccessCopyType__PromoteInt32ToFloat = 16,
	EPropertyAccessCopyType__EPropertyAccessCopyType_MAX = 17,

};

// Enum PropertyAccess.EPropertyAccessObjectType
enum class PropertyAccess_EPropertyAccessObjectType : uint8_t
{
	EPropertyAccessObjectType__None = 0,
	EPropertyAccessObjectType__Object = 1,
	EPropertyAccessObjectType__WeakObject = 2,
	EPropertyAccessObjectType__SoftObject = 3,
	EPropertyAccessObjectType__EPropertyAccessObjectType_MAX = 4,

};

// Enum PropertyAccess.EPropertyAccessIndirectionType
enum class PropertyAccess_EPropertyAccessIndirectionType : uint8_t
{
	EPropertyAccessIndirectionType__Offset = 0,
	EPropertyAccessIndirectionType__Object = 1,
	EPropertyAccessIndirectionType__Array = 2,
	EPropertyAccessIndirectionType__ScriptFunction = 3,
	EPropertyAccessIndirectionType__NativeFunction = 4,
	EPropertyAccessIndirectionType__EPropertyAccessIndirectionType_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PropertyAccess.PropertyAccessSegment
// 0x0040
struct FPropertyAccessSegment
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UStruct*                                     Struct;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      Property[0x20];                                            // 0x0010(0x0020) UNKNOWN PROPERTY: FieldPathProperty
	class UFunction*                                   Function;                                                  // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                ArrayIndex;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16_t                                           Flags;                                                     // 0x003C(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_BS0E[0x2];                                     // 0x003E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct PropertyAccess.PropertyAccessPath
// 0x000C
struct FPropertyAccessPath
{
	int                                                PathSegmentStartIndex;                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                PathSegmentCount;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      bHasEvents : 1;                                            // 0x0008(0x0001) BIT_FIELD (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_DW2Y[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct PropertyAccess.PropertyAccessCopy
// 0x0010
struct FPropertyAccessCopy
{
	int                                                AccessIndex;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                DestAccessStartIndex;                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                DestAccessEndIndex;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	PropertyAccess_EPropertyAccessCopyType             Type;                                                      // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AX83[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct PropertyAccess.PropertyAccessIndirectionChain
// 0x0030
struct FPropertyAccessIndirectionChain
{
	unsigned char                                      Property[0x20];                                            // 0x0000(0x0020) UNKNOWN PROPERTY: FieldPathProperty
	int                                                IndirectionStartIndex;                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                IndirectionEndIndex;                                       // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                EventId;                                                   // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_U3Z4[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct PropertyAccess.PropertyAccessIndirection
// 0x0040
struct FPropertyAccessIndirection
{
	unsigned char                                      ArrayProperty[0x20];                                       // 0x0000(0x0020) UNKNOWN PROPERTY: FieldPathProperty
	class UFunction*                                   Function;                                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                ReturnBufferSize;                                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                ReturnBufferAlignment;                                     // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                ArrayIndex;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint32_t                                           Offset;                                                    // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	PropertyAccess_EPropertyAccessObjectType           ObjectType;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	PropertyAccess_EPropertyAccessIndirectionType      Type;                                                      // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_AV1B[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct PropertyAccess.PropertyAccessCopyBatch
// 0x0010
struct FPropertyAccessCopyBatch
{
	TArray<struct FPropertyAccessCopy>                 Copies;                                                    // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct PropertyAccess.PropertyAccessLibrary
// 0x00C8
struct FPropertyAccessLibrary
{
	TArray<struct FPropertyAccessSegment>              PathSegments;                                              // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FPropertyAccessPath>                 SrcPaths;                                                  // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FPropertyAccessPath>                 DestPaths;                                                 // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FPropertyAccessCopyBatch                    CopyBatches[0x4];                                          // 0x0030(0x0040) (NativeAccessSpecifierPrivate)
	TArray<struct FPropertyAccessIndirectionChain>     SrcAccesses;                                               // 0x0070(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FPropertyAccessIndirectionChain>     DestAccesses;                                              // 0x0080(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FPropertyAccessIndirection>          Indirections;                                              // 0x0090(0x0010) (ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<int>                                        EventAccessIndices;                                        // 0x00A0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_UB0L[0x18];                                    // 0x00B0(0x0018) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
