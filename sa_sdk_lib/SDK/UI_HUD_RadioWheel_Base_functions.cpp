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
//		Name   -> Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.GetWeaponWheelItemOffset
//		Flags  -> ()
// Parameters:
//		float                                              NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_RadioWheel_Base_C::GetWeaponWheelItemOffset(float* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.GetWeaponWheelItemOffset");

	UUI_HUD_RadioWheel_Base_C_GetWeaponWheelItemOffset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.GetRadioWheelItemOffset
//		Flags  -> ()
// Parameters:
//		float                                              NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_RadioWheel_Base_C::GetRadioWheelItemOffset(float* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.GetRadioWheelItemOffset");

	UUI_HUD_RadioWheel_Base_C_GetRadioWheelItemOffset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.SetupSections
//		Flags  -> ()
// Parameters:
//		int                                                NumSections                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_RadioWheel_Base_C::SetupSections(int NumSections)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.SetupSections");

	UUI_HUD_RadioWheel_Base_C_SetupSections_Params params {};
	params.NumSections = NumSections;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.AddTextToImages
//		Flags  -> ()
// Parameters:
//		TArray<struct FString>                             Array                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_HUD_RadioWheel_Base_C::AddTextToImages(TArray<struct FString> Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.AddTextToImages");

	UUI_HUD_RadioWheel_Base_C_AddTextToImages_Params params {};
	params.Array = Array;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.SetupImages
//		Flags  -> ()
// Parameters:
//		TArray<struct FSlotImageStruct>                    Images                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_HUD_RadioWheel_Base_C::SetupImages(TArray<struct FSlotImageStruct>* Images)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.SetupImages");

	UUI_HUD_RadioWheel_Base_C_SetupImages_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Images != nullptr)
		*Images = params.Images;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.SetSelection
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_RadioWheel_Base_C::SetSelection(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.SetSelection");

	UUI_HUD_RadioWheel_Base_C_SetSelection_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_RadioWheel_Base_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.PreConstruct");

	UUI_HUD_RadioWheel_Base_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.Construct
//		Flags  -> ()
void UUI_HUD_RadioWheel_Base_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.Construct");

	UUI_HUD_RadioWheel_Base_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.ExecuteUbergraph_UI_HUD_RadioWheel_Base
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_RadioWheel_Base_C::ExecuteUbergraph_UI_HUD_RadioWheel_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_RadioWheel_Base.UI_HUD_RadioWheel_Base_C.ExecuteUbergraph_UI_HUD_RadioWheel_Base");

	UUI_HUD_RadioWheel_Base_C_ExecuteUbergraph_UI_HUD_RadioWheel_Base_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
