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
//		Name   -> Function BP_Fire.BP_Fire_C.GetSystem
//		Flags  -> ()
// Parameters:
//		class UParticleSystem*                             System                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Fire_C::GetSystem(class UParticleSystem** System, float* Distance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Fire.BP_Fire_C.GetSystem");

	ABP_Fire_C_GetSystem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (System != nullptr)
		*System = params.System;
	if (Distance != nullptr)
		*Distance = params.Distance;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Fire.BP_Fire_C.Extinguish
//		Flags  -> ()
void ABP_Fire_C::Extinguish()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Fire.BP_Fire_C.Extinguish");

	ABP_Fire_C_Extinguish_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Fire.BP_Fire_C.BndEvt__FX_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UParticleSystemComponent*                    PSystem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Fire_C::BndEvt__FX_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature(class UParticleSystemComponent* PSystem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Fire.BP_Fire_C.BndEvt__FX_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature");

	ABP_Fire_C_BndEvt__FX_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature_Params params {};
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Fire.BP_Fire_C.KillAgain
//		Flags  -> ()
void ABP_Fire_C::KillAgain()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Fire.BP_Fire_C.KillAgain");

	ABP_Fire_C_KillAgain_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Fire.BP_Fire_C.ExecuteUbergraph_BP_Fire
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Fire_C::ExecuteUbergraph_BP_Fire(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Fire.BP_Fire_C.ExecuteUbergraph_BP_Fire");

	ABP_Fire_C_ExecuteUbergraph_BP_Fire_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
