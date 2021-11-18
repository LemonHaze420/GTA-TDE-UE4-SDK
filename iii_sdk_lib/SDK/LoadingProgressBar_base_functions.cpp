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
//		Name   -> Function LoadingProgressBar_base.LoadingProgressBar_base_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ULoadingProgressBar_base_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoadingProgressBar_base.LoadingProgressBar_base_C.PreConstruct");

	ULoadingProgressBar_base_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function LoadingProgressBar_base.LoadingProgressBar_base_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ULoadingProgressBar_base_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoadingProgressBar_base.LoadingProgressBar_base_C.Construct");

	ULoadingProgressBar_base_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function LoadingProgressBar_base.LoadingProgressBar_base_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULoadingProgressBar_base_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoadingProgressBar_base.LoadingProgressBar_base_C.Tick");

	ULoadingProgressBar_base_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function LoadingProgressBar_base.LoadingProgressBar_base_C.SetProgress
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULoadingProgressBar_base_C::SetProgress(float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoadingProgressBar_base.LoadingProgressBar_base_C.SetProgress");

	ULoadingProgressBar_base_C_SetProgress_Params params {};
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function LoadingProgressBar_base.LoadingProgressBar_base_C.ExecuteUbergraph_LoadingProgressBar_base
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULoadingProgressBar_base_C::ExecuteUbergraph_LoadingProgressBar_base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LoadingProgressBar_base.LoadingProgressBar_base_C.ExecuteUbergraph_LoadingProgressBar_base");

	ULoadingProgressBar_base_C_ExecuteUbergraph_LoadingProgressBar_base_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
