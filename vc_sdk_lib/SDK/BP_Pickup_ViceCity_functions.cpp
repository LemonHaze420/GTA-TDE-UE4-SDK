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
//		Name   -> Function BP_Pickup_ViceCity.BP_Pickup_ViceCity_C.GetMeshOverrideData
//		Flags  -> ()
// Parameters:
//		class UStaticMesh*                                 Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FColor                                      lightColor                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              LightAttenuationRadius                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Pickup_ViceCity_C::GetMeshOverrideData(class UStaticMesh* Mesh, bool* Found, struct FColor* lightColor, float* LightAttenuationRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Pickup_ViceCity.BP_Pickup_ViceCity_C.GetMeshOverrideData");

	ABP_Pickup_ViceCity_C_GetMeshOverrideData_Params params {};
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Found != nullptr)
		*Found = params.Found;
	if (lightColor != nullptr)
		*lightColor = params.lightColor;
	if (LightAttenuationRadius != nullptr)
		*LightAttenuationRadius = params.LightAttenuationRadius;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Pickup_ViceCity.BP_Pickup_ViceCity_C.SetPickupLight
//		Flags  -> ()
// Parameters:
//		bool                                               bOn                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Pickup_ViceCity_C::SetPickupLight(bool bOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Pickup_ViceCity.BP_Pickup_ViceCity_C.SetPickupLight");

	ABP_Pickup_ViceCity_C_SetPickupLight_Params params {};
	params.bOn = bOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Pickup_ViceCity.BP_Pickup_ViceCity_C.ReceiveBeginPlay
//		Flags  -> ()
void ABP_Pickup_ViceCity_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Pickup_ViceCity.BP_Pickup_ViceCity_C.ReceiveBeginPlay");

	ABP_Pickup_ViceCity_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Pickup_ViceCity.BP_Pickup_ViceCity_C.ExecuteUbergraph_BP_Pickup_ViceCity
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Pickup_ViceCity_C::ExecuteUbergraph_BP_Pickup_ViceCity(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Pickup_ViceCity.BP_Pickup_ViceCity_C.ExecuteUbergraph_BP_Pickup_ViceCity");

	ABP_Pickup_ViceCity_C_ExecuteUbergraph_BP_Pickup_ViceCity_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
