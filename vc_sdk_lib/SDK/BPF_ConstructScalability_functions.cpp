// Name: ViceCity, Version: 1.0.0

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
//		Name   -> Function BPF_ConstructScalability.BPF_ConstructScalability_C.GetScalabilityClass
//		Flags  -> ()
// Parameters:
//		class AGTAWorldSettings*                           WorldSettings                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      ReturnClass                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPF_ConstructScalability_C::GetScalabilityClass(class AGTAWorldSettings* WorldSettings, class UObject* __WorldContext, class UClass** ReturnClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPF_ConstructScalability.BPF_ConstructScalability_C.GetScalabilityClass");

	UBPF_ConstructScalability_C_GetScalabilityClass_Params params {};
	params.WorldSettings = WorldSettings;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ReturnClass != nullptr)
		*ReturnClass = params.ReturnClass;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
