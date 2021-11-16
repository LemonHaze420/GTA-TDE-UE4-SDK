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
//		Name   -> Function BP_Pickup_Base.BP_Pickup_Base_C.ProcessDissolve
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Pickup_Base_C::ProcessDissolve(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Pickup_Base.BP_Pickup_Base_C.ProcessDissolve");

	ABP_Pickup_Base_C_ProcessDissolve_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Pickup_Base.BP_Pickup_Base_C.GetMeshOverrideData
//		Flags  -> ()
// Parameters:
//		class UStaticMesh*                                 Mesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FColor                                      lightColor                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              LightAttenuationRadius                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Pickup_Base_C::GetMeshOverrideData(class UStaticMesh* Mesh, bool* Found, struct FColor* lightColor, float* LightAttenuationRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Pickup_Base.BP_Pickup_Base_C.GetMeshOverrideData");

	ABP_Pickup_Base_C_GetMeshOverrideData_Params params {};
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
//		Name   -> Function BP_Pickup_Base.BP_Pickup_Base_C.SetMyColor
//		Flags  -> ()
// Parameters:
//		struct FColor                                      InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Pickup_Base_C::SetMyColor(const struct FColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Pickup_Base.BP_Pickup_Base_C.SetMyColor");

	ABP_Pickup_Base_C_SetMyColor_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Pickup_Base.BP_Pickup_Base_C.ReceiveBeginPlay
//		Flags  -> ()
void ABP_Pickup_Base_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Pickup_Base.BP_Pickup_Base_C.ReceiveBeginPlay");

	ABP_Pickup_Base_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Pickup_Base.BP_Pickup_Base_C.ReceiveTick
//		Flags  -> ()
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Pickup_Base_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Pickup_Base.BP_Pickup_Base_C.ReceiveTick");

	ABP_Pickup_Base_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Pickup_Base.BP_Pickup_Base_C.SetMarkerColor
//		Flags  -> ()
// Parameters:
//		struct FColor                                      withColor                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Pickup_Base_C::SetMarkerColor(const struct FColor& withColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Pickup_Base.BP_Pickup_Base_C.SetMarkerColor");

	ABP_Pickup_Base_C_SetMarkerColor_Params params {};
	params.withColor = withColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Pickup_Base.BP_Pickup_Base_C.SetMarkerMesh
//		Flags  -> ()
// Parameters:
//		class UStaticMesh*                                 withMesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Pickup_Base_C::SetMarkerMesh(class UStaticMesh* withMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Pickup_Base.BP_Pickup_Base_C.SetMarkerMesh");

	ABP_Pickup_Base_C_SetMarkerMesh_Params params {};
	params.withMesh = withMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Pickup_Base.BP_Pickup_Base_C.SetGroundLocation
//		Flags  -> ()
// Parameters:
//		struct FVector                                     withLocation                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Pickup_Base_C::SetGroundLocation(const struct FVector& withLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Pickup_Base.BP_Pickup_Base_C.SetGroundLocation");

	ABP_Pickup_Base_C_SetGroundLocation_Params params {};
	params.withLocation = withLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Pickup_Base.BP_Pickup_Base_C.StartDissolve
//		Flags  -> ()
// Parameters:
//		bool                                               bPickedUp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Pickup_Base_C::StartDissolve(bool bPickedUp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Pickup_Base.BP_Pickup_Base_C.StartDissolve");

	ABP_Pickup_Base_C_StartDissolve_Params params {};
	params.bPickedUp = bPickedUp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Pickup_Base.BP_Pickup_Base_C.SetMarkerOutline
//		Flags  -> ()
// Parameters:
//		struct FColor                                      withColor                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Pickup_Base_C::SetMarkerOutline(const struct FColor& withColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Pickup_Base.BP_Pickup_Base_C.SetMarkerOutline");

	ABP_Pickup_Base_C_SetMarkerOutline_Params params {};
	params.withColor = withColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function BP_Pickup_Base.BP_Pickup_Base_C.ExecuteUbergraph_BP_Pickup_Base
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Pickup_Base_C::ExecuteUbergraph_BP_Pickup_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Pickup_Base.BP_Pickup_Base_C.ExecuteUbergraph_BP_Pickup_Base");

	ABP_Pickup_Base_C_ExecuteUbergraph_BP_Pickup_Base_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
