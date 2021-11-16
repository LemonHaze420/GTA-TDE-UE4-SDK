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
//		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
//		Flags  -> ()
// Parameters:
//		int                                                SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Vertices                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FVector2D>                           UV0                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FVector2D>                           UV1                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
//		TArray<struct FVector2D>                           UV2                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
//		TArray<struct FVector2D>                           UV3                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
//		TArray<struct FLinearColor>                        VertexColors                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FProcMeshTangent>                    Tangents                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UProceduralMeshComponent::UpdateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor");

	UProceduralMeshComponent_UpdateMeshSection_LinearColor_Params params {};
	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Normals = Normals;
	params.UV0 = UV0;
	params.UV1 = UV1;
	params.UV2 = UV2;
	params.UV3 = UV3;
	params.VertexColors = VertexColors;
	params.Tangents = Tangents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
//		Flags  -> ()
// Parameters:
//		int                                                SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Vertices                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FVector2D>                           UV0                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FColor>                              VertexColors                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FProcMeshTangent>                    Tangents                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UProceduralMeshComponent::UpdateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection");

	UProceduralMeshComponent_UpdateMeshSection_Params params {};
	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Normals = Normals;
	params.UV0 = UV0;
	params.VertexColors = VertexColors;
	params.Tangents = Tangents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
//		Flags  -> ()
// Parameters:
//		int                                                SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bNewVisibility                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProceduralMeshComponent::SetMeshSectionVisible(int SectionIndex, bool bNewVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible");

	UProceduralMeshComponent_SetMeshSectionVisible_Params params {};
	params.SectionIndex = SectionIndex;
	params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
//		Flags  -> ()
// Parameters:
//		int                                                SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UProceduralMeshComponent::IsMeshSectionVisible(int SectionIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible");

	UProceduralMeshComponent_IsMeshSectionVisible_Params params {};
	params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UProceduralMeshComponent::GetNumSections()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections");

	UProceduralMeshComponent_GetNumSections_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
//		Flags  -> ()
// Parameters:
//		int                                                SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Vertices                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<int>                                        Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FVector2D>                           UV0                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FVector2D>                           UV1                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
//		TArray<struct FVector2D>                           UV2                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
//		TArray<struct FVector2D>                           UV3                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
//		TArray<struct FLinearColor>                        VertexColors                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FProcMeshTangent>                    Tangents                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               bCreateCollision                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProceduralMeshComponent::CreateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor");

	UProceduralMeshComponent_CreateMeshSection_LinearColor_Params params {};
	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.UV0 = UV0;
	params.UV1 = UV1;
	params.UV2 = UV2;
	params.UV3 = UV3;
	params.VertexColors = VertexColors;
	params.Tangents = Tangents;
	params.bCreateCollision = bCreateCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
//		Flags  -> ()
// Parameters:
//		int                                                SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Vertices                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<int>                                        Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Normals                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FVector2D>                           UV0                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FColor>                              VertexColors                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FProcMeshTangent>                    Tangents                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               bCreateCollision                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProceduralMeshComponent::CreateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection");

	UProceduralMeshComponent_CreateMeshSection_Params params {};
	params.SectionIndex = SectionIndex;
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.Normals = Normals;
	params.UV0 = UV0;
	params.VertexColors = VertexColors;
	params.Tangents = Tangents;
	params.bCreateCollision = bCreateCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
//		Flags  -> ()
// Parameters:
//		int                                                SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProceduralMeshComponent::ClearMeshSection(int SectionIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection");

	UProceduralMeshComponent_ClearMeshSection_Params params {};
	params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
//		Flags  -> ()
void UProceduralMeshComponent::ClearCollisionConvexMeshes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes");

	UProceduralMeshComponent_ClearCollisionConvexMeshes_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
//		Flags  -> ()
void UProceduralMeshComponent::ClearAllMeshSections()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections");

	UProceduralMeshComponent_ClearAllMeshSections_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
