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
//		Name   -> Function HUDDrawer_GTA3.HUDDrawer_GTA3_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHUDDrawer_GTA3_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUDDrawer_GTA3.HUDDrawer_GTA3_C.PreConstruct");

	UHUDDrawer_GTA3_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function HUDDrawer_GTA3.HUDDrawer_GTA3_C.ExecuteUbergraph_HUDDrawer_GTA3
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHUDDrawer_GTA3_C::ExecuteUbergraph_HUDDrawer_GTA3(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUDDrawer_GTA3.HUDDrawer_GTA3_C.ExecuteUbergraph_HUDDrawer_GTA3");

	UHUDDrawer_GTA3_C_ExecuteUbergraph_HUDDrawer_GTA3_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
