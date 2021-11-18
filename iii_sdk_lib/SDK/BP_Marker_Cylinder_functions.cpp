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
//		Name   -> Function BP_Marker_Cylinder.BP_Marker_Cylinder_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Marker_Cylinder_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Marker_Cylinder.BP_Marker_Cylinder_C.ReceiveTick");

	ABP_Marker_Cylinder_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_Marker_Cylinder.BP_Marker_Cylinder_C.SetMarkerColor
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FColor                                      withColor                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Marker_Cylinder_C::SetMarkerColor(const struct FColor& withColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Marker_Cylinder.BP_Marker_Cylinder_C.SetMarkerColor");

	ABP_Marker_Cylinder_C_SetMarkerColor_Params params {};
	params.withColor = withColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function BP_Marker_Cylinder.BP_Marker_Cylinder_C.ExecuteUbergraph_BP_Marker_Cylinder
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Marker_Cylinder_C::ExecuteUbergraph_BP_Marker_Cylinder(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Marker_Cylinder.BP_Marker_Cylinder_C.ExecuteUbergraph_BP_Marker_Cylinder");

	ABP_Marker_Cylinder_C_ExecuteUbergraph_BP_Marker_Cylinder_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
