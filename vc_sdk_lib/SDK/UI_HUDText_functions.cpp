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
//		Name   -> Function UI_HUDText.UI_HUDText_C.GetTextScaleBox
//		Flags  -> ()
// Parameters:
//		class UScaleBox*                                   ScaleBox                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDText_C::GetTextScaleBox(class UScaleBox** ScaleBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDText.UI_HUDText_C.GetTextScaleBox");

	UUI_HUDText_C_GetTextScaleBox_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScaleBox != nullptr)
		*ScaleBox = params.ScaleBox;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDText.UI_HUDText_C.GetTextContentObject
//		Flags  -> ()
// Parameters:
//		class UTextBlock*                                  MainButtonText                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDText_C::GetTextContentObject(class UTextBlock** MainButtonText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDText.UI_HUDText_C.GetTextContentObject");

	UUI_HUDText_C_GetTextContentObject_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MainButtonText != nullptr)
		*MainButtonText = params.MainButtonText;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDText.UI_HUDText_C.Construct
//		Flags  -> ()
void UUI_HUDText_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDText.UI_HUDText_C.Construct");

	UUI_HUDText_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDText.UI_HUDText_C.OnSynchronizeProperties
//		Flags  -> ()
void UUI_HUDText_C::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDText.UI_HUDText_C.OnSynchronizeProperties");

	UUI_HUDText_C_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDText.UI_HUDText_C.ExecuteUbergraph_UI_HUDText
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDText_C::ExecuteUbergraph_UI_HUDText(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDText.UI_HUDText_C.ExecuteUbergraph_UI_HUDText");

	UUI_HUDText_C_ExecuteUbergraph_UI_HUDText_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
