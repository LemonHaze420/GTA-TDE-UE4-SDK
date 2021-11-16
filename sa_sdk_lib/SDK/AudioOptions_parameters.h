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

// Function AudioOptions.AudioOptions_C.OnRestoreDefaultsConfirmationCallback
struct UAudioOptions_C_OnRestoreDefaultsConfirmationCallback_Params
{
	bool                                               DidAccept;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AudioOptions.AudioOptions_C.OnOptionSelectionChanged
struct UAudioOptions_C_OnOptionSelectionChanged_Params
{
	struct FName                                       OptionName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Selected;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function AudioOptions.AudioOptions_C.OptionChanged
struct UAudioOptions_C_OptionChanged_Params
{
	struct FName                                       OptionName;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AudioOptions.AudioOptions_C.Construct
struct UAudioOptions_C_Construct_Params
{
};

// Function AudioOptions.AudioOptions_C.Tick
struct UAudioOptions_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function AudioOptions.AudioOptions_C.PlayRadio
struct UAudioOptions_C_PlayRadio_Params
{
};

// Function AudioOptions.AudioOptions_C.StopRadio
struct UAudioOptions_C_StopRadio_Params
{
};

// Function AudioOptions.AudioOptions_C.PlayDialog
struct UAudioOptions_C_PlayDialog_Params
{
};

// Function AudioOptions.AudioOptions_C.PlaySFX
struct UAudioOptions_C_PlaySFX_Params
{
};

// Function AudioOptions.AudioOptions_C.ExecuteUbergraph_AudioOptions
struct UAudioOptions_C_ExecuteUbergraph_AudioOptions_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
