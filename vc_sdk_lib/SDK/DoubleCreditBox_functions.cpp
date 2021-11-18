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
//		Name   -> Function DoubleCreditBox.DoubleCreditBox_C.SetTextValues
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text1                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Text2                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FSlateFontInfo                              Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UDoubleCreditBox_C::SetTextValues(const struct FText& Text1, const struct FText& Text2, const struct FSlateFontInfo& Font)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoubleCreditBox.DoubleCreditBox_C.SetTextValues");

	UDoubleCreditBox_C_SetTextValues_Params params {};
	params.Text1 = Text1;
	params.Text2 = Text2;
	params.Font = Font;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DoubleCreditBox.DoubleCreditBox_C.Construct
//		Flags  -> ()
void UDoubleCreditBox_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoubleCreditBox.DoubleCreditBox_C.Construct");

	UDoubleCreditBox_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DoubleCreditBox.DoubleCreditBox_C.DelayedTextAdd
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text1                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Text2                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FSlateFontInfo                              Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UDoubleCreditBox_C::DelayedTextAdd(const struct FText& Text1, const struct FText& Text2, const struct FSlateFontInfo& Font)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoubleCreditBox.DoubleCreditBox_C.DelayedTextAdd");

	UDoubleCreditBox_C_DelayedTextAdd_Params params {};
	params.Text1 = Text1;
	params.Text2 = Text2;
	params.Font = Font;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function DoubleCreditBox.DoubleCreditBox_C.ExecuteUbergraph_DoubleCreditBox
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDoubleCreditBox_C::ExecuteUbergraph_DoubleCreditBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function DoubleCreditBox.DoubleCreditBox_C.ExecuteUbergraph_DoubleCreditBox");

	UDoubleCreditBox_C_ExecuteUbergraph_DoubleCreditBox_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