//		Flags  -> ()
// Parameters:
//		TArray<struct FVector>                             ConvexVerts                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
void UProceduralMeshComponent::AddCollisionConvexMesh(TArray<struct FVector> ConvexVerts)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh");

	UProceduralMeshComponent_AddCollisionConvexMesh_Params params {};
	params.ConvexVerts = ConvexVerts;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh
//		Flags  -> ()
// Parameters:
//		class UProceduralMeshComponent*                    InProcMesh                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     PlanePosition                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     PlaneNormal                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bCreateOtherHalf                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UProceduralMeshComponent*                    OutOtherHalfProcMesh                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		ProceduralMeshComponent_EProcMeshSliceCapOption    CapOption                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMaterialInterface*                          CapMaterial                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UKismetProceduralMeshLibrary::SliceProceduralMesh(class UProceduralMeshComponent* InProcMesh, const struct FVector& PlanePosition, const struct FVector& PlaneNormal, bool bCreateOtherHalf, class UProceduralMeshComponent** OutOtherHalfProcMesh, ProceduralMeshComponent_EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.SliceProceduralMesh");

	UKismetProceduralMeshLibrary_SliceProceduralMesh_Params params {};
	params.InProcMesh = InProcMesh;
	params.PlanePosition = PlanePosition;
	params.PlaneNormal = PlaneNormal;
	params.bCreateOtherHalf = bCreateOtherHalf;
	params.CapOption = CapOption;
	params.CapMaterial = CapMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutOtherHalfProcMesh != nullptr)
		*OutOtherHalfProcMesh = params.OutOtherHalfProcMesh;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh
//		Flags  -> ()
// Parameters:
//		class UStaticMesh*                                 InMesh                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                LodIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Vertices                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<int>                                        Triangles                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Normals                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<struct FVector2D>                           UVs                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<struct FProcMeshTangent>                    Tangents                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(class UStaticMesh* InMesh, int LodIndex, int SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromStaticMesh");

	UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Params params {};
	params.InMesh = InMesh;
	params.LodIndex = LodIndex;
	params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Vertices != nullptr)
		*Vertices = params.Vertices;
	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Normals != nullptr)
		*Normals = params.Normals;
	if (UVs != nullptr)
		*UVs = params.UVs;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh
//		Flags  -> ()
// Parameters:
//		class UProceduralMeshComponent*                    InProcMesh                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                SectionIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Vertices                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<int>                                        Triangles                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Normals                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<struct FVector2D>                           UVs                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<struct FProcMeshTangent>                    Tangents                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UKismetProceduralMeshLibrary::GetSectionFromProceduralMesh(class UProceduralMeshComponent* InProcMesh, int SectionIndex, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GetSectionFromProceduralMesh");

	UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Params params {};
	params.InProcMesh = InProcMesh;
	params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Vertices != nullptr)
		*Vertices = params.Vertices;
	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Normals != nullptr)
		*Normals = params.Normals;
	if (UVs != nullptr)
		*UVs = params.UVs;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh
//		Flags  -> ()
// Parameters:
//		struct FVector                                     BoxRadius                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Vertices                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<int>                                        Triangles                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Normals                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<struct FVector2D>                           UVs                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<struct FProcMeshTangent>                    Tangents                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UKismetProceduralMeshLibrary::GenerateBoxMesh(const struct FVector& BoxRadius, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<struct FVector2D>* UVs, TArray<struct FProcMeshTangent>* Tangents)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.GenerateBoxMesh");

	UKismetProceduralMeshLibrary_GenerateBoxMesh_Params params {};
	params.BoxRadius = BoxRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Vertices != nullptr)
		*Vertices = params.Vertices;
	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Normals != nullptr)
		*Normals = params.Normals;
	if (UVs != nullptr)
		*UVs = params.UVs;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded
