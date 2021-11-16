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
// Parameters
//---------------------------------------------------------------------------

// Function UniversalGameSettings.UniversalGameSettings_C.GetListOfFidelityOptionNamesFromSettings
struct UUniversalGameSettings_C_GetListOfFidelityOptionNamesFromSettings_Params
{
	TEnumAsByte<GTABase_EGTAPlatforms>                 PlatformOverride;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsEditor;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FText>                               ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ReturnParm)
};

// Function UniversalGameSettings.UniversalGameSettings_C.GetPlatformFidelitySettings
struct UUniversalGameSettings_C_GetPlatformFidelitySettings_Params
{
	TEnumAsByte<GTABase_EGTAPlatforms>                 PlatformOverride;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Editor;                                                    // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	struct FGTAFidelitySettings                        PlatformSetting;                                           // 0x0008(0x0020)  (Parm, OutParm)
	bool                                               Found;                                                     // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UniversalGameSettings.UniversalGameSettings_C.GetFidelityOptionsNum
struct UUniversalGameSettings_C_GetFidelityOptionsNum_Params
{
	TEnumAsByte<GTABase_EGTAPlatforms>                 PlatformOverride;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsEditor;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UniversalGameSettings.UniversalGameSettings_C.IsRunning4K
struct UUniversalGameSettings_C_IsRunning4K_Params
{
	bool                                               _4kOrGreater;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UniversalGameSettings.UniversalGameSettings_C.GetPlatformFidelityOption
struct UUniversalGameSettings_C_GetPlatformFidelityOption_Params
{
	struct FName                                       PlatformName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGTAFidelitySettings                        PlatformSetting;                                           // 0x0008(0x0020)  (Parm, OutParm)
	bool                                               Found;                                                     // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function UniversalGameSettings.UniversalGameSettings_C.GetCurrentFidelityOption
struct UUniversalGameSettings_C_GetCurrentFidelityOption_Params
{
	int                                                CurrentSelection;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GTABase_EGTAPlatforms>                 PlatformOverride;                                          // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsEditor;                                                  // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UGTAFidelityOption*                          ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UniversalGameSettings.UniversalGameSettings_C.GetPlatformDefaults
struct UUniversalGameSettings_C_GetPlatformDefaults_Params
{
	TEnumAsByte<GTABase_EGTAPlatforms>                 PlatformOverride;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsEditor;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UClass*                                      ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
