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
//		Name   -> Function BP_Pickup_SanAndreas.BP_Pickup_SanAndreas_C.GetMeshOverrideData
//		Flags  -> ()
// Parameters:
//		class UStaticMesh*                                 Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FColor                                      lightColor                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              LightAttenuationRadius                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Pickup_SanAndreas_C::GetMeshOverrideData(class UStaticMesh* Mesh, bool* Found, struct FColor* lightColor, float* LightAttenuationRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Pickup_SanAndreas.BP_Pickup_SanAndreas_C.GetMeshOverrideData");

	ABP_Pickup_SanAndreas_C_GetMeshOverrideData_Params params {};
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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
