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
//		Name   -> Function UI_HUD_MappingImage.UI_HUD_MappingImage_C.GetImage
//		Flags  -> ()
// Parameters:
//		class UImage*                                      HelpIcon                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_MappingImage_C::GetImage(class UImage** HelpIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_MappingImage.UI_HUD_MappingImage_C.GetImage");

	UUI_HUD_MappingImage_C_GetImage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HelpIcon != nullptr)
		*HelpIcon = params.HelpIcon;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_MappingImage.UI_HUD_MappingImage_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_MappingImage_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_MappingImage.UI_HUD_MappingImage_C.PreConstruct");

	UUI_HUD_MappingImage_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_MappingImage.UI_HUD_MappingImage_C.Construct
//		Flags  -> ()
void UUI_HUD_MappingImage_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_MappingImage.UI_HUD_MappingImage_C.Construct");

	UUI_HUD_MappingImage_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_MappingImage.UI_HUD_MappingImage_C.ExecuteUbergraph_UI_HUD_MappingImage
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_MappingImage_C::ExecuteUbergraph_UI_HUD_MappingImage(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_MappingImage.UI_HUD_MappingImage_C.ExecuteUbergraph_UI_HUD_MappingImage");

	UUI_HUD_MappingImage_C_ExecuteUbergraph_UI_HUD_MappingImage_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
