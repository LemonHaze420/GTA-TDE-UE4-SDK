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
//		Name   -> Function HUDItem_SC_ToastBase.HUDItem_SC_ToastBase_C.CustomFunctionWithObject
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UObject*                                     Object                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHUDItem_SC_ToastBase_C::CustomFunctionWithObject(const struct FString& FunctionName, class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUDItem_SC_ToastBase.HUDItem_SC_ToastBase_C.CustomFunctionWithObject");

	UHUDItem_SC_ToastBase_C_CustomFunctionWithObject_Params params {};
	params.FunctionName = FunctionName;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function HUDItem_SC_ToastBase.HUDItem_SC_ToastBase_C.SetContentText
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHUDItem_SC_ToastBase_C::SetContentText(const struct FText& Text, const struct FLinearColor& FontColorOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUDItem_SC_ToastBase.HUDItem_SC_ToastBase_C.SetContentText");

	UHUDItem_SC_ToastBase_C_SetContentText_Params params {};
	params.Text = Text;
	params.FontColorOverride = FontColorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function HUDItem_SC_ToastBase.HUDItem_SC_ToastBase_C.CustomFunction
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UHUDItem_SC_ToastBase_C::CustomFunction(const struct FString& FunctionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUDItem_SC_ToastBase.HUDItem_SC_ToastBase_C.CustomFunction");

	UHUDItem_SC_ToastBase_C_CustomFunction_Params params {};
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function HUDItem_SC_ToastBase.HUDItem_SC_ToastBase_C.ExecuteUbergraph_HUDItem_SC_ToastBase
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHUDItem_SC_ToastBase_C::ExecuteUbergraph_HUDItem_SC_ToastBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUDItem_SC_ToastBase.HUDItem_SC_ToastBase_C.ExecuteUbergraph_HUDItem_SC_ToastBase");

	UHUDItem_SC_ToastBase_C_ExecuteUbergraph_HUDItem_SC_ToastBase_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
