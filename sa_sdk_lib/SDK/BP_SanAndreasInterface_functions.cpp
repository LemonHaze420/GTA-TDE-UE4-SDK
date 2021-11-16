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
//		Name   -> Function BP_SanAndreasInterface.BP_SanAndreasInterface_C.SpawnExplosion
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Location                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<GTABase_EGTAExplosionType>             Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<GTABase_EGTAExplosionSurface>          Surface                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     SurfaceNormal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                DebrisCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      ExplodingActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bSuppressLight                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class AGTAExplosion*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AGTAExplosion* UBP_SanAndreasInterface_C::SpawnExplosion(const struct FVector& Location, TEnumAsByte<GTABase_EGTAExplosionType> Type, TEnumAsByte<GTABase_EGTAExplosionSurface> Surface, const struct FVector& SurfaceNormal, float Scale, int DebrisCount, class AActor* ExplodingActor, bool bSuppressLight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SanAndreasInterface.BP_SanAndreasInterface_C.SpawnExplosion");

	UBP_SanAndreasInterface_C_SpawnExplosion_Params params {};
	params.Location = Location;
	params.Type = Type;
	params.Surface = Surface;
	params.SurfaceNormal = SurfaceNormal;
	params.Scale = Scale;
	params.DebrisCount = DebrisCount;
	params.ExplodingActor = ExplodingActor;
	params.bSuppressLight = bSuppressLight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_SanAndreasInterface.BP_SanAndreasInterface_C.GetScalabilityClass
//		Flags  -> ()
// Parameters:
//		class UClass*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UClass* UBP_SanAndreasInterface_C::GetScalabilityClass()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SanAndreasInterface.BP_SanAndreasInterface_C.GetScalabilityClass");

	UBP_SanAndreasInterface_C_GetScalabilityClass_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
