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
//		Name   -> Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer
//		Flags  -> ()
// Parameters:
//		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FActorLayer                                 Layer                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void ULayersBlueprintLibrary::RemoveActorFromLayer(class AActor* InActor, const struct FActorLayer& Layer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer");

	ULayersBlueprintLibrary_RemoveActorFromLayer_Params params {};
	params.InActor = InActor;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FActorLayer                                 ActorLayer                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<class AActor*>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<class AActor*> ULayersBlueprintLibrary::GetActors(class UObject* WorldContextObject, const struct FActorLayer& ActorLayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors");

	ULayersBlueprintLibrary_GetActors_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ActorLayer = ActorLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
//		Flags  -> ()
// Parameters:
//		class AActor*                                      InActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FActorLayer                                 Layer                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void ULayersBlueprintLibrary::AddActorToLayer(class AActor* InActor, const struct FActorLayer& Layer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer");

	ULayersBlueprintLibrary_AddActorToLayer_Params params {};
	params.InActor = InActor;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
