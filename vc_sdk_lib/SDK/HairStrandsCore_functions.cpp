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
//		Name   -> Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath
//		Flags  -> ()
// Parameters:
//		struct FString                                     InDesiredPackagePath                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UGroomAsset*                                 InGroomAsset                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USkeletalMesh*                               InSkeletalMesh                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                InNumInterpolationPoints                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USkeletalMesh*                               InSourceSkeletalMeshForTransfer                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                InMatchingSection                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UGroomBindingAsset*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGroomBindingAsset* UGroomBlueprintLibrary::CreateNewGroomBindingAssetWithPath(const struct FString& InDesiredPackagePath, class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int InMatchingSection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath");

	UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Params params {};
	params.InDesiredPackagePath = InDesiredPackagePath;
	params.InGroomAsset = InGroomAsset;
	params.InSkeletalMesh = InSkeletalMesh;
	params.InNumInterpolationPoints = InNumInterpolationPoints;
	params.InSourceSkeletalMeshForTransfer = InSourceSkeletalMeshForTransfer;
	params.InMatchingSection = InMatchingSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset
//		Flags  -> ()
// Parameters:
//		class UGroomAsset*                                 InGroomAsset                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USkeletalMesh*                               InSkeletalMesh                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                InNumInterpolationPoints                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USkeletalMesh*                               InSourceSkeletalMeshForTransfer                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                InMatchingSection                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UGroomBindingAsset*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGroomBindingAsset* UGroomBlueprintLibrary::CreateNewGroomBindingAsset(class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int InMatchingSection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset");

	UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Params params {};
	params.InGroomAsset = InGroomAsset;
	params.InSkeletalMesh = InSkeletalMesh;
	params.InNumInterpolationPoints = InNumInterpolationPoints;
	params.InSourceSkeletalMeshForTransfer = InSourceSkeletalMeshForTransfer;
	params.InMatchingSection = InMatchingSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HairStrandsCore.GroomComponent.SetGroomAsset
//		Flags  -> ()
// Parameters:
//		class UGroomAsset*                                 Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGroomComponent::SetGroomAsset(class UGroomAsset* Asset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HairStrandsCore.GroomComponent.SetGroomAsset");

	UGroomComponent_SetGroomAsset_Params params {};
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function HairStrandsCore.GroomComponent.SetBindingAsset
//		Flags  -> ()
// Parameters:
//		class UGroomBindingAsset*                          InBinding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGroomComponent::SetBindingAsset(class UGroomBindingAsset* InBinding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HairStrandsCore.GroomComponent.SetBindingAsset");

	UGroomComponent_SetBindingAsset_Params params {};
	params.InBinding = InBinding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
