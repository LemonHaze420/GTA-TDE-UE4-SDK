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
//		Name   -> Function LightningPreset.LightningPreset_C.ApplyOnMaterial
//		Flags  -> ()
void ULightningPreset_C::ApplyOnMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LightningPreset.LightningPreset_C.ApplyOnMaterial");

	ULightningPreset_C_ApplyOnMaterial_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
