// Name: GTA III, Version: 1.0.0

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
//		Offset -> 0x0188C180
//		Name   -> Function BP_TargetHalo.BP_TargetHalo_C.UpdateTargetComponent
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UMeshComponent*                              Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<GTABase_ETargetHighlightType>          HighlightType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TargetHalo_C::UpdateTargetComponent(class UMeshComponent* Component, TEnumAsByte<GTABase_ETargetHighlightType> HighlightType, float Alpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TargetHalo.BP_TargetHalo_C.UpdateTargetComponent");

	ABP_TargetHalo_C_UpdateTargetComponent_Params params {};
	params.Component = Component;
	params.HighlightType = HighlightType;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_TargetHalo.BP_TargetHalo_C.SetupTargetComponent
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UMeshComponent*                              Component                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<GTABase_ETargetHighlightType>          HighlightType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InitialAlpha                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_TargetHalo_C::SetupTargetComponent(class UMeshComponent* Component, TEnumAsByte<GTABase_ETargetHighlightType> HighlightType, float InitialAlpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TargetHalo.BP_TargetHalo_C.SetupTargetComponent");

	ABP_TargetHalo_C_SetupTargetComponent_Params params {};
	params.Component = Component;
	params.HighlightType = HighlightType;
	params.InitialAlpha = InitialAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
