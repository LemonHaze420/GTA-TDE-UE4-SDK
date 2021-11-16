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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpawnExplosion.SpawnExplosion_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USpawnExplosion_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass SpawnExplosion.SpawnExplosion_C");
		return ptr;
	}



	void GetInvScale(const struct FVector& InScale, class UObject* __WorldContext, struct FVector* InvScale);
	void SetupSpawnedExplosion(class AGTAExplosion* Explosion, class AActor* ExplodingActor, class UParticleSystem* DebrisTemplate, bool bSuppressLight, class UObject* __WorldContext);
	void DetermineExplosionTransform(const struct FVector& Location, const struct FVector& Normal, float Scale, class AActor* ExplodingActor, class UObject* __WorldContext, struct FTransform* Trx);
	void Get_Explosion_to_Spawn(TEnumAsByte<GTABase_EGTAExplosionType> Type, TEnumAsByte<GTABase_EGTAExplosionSurface> Surface, class AActor* ExplodingActor, class UObject* __WorldContext, class UClass** Actor, class UParticleSystem** DebrisParticle);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
