#pragma once

// Name: GTA III, Version: 1.0.0


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

// BlueprintGeneratedClass BP_GTA3Interface.BP_GTA3Interface_C
// 0x0000 (FullSize[0x0780] - InheritedSize[0x0780])
class UBP_GTA3Interface_C : public UGTA3Interface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_GTA3Interface.BP_GTA3Interface_C");
		return ptr;
	}



	class AGTAExplosion* SpawnExplosion(const struct FVector& Location, TEnumAsByte<GTABase_EGTAExplosionType> Type, TEnumAsByte<GTABase_EGTAExplosionSurface> Surface, const struct FVector& SurfaceNormal, float Scale, int DebrisCount, class AActor* ExplodingActor, bool bSuppressLight);
	class UClass* GetScalabilityClass();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
