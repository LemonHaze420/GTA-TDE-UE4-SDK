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

// Enum DLSSBlueprint.UDLSSMode
enum class DLSSBlueprint_EUDLSSMode : uint8_t
{
	UDLSSMode__Off                 = 0,
	UDLSSMode__Auto                = 1,
	UDLSSMode__UltraQuality        = 2,
	UDLSSMode__Quality             = 3,
	UDLSSMode__Balanced            = 4,
	UDLSSMode__Performance         = 5,
	UDLSSMode__UltraPerformance    = 6,
	UDLSSMode__UDLSSMode_MAX       = 7,

};

// Enum DLSSBlueprint.UDLSSSupport
enum class DLSSBlueprint_EUDLSSSupport : uint8_t
{
	UDLSSSupport__Supported        = 0,
	UDLSSSupport__NotSupported     = 1,
	UDLSSSupport__NotSupportedIncompatibleHardware = 2,
	UDLSSSupport__NotSupportedDriverOutOfDate = 3,
	UDLSSSupport__NotSupportedOperatingSystemOutOfDate = 4,
	UDLSSSupport__NotSupportedByPlatformAtBuildTime = 5,
	UDLSSSupport__UDLSSSupport_MAX = 6,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
