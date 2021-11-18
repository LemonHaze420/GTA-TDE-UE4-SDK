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
//		Name   -> Function BP_COL_Prop.BP_COL_Prop_C.ReceiveBeginPlay
//		Flags  -> ()
void ABP_COL_Prop_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_COL_Prop.BP_COL_Prop_C.ReceiveBeginPlay");

	ABP_COL_Prop_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_COL_Prop.BP_COL_Prop_C.ExecuteUbergraph_BP_COL_Prop
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_COL_Prop_C::ExecuteUbergraph_BP_COL_Prop(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_COL_Prop.BP_COL_Prop_C.ExecuteUbergraph_BP_COL_Prop");

	ABP_COL_Prop_C_ExecuteUbergraph_BP_COL_Prop_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
