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
//		Offset -> 0x00CE6190
//		Name   -> Function Text3D.Text3DCharacterTransform.SetScaleRange
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Range                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetScaleRange(float Range)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetScaleRange");

	UText3DCharacterTransform_SetScaleRange_Params params {};
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE6390
//		Name   -> Function Text3D.Text3DCharacterTransform.SetScaleProgress
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetScaleProgress(float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetScaleProgress");

	UText3DCharacterTransform_SetScaleProgress_Params params {};
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE62B0
//		Name   -> Function Text3D.Text3DCharacterTransform.SetScaleOrder
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		Text3D_EText3DCharacterEffectOrder                 Order                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetScaleOrder(Text3D_EText3DCharacterEffectOrder Order)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetScaleOrder");

	UText3DCharacterTransform_SetScaleOrder_Params params {};
	params.Order = Order;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE5EF0
//		Name   -> Function Text3D.Text3DCharacterTransform.SetScaleEnd
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetScaleEnd(const struct FVector& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetScaleEnd");

	UText3DCharacterTransform_SetScaleEnd_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE64B0
//		Name   -> Function Text3D.Text3DCharacterTransform.SetScaleEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetScaleEnabled(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetScaleEnabled");

	UText3DCharacterTransform_SetScaleEnabled_Params params {};
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE6040
//		Name   -> Function Text3D.Text3DCharacterTransform.SetScaleBegin
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetScaleBegin(const struct FVector& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetScaleBegin");

	UText3DCharacterTransform_SetScaleBegin_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE5A60
//		Name   -> Function Text3D.Text3DCharacterTransform.SetRotateRange
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Range                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetRotateRange(float Range)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetRotateRange");

	UText3DCharacterTransform_SetRotateRange_Params params {};
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE5C60
//		Name   -> Function Text3D.Text3DCharacterTransform.SetRotateProgress
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetRotateProgress(float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetRotateProgress");

	UText3DCharacterTransform_SetRotateProgress_Params params {};
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE5B80
//		Name   -> Function Text3D.Text3DCharacterTransform.SetRotateOrder
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		Text3D_EText3DCharacterEffectOrder                 Order                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetRotateOrder(Text3D_EText3DCharacterEffectOrder Order)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetRotateOrder");

	UText3DCharacterTransform_SetRotateOrder_Params params {};
	params.Order = Order;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE5660
//		Name   -> Function Text3D.Text3DCharacterTransform.SetRotateEnd
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FRotator                                    Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetRotateEnd(const struct FRotator& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetRotateEnd");

	UText3DCharacterTransform_SetRotateEnd_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE5D80
//		Name   -> Function Text3D.Text3DCharacterTransform.SetRotateEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetRotateEnabled(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetRotateEnabled");

	UText3DCharacterTransform_SetRotateEnabled_Params params {};
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE5860
//		Name   -> Function Text3D.Text3DCharacterTransform.SetRotateBegin
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FRotator                                    Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetRotateBegin(const struct FRotator& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetRotateBegin");

	UText3DCharacterTransform_SetRotateBegin_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE6760
//		Name   -> Function Text3D.Text3DCharacterTransform.SetLocationRange
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Range                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetLocationRange(float Range)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetLocationRange");

	UText3DCharacterTransform_SetLocationRange_Params params {};
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE6960
//		Name   -> Function Text3D.Text3DCharacterTransform.SetLocationProgress
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetLocationProgress(float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetLocationProgress");

	UText3DCharacterTransform_SetLocationProgress_Params params {};
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE6880
//		Name   -> Function Text3D.Text3DCharacterTransform.SetLocationOrder
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		Text3D_EText3DCharacterEffectOrder                 Order                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetLocationOrder(Text3D_EText3DCharacterEffectOrder Order)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetLocationOrder");

	UText3DCharacterTransform_SetLocationOrder_Params params {};
	params.Order = Order;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE6A80
//		Name   -> Function Text3D.Text3DCharacterTransform.SetLocationEnabled
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetLocationEnabled(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetLocationEnabled");

	UText3DCharacterTransform_SetLocationEnabled_Params params {};
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE6610
//		Name   -> Function Text3D.Text3DCharacterTransform.SetLocationDistance
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetLocationDistance(const struct FVector& Distance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetLocationDistance");

	UText3DCharacterTransform_SetLocationDistance_Params params {};
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE78B0
//		Name   -> Function Text3D.Text3DComponent.SetWordSpacing
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetWordSpacing(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetWordSpacing");

	UText3DComponent_SetWordSpacing_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE76F0
//		Name   -> Function Text3D.Text3DComponent.SetVerticalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		Text3D_EText3DVerticalTextAlignment                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetVerticalAlignment(Text3D_EText3DVerticalTextAlignment Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetVerticalAlignment");

	UText3DComponent_SetVerticalAlignment_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE8560
//		Name   -> Function Text3D.Text3DComponent.SetText
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FText                                       Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UText3DComponent::SetText(const struct FText& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetText");

	UText3DComponent_SetText_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE7220
//		Name   -> Function Text3D.Text3DComponent.SetScaleProportionally
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetScaleProportionally(bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetScaleProportionally");

	UText3DComponent_SetScaleProportionally_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE8360
//		Name   -> Function Text3D.Text3DComponent.SetOutline
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bValue                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetOutline(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetOutline");

	UText3DComponent_SetOutline_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE7500
//		Name   -> Function Text3D.Text3DComponent.SetMaxWidth
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetMaxWidth(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetMaxWidth");

	UText3DComponent_SetMaxWidth_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE7310
//		Name   -> Function Text3D.Text3DComponent.SetMaxHeight
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetMaxHeight(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetMaxHeight");

	UText3DComponent_SetMaxHeight_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE79A0
//		Name   -> Function Text3D.Text3DComponent.SetLineSpacing
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetLineSpacing(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetLineSpacing");

	UText3DComponent_SetLineSpacing_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE7A90
//		Name   -> Function Text3D.Text3DComponent.SetKerning
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetKerning(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetKerning");

	UText3DComponent_SetKerning_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE77D0
//		Name   -> Function Text3D.Text3DComponent.SetHorizontalAlignment
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		Text3D_EText3DHorizontalTextAlignment              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetHorizontalAlignment(Text3D_EText3DHorizontalTextAlignment Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetHorizontalAlignment");

	UText3DComponent_SetHorizontalAlignment_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE7600
//		Name   -> Function Text3D.Text3DComponent.SetHasMaxWidth
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetHasMaxWidth(bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetHasMaxWidth");

	UText3DComponent_SetHasMaxWidth_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE7410
//		Name   -> Function Text3D.Text3DComponent.SetHasMaxHeight
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetHasMaxHeight(bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetHasMaxHeight");

	UText3DComponent_SetHasMaxHeight_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE7E20
//		Name   -> Function Text3D.Text3DComponent.SetFrontMaterial
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMaterialInterface*                          Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetFrontMaterial(class UMaterialInterface* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetFrontMaterial");

	UText3DComponent_SetFrontMaterial_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE7110
//		Name   -> Function Text3D.Text3DComponent.SetFreeze
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bFreeze                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetFreeze(bool bFreeze)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetFreeze");

	UText3DComponent_SetFreeze_Params params {};
	params.bFreeze = bFreeze;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE8460
//		Name   -> Function Text3D.Text3DComponent.SetFont
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UFont*                                       InFont                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetFont(class UFont* InFont)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetFont");

	UText3DComponent_SetFont_Params params {};
	params.InFont = InFont;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE7C60
//		Name   -> Function Text3D.Text3DComponent.SetExtrudeMaterial
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMaterialInterface*                          Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetExtrudeMaterial(class UMaterialInterface* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetExtrudeMaterial");

	UText3DComponent_SetExtrudeMaterial_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE8230
//		Name   -> Function Text3D.Text3DComponent.SetExtrude
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetExtrude(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetExtrude");

	UText3DComponent_SetExtrude_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE8010
//		Name   -> Function Text3D.Text3DComponent.SetBevelType
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		Text3D_EText3DBevelType                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetBevelType(Text3D_EText3DBevelType Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetBevelType");

	UText3DComponent_SetBevelType_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE7F00
//		Name   -> Function Text3D.Text3DComponent.SetBevelSegments
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetBevelSegments(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetBevelSegments");

	UText3DComponent_SetBevelSegments_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE7D40
//		Name   -> Function Text3D.Text3DComponent.SetBevelMaterial
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMaterialInterface*                          Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetBevelMaterial(class UMaterialInterface* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetBevelMaterial");

	UText3DComponent_SetBevelMaterial_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE8100
//		Name   -> Function Text3D.Text3DComponent.SetBevel
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetBevel(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetBevel");

	UText3DComponent_SetBevel_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00CE7B80
//		Name   -> Function Text3D.Text3DComponent.SetBackMaterial
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UMaterialInterface*                          Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetBackMaterial(class UMaterialInterface* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetBackMaterial");

	UText3DComponent_SetBackMaterial_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
