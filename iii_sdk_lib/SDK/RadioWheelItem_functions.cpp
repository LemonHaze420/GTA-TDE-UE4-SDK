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
//		Name   -> Function RadioWheelItem.RadioWheelItem_C.SetSelected
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URadioWheelItem_C::SetSelected(bool IsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RadioWheelItem.RadioWheelItem_C.SetSelected");

	URadioWheelItem_C_SetSelected_Params params {};
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function RadioWheelItem.RadioWheelItem_C.IsImageHidden
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsHidden                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URadioWheelItem_C::IsImageHidden(bool* IsHidden)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RadioWheelItem.RadioWheelItem_C.IsImageHidden");

	URadioWheelItem_C_IsImageHidden_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsHidden != nullptr)
		*IsHidden = params.IsHidden;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function RadioWheelItem.RadioWheelItem_C.HideImage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void URadioWheelItem_C::HideImage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RadioWheelItem.RadioWheelItem_C.HideImage");

	URadioWheelItem_C_HideImage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function RadioWheelItem.RadioWheelItem_C.SetImage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URadioWheelItem_C::SetImage(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RadioWheelItem.RadioWheelItem_C.SetImage");

	URadioWheelItem_C_SetImage_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function RadioWheelItem.RadioWheelItem_C.SetText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     NewString                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void URadioWheelItem_C::SetText(const struct FString& NewString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function RadioWheelItem.RadioWheelItem_C.SetText");

	URadioWheelItem_C_SetText_Params params {};
	params.NewString = NewString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