//		Flags  -> ()
// Parameters:
//		int                                                NumX                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumY                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        Triangles                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Vertices                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<struct FVector2D>                           UVs                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		float                                              GridSpacing                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UKismetProceduralMeshLibrary::CreateGridMeshWelded(int NumX, int NumY, TArray<int>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs, float GridSpacing)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshWelded");

	UKismetProceduralMeshLibrary_CreateGridMeshWelded_Params params {};
	params.NumX = NumX;
	params.NumY = NumY;
	params.GridSpacing = GridSpacing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Vertices != nullptr)
		*Vertices = params.Vertices;
	if (UVs != nullptr)
		*UVs = params.UVs;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles
//		Flags  -> ()
// Parameters:
//		int                                                NumX                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumY                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWinding                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        Triangles                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UKismetProceduralMeshLibrary::CreateGridMeshTriangles(int NumX, int NumY, bool bWinding, TArray<int>* Triangles)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshTriangles");

	UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Params params {};
	params.NumX = NumX;
	params.NumY = NumY;
	params.bWinding = bWinding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Triangles != nullptr)
		*Triangles = params.Triangles;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit
//		Flags  -> ()
// Parameters:
//		int                                                NumX                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumY                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<int>                                        Triangles                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Vertices                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<struct FVector2D>                           UVs                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<struct FVector2D>                           UV1s                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		float                                              GridSpacing                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UKismetProceduralMeshLibrary::CreateGridMeshSplit(int NumX, int NumY, TArray<int>* Triangles, TArray<struct FVector>* Vertices, TArray<struct FVector2D>* UVs, TArray<struct FVector2D>* UV1s, float GridSpacing)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CreateGridMeshSplit");

	UKismetProceduralMeshLibrary_CreateGridMeshSplit_Params params {};
	params.NumX = NumX;
	params.NumY = NumY;
	params.GridSpacing = GridSpacing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Triangles != nullptr)
		*Triangles = params.Triangles;
	if (Vertices != nullptr)
		*Vertices = params.Vertices;
	if (UVs != nullptr)
		*UVs = params.UVs;
	if (UV1s != nullptr)
		*UV1s = params.UV1s;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent
//		Flags  -> ()
// Parameters:
//		class UStaticMeshComponent*                        StaticMeshComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                LodIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UProceduralMeshComponent*                    ProcMeshComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bCreateCollision                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UKismetProceduralMeshLibrary::CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* StaticMeshComponent, int LodIndex, class UProceduralMeshComponent* ProcMeshComponent, bool bCreateCollision)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CopyProceduralMeshFromStaticMeshComponent");

	UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Params params {};
	params.StaticMeshComponent = StaticMeshComponent;
	params.LodIndex = LodIndex;
	params.ProcMeshComponent = ProcMeshComponent;
	params.bCreateCollision = bCreateCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles
//		Flags  -> ()
// Parameters:
//		TArray<int>                                        Triangles                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                Vert0                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Vert1                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Vert2                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Vert3                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UKismetProceduralMeshLibrary::ConvertQuadToTriangles(TArray<int>* Triangles, int Vert0, int Vert1, int Vert2, int Vert3)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.ConvertQuadToTriangles");

	UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Params params {};
	params.Vert0 = Vert0;
	params.Vert1 = Vert1;
	params.Vert2 = Vert2;
	params.Vert3 = Vert3;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Triangles != nullptr)
		*Triangles = params.Triangles;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh
//		Flags  -> ()
// Parameters:
//		TArray<struct FVector>                             Vertices                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<int>                                        Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FVector2D>                           UVs                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FVector>                             Normals                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<struct FProcMeshTangent>                    Tangents                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UKismetProceduralMeshLibrary::CalculateTangentsForMesh(TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector2D> UVs, TArray<struct FVector>* Normals, TArray<struct FProcMeshTangent>* Tangents)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.KismetProceduralMeshLibrary.CalculateTangentsForMesh");

	UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Params params {};
	params.Vertices = Vertices;
	params.Triangles = Triangles;
	params.UVs = UVs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Normals != nullptr)
		*Normals = params.Normals;
	if (Tangents != nullptr)
		*Tangents = params.Tangents;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
