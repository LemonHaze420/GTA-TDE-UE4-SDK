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
//		Name   -> Function UI_LegalScreen_Base.UI_LegalScreen_Base_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_LegalScreen_Base_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_LegalScreen_Base.UI_LegalScreen_Base_C.PreConstruct");

	UUI_LegalScreen_Base_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_LegalScreen_Base.UI_LegalScreen_Base_C.Construct
//		Flags  -> ()
void UUI_LegalScreen_Base_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_LegalScreen_Base.UI_LegalScreen_Base_C.Construct");

	UUI_LegalScreen_Base_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_LegalScreen_Base.UI_LegalScreen_Base_C.ExecuteUbergraph_UI_LegalScreen_Base
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_LegalScreen_Base_C::ExecuteUbergraph_UI_LegalScreen_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_LegalScreen_Base.UI_LegalScreen_Base_C.ExecuteUbergraph_UI_LegalScreen_Base");

	UUI_LegalScreen_Base_C_ExecuteUbergraph_UI_LegalScreen_Base_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
