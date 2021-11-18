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
//		Name   -> Function BP_BloodyFootprint_Base.BP_BloodyFootprint_Base_C.SetFootprintAlpha
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Mesh_Section                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BloodyFootprint_Base_C::SetFootprintAlpha(int Mesh_Section, float Alpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BloodyFootprint_Base.BP_BloodyFootprint_Base_C.SetFootprintAlpha");

	ABP_BloodyFootprint_Base_C_SetFootprintAlpha_Params params {};
	params.Mesh_Section = Mesh_Section;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_BloodyFootprint_Base.BP_BloodyFootprint_Base_C.OnFootprintTick
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                MeshSection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Lifetime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BloodyFootprint_Base_C::OnFootprintTick(int MeshSection, float Lifetime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BloodyFootprint_Base.BP_BloodyFootprint_Base_C.OnFootprintTick");

	ABP_BloodyFootprint_Base_C_OnFootprintTick_Params params {};
	params.MeshSection = MeshSection;
	params.Lifetime = Lifetime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_BloodyFootprint_Base.BP_BloodyFootprint_Base_C.OnFootprintAdded
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                MeshSection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BloodyFootprint_Base_C::OnFootprintAdded(int MeshSection, float Alpha)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BloodyFootprint_Base.BP_BloodyFootprint_Base_C.OnFootprintAdded");

	ABP_BloodyFootprint_Base_C_OnFootprintAdded_Params params {};
	params.MeshSection = MeshSection;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_BloodyFootprint_Base.BP_BloodyFootprint_Base_C.ExecuteUbergraph_BP_BloodyFootprint_Base
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BloodyFootprint_Base_C::ExecuteUbergraph_BP_BloodyFootprint_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BloodyFootprint_Base.BP_BloodyFootprint_Base_C.ExecuteUbergraph_BP_BloodyFootprint_Base");

	ABP_BloodyFootprint_Base_C_ExecuteUbergraph_BP_BloodyFootprint_Base_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
