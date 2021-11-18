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
//		Name   -> Function MediaPlayerAudioSpawner.MediaPlayerAudioSpawner_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AMediaPlayerAudioSpawner_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaPlayerAudioSpawner.MediaPlayerAudioSpawner_C.ReceiveBeginPlay");

	AMediaPlayerAudioSpawner_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function MediaPlayerAudioSpawner.MediaPlayerAudioSpawner_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMediaPlayerAudioSpawner_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaPlayerAudioSpawner.MediaPlayerAudioSpawner_C.ReceiveTick");

	AMediaPlayerAudioSpawner_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function MediaPlayerAudioSpawner.MediaPlayerAudioSpawner_C.ExecuteUbergraph_MediaPlayerAudioSpawner
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMediaPlayerAudioSpawner_C::ExecuteUbergraph_MediaPlayerAudioSpawner(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MediaPlayerAudioSpawner.MediaPlayerAudioSpawner_C.ExecuteUbergraph_MediaPlayerAudioSpawner");

	AMediaPlayerAudioSpawner_C_ExecuteUbergraph_MediaPlayerAudioSpawner_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
