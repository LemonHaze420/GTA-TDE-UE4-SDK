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
//		Name   -> Function AudioOptions.AudioOptions_C.OnRestoreDefaultsConfirmationCallback
//		Flags  -> ()
// Parameters:
//		bool                                               DidAccept                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAudioOptions_C::OnRestoreDefaultsConfirmationCallback(bool DidAccept)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioOptions.AudioOptions_C.OnRestoreDefaultsConfirmationCallback");

	UAudioOptions_C_OnRestoreDefaultsConfirmationCallback_Params params {};
	params.DidAccept = DidAccept;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AudioOptions.AudioOptions_C.OnOptionSelectionChanged
//		Flags  -> ()
// Parameters:
//		struct FName                                       OptionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Selected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAudioOptions_C::OnOptionSelectionChanged(const struct FName& OptionName, bool Selected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioOptions.AudioOptions_C.OnOptionSelectionChanged");

	UAudioOptions_C_OnOptionSelectionChanged_Params params {};
	params.OptionName = OptionName;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AudioOptions.AudioOptions_C.OptionChanged
//		Flags  -> ()
// Parameters:
//		struct FName                                       OptionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioOptions_C::OptionChanged(const struct FName& OptionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioOptions.AudioOptions_C.OptionChanged");

	UAudioOptions_C_OptionChanged_Params params {};
	params.OptionName = OptionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AudioOptions.AudioOptions_C.Construct
//		Flags  -> ()
void UAudioOptions_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioOptions.AudioOptions_C.Construct");

	UAudioOptions_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AudioOptions.AudioOptions_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioOptions_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioOptions.AudioOptions_C.Tick");

	UAudioOptions_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AudioOptions.AudioOptions_C.PlayRadio
//		Flags  -> ()
void UAudioOptions_C::PlayRadio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioOptions.AudioOptions_C.PlayRadio");

	UAudioOptions_C_PlayRadio_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AudioOptions.AudioOptions_C.StopRadio
//		Flags  -> ()
void UAudioOptions_C::StopRadio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioOptions.AudioOptions_C.StopRadio");

	UAudioOptions_C_StopRadio_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AudioOptions.AudioOptions_C.PlayDialog
//		Flags  -> ()
void UAudioOptions_C::PlayDialog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioOptions.AudioOptions_C.PlayDialog");

	UAudioOptions_C_PlayDialog_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AudioOptions.AudioOptions_C.PlaySFX
//		Flags  -> ()
void UAudioOptions_C::PlaySFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioOptions.AudioOptions_C.PlaySFX");

	UAudioOptions_C_PlaySFX_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function AudioOptions.AudioOptions_C.ExecuteUbergraph_AudioOptions
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAudioOptions_C::ExecuteUbergraph_AudioOptions(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioOptions.AudioOptions_C.ExecuteUbergraph_AudioOptions");

	UAudioOptions_C_ExecuteUbergraph_AudioOptions_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
