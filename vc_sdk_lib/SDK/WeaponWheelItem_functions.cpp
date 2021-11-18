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
//		Name   -> Function WeaponWheelItem.WeaponWheelItem_C.Set Image Material for Item
//		Flags  -> ()
// Parameters:
//		class UMaterialInterface*                          NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     string                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     extraString                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWeaponWheelItem_C::Set_Image_Material_for_Item(class UMaterialInterface* NewParam, bool Enabled, const struct FString& string, const struct FString& extraString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WeaponWheelItem.WeaponWheelItem_C.Set Image Material for Item");

	UWeaponWheelItem_C_Set_Image_Material_for_Item_Params params {};
	params.NewParam = NewParam;
	params.Enabled = Enabled;
	params.string = string;
	params.extraString = extraString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WeaponWheelItem.WeaponWheelItem_C.SetText
//		Flags  -> ()
// Parameters:
//		struct FString                                     string                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWeaponWheelItem_C::SetText(const struct FString& string)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WeaponWheelItem.WeaponWheelItem_C.SetText");

	UWeaponWheelItem_C_SetText_Params params {};
	params.string = string;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WeaponWheelItem.WeaponWheelItem_C.HideImage
//		Flags  -> ()
void UWeaponWheelItem_C::HideImage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WeaponWheelItem.WeaponWheelItem_C.HideImage");

	UWeaponWheelItem_C_HideImage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function WeaponWheelItem.WeaponWheelItem_C.Set Image
//		Flags  -> ()
// Parameters:
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     string                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     extraString                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UWeaponWheelItem_C::Set_Image(class UTexture2D* Texture, bool Enabled, const struct FString& string, const struct FString& extraString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function WeaponWheelItem.WeaponWheelItem_C.Set Image");

	UWeaponWheelItem_C_Set_Image_Params params {};
	params.Texture = Texture;
	params.Enabled = Enabled;
	params.string = string;
	params.extraString = extraString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
