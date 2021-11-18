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
//		Name   -> Function UI_HUDBar.UI_HUDBar_C.SetSizeBoxOverrideAndUpdate
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   SizeBoxOverride                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDBar_C::SetSizeBoxOverrideAndUpdate(const struct FVector2D& SizeBoxOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDBar.UI_HUDBar_C.SetSizeBoxOverrideAndUpdate");

	UUI_HUDBar_C_SetSizeBoxOverrideAndUpdate_Params params {};
	params.SizeBoxOverride = SizeBoxOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDBar.UI_HUDBar_C.UpdateSizeBoxOverrideSize
//		Flags  -> ()
// Parameters:
void UUI_HUDBar_C::UpdateSizeBoxOverrideSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDBar.UI_HUDBar_C.UpdateSizeBoxOverrideSize");

	UUI_HUDBar_C_UpdateSizeBoxOverrideSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDBar.UI_HUDBar_C.SetPrimaryBarColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDBar_C::SetPrimaryBarColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDBar.UI_HUDBar_C.SetPrimaryBarColor");

	UUI_HUDBar_C_SetPrimaryBarColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDBar.UI_HUDBar_C.SetSecondaryBarColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDBar_C::SetSecondaryBarColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDBar.UI_HUDBar_C.SetSecondaryBarColor");

	UUI_HUDBar_C_SetSecondaryBarColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDBar.UI_HUDBar_C.SetProgres
//		Flags  -> ()
// Parameters:
//		float                                              TopBar                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              BottomBar                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsPositive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUDBar_C::SetProgres(float TopBar, float BottomBar, bool IsPositive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDBar.UI_HUDBar_C.SetProgres");

	UUI_HUDBar_C_SetProgres_Params params {};
	params.TopBar = TopBar;
	params.BottomBar = BottomBar;
	params.IsPositive = IsPositive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDBar.UI_HUDBar_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUDBar_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDBar.UI_HUDBar_C.PreConstruct");

	UUI_HUDBar_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDBar.UI_HUDBar_C.Construct
//		Flags  -> ()
void UUI_HUDBar_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDBar.UI_HUDBar_C.Construct");

	UUI_HUDBar_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDBar.UI_HUDBar_C.ExecuteUbergraph_UI_HUDBar
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDBar_C::ExecuteUbergraph_UI_HUDBar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDBar.UI_HUDBar_C.ExecuteUbergraph_UI_HUDBar");

	UUI_HUDBar_C_ExecuteUbergraph_UI_HUDBar_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
