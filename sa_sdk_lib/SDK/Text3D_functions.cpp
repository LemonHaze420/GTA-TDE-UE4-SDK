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
//		Name   -> Function Text3D.Text3DCharacterTransform.SetScaleRange
//		Flags  -> ()
// Parameters:
//		float                                              Range                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetScaleRange(float Range)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetScaleRange");

	UText3DCharacterTransform_SetScaleRange_Params params {};
	params.Range = Range;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DCharacterTransform.SetScaleProgress
//		Flags  -> ()
// Parameters:
//		float                                              Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetScaleProgress(float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetScaleProgress");

	UText3DCharacterTransform_SetScaleProgress_Params params {};
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DCharacterTransform.SetScaleOrder
//		Flags  -> ()
// Parameters:
//		Text3D_EText3DCharacterEffectOrder                 Order                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetScaleOrder(Text3D_EText3DCharacterEffectOrder Order)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetScaleOrder");

	UText3DCharacterTransform_SetScaleOrder_Params params {};
	params.Order = Order;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DCharacterTransform.SetScaleEnd
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetScaleEnd(const struct FVector& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetScaleEnd");

	UText3DCharacterTransform_SetScaleEnd_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DCharacterTransform.SetScaleEnabled
//		Flags  -> ()
// Parameters:
//		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetScaleEnabled(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetScaleEnabled");

	UText3DCharacterTransform_SetScaleEnabled_Params params {};
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DCharacterTransform.SetScaleBegin
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetScaleBegin(const struct FVector& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetScaleBegin");

	UText3DCharacterTransform_SetScaleBegin_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DCharacterTransform.SetRotateRange
//		Flags  -> ()
// Parameters:
//		float                                              Range                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetRotateRange(float Range)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetRotateRange");

	UText3DCharacterTransform_SetRotateRange_Params params {};
	params.Range = Range;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DCharacterTransform.SetRotateProgress
//		Flags  -> ()
// Parameters:
//		float                                              Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetRotateProgress(float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetRotateProgress");

	UText3DCharacterTransform_SetRotateProgress_Params params {};
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DCharacterTransform.SetRotateOrder
//		Flags  -> ()
// Parameters:
//		Text3D_EText3DCharacterEffectOrder                 Order                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetRotateOrder(Text3D_EText3DCharacterEffectOrder Order)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetRotateOrder");

	UText3DCharacterTransform_SetRotateOrder_Params params {};
	params.Order = Order;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DCharacterTransform.SetRotateEnd
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetRotateEnd(const struct FRotator& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetRotateEnd");

	UText3DCharacterTransform_SetRotateEnd_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DCharacterTransform.SetRotateEnabled
//		Flags  -> ()
// Parameters:
//		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetRotateEnabled(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetRotateEnabled");

	UText3DCharacterTransform_SetRotateEnabled_Params params {};
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DCharacterTransform.SetRotateBegin
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetRotateBegin(const struct FRotator& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetRotateBegin");

	UText3DCharacterTransform_SetRotateBegin_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DCharacterTransform.SetLocationRange
//		Flags  -> ()
// Parameters:
//		float                                              Range                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetLocationRange(float Range)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetLocationRange");

	UText3DCharacterTransform_SetLocationRange_Params params {};
	params.Range = Range;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DCharacterTransform.SetLocationProgress
//		Flags  -> ()
// Parameters:
//		float                                              Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetLocationProgress(float Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetLocationProgress");

	UText3DCharacterTransform_SetLocationProgress_Params params {};
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DCharacterTransform.SetLocationOrder
//		Flags  -> ()
// Parameters:
//		Text3D_EText3DCharacterEffectOrder                 Order                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetLocationOrder(Text3D_EText3DCharacterEffectOrder Order)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetLocationOrder");

	UText3DCharacterTransform_SetLocationOrder_Params params {};
	params.Order = Order;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DCharacterTransform.SetLocationEnabled
//		Flags  -> ()
// Parameters:
//		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetLocationEnabled(bool bEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetLocationEnabled");

	UText3DCharacterTransform_SetLocationEnabled_Params params {};
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DCharacterTransform.SetLocationDistance
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DCharacterTransform::SetLocationDistance(const struct FVector& Distance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DCharacterTransform.SetLocationDistance");

	UText3DCharacterTransform_SetLocationDistance_Params params {};
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DComponent.SetWordSpacing
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetWordSpacing(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetWordSpacing");

	UText3DComponent_SetWordSpacing_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DComponent.SetVerticalAlignment
//		Flags  -> ()
// Parameters:
//		Text3D_EText3DVerticalTextAlignment                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetVerticalAlignment(Text3D_EText3DVerticalTextAlignment Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetVerticalAlignment");

	UText3DComponent_SetVerticalAlignment_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DComponent.SetText
//		Flags  -> ()
// Parameters:
//		struct FText                                       Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UText3DComponent::SetText(const struct FText& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetText");

	UText3DComponent_SetText_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DComponent.SetScaleProportionally
//		Flags  -> ()
// Parameters:
//		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetScaleProportionally(bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetScaleProportionally");

	UText3DComponent_SetScaleProportionally_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DComponent.SetOutline
//		Flags  -> ()
// Parameters:
//		bool                                               bValue                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetOutline(bool bValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetOutline");

	UText3DComponent_SetOutline_Params params {};
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DComponent.SetMaxWidth
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetMaxWidth(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetMaxWidth");

	UText3DComponent_SetMaxWidth_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DComponent.SetMaxHeight
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetMaxHeight(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetMaxHeight");

	UText3DComponent_SetMaxHeight_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DComponent.SetLineSpacing
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetLineSpacing(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetLineSpacing");

	UText3DComponent_SetLineSpacing_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DComponent.SetKerning
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetKerning(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetKerning");

	UText3DComponent_SetKerning_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DComponent.SetHorizontalAlignment
//		Flags  -> ()
// Parameters:
//		Text3D_EText3DHorizontalTextAlignment              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetHorizontalAlignment(Text3D_EText3DHorizontalTextAlignment Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetHorizontalAlignment");

	UText3DComponent_SetHorizontalAlignment_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DComponent.SetHasMaxWidth
//		Flags  -> ()
// Parameters:
//		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetHasMaxWidth(bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetHasMaxWidth");

	UText3DComponent_SetHasMaxWidth_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DComponent.SetHasMaxHeight
//		Flags  -> ()
// Parameters:
//		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetHasMaxHeight(bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetHasMaxHeight");

	UText3DComponent_SetHasMaxHeight_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DComponent.SetFrontMaterial
//		Flags  -> ()
// Parameters:
//		class UMaterialInterface*                          Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetFrontMaterial(class UMaterialInterface* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetFrontMaterial");

	UText3DComponent_SetFrontMaterial_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DComponent.SetFreeze
//		Flags  -> ()
// Parameters:
//		bool                                               bFreeze                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetFreeze(bool bFreeze)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetFreeze");

	UText3DComponent_SetFreeze_Params params {};
	params.bFreeze = bFreeze;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DComponent.SetFont
//		Flags  -> ()
// Parameters:
//		class UFont*                                       InFont                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetFont(class UFont* InFont)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetFont");

	UText3DComponent_SetFont_Params params {};
	params.InFont = InFont;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DComponent.SetExtrudeMaterial
//		Flags  -> ()
// Parameters:
//		class UMaterialInterface*                          Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetExtrudeMaterial(class UMaterialInterface* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetExtrudeMaterial");

	UText3DComponent_SetExtrudeMaterial_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DComponent.SetExtrude
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetExtrude(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetExtrude");

	UText3DComponent_SetExtrude_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DComponent.SetBevelType
//		Flags  -> ()
// Parameters:
//		Text3D_EText3DBevelType                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetBevelType(Text3D_EText3DBevelType Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetBevelType");

	UText3DComponent_SetBevelType_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DComponent.SetBevelSegments
//		Flags  -> ()
// Parameters:
//		int                                                Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetBevelSegments(int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetBevelSegments");

	UText3DComponent_SetBevelSegments_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DComponent.SetBevelMaterial
//		Flags  -> ()
// Parameters:
//		class UMaterialInterface*                          Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetBevelMaterial(class UMaterialInterface* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetBevelMaterial");

	UText3DComponent_SetBevelMaterial_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DComponent.SetBevel
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetBevel(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetBevel");

	UText3DComponent_SetBevel_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function Text3D.Text3DComponent.SetBackMaterial
//		Flags  -> ()
// Parameters:
//		class UMaterialInterface*                          Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UText3DComponent::SetBackMaterial(class UMaterialInterface* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Text3D.Text3DComponent.SetBackMaterial");

	UText3DComponent_SetBackMaterial_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
