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
//		Name   -> Function SpawnExplosion.SpawnExplosion_C.GetInvScale
//		Flags  -> ()
// Parameters:
//		struct FVector                                     InScale                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     InvScale                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USpawnExplosion_C::GetInvScale(const struct FVector& InScale, class UObject* __WorldContext, struct FVector* InvScale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpawnExplosion.SpawnExplosion_C.GetInvScale");

	USpawnExplosion_C_GetInvScale_Params params {};
	params.InScale = InScale;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InvScale != nullptr)
		*InvScale = params.InvScale;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SpawnExplosion.SpawnExplosion_C.SetupSpawnedExplosion
//		Flags  -> ()
// Parameters:
//		class AGTAExplosion*                               Explosion                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      ExplodingActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UParticleSystem*                             DebrisTemplate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bSuppressLight                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USpawnExplosion_C::SetupSpawnedExplosion(class AGTAExplosion* Explosion, class AActor* ExplodingActor, class UParticleSystem* DebrisTemplate, bool bSuppressLight, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpawnExplosion.SpawnExplosion_C.SetupSpawnedExplosion");

	USpawnExplosion_C_SetupSpawnedExplosion_Params params {};
	params.Explosion = Explosion;
	params.ExplodingActor = ExplodingActor;
	params.DebrisTemplate = DebrisTemplate;
	params.bSuppressLight = bSuppressLight;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SpawnExplosion.SpawnExplosion_C.DetermineExplosionTransform
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Normal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      ExplodingActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTransform                                  Trx                                                        (Parm, OutParm, IsPlainOldData, NoDestructor)
void USpawnExplosion_C::DetermineExplosionTransform(const struct FVector& Location, const struct FVector& Normal, float Scale, class AActor* ExplodingActor, class UObject* __WorldContext, struct FTransform* Trx)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpawnExplosion.SpawnExplosion_C.DetermineExplosionTransform");

	USpawnExplosion_C_DetermineExplosionTransform_Params params {};
	params.Location = Location;
	params.Normal = Normal;
	params.Scale = Scale;
	params.ExplodingActor = ExplodingActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Trx != nullptr)
		*Trx = params.Trx;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SpawnExplosion.SpawnExplosion_C.Get Explosion to Spawn
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<GTABase_EGTAExplosionType>             Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<GTABase_EGTAExplosionSurface>          Surface                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      ExplodingActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      Actor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UParticleSystem*                             DebrisParticle                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USpawnExplosion_C::Get_Explosion_to_Spawn(TEnumAsByte<GTABase_EGTAExplosionType> Type, TEnumAsByte<GTABase_EGTAExplosionSurface> Surface, class AActor* ExplodingActor, class UObject* __WorldContext, class UClass** Actor, class UParticleSystem** DebrisParticle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SpawnExplosion.SpawnExplosion_C.Get Explosion to Spawn");

	USpawnExplosion_C_Get_Explosion_to_Spawn_Params params {};
	params.Type = Type;
	params.Surface = Surface;
	params.ExplodingActor = ExplodingActor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
	if (DebrisParticle != nullptr)
		*DebrisParticle = params.DebrisParticle;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
