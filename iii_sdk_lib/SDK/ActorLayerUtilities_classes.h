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

// Class ActorLayerUtilities.LayersBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULayersBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ActorLayerUtilities.LayersBlueprintLibrary");
		return ptr;
	}



	void STATIC_RemoveActorFromLayer(class AActor* InActor, const struct FActorLayer& Layer);
	TArray<class AActor*> STATIC_GetActors(class UObject* WorldContextObject, const struct FActorLayer& ActorLayer);
	void STATIC_AddActorToLayer(class AActor* InActor, const struct FActorLayer& Layer);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
