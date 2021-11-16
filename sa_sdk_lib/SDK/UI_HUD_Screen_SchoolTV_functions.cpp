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
//		Name   -> Function UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C.CustomBoolReturnFunction
//		Flags  -> ()
// Parameters:
//		struct FString                                     FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUI_HUD_Screen_SchoolTV_C::CustomBoolReturnFunction(const struct FString& FunctionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C.CustomBoolReturnFunction");

	UUI_HUD_Screen_SchoolTV_C_CustomBoolReturnFunction_Params params {};
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C.UpdateBlackFade
//		Flags  -> ()
// Parameters:
//		float                                              dT                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Screen_SchoolTV_C::UpdateBlackFade(float dT)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C.UpdateBlackFade");

	UUI_HUD_Screen_SchoolTV_C_UpdateBlackFade_Params params {};
	params.dT = dT;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C.GetMainIcon
//		Flags  -> ()
// Parameters:
//		class UImage*                                      Image1                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Screen_SchoolTV_C::GetMainIcon(class UImage** Image1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C.GetMainIcon");

	UUI_HUD_Screen_SchoolTV_C_GetMainIcon_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Image1 != nullptr)
		*Image1 = params.Image1;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Screen_SchoolTV_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C.Tick");

	UUI_HUD_Screen_SchoolTV_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C.CustomFunctionWithFloat
//		Flags  -> ()
// Parameters:
//		struct FString                                     FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		float                                              floatNum                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Screen_SchoolTV_C::CustomFunctionWithFloat(const struct FString& FunctionName, float floatNum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C.CustomFunctionWithFloat");

	UUI_HUD_Screen_SchoolTV_C_CustomFunctionWithFloat_Params params {};
	params.FunctionName = FunctionName;
	params.floatNum = floatNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C.ExecuteUbergraph_UI_HUD_Screen_SchoolTV
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Screen_SchoolTV_C::ExecuteUbergraph_UI_HUD_Screen_SchoolTV(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C.ExecuteUbergraph_UI_HUD_Screen_SchoolTV");

	UUI_HUD_Screen_SchoolTV_C_ExecuteUbergraph_UI_HUD_Screen_SchoolTV_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
