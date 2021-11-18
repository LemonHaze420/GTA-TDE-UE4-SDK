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
// Parameters
//---------------------------------------------------------------------------

// Function LegalScreen_Stinger.LegalScreen_Stinger_C.UpdateBlockingImage
struct ULegalScreen_Stinger_C_UpdateBlockingImage_Params
{
};

// Function LegalScreen_Stinger.LegalScreen_Stinger_C.StartMovie
struct ULegalScreen_Stinger_C_StartMovie_Params
{
};

// Function LegalScreen_Stinger.LegalScreen_Stinger_C.skip to end
struct ULegalScreen_Stinger_C_skip_to_end_Params
{
};

// Function LegalScreen_Stinger.LegalScreen_Stinger_C.IsPlayingMovie
struct ULegalScreen_Stinger_C_IsPlayingMovie_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function LegalScreen_Stinger.LegalScreen_Stinger_C.Construct
struct ULegalScreen_Stinger_C_Construct_Params
{
};

// Function LegalScreen_Stinger.LegalScreen_Stinger_C.Tick
struct ULegalScreen_Stinger_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LegalScreen_Stinger.LegalScreen_Stinger_C.Destruct
struct ULegalScreen_Stinger_C_Destruct_Params
{
};

// Function LegalScreen_Stinger.LegalScreen_Stinger_C.ExecuteUbergraph_LegalScreen_Stinger
struct ULegalScreen_Stinger_C_ExecuteUbergraph_LegalScreen_Stinger_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
