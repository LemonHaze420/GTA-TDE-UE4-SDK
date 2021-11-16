﻿// Name: SanAndreas, Version: 1.0.0

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
//		Name   -> Function MRMesh.MeshReconstructorBase.StopReconstruction
//		Flags  -> ()
void UMeshReconstructorBase::StopReconstruction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.StopReconstruction");

	UMeshReconstructorBase_StopReconstruction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MRMesh.MeshReconstructorBase.StartReconstruction
//		Flags  -> ()
void UMeshReconstructorBase::StartReconstruction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.StartReconstruction");

	UMeshReconstructorBase_StartReconstruction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MRMesh.MeshReconstructorBase.PauseReconstruction
//		Flags  -> ()
void UMeshReconstructorBase::PauseReconstruction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.PauseReconstruction");

	UMeshReconstructorBase_PauseReconstruction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMeshReconstructorBase::IsReconstructionStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.IsReconstructionStarted");

	UMeshReconstructorBase_IsReconstructionStarted_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMeshReconstructorBase::IsReconstructionPaused()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.IsReconstructionPaused");

	UMeshReconstructorBase_IsReconstructionPaused_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
//		Flags  -> ()
void UMeshReconstructorBase::DisconnectMRMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.DisconnectMRMesh");

	UMeshReconstructorBase_DisconnectMRMesh_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MRMesh.MeshReconstructorBase.ConnectMRMesh
//		Flags  -> ()
// Parameters:
//		class UMRMeshComponent*                            Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMeshReconstructorBase::ConnectMRMesh(class UMRMeshComponent* Mesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.ConnectMRMesh");

	UMeshReconstructorBase_ConnectMRMesh_Params params {};
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Vertices                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<int>                                        Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<float>                                      Confidence                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UMockDataMeshTrackerComponent::OnMockDataMeshTrackerUpdated__DelegateSignature(int Index, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<float> Confidence)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature");

	UMockDataMeshTrackerComponent_OnMockDataMeshTrackerUpdated__DelegateSignature_Params params {};
	params.Index = Index;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.Confidence = Confidence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
//		Flags  -> ()
// Parameters:
//		class UMRMeshComponent*                            InMRMeshPtr                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMockDataMeshTrackerComponent::DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh");

	UMockDataMeshTrackerComponent_DisconnectMRMesh_Params params {};
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
//		Flags  -> ()
// Parameters:
//		class UMRMeshComponent*                            InMRMeshPtr                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMockDataMeshTrackerComponent::ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh");

	UMockDataMeshTrackerComponent_ConnectMRMesh_Params params {};
	params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MRMesh.MRMeshComponent.SetWireframeMaterial
//		Flags  -> ()
// Parameters:
//		class UMaterialInterface*                          InMaterial                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMRMeshComponent::SetWireframeMaterial(class UMaterialInterface* InMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.SetWireframeMaterial");

	UMRMeshComponent_SetWireframeMaterial_Params params {};
	params.InMaterial = InMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MRMesh.MRMeshComponent.SetWireframeColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                InColor                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMRMeshComponent::SetWireframeColor(const struct FLinearColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.SetWireframeColor");

	UMRMeshComponent_SetWireframeColor_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MRMesh.MRMeshComponent.SetUseWireframe
//		Flags  -> ()
// Parameters:
//		bool                                               bUseWireframe                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMRMeshComponent::SetUseWireframe(bool bUseWireframe)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.SetUseWireframe");

	UMRMeshComponent_SetUseWireframe_Params params {};
	params.bUseWireframe = bUseWireframe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion
//		Flags  -> ()
// Parameters:
//		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMRMeshComponent::SetEnableMeshOcclusion(bool bEnable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion");

	UMRMeshComponent_SetEnableMeshOcclusion_Params params {};
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MRMesh.MRMeshComponent.IsConnected
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMRMeshComponent::IsConnected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.IsConnected");

	UMRMeshComponent_IsConnected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MRMesh.MRMeshComponent.GetWireframeColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UMRMeshComponent::GetWireframeColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.GetWireframeColor");

	UMRMeshComponent_GetWireframeColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MRMesh.MRMeshComponent.GetUseWireframe
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMRMeshComponent::GetUseWireframe()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.GetUseWireframe");

	UMRMeshComponent_GetUseWireframe_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMRMeshComponent::GetEnableMeshOcclusion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion");

	UMRMeshComponent_GetEnableMeshOcclusion_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MRMesh.MRMeshComponent.ForceNavMeshUpdate
//		Flags  -> ()
void UMRMeshComponent::ForceNavMeshUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.ForceNavMeshUpdate");

	UMRMeshComponent_ForceNavMeshUpdate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MRMesh.MRMeshComponent.Clear
//		Flags  -> ()
void UMRMeshComponent::Clear()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.Clear");

	UMRMeshComponent_Clear_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
