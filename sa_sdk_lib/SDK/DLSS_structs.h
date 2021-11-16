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

// Enum DLSS.EDLSSSettingOverride
enum class DLSS_EDLSSSettingOverride : uint8_t
{
	EDLSSSettingOverride__Enabled  = 0,
	EDLSSSettingOverride__Disabled = 1,
	EDLSSSettingOverride__UseProjectSettings = 2,
	EDLSSSettingOverride__EDLSSSettingOverride_MAX = 3,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
