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
//		Name   -> Function UI_HUDScalableText.UI_HUDScalableText_C.GetTextScaleBox
//		Flags  -> ()
// Parameters:
//		class UScaleBox*                                   ScaleBox                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDScalableText_C::GetTextScaleBox(class UScaleBox** ScaleBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDScalableText.UI_HUDScalableText_C.GetTextScaleBox");

	UUI_HUDScalableText_C_GetTextScaleBox_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScaleBox != nullptr)
		*ScaleBox = params.ScaleBox;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDScalableText.UI_HUDScalableText_C.GetTextContentObject
//		Flags  -> ()
// Parameters:
//		class UGTAScalableRichTextBlock*                   MainButtonText                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDScalableText_C::GetTextContentObject(class UGTAScalableRichTextBlock** MainButtonText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDScalableText.UI_HUDScalableText_C.GetTextContentObject");

	UUI_HUDScalableText_C_GetTextContentObject_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MainButtonText != nullptr)
		*MainButtonText = params.MainButtonText;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDScalableText.UI_HUDScalableText_C.Construct
//		Flags  -> ()
void UUI_HUDScalableText_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDScalableText.UI_HUDScalableText_C.Construct");

	UUI_HUDScalableText_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDScalableText.UI_HUDScalableText_C.OnSynchronizeProperties
//		Flags  -> ()
void UUI_HUDScalableText_C::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDScalableText.UI_HUDScalableText_C.OnSynchronizeProperties");

	UUI_HUDScalableText_C_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDScalableText.UI_HUDScalableText_C.ExecuteUbergraph_UI_HUDScalableText
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDScalableText_C::ExecuteUbergraph_UI_HUDScalableText(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDScalableText.UI_HUDScalableText_C.ExecuteUbergraph_UI_HUDScalableText");

	UUI_HUDScalableText_C_ExecuteUbergraph_UI_HUDScalableText_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
