#pragma once

// Name: ViceCity, Version: 1.0.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_Pickup_ViceCity.BP_Pickup_ViceCity_C.GetMeshOverrideData
struct ABP_Pickup_ViceCity_C_GetMeshOverrideData_Params
{
	class UStaticMesh*                                 Mesh;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Found;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FColor                                      lightColor;                                                // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LightAttenuationRadius;                                    // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Pickup_ViceCity.BP_Pickup_ViceCity_C.SetPickupLight
struct ABP_Pickup_ViceCity_C_SetPickupLight_Params
{
	bool                                               bOn;                                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Pickup_ViceCity.BP_Pickup_ViceCity_C.ReceiveBeginPlay
struct ABP_Pickup_ViceCity_C_ReceiveBeginPlay_Params
{
};

// Function BP_Pickup_ViceCity.BP_Pickup_ViceCity_C.ExecuteUbergraph_BP_Pickup_ViceCity
struct ABP_Pickup_ViceCity_C_ExecuteUbergraph_BP_Pickup_ViceCity_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
