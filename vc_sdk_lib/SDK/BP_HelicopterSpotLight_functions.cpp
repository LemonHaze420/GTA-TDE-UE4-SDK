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
//		Name   -> Function BP_HelicopterSpotLight.BP_HelicopterSpotLight_C.AddOffsetToTarget
//		Flags  -> ()
// Parameters:
//		struct FVector                                     LocationIn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     LocationOut                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HelicopterSpotLight_C::AddOffsetToTarget(const struct FVector& LocationIn, struct FVector* LocationOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HelicopterSpotLight.BP_HelicopterSpotLight_C.AddOffsetToTarget");

	UBP_HelicopterSpotLight_C_AddOffsetToTarget_Params params {};
	params.LocationIn = LocationIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LocationOut != nullptr)
		*LocationOut = params.LocationOut;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_HelicopterSpotLight.BP_HelicopterSpotLight_C.UpdateLightPosition
//		Flags  -> ()
// Parameters:
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HelicopterSpotLight_C::UpdateLightPosition(float dT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HelicopterSpotLight.BP_HelicopterSpotLight_C.UpdateLightPosition");

	UBP_HelicopterSpotLight_C_UpdateLightPosition_Params params {};
	params.dT = dT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_HelicopterSpotLight.BP_HelicopterSpotLight_C.SetFollowingActor
//		Flags  -> ()
// Parameters:
//		class AActor*                                      NewActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HelicopterSpotLight_C::SetFollowingActor(class AActor* NewActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HelicopterSpotLight.BP_HelicopterSpotLight_C.SetFollowingActor");

	UBP_HelicopterSpotLight_C_SetFollowingActor_Params params {};
	params.NewActor = NewActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_HelicopterSpotLight.BP_HelicopterSpotLight_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HelicopterSpotLight_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HelicopterSpotLight.BP_HelicopterSpotLight_C.ReceiveTick");

	UBP_HelicopterSpotLight_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_HelicopterSpotLight.BP_HelicopterSpotLight_C.ExecuteUbergraph_BP_HelicopterSpotLight
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_HelicopterSpotLight_C::ExecuteUbergraph_BP_HelicopterSpotLight(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_HelicopterSpotLight.BP_HelicopterSpotLight_C.ExecuteUbergraph_BP_HelicopterSpotLight");

	UBP_HelicopterSpotLight_C_ExecuteUbergraph_BP_HelicopterSpotLight_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
