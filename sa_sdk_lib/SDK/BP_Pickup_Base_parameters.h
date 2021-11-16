#pragma once

// Name: SanAndreas, Version: 1.0.0


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

// Function BP_Pickup_Base.BP_Pickup_Base_C.ProcessDissolve
struct ABP_Pickup_Base_C_ProcessDissolve_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Pickup_Base.BP_Pickup_Base_C.GetMeshOverrideData
struct ABP_Pickup_Base_C_GetMeshOverrideData_Params
{
	class UStaticMesh*                                 Mesh;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Found;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FColor                                      lightColor;                                                // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LightAttenuationRadius;                                    // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Pickup_Base.BP_Pickup_Base_C.SetMyColor
struct ABP_Pickup_Base_C_SetMyColor_Params
{
	struct FColor                                      InColor;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Pickup_Base.BP_Pickup_Base_C.ReceiveBeginPlay
struct ABP_Pickup_Base_C_ReceiveBeginPlay_Params
{
};

// Function BP_Pickup_Base.BP_Pickup_Base_C.ReceiveTick
struct ABP_Pickup_Base_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Pickup_Base.BP_Pickup_Base_C.SetMarkerColor
struct ABP_Pickup_Base_C_SetMarkerColor_Params
{
	struct FColor                                      withColor;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Pickup_Base.BP_Pickup_Base_C.SetMarkerMesh
struct ABP_Pickup_Base_C_SetMarkerMesh_Params
{
	class UStaticMesh*                                 withMesh;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Pickup_Base.BP_Pickup_Base_C.SetGroundLocation
struct ABP_Pickup_Base_C_SetGroundLocation_Params
{
	struct FVector                                     withLocation;                                              // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Pickup_Base.BP_Pickup_Base_C.StartDissolve
struct ABP_Pickup_Base_C_StartDissolve_Params
{
	bool                                               bPickedUp;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_Pickup_Base.BP_Pickup_Base_C.SetMarkerOutline
struct ABP_Pickup_Base_C_SetMarkerOutline_Params
{
	struct FColor                                      withColor;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Pickup_Base.BP_Pickup_Base_C.ExecuteUbergraph_BP_Pickup_Base
struct ABP_Pickup_Base_C_ExecuteUbergraph_BP_Pickup_Base_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
