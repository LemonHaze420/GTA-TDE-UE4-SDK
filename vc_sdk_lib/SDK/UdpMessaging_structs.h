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

// Enum UdpMessaging.EUdpMessageFormat
enum class UdpMessaging_EUdpMessageFormat : uint8_t
{
	EUdpMessageFormat__None        = 0,
	EUdpMessageFormat__Json        = 1,
	EUdpMessageFormat__TaggedProperty = 2,
	EUdpMessageFormat__CborPlatformEndianness = 3,
	EUdpMessageFormat__CborStandardEndianness = 4,
	EUdpMessageFormat__EUdpMessageFormat_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UdpMessaging.UdpMockMessage
// 0x0010
struct FUdpMockMessage
{
	TArray<unsigned char>                              Data;                                                      // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
