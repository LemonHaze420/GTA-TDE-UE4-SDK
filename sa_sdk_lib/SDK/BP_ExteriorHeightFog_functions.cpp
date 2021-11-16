// Name: SanAndreas, Version: 1.0.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ExteriorHeightFog.BP_ExteriorHeightFog_C.TimeChanged
//		Flags  -> ()
// Parameters:
//		bool                                               bEditor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ExteriorHeightFog_C::TimeChanged(bool bEditor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ExteriorHeightFog.BP_ExteriorHeightFog_C.TimeChanged");

	ABP_ExteriorHeightFog_C_TimeChanged_Params params {};
	params.bEditor = bEditor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_ExteriorHeightFog.BP_ExteriorHeightFog_C.ExecuteUbergraph_BP_ExteriorHeightFog
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_ExteriorHeightFog_C::ExecuteUbergraph_BP_ExteriorHeightFog(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ExteriorHeightFog.BP_ExteriorHeightFog_C.ExecuteUbergraph_BP_ExteriorHeightFog");

	ABP_ExteriorHeightFog_C_ExecuteUbergraph_BP_ExteriorHeightFog_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
