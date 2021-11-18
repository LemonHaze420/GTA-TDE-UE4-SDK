﻿// Name: ViceCity, Version: 1.0.0

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
//		Name   -> Function UMG.Widget.SetVisibility
//		Flags  -> ()
// Parameters:
//		UMG_ESlateVisibility                               InVisibility                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetVisibility(UMG_ESlateVisibility InVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetVisibility");

	UWidget_SetVisibility_Params params {};
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.SetUserFocus
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetUserFocus(class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetUserFocus");

	UWidget_SetUserFocus_Params params {};
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.SetToolTipText
//		Flags  -> ()
// Parameters:
//		struct FText                                       InToolTipText                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UWidget::SetToolTipText(const struct FText& InToolTipText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetToolTipText");

	UWidget_SetToolTipText_Params params {};
	params.InToolTipText = InToolTipText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.SetToolTip
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetToolTip(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetToolTip");

	UWidget_SetToolTip_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.SetRenderTranslation
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   Translation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetRenderTranslation(const struct FVector2D& Translation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTranslation");

	UWidget_SetRenderTranslation_Params params {};
	params.Translation = Translation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.SetRenderTransformPivot
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   Pivot                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetRenderTransformPivot(const struct FVector2D& Pivot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransformPivot");

	UWidget_SetRenderTransformPivot_Params params {};
	params.Pivot = Pivot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.SetRenderTransformAngle
//		Flags  -> ()
// Parameters:
//		float                                              Angle                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetRenderTransformAngle(float Angle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransformAngle");

	UWidget_SetRenderTransformAngle_Params params {};
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.SetRenderTransform
//		Flags  -> ()
// Parameters:
//		struct FWidgetTransform                            InTransform                                                (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UWidget::SetRenderTransform(const struct FWidgetTransform& InTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransform");

	UWidget_SetRenderTransform_Params params {};
	params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.SetRenderShear
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   Shear                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetRenderShear(const struct FVector2D& Shear)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderShear");

	UWidget_SetRenderShear_Params params {};
	params.Shear = Shear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.SetRenderScale
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetRenderScale(const struct FVector2D& Scale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderScale");

	UWidget_SetRenderScale_Params params {};
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.SetRenderOpacity
//		Flags  -> ()
// Parameters:
//		float                                              InOpacity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetRenderOpacity(float InOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderOpacity");

	UWidget_SetRenderOpacity_Params params {};
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.SetNavigationRuleExplicit
//		Flags  -> ()
// Parameters:
//		SlateCore_EUINavigation                            Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidget*                                     InWidget                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetNavigationRuleExplicit(SlateCore_EUINavigation Direction, class UWidget* InWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleExplicit");

	UWidget_SetNavigationRuleExplicit_Params params {};
	params.Direction = Direction;
	params.InWidget = InWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.SetNavigationRuleCustomBoundary
//		Flags  -> ()
// Parameters:
//		SlateCore_EUINavigation                            Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             InCustomDelegate                                           (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UWidget::SetNavigationRuleCustomBoundary(SlateCore_EUINavigation Direction, const struct FScriptDelegate& InCustomDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleCustomBoundary");

	UWidget_SetNavigationRuleCustomBoundary_Params params {};
	params.Direction = Direction;
	params.InCustomDelegate = InCustomDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.SetNavigationRuleCustom
//		Flags  -> ()
// Parameters:
//		SlateCore_EUINavigation                            Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             InCustomDelegate                                           (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UWidget::SetNavigationRuleCustom(SlateCore_EUINavigation Direction, const struct FScriptDelegate& InCustomDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleCustom");

	UWidget_SetNavigationRuleCustom_Params params {};
	params.Direction = Direction;
	params.InCustomDelegate = InCustomDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.SetNavigationRuleBase
//		Flags  -> ()
// Parameters:
//		SlateCore_EUINavigation                            Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		SlateCore_EUINavigationRule                        Rule                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetNavigationRuleBase(SlateCore_EUINavigation Direction, SlateCore_EUINavigationRule Rule)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleBase");

	UWidget_SetNavigationRuleBase_Params params {};
	params.Direction = Direction;
	params.Rule = Rule;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.SetNavigationRule
//		Flags  -> ()
// Parameters:
//		SlateCore_EUINavigation                            Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		SlateCore_EUINavigationRule                        Rule                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       WidgetToFocus                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetNavigationRule(SlateCore_EUINavigation Direction, SlateCore_EUINavigationRule Rule, const struct FName& WidgetToFocus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRule");

	UWidget_SetNavigationRule_Params params {};
	params.Direction = Direction;
	params.Rule = Rule;
	params.WidgetToFocus = WidgetToFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.SetKeyboardFocus
//		Flags  -> ()
void UWidget::SetKeyboardFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetKeyboardFocus");

	UWidget_SetKeyboardFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.SetIsEnabled
//		Flags  -> ()
// Parameters:
//		bool                                               bInIsEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetIsEnabled(bool bInIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetIsEnabled");

	UWidget_SetIsEnabled_Params params {};
	params.bInIsEnabled = bInIsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.SetFocus
//		Flags  -> ()
void UWidget::SetFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetFocus");

	UWidget_SetFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.SetCursor
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<CoreUObject_EMouseCursor>              InCursor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetCursor(TEnumAsByte<CoreUObject_EMouseCursor> InCursor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetCursor");

	UWidget_SetCursor_Params params {};
	params.InCursor = InCursor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.SetClipping
//		Flags  -> ()
// Parameters:
//		SlateCore_EWidgetClipping                          InClipping                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetClipping(SlateCore_EWidgetClipping InClipping)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetClipping");

	UWidget_SetClipping_Params params {};
	params.InClipping = InClipping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.SetAllNavigationRules
//		Flags  -> ()
// Parameters:
//		SlateCore_EUINavigationRule                        Rule                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       WidgetToFocus                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::SetAllNavigationRules(SlateCore_EUINavigationRule Rule, const struct FName& WidgetToFocus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetAllNavigationRules");

	UWidget_SetAllNavigationRules_Params params {};
	params.Rule = Rule;
	params.WidgetToFocus = WidgetToFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.ResetCursor
//		Flags  -> ()
void UWidget::ResetCursor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.ResetCursor");

	UWidget_ResetCursor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.RemoveFromParent
//		Flags  -> ()
void UWidget::RemoveFromParent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.RemoveFromParent");

	UWidget_RemoveFromParent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.Widget.OnReply__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidget::OnReply__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.OnReply__DelegateSignature");

	UWidget_OnReply__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidget::OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature");

	UWidget_OnPointerEvent__DelegateSignature_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.IsVisible
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::IsVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.IsVisible");

	UWidget_IsVisible_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.IsHovered
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::IsHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.IsHovered");

	UWidget_IsHovered_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.InvalidateLayoutAndVolatility
//		Flags  -> ()
void UWidget::InvalidateLayoutAndVolatility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.InvalidateLayoutAndVolatility");

	UWidget_InvalidateLayoutAndVolatility_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.HasUserFocusedDescendants
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::HasUserFocusedDescendants(class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasUserFocusedDescendants");

	UWidget_HasUserFocusedDescendants_Params params {};
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.HasUserFocus
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::HasUserFocus(class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasUserFocus");

	UWidget_HasUserFocus_Params params {};
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.HasMouseCaptureByUser
//		Flags  -> ()
// Parameters:
//		int                                                UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                PointerIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::HasMouseCaptureByUser(int UserIndex, int PointerIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasMouseCaptureByUser");

	UWidget_HasMouseCaptureByUser_Params params {};
	params.UserIndex = UserIndex;
	params.PointerIndex = PointerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.HasMouseCapture
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::HasMouseCapture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasMouseCapture");

	UWidget_HasMouseCapture_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.HasKeyboardFocus
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::HasKeyboardFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasKeyboardFocus");

	UWidget_HasKeyboardFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.HasFocusedDescendants
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::HasFocusedDescendants()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasFocusedDescendants");

	UWidget_HasFocusedDescendants_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.HasAnyUserFocus
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::HasAnyUserFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasAnyUserFocus");

	UWidget_HasAnyUserFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.Widget.GetWidget__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UWidget::GetWidget__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetWidget__DelegateSignature");

	UWidget_GetWidget__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.GetVisibility
//		Flags  -> ()
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UWidget::GetVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetVisibility");

	UWidget_GetVisibility_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.GetTickSpaceGeometry
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FGeometry UWidget::GetTickSpaceGeometry()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetTickSpaceGeometry");

	UWidget_GetTickSpaceGeometry_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.Widget.GetText__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UWidget::GetText__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetText__DelegateSignature");

	UWidget_GetText__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
//		Flags  -> ()
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UWidget::GetSlateVisibility__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature");

	UWidget_GetSlateVisibility__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FSlateColor                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateColor UWidget::GetSlateColor__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature");

	UWidget_GetSlateColor__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateBrush UWidget::GetSlateBrush__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature");

	UWidget_GetSlateBrush__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.GetRenderTransformAngle
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWidget::GetRenderTransformAngle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetRenderTransformAngle");

	UWidget_GetRenderTransformAngle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.GetRenderOpacity
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWidget::GetRenderOpacity()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetRenderOpacity");

	UWidget_GetRenderOpacity_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.GetParent
//		Flags  -> ()
// Parameters:
//		class UPanelWidget*                                ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPanelWidget* UWidget::GetParent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetParent");

	UWidget_GetParent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.GetPaintSpaceGeometry
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FGeometry UWidget::GetPaintSpaceGeometry()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetPaintSpaceGeometry");

	UWidget_GetPaintSpaceGeometry_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.GetOwningPlayer
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APlayerController* UWidget::GetOwningPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetOwningPlayer");

	UWidget_GetOwningPlayer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.GetOwningLocalPlayer
//		Flags  -> ()
// Parameters:
//		class ULocalPlayer*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULocalPlayer* UWidget::GetOwningLocalPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetOwningLocalPlayer");

	UWidget_GetOwningLocalPlayer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<CoreUObject_EMouseCursor>              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<CoreUObject_EMouseCursor> UWidget::GetMouseCursor__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature");

	UWidget_GetMouseCursor__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UWidget::GetLinearColor__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature");

	UWidget_GetLinearColor__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.GetIsEnabled
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::GetIsEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetIsEnabled");

	UWidget_GetIsEnabled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.Widget.GetInt32__DelegateSignature
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UWidget::GetInt32__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetInt32__DelegateSignature");

	UWidget_GetInt32__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.GetGameInstance
//		Flags  -> ()
// Parameters:
//		class UGameInstance*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGameInstance* UWidget::GetGameInstance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetGameInstance");

	UWidget_GetGameInstance_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.Widget.GetFloat__DelegateSignature
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWidget::GetFloat__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetFloat__DelegateSignature");

	UWidget_GetFloat__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.GetDesiredSize
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UWidget::GetDesiredSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetDesiredSize");

	UWidget_GetDesiredSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.GetClipping
//		Flags  -> ()
// Parameters:
//		SlateCore_EWidgetClipping                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SlateCore_EWidgetClipping UWidget::GetClipping()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetClipping");

	UWidget_GetClipping_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
//		Flags  -> ()
// Parameters:
//		SlateCore_ECheckBoxState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SlateCore_ECheckBoxState UWidget::GetCheckBoxState__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature");

	UWidget_GetCheckBoxState__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.GetCachedGeometry
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FGeometry UWidget::GetCachedGeometry()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetCachedGeometry");

	UWidget_GetCachedGeometry_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.Widget.GetBool__DelegateSignature
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidget::GetBool__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetBool__DelegateSignature");

	UWidget_GetBool__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.GetAccessibleText
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UWidget::GetAccessibleText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetAccessibleText");

	UWidget_GetAccessibleText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.GetAccessibleSummaryText
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UWidget::GetAccessibleSummaryText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetAccessibleSummaryText");

	UWidget_GetAccessibleSummaryText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FString                                     Item                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidget*                                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UWidget::GenerateWidgetForString__DelegateSignature(const struct FString& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature");

	UWidget_GenerateWidgetForString__DelegateSignature_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidget*                                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UWidget::GenerateWidgetForObject__DelegateSignature(class UObject* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature");

	UWidget_GenerateWidgetForObject__DelegateSignature_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.ForceVolatile
//		Flags  -> ()
// Parameters:
//		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidget::ForceVolatile(bool bForce)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.ForceVolatile");

	UWidget_ForceVolatile_Params params {};
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Widget.ForceLayoutPrepass
//		Flags  -> ()
void UWidget::ForceLayoutPrepass()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Widget.ForceLayoutPrepass");

	UWidget_ForceLayoutPrepass_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.UnregisterInputComponent
//		Flags  -> ()
void UUserWidget::UnregisterInputComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnregisterInputComponent");

	UUserWidget_UnregisterInputComponent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.UnbindFromAnimationStarted
//		Flags  -> ()
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::UnbindFromAnimationStarted(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindFromAnimationStarted");

	UUserWidget_UnbindFromAnimationStarted_Params params {};
	params.Animation = Animation;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.UnbindFromAnimationFinished
//		Flags  -> ()
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::UnbindFromAnimationFinished(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindFromAnimationFinished");

	UUserWidget_UnbindFromAnimationFinished_Params params {};
	params.Animation = Animation;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.UnbindAllFromAnimationStarted
//		Flags  -> ()
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindAllFromAnimationStarted");

	UUserWidget_UnbindAllFromAnimationStarted_Params params {};
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.UnbindAllFromAnimationFinished
//		Flags  -> ()
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindAllFromAnimationFinished");

	UUserWidget_UnbindAllFromAnimationFinished_Params params {};
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		float                                              InDeltaTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Tick");

	UUserWidget_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.StopListeningForInputAction
//		Flags  -> ()
// Parameters:
//		struct FName                                       ActionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_EInputEvent>                    EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::StopListeningForInputAction(const struct FName& ActionName, TEnumAsByte<Engine_EInputEvent> EventType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopListeningForInputAction");

	UUserWidget_StopListeningForInputAction_Params params {};
	params.ActionName = ActionName;
	params.EventType = EventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.StopListeningForAllInputActions
//		Flags  -> ()
void UUserWidget::StopListeningForAllInputActions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopListeningForAllInputActions");

	UUserWidget_StopListeningForAllInputActions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.StopAnimationsAndLatentActions
//		Flags  -> ()
void UUserWidget::StopAnimationsAndLatentActions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAnimationsAndLatentActions");

	UUserWidget_StopAnimationsAndLatentActions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.StopAnimation
//		Flags  -> ()
// Parameters:
//		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::StopAnimation(class UWidgetAnimation* InAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAnimation");

	UUserWidget_StopAnimation_Params params {};
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.StopAllAnimations
//		Flags  -> ()
void UUserWidget::StopAllAnimations()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAllAnimations");

	UUserWidget_StopAllAnimations_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.SetPositionInViewport
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bRemoveDPIScale                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::SetPositionInViewport(const struct FVector2D& position, bool bRemoveDPIScale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPositionInViewport");

	UUserWidget_SetPositionInViewport_Params params {};
	params.position = position;
	params.bRemoveDPIScale = bRemoveDPIScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.SetPlaybackSpeed
//		Flags  -> ()
// Parameters:
//		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PlaybackSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPlaybackSpeed");

	UUserWidget_SetPlaybackSpeed_Params params {};
	params.InAnimation = InAnimation;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.SetPadding
//		Flags  -> ()
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPadding");

	UUserWidget_SetPadding_Params params {};
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.SetOwningPlayer
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           LocalPlayerController                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::SetOwningPlayer(class APlayerController* LocalPlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetOwningPlayer");

	UUserWidget_SetOwningPlayer_Params params {};
	params.LocalPlayerController = LocalPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.SetNumLoopsToPlay
//		Flags  -> ()
// Parameters:
//		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumLoopsToPlay                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int NumLoopsToPlay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetNumLoopsToPlay");

	UUserWidget_SetNumLoopsToPlay_Params params {};
	params.InAnimation = InAnimation;
	params.NumLoopsToPlay = NumLoopsToPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.SetInputActionPriority
//		Flags  -> ()
// Parameters:
//		int                                                NewPriority                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::SetInputActionPriority(int NewPriority)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetInputActionPriority");

	UUserWidget_SetInputActionPriority_Params params {};
	params.NewPriority = NewPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.SetInputActionBlocking
//		Flags  -> ()
// Parameters:
//		bool                                               bShouldBlock                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::SetInputActionBlocking(bool bShouldBlock)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetInputActionBlocking");

	UUserWidget_SetInputActionBlocking_Params params {};
	params.bShouldBlock = bShouldBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.SetForegroundColor
//		Flags  -> ()
// Parameters:
//		struct FSlateColor                                 InForegroundColor                                          (Parm, NativeAccessSpecifierPublic)
void UUserWidget::SetForegroundColor(const struct FSlateColor& InForegroundColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetForegroundColor");

	UUserWidget_SetForegroundColor_Params params {};
	params.InForegroundColor = InForegroundColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.SetDesiredSizeInViewport
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::SetDesiredSizeInViewport(const struct FVector2D& Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetDesiredSizeInViewport");

	UUserWidget_SetDesiredSizeInViewport_Params params {};
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.SetColorAndOpacity
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                InColorAndOpacity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetColorAndOpacity");

	UUserWidget_SetColorAndOpacity_Params params {};
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.SetAnimationCurrentTime
//		Flags  -> ()
// Parameters:
//		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              InTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::SetAnimationCurrentTime(class UWidgetAnimation* InAnimation, float InTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetAnimationCurrentTime");

	UUserWidget_SetAnimationCurrentTime_Params params {};
	params.InAnimation = InAnimation;
	params.InTime = InTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.SetAnchorsInViewport
//		Flags  -> ()
// Parameters:
//		struct FAnchors                                    Anchors                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::SetAnchorsInViewport(const struct FAnchors& Anchors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetAnchorsInViewport");

	UUserWidget_SetAnchorsInViewport_Params params {};
	params.Anchors = Anchors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.SetAlignmentInViewport
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   Alignment                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::SetAlignmentInViewport(const struct FVector2D& Alignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetAlignmentInViewport");

	UUserWidget_SetAlignmentInViewport_Params params {};
	params.Alignment = Alignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.ReverseAnimation
//		Flags  -> ()
// Parameters:
//		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::ReverseAnimation(class UWidgetAnimation* InAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.ReverseAnimation");

	UUserWidget_ReverseAnimation_Params params {};
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.RemoveFromViewport
//		Flags  -> ()
void UUserWidget::RemoveFromViewport()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.RemoveFromViewport");

	UUserWidget_RemoveFromViewport_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.RegisterInputComponent
//		Flags  -> ()
void UUserWidget::RegisterInputComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.RegisterInputComponent");

	UUserWidget_RegisterInputComponent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PreConstruct");

	UUserWidget_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.PlaySound
//		Flags  -> ()
// Parameters:
//		class USoundBase*                                  SoundToPlay                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::PlaySound(class USoundBase* SoundToPlay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlaySound");

	UUserWidget_PlaySound_Params params {};
	params.SoundToPlay = SoundToPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.PlayAnimationTimeRange
//		Flags  -> ()
// Parameters:
//		class UWidgetAnimation*                            InAnimation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartAtTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              EndAtTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumLoopsToPlay                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<UMG_EUMGSequencePlayMode>              PlayMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PlaybackSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bRestoreState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUMGSequencePlayer*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUMGSequencePlayer* UUserWidget::PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimationTimeRange");

	UUserWidget_PlayAnimationTimeRange_Params params {};
	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.EndAtTime = EndAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.PlayMode = PlayMode;
	params.PlaybackSpeed = PlaybackSpeed;
	params.bRestoreState = bRestoreState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.PlayAnimationReverse
//		Flags  -> ()
// Parameters:
//		class UWidgetAnimation*                            InAnimation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PlaybackSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bRestoreState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUMGSequencePlayer*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUMGSequencePlayer* UUserWidget::PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimationReverse");

	UUserWidget_PlayAnimationReverse_Params params {};
	params.InAnimation = InAnimation;
	params.PlaybackSpeed = PlaybackSpeed;
	params.bRestoreState = bRestoreState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.PlayAnimationForward
//		Flags  -> ()
// Parameters:
//		class UWidgetAnimation*                            InAnimation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PlaybackSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bRestoreState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUMGSequencePlayer*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUMGSequencePlayer* UUserWidget::PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimationForward");

	UUserWidget_PlayAnimationForward_Params params {};
	params.InAnimation = InAnimation;
	params.PlaybackSpeed = PlaybackSpeed;
	params.bRestoreState = bRestoreState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.PlayAnimation
//		Flags  -> ()
// Parameters:
//		class UWidgetAnimation*                            InAnimation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartAtTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumLoopsToPlay                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<UMG_EUMGSequencePlayMode>              PlayMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PlaybackSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bRestoreState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUMGSequencePlayer*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUMGSequencePlayer* UUserWidget::PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimation");

	UUserWidget_PlayAnimation_Params params {};
	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.PlayMode = PlayMode;
	params.PlaybackSpeed = PlaybackSpeed;
	params.bRestoreState = bRestoreState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.PauseAnimation
//		Flags  -> ()
// Parameters:
//		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UUserWidget::PauseAnimation(class UWidgetAnimation* InAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PauseAnimation");

	UUserWidget_PauseAnimation_Params params {};
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnTouchStarted
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FPointerEvent                               InTouchEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchStarted");

	UUserWidget_OnTouchStarted_Params params {};
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnTouchMoved
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FPointerEvent                               InTouchEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchMoved");

	UUserWidget_OnTouchMoved_Params params {};
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnTouchGesture
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FPointerEvent                               GestureEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchGesture");

	UUserWidget_OnTouchGesture_Params params {};
	params.MyGeometry = MyGeometry;
	params.GestureEvent = GestureEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnTouchForceChanged
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FPointerEvent                               InTouchEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnTouchForceChanged(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchForceChanged");

	UUserWidget_OnTouchForceChanged_Params params {};
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnTouchEnded
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FPointerEvent                               InTouchEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchEnded");

	UUserWidget_OnTouchEnded_Params params {};
	params.MyGeometry = MyGeometry;
	params.InTouchEvent = InTouchEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnRemovedFromFocusPath
//		Flags  -> ()
// Parameters:
//		struct FFocusEvent                                 InFocusEvent                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnRemovedFromFocusPath");

	UUserWidget_OnRemovedFromFocusPath_Params params {};
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnPreviewMouseButtonDown
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPreviewMouseButtonDown");

	UUserWidget_OnPreviewMouseButtonDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnPreviewKeyDown
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FKeyEvent                                   InKeyEvent                                                 (Parm, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPreviewKeyDown");

	UUserWidget_OnPreviewKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnPaint
//		Flags  -> ()
// Parameters:
//		struct FPaintContext                               Context                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::OnPaint(struct FPaintContext* Context)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPaint");

	UUserWidget_OnPaint_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnMouseWheel
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseWheel");

	UUserWidget_OnMouseWheel_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnMouseMove
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseMove");

	UUserWidget_OnMouseMove_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnMouseLeave
//		Flags  -> ()
// Parameters:
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UUserWidget::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseLeave");

	UUserWidget_OnMouseLeave_Params params {};
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnMouseEnter
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UUserWidget::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseEnter");

	UUserWidget_OnMouseEnter_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnMouseCaptureLost
//		Flags  -> ()
void UUserWidget::OnMouseCaptureLost()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseCaptureLost");

	UUserWidget_OnMouseCaptureLost_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnMouseButtonUp
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonUp");

	UUserWidget_OnMouseButtonUp_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnMouseButtonDown
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonDown");

	UUserWidget_OnMouseButtonDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnMouseButtonDoubleClick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   InMyGeometry                                               (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FPointerEvent                               InMouseEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonDoubleClick");

	UUserWidget_OnMouseButtonDoubleClick_Params params {};
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnMotionDetected
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FMotionEvent                                InMotionEvent                                              (Parm, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMotionDetected");

	UUserWidget_OnMotionDetected_Params params {};
	params.MyGeometry = MyGeometry;
	params.InMotionEvent = InMotionEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnKeyUp
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FKeyEvent                                   InKeyEvent                                                 (Parm, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyUp");

	UUserWidget_OnKeyUp_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnKeyDown
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FKeyEvent                                   InKeyEvent                                                 (Parm, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyDown");

	UUserWidget_OnKeyDown_Params params {};
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnKeyChar
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FCharacterEvent                             InCharacterEvent                                           (Parm, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyChar");

	UUserWidget_OnKeyChar_Params params {};
	params.MyGeometry = MyGeometry;
	params.InCharacterEvent = InCharacterEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnInitialized
//		Flags  -> ()
void UUserWidget::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnInitialized");

	UUserWidget_OnInitialized_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnFocusReceived
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FFocusEvent                                 InFocusEvent                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnFocusReceived");

	UUserWidget_OnFocusReceived_Params params {};
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnFocusLost
//		Flags  -> ()
// Parameters:
//		struct FFocusEvent                                 InFocusEvent                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnFocusLost");

	UUserWidget_OnFocusLost_Params params {};
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnDrop
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FPointerEvent                               PointerEvent                                               (Parm, NativeAccessSpecifierPublic)
//		class UDragDropOperation*                          Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDrop");

	UUserWidget_OnDrop_Params params {};
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnDragOver
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FPointerEvent                               PointerEvent                                               (Parm, NativeAccessSpecifierPublic)
//		class UDragDropOperation*                          Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragOver");

	UUserWidget_OnDragOver_Params params {};
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnDragLeave
//		Flags  -> ()
// Parameters:
//		struct FPointerEvent                               PointerEvent                                               (Parm, NativeAccessSpecifierPublic)
//		class UDragDropOperation*                          Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragLeave");

	UUserWidget_OnDragLeave_Params params {};
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnDragEnter
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FPointerEvent                               PointerEvent                                               (Parm, NativeAccessSpecifierPublic)
//		class UDragDropOperation*                          Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragEnter");

	UUserWidget_OnDragEnter_Params params {};
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnDragDetected
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UDragDropOperation*                          Operation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragDetected");

	UUserWidget_OnDragDetected_Params params {};
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnDragCancelled
//		Flags  -> ()
// Parameters:
//		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UDragDropOperation*                          Operation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragCancelled");

	UUserWidget_OnDragCancelled_Params params {};
	params.PointerEvent = PointerEvent;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnAnimationStarted
//		Flags  -> ()
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::OnAnimationStarted(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnimationStarted");

	UUserWidget_OnAnimationStarted_Params params {};
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnAnimationFinished
//		Flags  -> ()
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnimationFinished");

	UUserWidget_OnAnimationFinished_Params params {};
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnAnalogValueChanged
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FAnalogInputEvent                           InAnalogInputEvent                                         (Parm, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UUserWidget::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnalogValueChanged");

	UUserWidget_OnAnalogValueChanged_Params params {};
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.OnAddedToFocusPath
//		Flags  -> ()
// Parameters:
//		struct FFocusEvent                                 InFocusEvent                                               (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAddedToFocusPath");

	UUserWidget_OnAddedToFocusPath_Params params {};
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.ListenForInputAction
//		Flags  -> ()
// Parameters:
//		struct FName                                       ActionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_EInputEvent>                    EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bConsume                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Callback                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::ListenForInputAction(const struct FName& ActionName, TEnumAsByte<Engine_EInputEvent> EventType, bool bConsume, const struct FScriptDelegate& Callback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.ListenForInputAction");

	UUserWidget_ListenForInputAction_Params params {};
	params.ActionName = ActionName;
	params.EventType = EventType;
	params.bConsume = bConsume;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.IsPlayingAnimation
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::IsPlayingAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsPlayingAnimation");

	UUserWidget_IsPlayingAnimation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.IsListeningForInputAction
//		Flags  -> ()
// Parameters:
//		struct FName                                       ActionName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::IsListeningForInputAction(const struct FName& ActionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsListeningForInputAction");

	UUserWidget_IsListeningForInputAction_Params params {};
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.IsInViewport
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::IsInViewport()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsInViewport");

	UUserWidget_IsInViewport_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.IsInteractable
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::IsInteractable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsInteractable");

	UUserWidget_IsInteractable_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.IsAnyAnimationPlaying
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::IsAnyAnimationPlaying()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnyAnimationPlaying");

	UUserWidget_IsAnyAnimationPlaying_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.IsAnimationPlayingForward
//		Flags  -> ()
// Parameters:
//		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::IsAnimationPlayingForward(class UWidgetAnimation* InAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnimationPlayingForward");

	UUserWidget_IsAnimationPlayingForward_Params params {};
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.IsAnimationPlaying
//		Flags  -> ()
// Parameters:
//		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::IsAnimationPlaying(class UWidgetAnimation* InAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnimationPlaying");

	UUserWidget_IsAnimationPlaying_Params params {};
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.GetOwningPlayerPawn
//		Flags  -> ()
// Parameters:
//		class APawn*                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UUserWidget::GetOwningPlayerPawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetOwningPlayerPawn");

	UUserWidget_GetOwningPlayerPawn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.GetOwningPlayerCameraManager
//		Flags  -> ()
// Parameters:
//		class APlayerCameraManager*                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APlayerCameraManager* UUserWidget::GetOwningPlayerCameraManager()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetOwningPlayerCameraManager");

	UUserWidget_GetOwningPlayerCameraManager_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.GetIsVisible
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::GetIsVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetIsVisible");

	UUserWidget_GetIsVisible_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.GetAnimationCurrentTime
//		Flags  -> ()
// Parameters:
//		class UWidgetAnimation*                            InAnimation                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UUserWidget::GetAnimationCurrentTime(class UWidgetAnimation* InAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAnimationCurrentTime");

	UUserWidget_GetAnimationCurrentTime_Params params {};
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.GetAnchorsInViewport
//		Flags  -> ()
// Parameters:
//		struct FAnchors                                    ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FAnchors UUserWidget::GetAnchorsInViewport()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAnchorsInViewport");

	UUserWidget_GetAnchorsInViewport_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.GetAlignmentInViewport
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UUserWidget::GetAlignmentInViewport()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAlignmentInViewport");

	UUserWidget_GetAlignmentInViewport_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.FlushAnimations
//		Flags  -> ()
void UUserWidget::FlushAnimations()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.FlushAnimations");

	UUserWidget_FlushAnimations_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.Destruct
//		Flags  -> ()
void UUserWidget::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Destruct");

	UUserWidget_Destruct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.Construct
//		Flags  -> ()
void UUserWidget::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Construct");

	UUserWidget_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.CancelLatentActions
//		Flags  -> ()
void UUserWidget::CancelLatentActions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.CancelLatentActions");

	UUserWidget_CancelLatentActions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.BindToAnimationStarted
//		Flags  -> ()
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::BindToAnimationStarted(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.BindToAnimationStarted");

	UUserWidget_BindToAnimationStarted_Params params {};
	params.Animation = Animation;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.BindToAnimationFinished
//		Flags  -> ()
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UUserWidget::BindToAnimationFinished(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.BindToAnimationFinished");

	UUserWidget_BindToAnimationFinished_Params params {};
	params.Animation = Animation;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.BindToAnimationEvent
//		Flags  -> ()
// Parameters:
//		class UWidgetAnimation*                            Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
//		UMG_EWidgetAnimationEvent                          AnimationEvent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       UserTag                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::BindToAnimationEvent(class UWidgetAnimation* Animation, const struct FScriptDelegate& Delegate, UMG_EWidgetAnimationEvent AnimationEvent, const struct FName& UserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.BindToAnimationEvent");

	UUserWidget_BindToAnimationEvent_Params params {};
	params.Animation = Animation;
	params.Delegate = Delegate;
	params.AnimationEvent = AnimationEvent;
	params.UserTag = UserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.AddToViewport
//		Flags  -> ()
// Parameters:
//		int                                                ZOrder                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserWidget::AddToViewport(int ZOrder)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.AddToViewport");

	UUserWidget_AddToViewport_Params params {};
	params.ZOrder = ZOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserWidget.AddToPlayerScreen
//		Flags  -> ()
// Parameters:
//		int                                                ZOrder                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserWidget::AddToPlayerScreen(int ZOrder)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.AddToPlayerScreen");

	UUserWidget_AddToPlayerScreen_Params params {};
	params.ZOrder = ZOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.TextLayoutWidget.SetJustification
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<Slate_ETextJustify>                    InJustification                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTextLayoutWidget::SetJustification(TEnumAsByte<Slate_ETextJustify> InJustification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextLayoutWidget.SetJustification");

	UTextLayoutWidget_SetJustification_Params params {};
	params.InJustification = InJustification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.RichTextBlock.SetTextTransformPolicy
//		Flags  -> ()
// Parameters:
//		Slate_ETextTransformPolicy                         InTransformPolicy                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URichTextBlock::SetTextTransformPolicy(Slate_ETextTransformPolicy InTransformPolicy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetTextTransformPolicy");

	URichTextBlock_SetTextTransformPolicy_Params params {};
	params.InTransformPolicy = InTransformPolicy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.RichTextBlock.SetTextStyleSet
//		Flags  -> ()
// Parameters:
//		class UDataTable*                                  NewTextStyleSet                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URichTextBlock::SetTextStyleSet(class UDataTable* NewTextStyleSet)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetTextStyleSet");

	URichTextBlock_SetTextStyleSet_Params params {};
	params.NewTextStyleSet = NewTextStyleSet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.RichTextBlock.SetText
//		Flags  -> ()
// Parameters:
//		struct FText                                       InText                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void URichTextBlock::SetText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetText");

	URichTextBlock_SetText_Params params {};
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.RichTextBlock.SetMinDesiredWidth
//		Flags  -> ()
// Parameters:
//		float                                              InMinDesiredWidth                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URichTextBlock::SetMinDesiredWidth(float InMinDesiredWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetMinDesiredWidth");

	URichTextBlock_SetMinDesiredWidth_Params params {};
	params.InMinDesiredWidth = InMinDesiredWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.RichTextBlock.SetDefaultTextStyle
//		Flags  -> ()
// Parameters:
//		struct FTextBlockStyle                             InDefaultTextStyle                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void URichTextBlock::SetDefaultTextStyle(const struct FTextBlockStyle& InDefaultTextStyle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultTextStyle");

	URichTextBlock_SetDefaultTextStyle_Params params {};
	params.InDefaultTextStyle = InDefaultTextStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.RichTextBlock.SetDefaultStrikeBrush
//		Flags  -> ()
// Parameters:
//		struct FSlateBrush                                 InStrikeBrush                                              (Parm, OutParm, NativeAccessSpecifierPublic)
void URichTextBlock::SetDefaultStrikeBrush(struct FSlateBrush* InStrikeBrush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultStrikeBrush");

	URichTextBlock_SetDefaultStrikeBrush_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InStrikeBrush != nullptr)
		*InStrikeBrush = params.InStrikeBrush;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.RichTextBlock.SetDefaultShadowOffset
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   InShadowOffset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URichTextBlock::SetDefaultShadowOffset(const struct FVector2D& InShadowOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultShadowOffset");

	URichTextBlock_SetDefaultShadowOffset_Params params {};
	params.InShadowOffset = InShadowOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                InShadowColorAndOpacity                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URichTextBlock::SetDefaultShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity");

	URichTextBlock_SetDefaultShadowColorAndOpacity_Params params {};
	params.InShadowColorAndOpacity = InShadowColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.RichTextBlock.SetDefaultFont
//		Flags  -> ()
// Parameters:
//		struct FSlateFontInfo                              InFontInfo                                                 (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URichTextBlock::SetDefaultFont(const struct FSlateFontInfo& InFontInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultFont");

	URichTextBlock_SetDefaultFont_Params params {};
	params.InFontInfo = InFontInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.RichTextBlock.SetDefaultColorAndOpacity
//		Flags  -> ()
// Parameters:
//		struct FSlateColor                                 InColorAndOpacity                                          (Parm, NativeAccessSpecifierPublic)
void URichTextBlock::SetDefaultColorAndOpacity(const struct FSlateColor& InColorAndOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultColorAndOpacity");

	URichTextBlock_SetDefaultColorAndOpacity_Params params {};
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.RichTextBlock.SetAutoWrapText
//		Flags  -> ()
// Parameters:
//		bool                                               InAutoTextWrap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URichTextBlock::SetAutoWrapText(bool InAutoTextWrap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetAutoWrapText");

	URichTextBlock_SetAutoWrapText_Params params {};
	params.InAutoTextWrap = InAutoTextWrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.RichTextBlock.GetText
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText URichTextBlock::GetText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.GetText");

	URichTextBlock_GetText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.RichTextBlock.GetDecoratorByClass
//		Flags  -> ()
// Parameters:
//		class UClass*                                      DecoratorClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class URichTextBlockDecorator*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class URichTextBlockDecorator* URichTextBlock::GetDecoratorByClass(class UClass* DecoratorClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.GetDecoratorByClass");

	URichTextBlock_GetDecoratorByClass_Params params {};
	params.DecoratorClass = DecoratorClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.RichTextBlock.GetCurrentDefaultTextStyle
//		Flags  -> ()
// Parameters:
//		struct FTextBlockStyle                             ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
struct FTextBlockStyle URichTextBlock::GetCurrentDefaultTextStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.GetCurrentDefaultTextStyle");

	URichTextBlock_GetCurrentDefaultTextStyle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides
//		Flags  -> ()
void URichTextBlock::ClearAllDefaultStyleOverrides()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides");

	URichTextBlock_ClearAllDefaultStyleOverrides_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.PanelWidget.RemoveChildAt
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPanelWidget::RemoveChildAt(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.RemoveChildAt");

	UPanelWidget_RemoveChildAt_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.PanelWidget.RemoveChild
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPanelWidget::RemoveChild(class UWidget* Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.RemoveChild");

	UPanelWidget_RemoveChild_Params params {};
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.PanelWidget.HasChild
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPanelWidget::HasChild(class UWidget* Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.HasChild");

	UPanelWidget_HasChild_Params params {};
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.PanelWidget.HasAnyChildren
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UPanelWidget::HasAnyChildren()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.HasAnyChildren");

	UPanelWidget_HasAnyChildren_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.PanelWidget.GetChildrenCount
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPanelWidget::GetChildrenCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildrenCount");

	UPanelWidget_GetChildrenCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.PanelWidget.GetChildIndex
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Content                                                    (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UPanelWidget::GetChildIndex(class UWidget* Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildIndex");

	UPanelWidget_GetChildIndex_Params params {};
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.PanelWidget.GetChildAt
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidget*                                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UPanelWidget::GetChildAt(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildAt");

	UPanelWidget_GetChildAt_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.PanelWidget.GetAllChildren
//		Flags  -> ()
// Parameters:
//		TArray<class UWidget*>                             ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
TArray<class UWidget*> UPanelWidget::GetAllChildren()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetAllChildren");

	UPanelWidget_GetAllChildren_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.PanelWidget.ClearChildren
//		Flags  -> ()
void UPanelWidget::ClearChildren()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.ClearChildren");

	UPanelWidget_ClearChildren_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.PanelWidget.AddChild
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPanelSlot*                                  ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPanelSlot* UPanelWidget::AddChild(class UWidget* Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.AddChild");

	UPanelWidget_AddChild_Params params {};
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ContentWidget.SetContent
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPanelSlot*                                  ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPanelSlot* UContentWidget::SetContent(class UWidget* Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ContentWidget.SetContent");

	UContentWidget_SetContent_Params params {};
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ContentWidget.GetContentSlot
//		Flags  -> ()
// Parameters:
//		class UPanelSlot*                                  ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPanelSlot* UContentWidget::GetContentSlot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ContentWidget.GetContentSlot");

	UContentWidget_GetContentSlot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ContentWidget.GetContent
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UContentWidget::GetContent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ContentWidget.GetContent");

	UContentWidget_GetContent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScaleBox.SetUserSpecifiedScale
//		Flags  -> ()
// Parameters:
//		float                                              InUserSpecifiedScale                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScaleBox::SetUserSpecifiedScale(float InUserSpecifiedScale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetUserSpecifiedScale");

	UScaleBox_SetUserSpecifiedScale_Params params {};
	params.InUserSpecifiedScale = InUserSpecifiedScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScaleBox.SetStretchDirection
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<Slate_EStretchDirection>               InStretchDirection                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScaleBox::SetStretchDirection(TEnumAsByte<Slate_EStretchDirection> InStretchDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetStretchDirection");

	UScaleBox_SetStretchDirection_Params params {};
	params.InStretchDirection = InStretchDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScaleBox.SetStretch
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<Slate_EStretch>                        InStretch                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScaleBox::SetStretch(TEnumAsByte<Slate_EStretch> InStretch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetStretch");

	UScaleBox_SetStretch_Params params {};
	params.InStretch = InStretch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScaleBox.SetIgnoreInheritedScale
//		Flags  -> ()
// Parameters:
//		bool                                               bInIgnoreInheritedScale                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScaleBox::SetIgnoreInheritedScale(bool bInIgnoreInheritedScale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetIgnoreInheritedScale");

	UScaleBox_SetIgnoreInheritedScale_Params params {};
	params.bInIgnoreInheritedScale = bInIgnoreInheritedScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScaleBoxSlot.SetVerticalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScaleBoxSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetVerticalAlignment");

	UScaleBoxSlot_SetVerticalAlignment_Params params {};
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScaleBoxSlot.SetPadding
//		Flags  -> ()
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UScaleBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetPadding");

	UScaleBoxSlot_SetPadding_Params params {};
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScaleBoxSlot.SetHorizontalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScaleBoxSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetHorizontalAlignment");

	UScaleBoxSlot_SetHorizontalAlignment_Params params {};
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScrollBar.SetState
//		Flags  -> ()
// Parameters:
//		float                                              InOffsetFraction                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              InThumbSizeFraction                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBar.SetState");

	UScrollBar_SetState_Params params {};
	params.InOffsetFraction = InOffsetFraction;
	params.InThumbSizeFraction = InThumbSizeFraction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScrollBox.SetWheelScrollMultiplier
//		Flags  -> ()
// Parameters:
//		float                                              NewWheelScrollMultiplier                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::SetWheelScrollMultiplier(float NewWheelScrollMultiplier)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetWheelScrollMultiplier");

	UScrollBox_SetWheelScrollMultiplier_Params params {};
	params.NewWheelScrollMultiplier = NewWheelScrollMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScrollBox.SetScrollOffset
//		Flags  -> ()
// Parameters:
//		float                                              NewScrollOffset                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::SetScrollOffset(float NewScrollOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollOffset");

	UScrollBox_SetScrollOffset_Params params {};
	params.NewScrollOffset = NewScrollOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScrollBox.SetScrollbarVisibility
//		Flags  -> ()
// Parameters:
//		UMG_ESlateVisibility                               NewScrollBarVisibility                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::SetScrollbarVisibility(UMG_ESlateVisibility NewScrollBarVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollbarVisibility");

	UScrollBox_SetScrollbarVisibility_Params params {};
	params.NewScrollBarVisibility = NewScrollBarVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScrollBox.SetScrollbarThickness
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   NewScrollbarThickness                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollbarThickness");

	UScrollBox_SetScrollbarThickness_Params params {};
	params.NewScrollbarThickness = NewScrollbarThickness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScrollBox.SetScrollbarPadding
//		Flags  -> ()
// Parameters:
//		struct FMargin                                     NewScrollbarPadding                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UScrollBox::SetScrollbarPadding(const struct FMargin& NewScrollbarPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollbarPadding");

	UScrollBox_SetScrollbarPadding_Params params {};
	params.NewScrollbarPadding = NewScrollbarPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScrollBox.SetOrientation
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EOrientation>                NewOrientation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::SetOrientation(TEnumAsByte<SlateCore_EOrientation> NewOrientation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetOrientation");

	UScrollBox_SetOrientation_Params params {};
	params.NewOrientation = NewOrientation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScrollBox.SetConsumeMouseWheel
//		Flags  -> ()
// Parameters:
//		SlateCore_EConsumeMouseWheel                       NewConsumeMouseWheel                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::SetConsumeMouseWheel(SlateCore_EConsumeMouseWheel NewConsumeMouseWheel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetConsumeMouseWheel");

	UScrollBox_SetConsumeMouseWheel_Params params {};
	params.NewConsumeMouseWheel = NewConsumeMouseWheel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScrollBox.SetAnimateWheelScrolling
//		Flags  -> ()
// Parameters:
//		bool                                               bShouldAnimateWheelScrolling                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAnimateWheelScrolling");

	UScrollBox_SetAnimateWheelScrolling_Params params {};
	params.bShouldAnimateWheelScrolling = bShouldAnimateWheelScrolling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScrollBox.SetAlwaysShowScrollbar
//		Flags  -> ()
// Parameters:
//		bool                                               NewAlwaysShowScrollbar                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAlwaysShowScrollbar");

	UScrollBox_SetAlwaysShowScrollbar_Params params {};
	params.NewAlwaysShowScrollbar = NewAlwaysShowScrollbar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScrollBox.SetAllowOverscroll
//		Flags  -> ()
// Parameters:
//		bool                                               NewAllowOverscroll                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::SetAllowOverscroll(bool NewAllowOverscroll)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAllowOverscroll");

	UScrollBox_SetAllowOverscroll_Params params {};
	params.NewAllowOverscroll = NewAllowOverscroll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScrollBox.ScrollWidgetIntoView
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     WidgetToFind                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               AnimateScroll                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Slate_EDescendantScrollDestination                 ScrollDestination                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Padding                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBox::ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, Slate_EDescendantScrollDestination ScrollDestination, float Padding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollWidgetIntoView");

	UScrollBox_ScrollWidgetIntoView_Params params {};
	params.WidgetToFind = WidgetToFind;
	params.AnimateScroll = AnimateScroll;
	params.ScrollDestination = ScrollDestination;
	params.Padding = Padding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScrollBox.ScrollToStart
//		Flags  -> ()
void UScrollBox::ScrollToStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollToStart");

	UScrollBox_ScrollToStart_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScrollBox.ScrollToEnd
//		Flags  -> ()
void UScrollBox::ScrollToEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollToEnd");

	UScrollBox_ScrollToEnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScrollBox.GetViewOffsetFraction
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UScrollBox::GetViewOffsetFraction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetViewOffsetFraction");

	UScrollBox_GetViewOffsetFraction_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScrollBox.GetScrollOffsetOfEnd
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UScrollBox::GetScrollOffsetOfEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetScrollOffsetOfEnd");

	UScrollBox_GetScrollOffsetOfEnd_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScrollBox.GetScrollOffset
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UScrollBox::GetScrollOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetScrollOffset");

	UScrollBox_GetScrollOffset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScrollBox.EndInertialScrolling
//		Flags  -> ()
void UScrollBox::EndInertialScrolling()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.EndInertialScrolling");

	UScrollBox_EndInertialScrolling_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScrollBoxSlot.SetVerticalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBoxSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBoxSlot.SetVerticalAlignment");

	UScrollBoxSlot_SetVerticalAlignment_Params params {};
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScrollBoxSlot.SetPadding
//		Flags  -> ()
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UScrollBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBoxSlot.SetPadding");

	UScrollBoxSlot_SetPadding_Params params {};
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ScrollBoxSlot.SetHorizontalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScrollBoxSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ScrollBoxSlot.SetHorizontalAlignment");

	UScrollBoxSlot_SetHorizontalAlignment_Params params {};
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SizeBox.SetWidthOverride
//		Flags  -> ()
// Parameters:
//		float                                              InWidthOverride                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBox::SetWidthOverride(float InWidthOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetWidthOverride");

	USizeBox_SetWidthOverride_Params params {};
	params.InWidthOverride = InWidthOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SizeBox.SetMinDesiredWidth
//		Flags  -> ()
// Parameters:
//		float                                              InMinDesiredWidth                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBox::SetMinDesiredWidth(float InMinDesiredWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinDesiredWidth");

	USizeBox_SetMinDesiredWidth_Params params {};
	params.InMinDesiredWidth = InMinDesiredWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SizeBox.SetMinDesiredHeight
//		Flags  -> ()
// Parameters:
//		float                                              InMinDesiredHeight                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBox::SetMinDesiredHeight(float InMinDesiredHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinDesiredHeight");

	USizeBox_SetMinDesiredHeight_Params params {};
	params.InMinDesiredHeight = InMinDesiredHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SizeBox.SetMinAspectRatio
//		Flags  -> ()
// Parameters:
//		float                                              InMinAspectRatio                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBox::SetMinAspectRatio(float InMinAspectRatio)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinAspectRatio");

	USizeBox_SetMinAspectRatio_Params params {};
	params.InMinAspectRatio = InMinAspectRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SizeBox.SetMaxDesiredWidth
//		Flags  -> ()
// Parameters:
//		float                                              InMaxDesiredWidth                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBox::SetMaxDesiredWidth(float InMaxDesiredWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxDesiredWidth");

	USizeBox_SetMaxDesiredWidth_Params params {};
	params.InMaxDesiredWidth = InMaxDesiredWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SizeBox.SetMaxDesiredHeight
//		Flags  -> ()
// Parameters:
//		float                                              InMaxDesiredHeight                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBox::SetMaxDesiredHeight(float InMaxDesiredHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxDesiredHeight");

	USizeBox_SetMaxDesiredHeight_Params params {};
	params.InMaxDesiredHeight = InMaxDesiredHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SizeBox.SetMaxAspectRatio
//		Flags  -> ()
// Parameters:
//		float                                              InMaxAspectRatio                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBox::SetMaxAspectRatio(float InMaxAspectRatio)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxAspectRatio");

	USizeBox_SetMaxAspectRatio_Params params {};
	params.InMaxAspectRatio = InMaxAspectRatio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SizeBox.SetHeightOverride
//		Flags  -> ()
// Parameters:
//		float                                              InHeightOverride                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBox::SetHeightOverride(float InHeightOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetHeightOverride");

	USizeBox_SetHeightOverride_Params params {};
	params.InHeightOverride = InHeightOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SizeBox.ClearWidthOverride
//		Flags  -> ()
void USizeBox::ClearWidthOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearWidthOverride");

	USizeBox_ClearWidthOverride_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SizeBox.ClearMinDesiredWidth
//		Flags  -> ()
void USizeBox::ClearMinDesiredWidth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinDesiredWidth");

	USizeBox_ClearMinDesiredWidth_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SizeBox.ClearMinDesiredHeight
//		Flags  -> ()
void USizeBox::ClearMinDesiredHeight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinDesiredHeight");

	USizeBox_ClearMinDesiredHeight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SizeBox.ClearMinAspectRatio
//		Flags  -> ()
void USizeBox::ClearMinAspectRatio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinAspectRatio");

	USizeBox_ClearMinAspectRatio_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SizeBox.ClearMaxDesiredWidth
//		Flags  -> ()
void USizeBox::ClearMaxDesiredWidth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxDesiredWidth");

	USizeBox_ClearMaxDesiredWidth_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SizeBox.ClearMaxDesiredHeight
//		Flags  -> ()
void USizeBox::ClearMaxDesiredHeight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxDesiredHeight");

	USizeBox_ClearMaxDesiredHeight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SizeBox.ClearMaxAspectRatio
//		Flags  -> ()
void USizeBox::ClearMaxAspectRatio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxAspectRatio");

	USizeBox_ClearMaxAspectRatio_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SizeBox.ClearHeightOverride
//		Flags  -> ()
void USizeBox::ClearHeightOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearHeightOverride");

	USizeBox_ClearHeightOverride_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SizeBoxSlot.SetVerticalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBoxSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetVerticalAlignment");

	USizeBoxSlot_SetVerticalAlignment_Params params {};
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SizeBoxSlot.SetPadding
//		Flags  -> ()
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void USizeBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetPadding");

	USizeBoxSlot_SetPadding_Params params {};
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SizeBoxSlot.SetHorizontalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USizeBoxSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetHorizontalAlignment");

	USizeBoxSlot_SetHorizontalAlignment_Params params {};
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector2D                                   LocalVector                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D USlateBlueprintLibrary::TransformVectorLocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalVector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute");

	USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Params params {};
	params.Geometry = Geometry;
	params.LocalVector = LocalVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector2D                                   AbsoluteVector                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D USlateBlueprintLibrary::TransformVectorAbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteVector)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal");

	USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Params params {};
	params.Geometry = Geometry;
	params.AbsoluteVector = AbsoluteVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		float                                              LocalScalar                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USlateBlueprintLibrary::TransformScalarLocalToAbsolute(const struct FGeometry& Geometry, float LocalScalar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute");

	USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Params params {};
	params.Geometry = Geometry;
	params.LocalScalar = LocalScalar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		float                                              AbsoluteScalar                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USlateBlueprintLibrary::TransformScalarAbsoluteToLocal(const struct FGeometry& Geometry, float AbsoluteScalar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal");

	USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Params params {};
	params.Geometry = Geometry;
	params.AbsoluteScalar = AbsoluteScalar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector2D                                   ScreenPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   LocalCoordinate                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bIncludeWindowPosition                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlateBlueprintLibrary::ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate, bool bIncludeWindowPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal");

	USlateBlueprintLibrary_ScreenToWidgetLocal_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Geometry = Geometry;
	params.ScreenPosition = ScreenPosition;
	params.bIncludeWindowPosition = bIncludeWindowPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LocalCoordinate != nullptr)
		*LocalCoordinate = params.LocalCoordinate;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   ScreenPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   AbsoluteCoordinate                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bIncludeWindowPosition                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlateBlueprintLibrary::ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate, bool bIncludeWindowPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute");

	USlateBlueprintLibrary_ScreenToWidgetAbsolute_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;
	params.bIncludeWindowPosition = bIncludeWindowPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AbsoluteCoordinate != nullptr)
		*AbsoluteCoordinate = params.AbsoluteCoordinate;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SlateBlueprintLibrary.ScreenToViewport
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   ScreenPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   ViewportPosition                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlateBlueprintLibrary::ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.ScreenToViewport");

	USlateBlueprintLibrary_ScreenToViewport_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.ScreenPosition = ScreenPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SlateBlueprintLibrary.LocalToViewport
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector2D                                   LocalCoordinate                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   PixelPosition                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   ViewportPosition                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlateBlueprintLibrary::LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.LocalToViewport");

	USlateBlueprintLibrary_LocalToViewport_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Geometry = Geometry;
	params.LocalCoordinate = LocalCoordinate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PixelPosition != nullptr)
		*PixelPosition = params.PixelPosition;
	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SlateBlueprintLibrary.LocalToAbsolute
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector2D                                   LocalCoordinate                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D USlateBlueprintLibrary::LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.LocalToAbsolute");

	USlateBlueprintLibrary_LocalToAbsolute_Params params {};
	params.Geometry = Geometry;
	params.LocalCoordinate = LocalCoordinate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SlateBlueprintLibrary.IsUnderLocation
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector2D                                   AbsoluteCoordinate                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USlateBlueprintLibrary::IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.IsUnderLocation");

	USlateBlueprintLibrary_IsUnderLocation_Params params {};
	params.Geometry = Geometry;
	params.AbsoluteCoordinate = AbsoluteCoordinate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SlateBlueprintLibrary.GetLocalTopLeft
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D USlateBlueprintLibrary::GetLocalTopLeft(const struct FGeometry& Geometry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.GetLocalTopLeft");

	USlateBlueprintLibrary_GetLocalTopLeft_Params params {};
	params.Geometry = Geometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SlateBlueprintLibrary.GetLocalSize
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D USlateBlueprintLibrary::GetLocalSize(const struct FGeometry& Geometry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.GetLocalSize");

	USlateBlueprintLibrary_GetLocalSize_Params params {};
	params.Geometry = Geometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SlateBlueprintLibrary.GetAbsoluteSize
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D USlateBlueprintLibrary::GetAbsoluteSize(const struct FGeometry& Geometry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.GetAbsoluteSize");

	USlateBlueprintLibrary_GetAbsoluteSize_Params params {};
	params.Geometry = Geometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
//		Flags  -> ()
// Parameters:
//		struct FSlateBrush                                 A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FSlateBrush                                 B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USlateBlueprintLibrary::EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush");

	USlateBlueprintLibrary_EqualEqual_SlateBrush_Params params {};
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   AbsoluteDesktopCoordinate                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   PixelPosition                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   ViewportPosition                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlateBlueprintLibrary::AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.AbsoluteToViewport");

	USlateBlueprintLibrary_AbsoluteToViewport_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.AbsoluteDesktopCoordinate = AbsoluteDesktopCoordinate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PixelPosition != nullptr)
		*PixelPosition = params.PixelPosition;
	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   Geometry                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector2D                                   AbsoluteCoordinate                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D USlateBlueprintLibrary::AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SlateBlueprintLibrary.AbsoluteToLocal");

	USlateBlueprintLibrary_AbsoluteToLocal_Params params {};
	params.Geometry = Geometry;
	params.AbsoluteCoordinate = AbsoluteCoordinate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Image.SetOpacity
//		Flags  -> ()
// Parameters:
//		float                                              InOpacity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::SetOpacity(float InOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Image.SetOpacity");

	UImage_SetOpacity_Params params {};
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Image.SetColorAndOpacity
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                InColorAndOpacity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Image.SetColorAndOpacity");

	UImage_SetColorAndOpacity_Params params {};
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Image.SetBrushTintColor
//		Flags  -> ()
// Parameters:
//		struct FSlateColor                                 TintColor                                                  (Parm, NativeAccessSpecifierPublic)
void UImage::SetBrushTintColor(const struct FSlateColor& TintColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushTintColor");

	UImage_SetBrushTintColor_Params params {};
	params.TintColor = TintColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Image.SetBrushSize
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   DesiredSize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::SetBrushSize(const struct FVector2D& DesiredSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushSize");

	UImage_SetBrushSize_Params params {};
	params.DesiredSize = DesiredSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Image.SetBrushResourceObject
//		Flags  -> ()
// Parameters:
//		class UObject*                                     ResourceObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::SetBrushResourceObject(class UObject* ResourceObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushResourceObject");

	UImage_SetBrushResourceObject_Params params {};
	params.ResourceObject = ResourceObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Image.SetBrushFromTextureDynamic
//		Flags  -> ()
// Parameters:
//		class UTexture2DDynamic*                           Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bMatchSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromTextureDynamic");

	UImage_SetBrushFromTextureDynamic_Params params {};
	params.Texture = Texture;
	params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Image.SetBrushFromTexture
//		Flags  -> ()
// Parameters:
//		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bMatchSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromTexture");

	UImage_SetBrushFromTexture_Params params {};
	params.Texture = Texture;
	params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Image.SetBrushFromSoftTexture
//		Flags  -> ()
// Parameters:
//		bool                                               bMatchSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::SetBrushFromSoftTexture(bool bMatchSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromSoftTexture");

	UImage_SetBrushFromSoftTexture_Params params {};
	params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Image.SetBrushFromSoftMaterial
//		Flags  -> ()
void UImage::SetBrushFromSoftMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromSoftMaterial");

	UImage_SetBrushFromSoftMaterial_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Image.SetBrushFromMaterial
//		Flags  -> ()
// Parameters:
//		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::SetBrushFromMaterial(class UMaterialInterface* Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromMaterial");

	UImage_SetBrushFromMaterial_Params params {};
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Image.SetBrushFromAtlasInterface
//		Flags  -> ()
// Parameters:
//		bool                                               bMatchSize                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::SetBrushFromAtlasInterface(bool bMatchSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromAtlasInterface");

	UImage_SetBrushFromAtlasInterface_Params params {};
	params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Image.SetBrushFromAsset
//		Flags  -> ()
// Parameters:
//		class USlateBrushAsset*                            Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImage::SetBrushFromAsset(class USlateBrushAsset* Asset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromAsset");

	UImage_SetBrushFromAsset_Params params {};
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Image.SetBrush
//		Flags  -> ()
// Parameters:
//		struct FSlateBrush                                 InBrush                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UImage::SetBrush(const struct FSlateBrush& InBrush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrush");

	UImage_SetBrush_Params params {};
	params.InBrush = InBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Image.GetDynamicMaterial
//		Flags  -> ()
// Parameters:
//		class UMaterialInstanceDynamic*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* UImage::GetDynamicMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Image.GetDynamicMaterial");

	UImage_GetDynamicMaterial_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.AsyncTaskDownloadImage.DownloadImage
//		Flags  -> ()
// Parameters:
//		struct FString                                     URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAsyncTaskDownloadImage*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAsyncTaskDownloadImage* UAsyncTaskDownloadImage::DownloadImage(const struct FString& URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.AsyncTaskDownloadImage.DownloadImage");

	UAsyncTaskDownloadImage_DownloadImage_Params params {};
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.BackgroundBlur.SetVerticalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBackgroundBlur::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetVerticalAlignment");

	UBackgroundBlur_SetVerticalAlignment_Params params {};
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.BackgroundBlur.SetPadding
//		Flags  -> ()
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UBackgroundBlur::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetPadding");

	UBackgroundBlur_SetPadding_Params params {};
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
//		Flags  -> ()
// Parameters:
//		struct FSlateBrush                                 InBrush                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UBackgroundBlur::SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetLowQualityFallbackBrush");

	UBackgroundBlur_SetLowQualityFallbackBrush_Params params {};
	params.InBrush = InBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.BackgroundBlur.SetHorizontalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBackgroundBlur::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetHorizontalAlignment");

	UBackgroundBlur_SetHorizontalAlignment_Params params {};
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.BackgroundBlur.SetBlurStrength
//		Flags  -> ()
// Parameters:
//		float                                              InStrength                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBackgroundBlur::SetBlurStrength(float InStrength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetBlurStrength");

	UBackgroundBlur_SetBlurStrength_Params params {};
	params.InStrength = InStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.BackgroundBlur.SetBlurRadius
//		Flags  -> ()
// Parameters:
//		int                                                InBlurRadius                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBackgroundBlur::SetBlurRadius(int InBlurRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetBlurRadius");

	UBackgroundBlur_SetBlurRadius_Params params {};
	params.InBlurRadius = InBlurRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.BackgroundBlur.SetApplyAlphaToBlur
//		Flags  -> ()
// Parameters:
//		bool                                               bInApplyAlphaToBlur                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBackgroundBlur::SetApplyAlphaToBlur(bool bInApplyAlphaToBlur)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetApplyAlphaToBlur");

	UBackgroundBlur_SetApplyAlphaToBlur_Params params {};
	params.bInApplyAlphaToBlur = bInApplyAlphaToBlur;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.BackgroundBlurSlot.SetVerticalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBackgroundBlurSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlurSlot.SetVerticalAlignment");

	UBackgroundBlurSlot_SetVerticalAlignment_Params params {};
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.BackgroundBlurSlot.SetPadding
//		Flags  -> ()
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UBackgroundBlurSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlurSlot.SetPadding");

	UBackgroundBlurSlot_SetPadding_Params params {};
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBackgroundBlurSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlurSlot.SetHorizontalAlignment");

	UBackgroundBlurSlot_SetHorizontalAlignment_Params params {};
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.BoolBinding.GetValue
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBoolBinding::GetValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.BoolBinding.GetValue");

	UBoolBinding_GetValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Border.SetVerticalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorder::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Border.SetVerticalAlignment");

	UBorder_SetVerticalAlignment_Params params {};
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Border.SetPadding
//		Flags  -> ()
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UBorder::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Border.SetPadding");

	UBorder_SetPadding_Params params {};
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Border.SetHorizontalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorder::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Border.SetHorizontalAlignment");

	UBorder_SetHorizontalAlignment_Params params {};
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Border.SetDesiredSizeScale
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   InScale                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorder::SetDesiredSizeScale(const struct FVector2D& InScale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Border.SetDesiredSizeScale");

	UBorder_SetDesiredSizeScale_Params params {};
	params.InScale = InScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Border.SetContentColorAndOpacity
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                InContentColorAndOpacity                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorder::SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Border.SetContentColorAndOpacity");

	UBorder_SetContentColorAndOpacity_Params params {};
	params.InContentColorAndOpacity = InContentColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Border.SetBrushFromTexture
//		Flags  -> ()
// Parameters:
//		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorder::SetBrushFromTexture(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromTexture");

	UBorder_SetBrushFromTexture_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Border.SetBrushFromMaterial
//		Flags  -> ()
// Parameters:
//		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorder::SetBrushFromMaterial(class UMaterialInterface* Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromMaterial");

	UBorder_SetBrushFromMaterial_Params params {};
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Border.SetBrushFromAsset
//		Flags  -> ()
// Parameters:
//		class USlateBrushAsset*                            Asset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorder::SetBrushFromAsset(class USlateBrushAsset* Asset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromAsset");

	UBorder_SetBrushFromAsset_Params params {};
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Border.SetBrushColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                InBrushColor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorder::SetBrushColor(const struct FLinearColor& InBrushColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushColor");

	UBorder_SetBrushColor_Params params {};
	params.InBrushColor = InBrushColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Border.SetBrush
//		Flags  -> ()
// Parameters:
//		struct FSlateBrush                                 InBrush                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UBorder::SetBrush(const struct FSlateBrush& InBrush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrush");

	UBorder_SetBrush_Params params {};
	params.InBrush = InBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Border.GetDynamicMaterial
//		Flags  -> ()
// Parameters:
//		class UMaterialInstanceDynamic*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* UBorder::GetDynamicMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Border.GetDynamicMaterial");

	UBorder_GetDynamicMaterial_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.BorderSlot.SetVerticalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorderSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetVerticalAlignment");

	UBorderSlot_SetVerticalAlignment_Params params {};
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.BorderSlot.SetPadding
//		Flags  -> ()
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UBorderSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetPadding");

	UBorderSlot_SetPadding_Params params {};
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.BorderSlot.SetHorizontalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBorderSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetHorizontalAlignment");

	UBorderSlot_SetHorizontalAlignment_Params params {};
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.BrushBinding.GetValue
//		Flags  -> ()
// Parameters:
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateBrush UBrushBinding::GetValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.BrushBinding.GetValue");

	UBrushBinding_GetValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Button.SetTouchMethod
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EButtonTouchMethod>          InTouchMethod                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UButton::SetTouchMethod(TEnumAsByte<SlateCore_EButtonTouchMethod> InTouchMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Button.SetTouchMethod");

	UButton_SetTouchMethod_Params params {};
	params.InTouchMethod = InTouchMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Button.SetStyle
//		Flags  -> ()
// Parameters:
//		struct FButtonStyle                                InStyle                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UButton::SetStyle(const struct FButtonStyle& InStyle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Button.SetStyle");

	UButton_SetStyle_Params params {};
	params.InStyle = InStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Button.SetPressMethod
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EButtonPressMethod>          InPressMethod                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UButton::SetPressMethod(TEnumAsByte<SlateCore_EButtonPressMethod> InPressMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Button.SetPressMethod");

	UButton_SetPressMethod_Params params {};
	params.InPressMethod = InPressMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Button.SetColorAndOpacity
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                InColorAndOpacity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UButton::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Button.SetColorAndOpacity");

	UButton_SetColorAndOpacity_Params params {};
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Button.SetClickMethod
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EButtonClickMethod>          InClickMethod                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UButton::SetClickMethod(TEnumAsByte<SlateCore_EButtonClickMethod> InClickMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Button.SetClickMethod");

	UButton_SetClickMethod_Params params {};
	params.InClickMethod = InClickMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Button.SetBackgroundColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                InBackgroundColor                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UButton::SetBackgroundColor(const struct FLinearColor& InBackgroundColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Button.SetBackgroundColor");

	UButton_SetBackgroundColor_Params params {};
	params.InBackgroundColor = InBackgroundColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Button.IsPressed
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UButton::IsPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Button.IsPressed");

	UButton_IsPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ButtonSlot.SetVerticalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UButtonSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetVerticalAlignment");

	UButtonSlot_SetVerticalAlignment_Params params {};
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ButtonSlot.SetPadding
//		Flags  -> ()
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UButtonSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetPadding");

	UButtonSlot_SetPadding_Params params {};
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ButtonSlot.SetHorizontalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UButtonSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetHorizontalAlignment");

	UButtonSlot_SetHorizontalAlignment_Params params {};
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CanvasPanel.AddChildToCanvas
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCanvasPanelSlot*                            ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCanvasPanelSlot* UCanvasPanel::AddChildToCanvas(class UWidget* Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanel.AddChildToCanvas");

	UCanvasPanel_AddChildToCanvas_Params params {};
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CanvasPanelSlot.SetZOrder
//		Flags  -> ()
// Parameters:
//		int                                                InZOrder                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::SetZOrder(int InZOrder)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetZOrder");

	UCanvasPanelSlot_SetZOrder_Params params {};
	params.InZOrder = InZOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CanvasPanelSlot.SetSize
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   InSize                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::SetSize(const struct FVector2D& InSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetSize");

	UCanvasPanelSlot_SetSize_Params params {};
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CanvasPanelSlot.SetPosition
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   InPosition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::SetPosition(const struct FVector2D& InPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetPosition");

	UCanvasPanelSlot_SetPosition_Params params {};
	params.InPosition = InPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CanvasPanelSlot.SetOffsets
//		Flags  -> ()
// Parameters:
//		struct FMargin                                     InOffset                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::SetOffsets(const struct FMargin& InOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetOffsets");

	UCanvasPanelSlot_SetOffsets_Params params {};
	params.InOffset = InOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CanvasPanelSlot.SetMinimum
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   InMinimumAnchors                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::SetMinimum(const struct FVector2D& InMinimumAnchors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetMinimum");

	UCanvasPanelSlot_SetMinimum_Params params {};
	params.InMinimumAnchors = InMinimumAnchors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CanvasPanelSlot.SetMaximum
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   InMaximumAnchors                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::SetMaximum(const struct FVector2D& InMaximumAnchors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetMaximum");

	UCanvasPanelSlot_SetMaximum_Params params {};
	params.InMaximumAnchors = InMaximumAnchors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CanvasPanelSlot.SetLayout
//		Flags  -> ()
// Parameters:
//		struct FAnchorData                                 InLayoutData                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::SetLayout(const struct FAnchorData& InLayoutData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetLayout");

	UCanvasPanelSlot_SetLayout_Params params {};
	params.InLayoutData = InLayoutData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CanvasPanelSlot.SetAutoSize
//		Flags  -> ()
// Parameters:
//		bool                                               InbAutoSize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::SetAutoSize(bool InbAutoSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAutoSize");

	UCanvasPanelSlot_SetAutoSize_Params params {};
	params.InbAutoSize = InbAutoSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CanvasPanelSlot.SetAnchors
//		Flags  -> ()
// Parameters:
//		struct FAnchors                                    InAnchors                                                  (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::SetAnchors(const struct FAnchors& InAnchors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAnchors");

	UCanvasPanelSlot_SetAnchors_Params params {};
	params.InAnchors = InAnchors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CanvasPanelSlot.SetAlignment
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   InAlignment                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCanvasPanelSlot::SetAlignment(const struct FVector2D& InAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAlignment");

	UCanvasPanelSlot_SetAlignment_Params params {};
	params.InAlignment = InAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CanvasPanelSlot.GetZOrder
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UCanvasPanelSlot::GetZOrder()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetZOrder");

	UCanvasPanelSlot_GetZOrder_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CanvasPanelSlot.GetSize
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UCanvasPanelSlot::GetSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetSize");

	UCanvasPanelSlot_GetSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CanvasPanelSlot.GetPosition
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UCanvasPanelSlot::GetPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetPosition");

	UCanvasPanelSlot_GetPosition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CanvasPanelSlot.GetOffsets
//		Flags  -> ()
// Parameters:
//		struct FMargin                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FMargin UCanvasPanelSlot::GetOffsets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetOffsets");

	UCanvasPanelSlot_GetOffsets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CanvasPanelSlot.GetLayout
//		Flags  -> ()
// Parameters:
//		struct FAnchorData                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FAnchorData UCanvasPanelSlot::GetLayout()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetLayout");

	UCanvasPanelSlot_GetLayout_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CanvasPanelSlot.GetAutoSize
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCanvasPanelSlot::GetAutoSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAutoSize");

	UCanvasPanelSlot_GetAutoSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CanvasPanelSlot.GetAnchors
//		Flags  -> ()
// Parameters:
//		struct FAnchors                                    ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FAnchors UCanvasPanelSlot::GetAnchors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAnchors");

	UCanvasPanelSlot_GetAnchors_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CanvasPanelSlot.GetAlignment
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UCanvasPanelSlot::GetAlignment()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAlignment");

	UCanvasPanelSlot_GetAlignment_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CheckBox.SetTouchMethod
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EButtonTouchMethod>          InTouchMethod                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCheckBox::SetTouchMethod(TEnumAsByte<SlateCore_EButtonTouchMethod> InTouchMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetTouchMethod");

	UCheckBox_SetTouchMethod_Params params {};
	params.InTouchMethod = InTouchMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CheckBox.SetPressMethod
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EButtonPressMethod>          InPressMethod                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCheckBox::SetPressMethod(TEnumAsByte<SlateCore_EButtonPressMethod> InPressMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetPressMethod");

	UCheckBox_SetPressMethod_Params params {};
	params.InPressMethod = InPressMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CheckBox.SetIsChecked
//		Flags  -> ()
// Parameters:
//		bool                                               InIsChecked                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCheckBox::SetIsChecked(bool InIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetIsChecked");

	UCheckBox_SetIsChecked_Params params {};
	params.InIsChecked = InIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CheckBox.SetClickMethod
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EButtonClickMethod>          InClickMethod                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCheckBox::SetClickMethod(TEnumAsByte<SlateCore_EButtonClickMethod> InClickMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetClickMethod");

	UCheckBox_SetClickMethod_Params params {};
	params.InClickMethod = InClickMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CheckBox.SetCheckedState
//		Flags  -> ()
// Parameters:
//		SlateCore_ECheckBoxState                           InCheckedState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCheckBox::SetCheckedState(SlateCore_ECheckBoxState InCheckedState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetCheckedState");

	UCheckBox_SetCheckedState_Params params {};
	params.InCheckedState = InCheckedState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CheckBox.IsPressed
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCheckBox::IsPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.IsPressed");

	UCheckBox_IsPressed_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CheckBox.IsChecked
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UCheckBox::IsChecked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.IsChecked");

	UCheckBox_IsChecked_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CheckBox.GetCheckedState
//		Flags  -> ()
// Parameters:
//		SlateCore_ECheckBoxState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SlateCore_ECheckBoxState UCheckBox::GetCheckedState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.GetCheckedState");

	UCheckBox_GetCheckedState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CheckedStateBinding.GetValue
//		Flags  -> ()
// Parameters:
//		SlateCore_ECheckBoxState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SlateCore_ECheckBoxState UCheckedStateBinding::GetValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CheckedStateBinding.GetValue");

	UCheckedStateBinding_GetValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CircularThrobber.SetRadius
//		Flags  -> ()
// Parameters:
//		float                                              InRadius                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCircularThrobber::SetRadius(float InRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetRadius");

	UCircularThrobber_SetRadius_Params params {};
	params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CircularThrobber.SetPeriod
//		Flags  -> ()
// Parameters:
//		float                                              InPeriod                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCircularThrobber::SetPeriod(float InPeriod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetPeriod");

	UCircularThrobber_SetPeriod_Params params {};
	params.InPeriod = InPeriod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.CircularThrobber.SetNumberOfPieces
//		Flags  -> ()
// Parameters:
//		int                                                InNumberOfPieces                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UCircularThrobber::SetNumberOfPieces(int InNumberOfPieces)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetNumberOfPieces");

	UCircularThrobber_SetNumberOfPieces_Params params {};
	params.InNumberOfPieces = InNumberOfPieces;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ColorBinding.GetSlateValue
//		Flags  -> ()
// Parameters:
//		struct FSlateColor                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateColor UColorBinding::GetSlateValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ColorBinding.GetSlateValue");

	UColorBinding_GetSlateValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ColorBinding.GetLinearValue
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FLinearColor UColorBinding::GetLinearValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ColorBinding.GetLinearValue");

	UColorBinding_GetLinearValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ComboBoxString.SetSelectedOption
//		Flags  -> ()
// Parameters:
//		struct FString                                     Option                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UComboBoxString::SetSelectedOption(const struct FString& Option)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.SetSelectedOption");

	UComboBoxString_SetSelectedOption_Params params {};
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ComboBoxString.SetSelectedIndex
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UComboBoxString::SetSelectedIndex(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.SetSelectedIndex");

	UComboBoxString_SetSelectedIndex_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ComboBoxString.RemoveOption
//		Flags  -> ()
// Parameters:
//		struct FString                                     Option                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UComboBoxString::RemoveOption(const struct FString& Option)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.RemoveOption");

	UComboBoxString_RemoveOption_Params params {};
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ComboBoxString.RefreshOptions
//		Flags  -> ()
void UComboBoxString::RefreshOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.RefreshOptions");

	UComboBoxString_RefreshOptions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FString                                     SelectedItem                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<SlateCore_ESelectInfo>                 SelectionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UComboBoxString::OnSelectionChangedEvent__DelegateSignature(const struct FString& SelectedItem, TEnumAsByte<SlateCore_ESelectInfo> SelectionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature");

	UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params params {};
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
//		Flags  -> ()
void UComboBoxString::OnOpeningEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature");

	UComboBoxString_OnOpeningEvent__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ComboBoxString.IsOpen
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UComboBoxString::IsOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.IsOpen");

	UComboBoxString_IsOpen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ComboBoxString.GetSelectedOption
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UComboBoxString::GetSelectedOption()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetSelectedOption");

	UComboBoxString_GetSelectedOption_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ComboBoxString.GetSelectedIndex
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UComboBoxString::GetSelectedIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetSelectedIndex");

	UComboBoxString_GetSelectedIndex_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ComboBoxString.GetOptionCount
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UComboBoxString::GetOptionCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetOptionCount");

	UComboBoxString_GetOptionCount_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ComboBoxString.GetOptionAtIndex
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UComboBoxString::GetOptionAtIndex(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetOptionAtIndex");

	UComboBoxString_GetOptionAtIndex_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ComboBoxString.FindOptionIndex
//		Flags  -> ()
// Parameters:
//		struct FString                                     Option                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UComboBoxString::FindOptionIndex(const struct FString& Option)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.FindOptionIndex");

	UComboBoxString_FindOptionIndex_Params params {};
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ComboBoxString.ClearSelection
//		Flags  -> ()
void UComboBoxString::ClearSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.ClearSelection");

	UComboBoxString_ClearSelection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ComboBoxString.ClearOptions
//		Flags  -> ()
void UComboBoxString::ClearOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.ClearOptions");

	UComboBoxString_ClearOptions_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ComboBoxString.AddOption
//		Flags  -> ()
// Parameters:
//		struct FString                                     Option                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UComboBoxString::AddOption(const struct FString& Option)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.AddOption");

	UComboBoxString_AddOption_Params params {};
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.DragDropOperation.Drop
//		Flags  -> ()
// Parameters:
//		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UDragDropOperation::Drop(const struct FPointerEvent& PointerEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.Drop");

	UDragDropOperation_Drop_Params params {};
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.DragDropOperation.Dragged
//		Flags  -> ()
// Parameters:
//		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UDragDropOperation::Dragged(const struct FPointerEvent& PointerEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.Dragged");

	UDragDropOperation_Dragged_Params params {};
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.DragDropOperation.DragCancelled
//		Flags  -> ()
// Parameters:
//		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UDragDropOperation::DragCancelled(const struct FPointerEvent& PointerEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.DragCancelled");

	UDragDropOperation_DragCancelled_Params params {};
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.DynamicEntryBoxBase.SetRadialSettings
//		Flags  -> ()
// Parameters:
//		struct FRadialBoxSettings                          InSettings                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UDynamicEntryBoxBase::SetRadialSettings(const struct FRadialBoxSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.SetRadialSettings");

	UDynamicEntryBoxBase_SetRadialSettings_Params params {};
	params.InSettings = InSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.DynamicEntryBoxBase.SetEntrySpacing
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   InEntrySpacing                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDynamicEntryBoxBase::SetEntrySpacing(const struct FVector2D& InEntrySpacing)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.SetEntrySpacing");

	UDynamicEntryBoxBase_SetEntrySpacing_Params params {};
	params.InEntrySpacing = InEntrySpacing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.DynamicEntryBoxBase.GetNumEntries
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UDynamicEntryBoxBase::GetNumEntries()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.GetNumEntries");

	UDynamicEntryBoxBase_GetNumEntries_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.DynamicEntryBoxBase.GetAllEntries
//		Flags  -> ()
// Parameters:
//		TArray<class UUserWidget*>                         ReturnValue                                                (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
TArray<class UUserWidget*> UDynamicEntryBoxBase::GetAllEntries()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.GetAllEntries");

	UDynamicEntryBoxBase_GetAllEntries_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.DynamicEntryBox.Reset
//		Flags  -> ()
// Parameters:
//		bool                                               bDeleteWidgets                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDynamicEntryBox::Reset(bool bDeleteWidgets)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.Reset");

	UDynamicEntryBox_Reset_Params params {};
	params.bDeleteWidgets = bDeleteWidgets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.DynamicEntryBox.RemoveEntry
//		Flags  -> ()
// Parameters:
//		class UUserWidget*                                 EntryWidget                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDynamicEntryBox::RemoveEntry(class UUserWidget* EntryWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.RemoveEntry");

	UDynamicEntryBox_RemoveEntry_Params params {};
	params.EntryWidget = EntryWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.DynamicEntryBox.BP_CreateEntryOfClass
//		Flags  -> ()
// Parameters:
//		class UClass*                                      EntryClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUserWidget*                                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUserWidget* UDynamicEntryBox::BP_CreateEntryOfClass(class UClass* EntryClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.BP_CreateEntryOfClass");

	UDynamicEntryBox_BP_CreateEntryOfClass_Params params {};
	params.EntryClass = EntryClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.DynamicEntryBox.BP_CreateEntry
//		Flags  -> ()
// Parameters:
//		class UUserWidget*                                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUserWidget* UDynamicEntryBox::BP_CreateEntry()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.BP_CreateEntry");

	UDynamicEntryBox_BP_CreateEntry_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.EditableText.SetText
//		Flags  -> ()
// Parameters:
//		struct FText                                       InText                                                     (Parm, NativeAccessSpecifierPublic)
void UEditableText::SetText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetText");

	UEditableText_SetText_Params params {};
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.EditableText.SetJustification
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<Slate_ETextJustify>                    InJustification                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableText::SetJustification(TEnumAsByte<Slate_ETextJustify> InJustification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetJustification");

	UEditableText_SetJustification_Params params {};
	params.InJustification = InJustification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.EditableText.SetIsReadOnly
//		Flags  -> ()
// Parameters:
//		bool                                               InbIsReadyOnly                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableText::SetIsReadOnly(bool InbIsReadyOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetIsReadOnly");

	UEditableText_SetIsReadOnly_Params params {};
	params.InbIsReadyOnly = InbIsReadyOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.EditableText.SetIsPassword
//		Flags  -> ()
// Parameters:
//		bool                                               InbIsPassword                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableText::SetIsPassword(bool InbIsPassword)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetIsPassword");

	UEditableText_SetIsPassword_Params params {};
	params.InbIsPassword = InbIsPassword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.EditableText.SetHintText
//		Flags  -> ()
// Parameters:
//		struct FText                                       InHintText                                                 (Parm, NativeAccessSpecifierPublic)
void UEditableText::SetHintText(const struct FText& InHintText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetHintText");

	UEditableText_SetHintText_Params params {};
	params.InHintText = InHintText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableText::OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature");

	UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Params params {};
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UEditableText::OnEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature");

	UEditableText_OnEditableTextChangedEvent__DelegateSignature_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.EditableText.GetText
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UEditableText::GetText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.EditableText.GetText");

	UEditableText_GetText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.EditableTextBox.SetText
//		Flags  -> ()
// Parameters:
//		struct FText                                       InText                                                     (Parm, NativeAccessSpecifierPublic)
void UEditableTextBox::SetText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetText");

	UEditableTextBox_SetText_Params params {};
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.EditableTextBox.SetJustification
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<Slate_ETextJustify>                    InJustification                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableTextBox::SetJustification(TEnumAsByte<Slate_ETextJustify> InJustification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetJustification");

	UEditableTextBox_SetJustification_Params params {};
	params.InJustification = InJustification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.EditableTextBox.SetIsReadOnly
//		Flags  -> ()
// Parameters:
//		bool                                               bReadOnly                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableTextBox::SetIsReadOnly(bool bReadOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetIsReadOnly");

	UEditableTextBox_SetIsReadOnly_Params params {};
	params.bReadOnly = bReadOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.EditableTextBox.SetIsPassword
//		Flags  -> ()
// Parameters:
//		bool                                               bIsPassword                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableTextBox::SetIsPassword(bool bIsPassword)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetIsPassword");

	UEditableTextBox_SetIsPassword_Params params {};
	params.bIsPassword = bIsPassword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.EditableTextBox.SetHintText
//		Flags  -> ()
// Parameters:
//		struct FText                                       InText                                                     (Parm, NativeAccessSpecifierPublic)
void UEditableTextBox::SetHintText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetHintText");

	UEditableTextBox_SetHintText_Params params {};
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.EditableTextBox.SetError
//		Flags  -> ()
// Parameters:
//		struct FText                                       InError                                                    (Parm, NativeAccessSpecifierPublic)
void UEditableTextBox::SetError(const struct FText& InError)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetError");

	UEditableTextBox_SetError_Params params {};
	params.InError = InError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UEditableTextBox::OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature");

	UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UEditableTextBox::OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature");

	UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.EditableTextBox.HasError
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UEditableTextBox::HasError()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.HasError");

	UEditableTextBox_HasError_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.EditableTextBox.GetText
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UEditableTextBox::GetText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.GetText");

	UEditableTextBox_GetText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.EditableTextBox.ClearError
//		Flags  -> ()
void UEditableTextBox::ClearError()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.ClearError");

	UEditableTextBox_ClearError_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ExpandableArea.SetIsExpanded_Animated
//		Flags  -> ()
// Parameters:
//		bool                                               IsExpanded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UExpandableArea::SetIsExpanded_Animated(bool IsExpanded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.SetIsExpanded_Animated");

	UExpandableArea_SetIsExpanded_Animated_Params params {};
	params.IsExpanded = IsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ExpandableArea.SetIsExpanded
//		Flags  -> ()
// Parameters:
//		bool                                               IsExpanded                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UExpandableArea::SetIsExpanded(bool IsExpanded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.SetIsExpanded");

	UExpandableArea_SetIsExpanded_Params params {};
	params.IsExpanded = IsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ExpandableArea.GetIsExpanded
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UExpandableArea::GetIsExpanded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.GetIsExpanded");

	UExpandableArea_GetIsExpanded_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.FloatBinding.GetValue
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UFloatBinding::GetValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.FloatBinding.GetValue");

	UFloatBinding_GetValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.GridPanel.SetRowFill
//		Flags  -> ()
// Parameters:
//		int                                                ColumnIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Coefficient                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridPanel::SetRowFill(int ColumnIndex, float Coefficient)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.GridPanel.SetRowFill");

	UGridPanel_SetRowFill_Params params {};
	params.ColumnIndex = ColumnIndex;
	params.Coefficient = Coefficient;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.GridPanel.SetColumnFill
//		Flags  -> ()
// Parameters:
//		int                                                ColumnIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Coefficient                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridPanel::SetColumnFill(int ColumnIndex, float Coefficient)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.GridPanel.SetColumnFill");

	UGridPanel_SetColumnFill_Params params {};
	params.ColumnIndex = ColumnIndex;
	params.Coefficient = Coefficient;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.GridPanel.AddChildToGrid
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                InRow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                InColumn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UGridSlot*                                   ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGridSlot* UGridPanel::AddChildToGrid(class UWidget* Content, int InRow, int InColumn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.GridPanel.AddChildToGrid");

	UGridPanel_AddChildToGrid_Params params {};
	params.Content = Content;
	params.InRow = InRow;
	params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.GridSlot.SetVerticalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetVerticalAlignment");

	UGridSlot_SetVerticalAlignment_Params params {};
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.GridSlot.SetRowSpan
//		Flags  -> ()
// Parameters:
//		int                                                InRowSpan                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridSlot::SetRowSpan(int InRowSpan)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetRowSpan");

	UGridSlot_SetRowSpan_Params params {};
	params.InRowSpan = InRowSpan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.GridSlot.SetRow
//		Flags  -> ()
// Parameters:
//		int                                                InRow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridSlot::SetRow(int InRow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetRow");

	UGridSlot_SetRow_Params params {};
	params.InRow = InRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.GridSlot.SetPadding
//		Flags  -> ()
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UGridSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetPadding");

	UGridSlot_SetPadding_Params params {};
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.GridSlot.SetNudge
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   InNudge                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridSlot::SetNudge(const struct FVector2D& InNudge)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetNudge");

	UGridSlot_SetNudge_Params params {};
	params.InNudge = InNudge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.GridSlot.SetLayer
//		Flags  -> ()
// Parameters:
//		int                                                InLayer                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridSlot::SetLayer(int InLayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetLayer");

	UGridSlot_SetLayer_Params params {};
	params.InLayer = InLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.GridSlot.SetHorizontalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetHorizontalAlignment");

	UGridSlot_SetHorizontalAlignment_Params params {};
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.GridSlot.SetColumnSpan
//		Flags  -> ()
// Parameters:
//		int                                                InColumnSpan                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridSlot::SetColumnSpan(int InColumnSpan)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetColumnSpan");

	UGridSlot_SetColumnSpan_Params params {};
	params.InColumnSpan = InColumnSpan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.GridSlot.SetColumn
//		Flags  -> ()
// Parameters:
//		int                                                InColumn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGridSlot::SetColumn(int InColumn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetColumn");

	UGridSlot_SetColumn_Params params {};
	params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.HorizontalBox.AddChildToHorizontalBox
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UHorizontalBoxSlot*                          ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHorizontalBoxSlot* UHorizontalBox::AddChildToHorizontalBox(class UWidget* Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBox.AddChildToHorizontalBox");

	UHorizontalBox_AddChildToHorizontalBox_Params params {};
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.HorizontalBoxSlot.SetVerticalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHorizontalBoxSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetVerticalAlignment");

	UHorizontalBoxSlot_SetVerticalAlignment_Params params {};
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.HorizontalBoxSlot.SetSize
//		Flags  -> ()
// Parameters:
//		struct FSlateChildSize                             InSize                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UHorizontalBoxSlot::SetSize(const struct FSlateChildSize& InSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetSize");

	UHorizontalBoxSlot_SetSize_Params params {};
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.HorizontalBoxSlot.SetPadding
//		Flags  -> ()
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UHorizontalBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetPadding");

	UHorizontalBoxSlot_SetPadding_Params params {};
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UHorizontalBoxSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetHorizontalAlignment");

	UHorizontalBoxSlot_SetHorizontalAlignment_Params params {};
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.InputKeySelector.SetTextBlockVisibility
//		Flags  -> ()
// Parameters:
//		UMG_ESlateVisibility                               InVisibility                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInputKeySelector::SetTextBlockVisibility(UMG_ESlateVisibility InVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetTextBlockVisibility");

	UInputKeySelector_SetTextBlockVisibility_Params params {};
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.InputKeySelector.SetSelectedKey
//		Flags  -> ()
// Parameters:
//		struct FInputChord                                 InSelectedKey                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInputKeySelector::SetSelectedKey(const struct FInputChord& InSelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetSelectedKey");

	UInputKeySelector_SetSelectedKey_Params params {};
	params.InSelectedKey = InSelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.InputKeySelector.SetNoKeySpecifiedText
//		Flags  -> ()
// Parameters:
//		struct FText                                       InNoKeySpecifiedText                                       (Parm, NativeAccessSpecifierPublic)
void UInputKeySelector::SetNoKeySpecifiedText(const struct FText& InNoKeySpecifiedText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetNoKeySpecifiedText");

	UInputKeySelector_SetNoKeySpecifiedText_Params params {};
	params.InNoKeySpecifiedText = InNoKeySpecifiedText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.InputKeySelector.SetKeySelectionText
//		Flags  -> ()
// Parameters:
//		struct FText                                       InKeySelectionText                                         (Parm, NativeAccessSpecifierPublic)
void UInputKeySelector::SetKeySelectionText(const struct FText& InKeySelectionText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetKeySelectionText");

	UInputKeySelector_SetKeySelectionText_Params params {};
	params.InKeySelectionText = InKeySelectionText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.InputKeySelector.SetEscapeKeys
//		Flags  -> ()
// Parameters:
//		TArray<struct FKey>                                InKeys                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UInputKeySelector::SetEscapeKeys(TArray<struct FKey> InKeys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetEscapeKeys");

	UInputKeySelector_SetEscapeKeys_Params params {};
	params.InKeys = InKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.InputKeySelector.SetAllowModifierKeys
//		Flags  -> ()
// Parameters:
//		bool                                               bInAllowModifierKeys                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInputKeySelector::SetAllowModifierKeys(bool bInAllowModifierKeys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetAllowModifierKeys");

	UInputKeySelector_SetAllowModifierKeys_Params params {};
	params.bInAllowModifierKeys = bInAllowModifierKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.InputKeySelector.SetAllowGamepadKeys
//		Flags  -> ()
// Parameters:
//		bool                                               bInAllowGamepadKeys                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInputKeySelector::SetAllowGamepadKeys(bool bInAllowGamepadKeys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetAllowGamepadKeys");

	UInputKeySelector_SetAllowGamepadKeys_Params params {};
	params.bInAllowGamepadKeys = bInAllowGamepadKeys;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FInputChord                                 SelectedKey                                                (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInputKeySelector::OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature");

	UInputKeySelector_OnKeySelected__DelegateSignature_Params params {};
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
//		Flags  -> ()
void UInputKeySelector::OnIsSelectingKeyChanged__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature");

	UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.InputKeySelector.GetIsSelectingKey
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInputKeySelector::GetIsSelectingKey()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.GetIsSelectingKey");

	UInputKeySelector_GetIsSelectingKey_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Int32Binding.GetValue
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UInt32Binding::GetValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Int32Binding.GetValue");

	UInt32Binding_GetValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.InvalidationBox.SetCanCache
//		Flags  -> ()
// Parameters:
//		bool                                               CanCache                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UInvalidationBox::SetCanCache(bool CanCache)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.InvalidationBox.SetCanCache");

	UInvalidationBox_SetCanCache_Params params {};
	params.CanCache = CanCache;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.InvalidationBox.InvalidateCache
//		Flags  -> ()
void UInvalidationBox::InvalidateCache()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.InvalidationBox.InvalidateCache");

	UInvalidationBox_InvalidateCache_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.InvalidationBox.GetCanCache
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UInvalidationBox::GetCanCache()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.InvalidationBox.GetCanCache");

	UInvalidationBox_GetCanCache_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserListEntry.BP_OnItemSelectionChanged
//		Flags  -> ()
// Parameters:
//		bool                                               bIsSelected                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserListEntry::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserListEntry.BP_OnItemSelectionChanged");

	UUserListEntry_BP_OnItemSelectionChanged_Params params {};
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserListEntry.BP_OnItemExpansionChanged
//		Flags  -> ()
// Parameters:
//		bool                                               bIsExpanded                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserListEntry::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserListEntry.BP_OnItemExpansionChanged");

	UUserListEntry_BP_OnItemExpansionChanged_Params params {};
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserListEntry.BP_OnEntryReleased
//		Flags  -> ()
void UUserListEntry::BP_OnEntryReleased()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserListEntry.BP_OnEntryReleased");

	UUserListEntry_BP_OnEntryReleased_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserListEntryLibrary.IsListItemSelected
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserListEntryLibrary::IsListItemSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserListEntryLibrary.IsListItemSelected");

	UUserListEntryLibrary_IsListItemSelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserListEntryLibrary.IsListItemExpanded
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UUserListEntryLibrary::IsListItemExpanded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserListEntryLibrary.IsListItemExpanded");

	UUserListEntryLibrary_IsListItemExpanded_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserListEntryLibrary.GetOwningListView
//		Flags  -> ()
// Parameters:
//		class UListViewBase*                               ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UListViewBase* UUserListEntryLibrary::GetOwningListView()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserListEntryLibrary.GetOwningListView");

	UUserListEntryLibrary_GetOwningListView_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserObjectListEntry.OnListItemObjectSet
//		Flags  -> ()
// Parameters:
//		class UObject*                                     ListItemObject                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUserObjectListEntry::OnListItemObjectSet(class UObject* ListItemObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserObjectListEntry.OnListItemObjectSet");

	UUserObjectListEntry_OnListItemObjectSet_Params params {};
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UserObjectListEntryLibrary.GetListItemObject
//		Flags  -> ()
// Parameters:
//		class UObject*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UUserObjectListEntryLibrary::GetListItemObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UserObjectListEntryLibrary.GetListItemObject");

	UUserObjectListEntryLibrary_GetListItemObject_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListViewBase.SetWheelScrollMultiplier
//		Flags  -> ()
// Parameters:
//		float                                              NewWheelScrollMultiplier                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListViewBase::SetWheelScrollMultiplier(float NewWheelScrollMultiplier)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.SetWheelScrollMultiplier");

	UListViewBase_SetWheelScrollMultiplier_Params params {};
	params.NewWheelScrollMultiplier = NewWheelScrollMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListViewBase.SetScrollOffset
//		Flags  -> ()
// Parameters:
//		float                                              InScrollOffset                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListViewBase::SetScrollOffset(float InScrollOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.SetScrollOffset");

	UListViewBase_SetScrollOffset_Params params {};
	params.InScrollOffset = InScrollOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListViewBase.SetScrollbarVisibility
//		Flags  -> ()
// Parameters:
//		UMG_ESlateVisibility                               InVisibility                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListViewBase::SetScrollbarVisibility(UMG_ESlateVisibility InVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.SetScrollbarVisibility");

	UListViewBase_SetScrollbarVisibility_Params params {};
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListViewBase.ScrollToTop
//		Flags  -> ()
void UListViewBase::ScrollToTop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.ScrollToTop");

	UListViewBase_ScrollToTop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListViewBase.ScrollToBottom
//		Flags  -> ()
void UListViewBase::ScrollToBottom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.ScrollToBottom");

	UListViewBase_ScrollToBottom_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListViewBase.RequestRefresh
//		Flags  -> ()
void UListViewBase::RequestRefresh()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.RequestRefresh");

	UListViewBase_RequestRefresh_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListViewBase.RegenerateAllEntries
//		Flags  -> ()
void UListViewBase::RegenerateAllEntries()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.RegenerateAllEntries");

	UListViewBase_RegenerateAllEntries_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListViewBase.GetDisplayedEntryWidgets
//		Flags  -> ()
// Parameters:
//		TArray<class UUserWidget*>                         ReturnValue                                                (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
TArray<class UUserWidget*> UListViewBase::GetDisplayedEntryWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.GetDisplayedEntryWidgets");

	UListViewBase_GetDisplayedEntryWidgets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListView.SetSelectionMode
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<Slate_ESelectionMode>                  SelectionMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListView::SetSelectionMode(TEnumAsByte<Slate_ESelectionMode> SelectionMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListView.SetSelectionMode");

	UListView_SetSelectionMode_Params params {};
	params.SelectionMode = SelectionMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListView.SetSelectedIndex
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListView::SetSelectedIndex(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListView.SetSelectedIndex");

	UListView_SetSelectedIndex_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListView.ScrollIndexIntoView
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListView::ScrollIndexIntoView(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListView.ScrollIndexIntoView");

	UListView_ScrollIndexIntoView_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListView.RemoveItem
//		Flags  -> ()
// Parameters:
//		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListView::RemoveItem(class UObject* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListView.RemoveItem");

	UListView_RemoveItem_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListView.NavigateToIndex
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListView::NavigateToIndex(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListView.NavigateToIndex");

	UListView_NavigateToIndex_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListView.IsRefreshPending
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UListView::IsRefreshPending()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListView.IsRefreshPending");

	UListView_IsRefreshPending_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListView.GetNumItems
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UListView::GetNumItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetNumItems");

	UListView_GetNumItems_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListView.GetListItems
//		Flags  -> ()
// Parameters:
//		TArray<class UObject*>                             ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<class UObject*> UListView::GetListItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetListItems");

	UListView_GetListItems_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListView.GetItemAt
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UListView::GetItemAt(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetItemAt");

	UListView_GetItemAt_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListView.GetIndexForItem
//		Flags  -> ()
// Parameters:
//		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UListView::GetIndexForItem(class UObject* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetIndexForItem");

	UListView_GetIndexForItem_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListView.ClearListItems
//		Flags  -> ()
void UListView::ClearListItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListView.ClearListItems");

	UListView_ClearListItems_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListView.BP_SetSelectedItem
//		Flags  -> ()
// Parameters:
//		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListView::BP_SetSelectedItem(class UObject* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_SetSelectedItem");

	UListView_BP_SetSelectedItem_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListView.BP_SetListItems
//		Flags  -> ()
// Parameters:
//		TArray<class UObject*>                             InListItems                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void UListView::BP_SetListItems(TArray<class UObject*> InListItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_SetListItems");

	UListView_BP_SetListItems_Params params {};
	params.InListItems = InListItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListView.BP_SetItemSelection
//		Flags  -> ()
// Parameters:
//		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bSelected                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListView::BP_SetItemSelection(class UObject* Item, bool bSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_SetItemSelection");

	UListView_BP_SetItemSelection_Params params {};
	params.Item = Item;
	params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListView.BP_ScrollItemIntoView
//		Flags  -> ()
// Parameters:
//		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListView::BP_ScrollItemIntoView(class UObject* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_ScrollItemIntoView");

	UListView_BP_ScrollItemIntoView_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListView.BP_NavigateToItem
//		Flags  -> ()
// Parameters:
//		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListView::BP_NavigateToItem(class UObject* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_NavigateToItem");

	UListView_BP_NavigateToItem_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListView.BP_IsItemVisible
//		Flags  -> ()
// Parameters:
//		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UListView::BP_IsItemVisible(class UObject* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_IsItemVisible");

	UListView_BP_IsItemVisible_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListView.BP_GetSelectedItems
//		Flags  -> ()
// Parameters:
//		TArray<class UObject*>                             items                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UListView::BP_GetSelectedItems(TArray<class UObject*>* items)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_GetSelectedItems");

	UListView_BP_GetSelectedItems_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (items != nullptr)
		*items = params.items;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListView.BP_GetSelectedItem
//		Flags  -> ()
// Parameters:
//		class UObject*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UListView::BP_GetSelectedItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_GetSelectedItem");

	UListView_BP_GetSelectedItem_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListView.BP_GetNumItemsSelected
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UListView::BP_GetNumItemsSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_GetNumItemsSelected");

	UListView_BP_GetNumItemsSelected_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListView.BP_ClearSelection
//		Flags  -> ()
void UListView::BP_ClearSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_ClearSelection");

	UListView_BP_ClearSelection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListView.BP_CancelScrollIntoView
//		Flags  -> ()
void UListView::BP_CancelScrollIntoView()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_CancelScrollIntoView");

	UListView_BP_CancelScrollIntoView_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ListView.AddItem
//		Flags  -> ()
// Parameters:
//		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UListView::AddItem(class UObject* Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ListView.AddItem");

	UListView_AddItem_Params params {};
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.MenuAnchor.ToggleOpen
//		Flags  -> ()
// Parameters:
//		bool                                               bFocusOnOpen                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMenuAnchor::ToggleOpen(bool bFocusOnOpen)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.ToggleOpen");

	UMenuAnchor_ToggleOpen_Params params {};
	params.bFocusOnOpen = bFocusOnOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.MenuAnchor.ShouldOpenDueToClick
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMenuAnchor::ShouldOpenDueToClick()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.ShouldOpenDueToClick");

	UMenuAnchor_ShouldOpenDueToClick_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.MenuAnchor.SetPlacement
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EMenuPlacement>              InPlacement                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMenuAnchor::SetPlacement(TEnumAsByte<SlateCore_EMenuPlacement> InPlacement)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.SetPlacement");

	UMenuAnchor_SetPlacement_Params params {};
	params.InPlacement = InPlacement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.MenuAnchor.Open
//		Flags  -> ()
// Parameters:
//		bool                                               bFocusMenu                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMenuAnchor::Open(bool bFocusMenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.Open");

	UMenuAnchor_Open_Params params {};
	params.bFocusMenu = bFocusMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.MenuAnchor.IsOpen
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMenuAnchor::IsOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.IsOpen");

	UMenuAnchor_IsOpen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.MenuAnchor.HasOpenSubMenus
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMenuAnchor::HasOpenSubMenus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.HasOpenSubMenus");

	UMenuAnchor_HasOpenSubMenus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature
//		Flags  -> ()
// Parameters:
//		class UUserWidget*                                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUserWidget* UMenuAnchor::GetUserWidget__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature");

	UMenuAnchor_GetUserWidget__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.MenuAnchor.GetMenuPosition
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UMenuAnchor::GetMenuPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.GetMenuPosition");

	UMenuAnchor_GetMenuPosition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.MenuAnchor.FitInWindow
//		Flags  -> ()
// Parameters:
//		bool                                               bFit                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMenuAnchor::FitInWindow(bool bFit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.FitInWindow");

	UMenuAnchor_FitInWindow_Params params {};
	params.bFit = bFit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.MenuAnchor.Close
//		Flags  -> ()
void UMenuAnchor::Close()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.Close");

	UMenuAnchor_Close_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.MouseCursorBinding.GetValue
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<CoreUObject_EMouseCursor>              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TEnumAsByte<CoreUObject_EMouseCursor> UMouseCursorBinding::GetValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MouseCursorBinding.GetValue");

	UMouseCursorBinding_GetValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.MultiLineEditableText.SetWidgetStyle
//		Flags  -> ()
// Parameters:
//		struct FTextBlockStyle                             InWidgetStyle                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UMultiLineEditableText::SetWidgetStyle(const struct FTextBlockStyle& InWidgetStyle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetWidgetStyle");

	UMultiLineEditableText_SetWidgetStyle_Params params {};
	params.InWidgetStyle = InWidgetStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.MultiLineEditableText.SetText
//		Flags  -> ()
// Parameters:
//		struct FText                                       InText                                                     (Parm, NativeAccessSpecifierPublic)
void UMultiLineEditableText::SetText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetText");

	UMultiLineEditableText_SetText_Params params {};
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.MultiLineEditableText.SetIsReadOnly
//		Flags  -> ()
// Parameters:
//		bool                                               bReadOnly                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiLineEditableText::SetIsReadOnly(bool bReadOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetIsReadOnly");

	UMultiLineEditableText_SetIsReadOnly_Params params {};
	params.bReadOnly = bReadOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.MultiLineEditableText.SetHintText
//		Flags  -> ()
// Parameters:
//		struct FText                                       InHintText                                                 (Parm, NativeAccessSpecifierPublic)
void UMultiLineEditableText::SetHintText(const struct FText& InHintText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetHintText");

	UMultiLineEditableText_SetHintText_Params params {};
	params.InHintText = InHintText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiLineEditableText::OnMultiLineEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature");

	UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params params {};
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UMultiLineEditableText::OnMultiLineEditableTextChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature");

	UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.MultiLineEditableText.GetText
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UMultiLineEditableText::GetText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.GetText");

	UMultiLineEditableText_GetText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.MultiLineEditableText.GetHintText
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UMultiLineEditableText::GetHintText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.GetHintText");

	UMultiLineEditableText_GetHintText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.MultiLineEditableTextBox.SetTextStyle
//		Flags  -> ()
// Parameters:
//		struct FTextBlockStyle                             InTextStyle                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UMultiLineEditableTextBox::SetTextStyle(const struct FTextBlockStyle& InTextStyle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetTextStyle");

	UMultiLineEditableTextBox_SetTextStyle_Params params {};
	params.InTextStyle = InTextStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.MultiLineEditableTextBox.SetText
//		Flags  -> ()
// Parameters:
//		struct FText                                       InText                                                     (Parm, NativeAccessSpecifierPublic)
void UMultiLineEditableTextBox::SetText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetText");

	UMultiLineEditableTextBox_SetText_Params params {};
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.MultiLineEditableTextBox.SetIsReadOnly
//		Flags  -> ()
// Parameters:
//		bool                                               bReadOnly                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiLineEditableTextBox::SetIsReadOnly(bool bReadOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetIsReadOnly");

	UMultiLineEditableTextBox_SetIsReadOnly_Params params {};
	params.bReadOnly = bReadOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.MultiLineEditableTextBox.SetHintText
//		Flags  -> ()
// Parameters:
//		struct FText                                       InHintText                                                 (Parm, NativeAccessSpecifierPublic)
void UMultiLineEditableTextBox::SetHintText(const struct FText& InHintText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetHintText");

	UMultiLineEditableTextBox_SetHintText_Params params {};
	params.InHintText = InHintText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.MultiLineEditableTextBox.SetError
//		Flags  -> ()
// Parameters:
//		struct FText                                       InError                                                    (Parm, NativeAccessSpecifierPublic)
void UMultiLineEditableTextBox::SetError(const struct FText& InError)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetError");

	UMultiLineEditableTextBox_SetError_Params params {};
	params.InError = InError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");

	UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params params {};
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.MultiLineEditableTextBox.GetText
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UMultiLineEditableTextBox::GetText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.GetText");

	UMultiLineEditableTextBox_GetText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.MultiLineEditableTextBox.GetHintText
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UMultiLineEditableTextBox::GetHintText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.GetHintText");

	UMultiLineEditableTextBox_GetHintText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Overlay.AddChildToOverlay
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UOverlaySlot*                                ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UOverlaySlot* UOverlay::AddChildToOverlay(class UWidget* Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Overlay.AddChildToOverlay");

	UOverlay_AddChildToOverlay_Params params {};
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.OverlaySlot.SetVerticalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOverlaySlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetVerticalAlignment");

	UOverlaySlot_SetVerticalAlignment_Params params {};
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.OverlaySlot.SetPadding
//		Flags  -> ()
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UOverlaySlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetPadding");

	UOverlaySlot_SetPadding_Params params {};
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.OverlaySlot.SetHorizontalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UOverlaySlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetHorizontalAlignment");

	UOverlaySlot_SetHorizontalAlignment_Params params {};
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ProgressBar.SetPercent
//		Flags  -> ()
// Parameters:
//		float                                              InPercent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProgressBar::SetPercent(float InPercent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetPercent");

	UProgressBar_SetPercent_Params params {};
	params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ProgressBar.SetIsMarquee
//		Flags  -> ()
// Parameters:
//		bool                                               InbIsMarquee                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProgressBar::SetIsMarquee(bool InbIsMarquee)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetIsMarquee");

	UProgressBar_SetIsMarquee_Params params {};
	params.InbIsMarquee = InbIsMarquee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.ProgressBar.SetFillColorAndOpacity
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                InColor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UProgressBar::SetFillColorAndOpacity(const struct FLinearColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetFillColorAndOpacity");

	UProgressBar_SetFillColorAndOpacity_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.RetainerBox.SetTextureParameter
//		Flags  -> ()
// Parameters:
//		struct FName                                       TextureParameter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URetainerBox::SetTextureParameter(const struct FName& TextureParameter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetTextureParameter");

	URetainerBox_SetTextureParameter_Params params {};
	params.TextureParameter = TextureParameter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.RetainerBox.SetRetainRendering
//		Flags  -> ()
// Parameters:
//		bool                                               bInRetainRendering                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URetainerBox::SetRetainRendering(bool bInRetainRendering)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetRetainRendering");

	URetainerBox_SetRetainRendering_Params params {};
	params.bInRetainRendering = bInRetainRendering;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.RetainerBox.SetRenderingPhase
//		Flags  -> ()
// Parameters:
//		int                                                RenderPhase                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TotalPhases                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URetainerBox::SetRenderingPhase(int RenderPhase, int TotalPhases)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetRenderingPhase");

	URetainerBox_SetRenderingPhase_Params params {};
	params.RenderPhase = RenderPhase;
	params.TotalPhases = TotalPhases;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.RetainerBox.SetEffectMaterial
//		Flags  -> ()
// Parameters:
//		class UMaterialInterface*                          EffectMaterial                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void URetainerBox::SetEffectMaterial(class UMaterialInterface* EffectMaterial)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetEffectMaterial");

	URetainerBox_SetEffectMaterial_Params params {};
	params.EffectMaterial = EffectMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.RetainerBox.RequestRender
//		Flags  -> ()
void URetainerBox::RequestRender()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.RequestRender");

	URetainerBox_RequestRender_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.RetainerBox.GetEffectMaterial
//		Flags  -> ()
// Parameters:
//		class UMaterialInstanceDynamic*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* URetainerBox::GetEffectMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.GetEffectMaterial");

	URetainerBox_GetEffectMaterial_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SafeZone.SetSidesToPad
//		Flags  -> ()
// Parameters:
//		bool                                               InPadLeft                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               InPadRight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               InPadTop                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               InPadBottom                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USafeZone::SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SafeZone.SetSidesToPad");

	USafeZone_SetSidesToPad_Params params {};
	params.InPadLeft = InPadLeft;
	params.InPadRight = InPadRight;
	params.InPadTop = InPadTop;
	params.InPadBottom = InPadBottom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Slider.SetValue
//		Flags  -> ()
// Parameters:
//		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlider::SetValue(float InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetValue");

	USlider_SetValue_Params params {};
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Slider.SetStepSize
//		Flags  -> ()
// Parameters:
//		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlider::SetStepSize(float InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetStepSize");

	USlider_SetStepSize_Params params {};
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Slider.SetSliderHandleColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlider::SetSliderHandleColor(const struct FLinearColor& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetSliderHandleColor");

	USlider_SetSliderHandleColor_Params params {};
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Slider.SetSliderBarColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlider::SetSliderBarColor(const struct FLinearColor& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetSliderBarColor");

	USlider_SetSliderBarColor_Params params {};
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Slider.SetMinValue
//		Flags  -> ()
// Parameters:
//		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlider::SetMinValue(float InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetMinValue");

	USlider_SetMinValue_Params params {};
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Slider.SetMaxValue
//		Flags  -> ()
// Parameters:
//		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlider::SetMaxValue(float InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetMaxValue");

	USlider_SetMaxValue_Params params {};
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Slider.SetLocked
//		Flags  -> ()
// Parameters:
//		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlider::SetLocked(bool InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetLocked");

	USlider_SetLocked_Params params {};
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Slider.SetIndentHandle
//		Flags  -> ()
// Parameters:
//		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USlider::SetIndentHandle(bool InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetIndentHandle");

	USlider_SetIndentHandle_Params params {};
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Slider.GetValue
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USlider::GetValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Slider.GetValue");

	USlider_GetValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Slider.GetNormalizedValue
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USlider::GetNormalizedValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Slider.GetNormalizedValue");

	USlider_GetNormalizedValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Spacer.SetSize
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   InSize                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpacer::SetSize(const struct FVector2D& InSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Spacer.SetSize");

	USpacer_SetSize_Params params {};
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SpinBox.SetValue
//		Flags  -> ()
// Parameters:
//		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::SetValue(float NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetValue");

	USpinBox_SetValue_Params params {};
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SpinBox.SetMinValue
//		Flags  -> ()
// Parameters:
//		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::SetMinValue(float NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinValue");

	USpinBox_SetMinValue_Params params {};
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SpinBox.SetMinSliderValue
//		Flags  -> ()
// Parameters:
//		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::SetMinSliderValue(float NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinSliderValue");

	USpinBox_SetMinSliderValue_Params params {};
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SpinBox.SetMinFractionalDigits
//		Flags  -> ()
// Parameters:
//		int                                                NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::SetMinFractionalDigits(int NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinFractionalDigits");

	USpinBox_SetMinFractionalDigits_Params params {};
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SpinBox.SetMaxValue
//		Flags  -> ()
// Parameters:
//		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::SetMaxValue(float NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxValue");

	USpinBox_SetMaxValue_Params params {};
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SpinBox.SetMaxSliderValue
//		Flags  -> ()
// Parameters:
//		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::SetMaxSliderValue(float NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxSliderValue");

	USpinBox_SetMaxSliderValue_Params params {};
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SpinBox.SetMaxFractionalDigits
//		Flags  -> ()
// Parameters:
//		int                                                NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::SetMaxFractionalDigits(int NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxFractionalDigits");

	USpinBox_SetMaxFractionalDigits_Params params {};
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SpinBox.SetForegroundColor
//		Flags  -> ()
// Parameters:
//		struct FSlateColor                                 InForegroundColor                                          (Parm, NativeAccessSpecifierPublic)
void USpinBox::SetForegroundColor(const struct FSlateColor& InForegroundColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetForegroundColor");

	USpinBox_SetForegroundColor_Params params {};
	params.InForegroundColor = InForegroundColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SpinBox.SetDelta
//		Flags  -> ()
// Parameters:
//		float                                              NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::SetDelta(float NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetDelta");

	USpinBox_SetDelta_Params params {};
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SpinBox.SetAlwaysUsesDeltaSnap
//		Flags  -> ()
// Parameters:
//		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::SetAlwaysUsesDeltaSnap(bool bNewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetAlwaysUsesDeltaSnap");

	USpinBox_SetAlwaysUsesDeltaSnap_Params params {};
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature");

	USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params params {};
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
//		Flags  -> ()
// Parameters:
//		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USpinBox::OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature");

	USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params params {};
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
//		Flags  -> ()
void USpinBox::OnSpinBoxBeginSliderMovement__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature");

	USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SpinBox.GetValue
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpinBox::GetValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetValue");

	USpinBox_GetValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SpinBox.GetMinValue
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpinBox::GetMinValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinValue");

	USpinBox_GetMinValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SpinBox.GetMinSliderValue
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpinBox::GetMinSliderValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinSliderValue");

	USpinBox_GetMinSliderValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SpinBox.GetMinFractionalDigits
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USpinBox::GetMinFractionalDigits()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinFractionalDigits");

	USpinBox_GetMinFractionalDigits_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SpinBox.GetMaxValue
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpinBox::GetMaxValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxValue");

	USpinBox_GetMaxValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SpinBox.GetMaxSliderValue
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpinBox::GetMaxSliderValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxSliderValue");

	USpinBox_GetMaxSliderValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SpinBox.GetMaxFractionalDigits
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int USpinBox::GetMaxFractionalDigits()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxFractionalDigits");

	USpinBox_GetMaxFractionalDigits_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SpinBox.GetDelta
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float USpinBox::GetDelta()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetDelta");

	USpinBox_GetDelta_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SpinBox.GetAlwaysUsesDeltaSnap
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool USpinBox::GetAlwaysUsesDeltaSnap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetAlwaysUsesDeltaSnap");

	USpinBox_GetAlwaysUsesDeltaSnap_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SpinBox.ClearMinValue
//		Flags  -> ()
void USpinBox::ClearMinValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMinValue");

	USpinBox_ClearMinValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SpinBox.ClearMinSliderValue
//		Flags  -> ()
void USpinBox::ClearMinSliderValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMinSliderValue");

	USpinBox_ClearMinSliderValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SpinBox.ClearMaxValue
//		Flags  -> ()
void USpinBox::ClearMaxValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMaxValue");

	USpinBox_ClearMaxValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.SpinBox.ClearMaxSliderValue
//		Flags  -> ()
void USpinBox::ClearMaxSliderValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMaxSliderValue");

	USpinBox_ClearMaxSliderValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.TextBinding.GetTextValue
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UTextBinding::GetTextValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextBinding.GetTextValue");

	UTextBinding_GetTextValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.TextBinding.GetStringValue
//		Flags  -> ()
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UTextBinding::GetStringValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextBinding.GetStringValue");

	UTextBinding_GetStringValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.TextBlock.SetTextTransformPolicy
//		Flags  -> ()
// Parameters:
//		Slate_ETextTransformPolicy                         InTransformPolicy                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTextBlock::SetTextTransformPolicy(Slate_ETextTransformPolicy InTransformPolicy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetTextTransformPolicy");

	UTextBlock_SetTextTransformPolicy_Params params {};
	params.InTransformPolicy = InTransformPolicy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.TextBlock.SetText
//		Flags  -> ()
// Parameters:
//		struct FText                                       InText                                                     (Parm, NativeAccessSpecifierPublic)
void UTextBlock::SetText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetText");

	UTextBlock_SetText_Params params {};
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.TextBlock.SetStrikeBrush
//		Flags  -> ()
// Parameters:
//		struct FSlateBrush                                 InStrikeBrush                                              (Parm, NativeAccessSpecifierPublic)
void UTextBlock::SetStrikeBrush(const struct FSlateBrush& InStrikeBrush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetStrikeBrush");

	UTextBlock_SetStrikeBrush_Params params {};
	params.InStrikeBrush = InStrikeBrush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.TextBlock.SetShadowOffset
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   InShadowOffset                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTextBlock::SetShadowOffset(const struct FVector2D& InShadowOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetShadowOffset");

	UTextBlock_SetShadowOffset_Params params {};
	params.InShadowOffset = InShadowOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.TextBlock.SetShadowColorAndOpacity
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                InShadowColorAndOpacity                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTextBlock::SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetShadowColorAndOpacity");

	UTextBlock_SetShadowColorAndOpacity_Params params {};
	params.InShadowColorAndOpacity = InShadowColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.TextBlock.SetOpacity
//		Flags  -> ()
// Parameters:
//		float                                              InOpacity                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTextBlock::SetOpacity(float InOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetOpacity");

	UTextBlock_SetOpacity_Params params {};
	params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.TextBlock.SetMinDesiredWidth
//		Flags  -> ()
// Parameters:
//		float                                              InMinDesiredWidth                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTextBlock::SetMinDesiredWidth(float InMinDesiredWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetMinDesiredWidth");

	UTextBlock_SetMinDesiredWidth_Params params {};
	params.InMinDesiredWidth = InMinDesiredWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.TextBlock.SetFont
//		Flags  -> ()
// Parameters:
//		struct FSlateFontInfo                              InFontInfo                                                 (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTextBlock::SetFont(const struct FSlateFontInfo& InFontInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetFont");

	UTextBlock_SetFont_Params params {};
	params.InFontInfo = InFontInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.TextBlock.SetColorAndOpacity
//		Flags  -> ()
// Parameters:
//		struct FSlateColor                                 InColorAndOpacity                                          (Parm, NativeAccessSpecifierPublic)
void UTextBlock::SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetColorAndOpacity");

	UTextBlock_SetColorAndOpacity_Params params {};
	params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.TextBlock.SetAutoWrapText
//		Flags  -> ()
// Parameters:
//		bool                                               InAutoTextWrap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTextBlock::SetAutoWrapText(bool InAutoTextWrap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetAutoWrapText");

	UTextBlock_SetAutoWrapText_Params params {};
	params.InAutoTextWrap = InAutoTextWrap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.TextBlock.GetText
//		Flags  -> ()
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UTextBlock::GetText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.GetText");

	UTextBlock_GetText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.TextBlock.GetDynamicOutlineMaterial
//		Flags  -> ()
// Parameters:
//		class UMaterialInstanceDynamic*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* UTextBlock::GetDynamicOutlineMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.GetDynamicOutlineMaterial");

	UTextBlock_GetDynamicOutlineMaterial_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.TextBlock.GetDynamicFontMaterial
//		Flags  -> ()
// Parameters:
//		class UMaterialInstanceDynamic*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* UTextBlock::GetDynamicFontMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.GetDynamicFontMaterial");

	UTextBlock_GetDynamicFontMaterial_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Throbber.SetNumberOfPieces
//		Flags  -> ()
// Parameters:
//		int                                                InNumberOfPieces                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UThrobber::SetNumberOfPieces(int InNumberOfPieces)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetNumberOfPieces");

	UThrobber_SetNumberOfPieces_Params params {};
	params.InNumberOfPieces = InNumberOfPieces;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Throbber.SetAnimateVertically
//		Flags  -> ()
// Parameters:
//		bool                                               bInAnimateVertically                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UThrobber::SetAnimateVertically(bool bInAnimateVertically)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateVertically");

	UThrobber_SetAnimateVertically_Params params {};
	params.bInAnimateVertically = bInAnimateVertically;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Throbber.SetAnimateOpacity
//		Flags  -> ()
// Parameters:
//		bool                                               bInAnimateOpacity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UThrobber::SetAnimateOpacity(bool bInAnimateOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateOpacity");

	UThrobber_SetAnimateOpacity_Params params {};
	params.bInAnimateOpacity = bInAnimateOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Throbber.SetAnimateHorizontally
//		Flags  -> ()
// Parameters:
//		bool                                               bInAnimateHorizontally                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UThrobber::SetAnimateHorizontally(bool bInAnimateHorizontally)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateHorizontally");

	UThrobber_SetAnimateHorizontally_Params params {};
	params.bInAnimateHorizontally = bInAnimateHorizontally;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.TileView.SetEntryWidth
//		Flags  -> ()
// Parameters:
//		float                                              NewWidth                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTileView::SetEntryWidth(float NewWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TileView.SetEntryWidth");

	UTileView_SetEntryWidth_Params params {};
	params.NewWidth = NewWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.TileView.SetEntryHeight
//		Flags  -> ()
// Parameters:
//		float                                              NewHeight                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTileView::SetEntryHeight(float NewHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TileView.SetEntryHeight");

	UTileView_SetEntryHeight_Params params {};
	params.NewHeight = NewHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.TileView.GetEntryWidth
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTileView::GetEntryWidth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TileView.GetEntryWidth");

	UTileView_GetEntryWidth_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.TileView.GetEntryHeight
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UTileView::GetEntryHeight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TileView.GetEntryHeight");

	UTileView_GetEntryHeight_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.TreeView.SetItemExpansion
//		Flags  -> ()
// Parameters:
//		class UObject*                                     Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bExpandItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTreeView::SetItemExpansion(class UObject* Item, bool bExpandItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TreeView.SetItemExpansion");

	UTreeView_SetItemExpansion_Params params {};
	params.Item = Item;
	params.bExpandItem = bExpandItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.TreeView.ExpandAll
//		Flags  -> ()
void UTreeView::ExpandAll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TreeView.ExpandAll");

	UTreeView_ExpandAll_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.TreeView.CollapseAll
//		Flags  -> ()
void UTreeView::CollapseAll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.TreeView.CollapseAll");

	UTreeView_CollapseAll_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UMGSequencePlayer.SetUserTag
//		Flags  -> ()
// Parameters:
//		struct FName                                       InUserTag                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUMGSequencePlayer::SetUserTag(const struct FName& InUserTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UMGSequencePlayer.SetUserTag");

	UUMGSequencePlayer_SetUserTag_Params params {};
	params.InUserTag = InUserTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UMGSequencePlayer.GetUserTag
//		Flags  -> ()
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FName UUMGSequencePlayer::GetUserTag()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UMGSequencePlayer.GetUserTag");

	UUMGSequencePlayer_GetUserTag_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UniformGridPanel.SetSlotPadding
//		Flags  -> ()
// Parameters:
//		struct FMargin                                     InSlotPadding                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UUniformGridPanel::SetSlotPadding(const struct FMargin& InSlotPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetSlotPadding");

	UUniformGridPanel_SetSlotPadding_Params params {};
	params.InSlotPadding = InSlotPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
//		Flags  -> ()
// Parameters:
//		float                                              InMinDesiredSlotWidth                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUniformGridPanel::SetMinDesiredSlotWidth(float InMinDesiredSlotWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetMinDesiredSlotWidth");

	UUniformGridPanel_SetMinDesiredSlotWidth_Params params {};
	params.InMinDesiredSlotWidth = InMinDesiredSlotWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
//		Flags  -> ()
// Parameters:
//		float                                              InMinDesiredSlotHeight                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUniformGridPanel::SetMinDesiredSlotHeight(float InMinDesiredSlotHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetMinDesiredSlotHeight");

	UUniformGridPanel_SetMinDesiredSlotHeight_Params params {};
	params.InMinDesiredSlotHeight = InMinDesiredSlotHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UniformGridPanel.AddChildToUniformGrid
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                InRow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                InColumn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUniformGridSlot*                            ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUniformGridSlot* UUniformGridPanel::AddChildToUniformGrid(class UWidget* Content, int InRow, int InColumn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.AddChildToUniformGrid");

	UUniformGridPanel_AddChildToUniformGrid_Params params {};
	params.Content = Content;
	params.InRow = InRow;
	params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UniformGridSlot.SetVerticalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUniformGridSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetVerticalAlignment");

	UUniformGridSlot_SetVerticalAlignment_Params params {};
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UniformGridSlot.SetRow
//		Flags  -> ()
// Parameters:
//		int                                                InRow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUniformGridSlot::SetRow(int InRow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetRow");

	UUniformGridSlot_SetRow_Params params {};
	params.InRow = InRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UniformGridSlot.SetHorizontalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUniformGridSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetHorizontalAlignment");

	UUniformGridSlot_SetHorizontalAlignment_Params params {};
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.UniformGridSlot.SetColumn
//		Flags  -> ()
// Parameters:
//		int                                                InColumn                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UUniformGridSlot::SetColumn(int InColumn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetColumn");

	UUniformGridSlot_SetColumn_Params params {};
	params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.VerticalBox.AddChildToVerticalBox
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVerticalBoxSlot*                            ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVerticalBoxSlot* UVerticalBox::AddChildToVerticalBox(class UWidget* Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.VerticalBox.AddChildToVerticalBox");

	UVerticalBox_AddChildToVerticalBox_Params params {};
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.VerticalBoxSlot.SetVerticalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVerticalBoxSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetVerticalAlignment");

	UVerticalBoxSlot_SetVerticalAlignment_Params params {};
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.VerticalBoxSlot.SetSize
//		Flags  -> ()
// Parameters:
//		struct FSlateChildSize                             InSize                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UVerticalBoxSlot::SetSize(const struct FSlateChildSize& InSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetSize");

	UVerticalBoxSlot_SetSize_Params params {};
	params.InSize = InSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.VerticalBoxSlot.SetPadding
//		Flags  -> ()
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UVerticalBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetPadding");

	UVerticalBoxSlot_SetPadding_Params params {};
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.VerticalBoxSlot.SetHorizontalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UVerticalBoxSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetHorizontalAlignment");

	UVerticalBoxSlot_SetHorizontalAlignment_Params params {};
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Viewport.Spawn
//		Flags  -> ()
// Parameters:
//		class UClass*                                      ActorClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class AActor* UViewport::Spawn(class UClass* ActorClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Viewport.Spawn");

	UViewport_Spawn_Params params {};
	params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Viewport.SetViewRotation
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UViewport::SetViewRotation(const struct FRotator& Rotation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Viewport.SetViewRotation");

	UViewport_SetViewRotation_Params params {};
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Viewport.SetViewLocation
//		Flags  -> ()
// Parameters:
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UViewport::SetViewLocation(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Viewport.SetViewLocation");

	UViewport_SetViewLocation_Params params {};
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Viewport.GetViewRotation
//		Flags  -> ()
// Parameters:
//		struct FRotator                                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FRotator UViewport::GetViewRotation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewRotation");

	UViewport_GetViewRotation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Viewport.GetViewportWorld
//		Flags  -> ()
// Parameters:
//		class UWorld*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWorld* UViewport::GetViewportWorld()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewportWorld");

	UViewport_GetViewportWorld_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.Viewport.GetViewLocation
//		Flags  -> ()
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UViewport::GetViewLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewLocation");

	UViewport_GetViewLocation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.VisibilityBinding.GetValue
//		Flags  -> ()
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_ESlateVisibility UVisibilityBinding::GetValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.VisibilityBinding.GetValue");

	UVisibilityBinding_GetValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetAnimation.UnbindFromAnimationStarted
//		Flags  -> ()
// Parameters:
//		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UWidgetAnimation::UnbindFromAnimationStarted(class UUserWidget* Widget, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindFromAnimationStarted");

	UWidgetAnimation_UnbindFromAnimationStarted_Params params {};
	params.Widget = Widget;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetAnimation.UnbindFromAnimationFinished
//		Flags  -> ()
// Parameters:
//		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UWidgetAnimation::UnbindFromAnimationFinished(class UUserWidget* Widget, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindFromAnimationFinished");

	UWidgetAnimation_UnbindFromAnimationFinished_Params params {};
	params.Widget = Widget;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted
//		Flags  -> ()
// Parameters:
//		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetAnimation::UnbindAllFromAnimationStarted(class UUserWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted");

	UWidgetAnimation_UnbindAllFromAnimationStarted_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished
//		Flags  -> ()
// Parameters:
//		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetAnimation::UnbindAllFromAnimationFinished(class UUserWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished");

	UWidgetAnimation_UnbindAllFromAnimationFinished_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetAnimation.GetStartTime
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWidgetAnimation::GetStartTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.GetStartTime");

	UWidgetAnimation_GetStartTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetAnimation.GetEndTime
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWidgetAnimation::GetEndTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.GetEndTime");

	UWidgetAnimation_GetEndTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetAnimation.BindToAnimationStarted
//		Flags  -> ()
// Parameters:
//		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UWidgetAnimation::BindToAnimationStarted(class UUserWidget* Widget, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.BindToAnimationStarted");

	UWidgetAnimation_BindToAnimationStarted_Params params {};
	params.Widget = Widget;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetAnimation.BindToAnimationFinished
//		Flags  -> ()
// Parameters:
//		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UWidgetAnimation::BindToAnimationFinished(class UUserWidget* Widget, const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.BindToAnimationFinished");

	UWidgetAnimation_BindToAnimationFinished_Params params {};
	params.Widget = Widget;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
//		Flags  -> ()
// Parameters:
//		class UUMGSequencePlayer*                          Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidgetAnimation*                            InAnimation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartAtTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              EndAtTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumLoopsToPlay                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<UMG_EUMGSequencePlayMode>              PlayMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PlaybackSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidgetAnimationPlayCallbackProxy*           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int NumLoopsToPlay, TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject");

	UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Params params {};
	params.Widget = Widget;
	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.EndAtTime = EndAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.PlayMode = PlayMode;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
//		Flags  -> ()
// Parameters:
//		class UUMGSequencePlayer*                          Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidgetAnimation*                            InAnimation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              StartAtTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NumLoopsToPlay                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<UMG_EUMGSequencePlayMode>              PlayMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              PlaybackSpeed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidgetAnimationPlayCallbackProxy*           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int NumLoopsToPlay, TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode, float PlaybackSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject");

	UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Params params {};
	params.Widget = Widget;
	params.InAnimation = InAnimation;
	params.StartAtTime = StartAtTime;
	params.NumLoopsToPlay = NumLoopsToPlay;
	params.PlayMode = PlayMode;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBinding.GetValue
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UWidgetBinding::GetValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBinding.GetValue");

	UWidgetBinding_GetValue_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.UnlockMouse
//		Flags  -> ()
// Parameters:
//		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::UnlockMouse(struct FEventReply* Reply)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.UnlockMouse");

	UWidgetBlueprintLibrary_UnlockMouse_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.Unhandled
//		Flags  -> ()
// Parameters:
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::Unhandled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.Unhandled");

	UWidgetBlueprintLibrary_Unhandled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     TitleBarContent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Engine_EWindowTitleBarMode                         Mode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTitleBarDragEnabled                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWindowButtonsVisible                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bTitleBarVisible                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::SetWindowTitleBarState(class UWidget* TitleBarContent, Engine_EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState");

	UWidgetBlueprintLibrary_SetWindowTitleBarState_Params params {};
	params.TitleBarContent = TitleBarContent;
	params.Mode = Mode;
	params.bTitleBarDragEnabled = bTitleBarDragEnabled;
	params.bWindowButtonsVisible = bWindowButtonsVisible;
	params.bTitleBarVisible = bTitleBarVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
//		Flags  -> ()
// Parameters:
//		struct FScriptDelegate                             Delegate                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::SetWindowTitleBarOnCloseClickedDelegate(const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate");

	UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Params params {};
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
//		Flags  -> ()
// Parameters:
//		bool                                               bActive                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::SetWindowTitleBarCloseButtonActive(bool bActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive");

	UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Params params {};
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.SetUserFocus
//		Flags  -> ()
// Parameters:
//		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UWidget*                                     FocusWidget                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bInAllUsers                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::SetUserFocus(struct FEventReply* Reply, class UWidget* FocusWidget, bool bInAllUsers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetUserFocus");

	UWidgetBlueprintLibrary_SetUserFocus_Params params {};
	params.FocusWidget = FocusWidget;
	params.bInAllUsers = bInAllUsers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.SetMousePosition
//		Flags  -> ()
// Parameters:
//		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FVector2D                                   NewMousePosition                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::SetMousePosition(struct FEventReply* Reply, const struct FVector2D& NewMousePosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetMousePosition");

	UWidgetBlueprintLibrary_SetMousePosition_Params params {};
	params.NewMousePosition = NewMousePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidget*                                     InWidgetToFocus                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Engine_EMouseLockMode                              InMouseLockMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, Engine_EMouseLockMode InMouseLockMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx");

	UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Params params {};
	params.PlayerController = PlayerController;
	params.InWidgetToFocus = InWidgetToFocus;
	params.InMouseLockMode = InMouseLockMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidget*                                     InWidgetToFocus                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bLockMouseToViewport                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly");

	UWidgetBlueprintLibrary_SetInputMode_UIOnly_Params params {};
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.bLockMouseToViewport = bLockMouseToViewport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::SetInputMode_GameOnly(class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly");

	UWidgetBlueprintLibrary_SetInputMode_GameOnly_Params params {};
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidget*                                     InWidgetToFocus                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Engine_EMouseLockMode                              InMouseLockMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bHideCursorDuringCapture                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, Engine_EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx");

	UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Params params {};
	params.PlayerController = PlayerController;
	params.InWidgetToFocus = InWidgetToFocus;
	params.InMouseLockMode = InMouseLockMode;
	params.bHideCursorDuringCapture = bHideCursorDuringCapture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidget*                                     InWidgetToFocus                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bLockMouseToViewport                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bHideCursorDuringCapture                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI");

	UWidgetBlueprintLibrary_SetInputMode_GameAndUI_Params params {};
	params.Target = Target;
	params.InWidgetToFocus = InWidgetToFocus;
	params.bLockMouseToViewport = bLockMouseToViewport;
	params.bHideCursorDuringCapture = bHideCursorDuringCapture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<CoreUObject_EMouseCursor>              CursorShape                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       CursorName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   HotSpot                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetBlueprintLibrary::SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<CoreUObject_EMouseCursor> CursorShape, const struct FName& CursorName, const struct FVector2D& HotSpot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetHardwareCursor");

	UWidgetBlueprintLibrary_SetHardwareCursor_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.CursorShape = CursorShape;
	params.CursorName = CursorName;
	params.HotSpot = HotSpot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
//		Flags  -> ()
void UWidgetBlueprintLibrary::SetFocusToGameViewport()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport");

	UWidgetBlueprintLibrary_SetFocusToGameViewport_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType
//		Flags  -> ()
// Parameters:
//		SlateCore_EColorVisionDeficiency                   Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Severity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               CorrectDeficiency                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ShowCorrectionWithDeficiency                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::SetColorVisionDeficiencyType(SlateCore_EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType");

	UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Params params {};
	params.Type = Type;
	params.Severity = Severity;
	params.CorrectDeficiency = CorrectDeficiency;
	params.ShowCorrectionWithDeficiency = ShowCorrectionWithDeficiency;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
//		Flags  -> ()
// Parameters:
//		struct FSlateBrush                                 Brush                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::SetBrushResourceToTexture(struct FSlateBrush* Brush, class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture");

	UWidgetBlueprintLibrary_SetBrushResourceToTexture_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
//		Flags  -> ()
// Parameters:
//		struct FSlateBrush                                 Brush                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::SetBrushResourceToMaterial(struct FSlateBrush* Brush, class UMaterialInterface* Material)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial");

	UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Params params {};
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState
//		Flags  -> ()
void UWidgetBlueprintLibrary::RestorePreviousWindowTitleBarState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState");

	UWidgetBlueprintLibrary_RestorePreviousWindowTitleBarState_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
//		Flags  -> ()
// Parameters:
//		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::ReleaseMouseCapture(struct FEventReply* Reply)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture");

	UWidgetBlueprintLibrary_ReleaseMouseCapture_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
//		Flags  -> ()
// Parameters:
//		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               bInAllJoysticks                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::ReleaseJoystickCapture(struct FEventReply* Reply, bool bInAllJoysticks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture");

	UWidgetBlueprintLibrary_ReleaseJoystickCapture_Params params {};
	params.bInAllJoysticks = bInAllJoysticks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature
//		Flags  -> ()
void UWidgetBlueprintLibrary::OnGameWindowCloseButtonClickedDelegate__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature");

	UWidgetBlueprintLibrary_OnGameWindowCloseButtonClickedDelegate__DelegateSignature_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.NoResourceBrush
//		Flags  -> ()
// Parameters:
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateBrush UWidgetBlueprintLibrary::NoResourceBrush()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.NoResourceBrush");

	UWidgetBlueprintLibrary_NoResourceBrush_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
//		Flags  -> ()
// Parameters:
//		class UTexture2D*                                  Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromTexture(class UTexture2D* Texture, int Width, int Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture");

	UWidgetBlueprintLibrary_MakeBrushFromTexture_Params params {};
	params.Texture = Texture;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
//		Flags  -> ()
// Parameters:
//		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromMaterial(class UMaterialInterface* Material, int Width, int Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial");

	UWidgetBlueprintLibrary_MakeBrushFromMaterial_Params params {};
	params.Material = Material;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
//		Flags  -> ()
// Parameters:
//		class USlateBrushAsset*                            BrushAsset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FSlateBrush                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromAsset(class USlateBrushAsset* BrushAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset");

	UWidgetBlueprintLibrary_MakeBrushFromAsset_Params params {};
	params.BrushAsset = BrushAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.LockMouse
//		Flags  -> ()
// Parameters:
//		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UWidget*                                     CapturingWidget                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::LockMouse(struct FEventReply* Reply, class UWidget* CapturingWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.LockMouse");

	UWidgetBlueprintLibrary_LockMouse_Params params {};
	params.CapturingWidget = CapturingWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.IsDragDropping
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetBlueprintLibrary::IsDragDropping()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.IsDragDropping");

	UWidgetBlueprintLibrary_IsDragDropping_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.Handled
//		Flags  -> ()
// Parameters:
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::Handled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.Handled");

	UWidgetBlueprintLibrary_Handled_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector4                                    SafePadding                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   SafePaddingScale                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector4                                    SpillOverPadding                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::GetSafeZonePadding(class UObject* WorldContextObject, struct FVector4* SafePadding, struct FVector2D* SafePaddingScale, struct FVector4* SpillOverPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding");

	UWidgetBlueprintLibrary_GetSafeZonePadding_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SafePadding != nullptr)
		*SafePadding = params.SafePadding;
	if (SafePaddingScale != nullptr)
		*SafePaddingScale = params.SafePaddingScale;
	if (SpillOverPadding != nullptr)
		*SpillOverPadding = params.SpillOverPadding;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
//		Flags  -> ()
// Parameters:
//		struct FAnalogInputEvent                           Event                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FKeyEvent                                   ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FKeyEvent UWidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent");

	UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params params {};
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
//		Flags  -> ()
// Parameters:
//		struct FPointerEvent                               Event                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FInputEvent                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromPointerEvent(const struct FPointerEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent");

	UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params params {};
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
//		Flags  -> ()
// Parameters:
//		struct FNavigationEvent                            Event                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FInputEvent                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent");

	UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params params {};
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
//		Flags  -> ()
// Parameters:
//		struct FKeyEvent                                   Event                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FInputEvent                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromKeyEvent(const struct FKeyEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent");

	UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params params {};
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
//		Flags  -> ()
// Parameters:
//		struct FCharacterEvent                             Event                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FInputEvent                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent");

	UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params params {};
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
//		Flags  -> ()
// Parameters:
//		struct FSlateBrush                                 Brush                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UMaterialInstanceDynamic*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* UWidgetBlueprintLibrary::GetDynamicMaterial(struct FSlateBrush* Brush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial");

	UWidgetBlueprintLibrary_GetDynamicMaterial_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Brush != nullptr)
		*Brush = params.Brush;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
//		Flags  -> ()
// Parameters:
//		class UDragDropOperation*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDragDropOperation* UWidgetBlueprintLibrary::GetDragDroppingContent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent");

	UWidgetBlueprintLibrary_GetDragDroppingContent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
//		Flags  -> ()
// Parameters:
//		struct FSlateBrush                                 Brush                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UTexture2D*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTexture2D* UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(const struct FSlateBrush& Brush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D");

	UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params params {};
	params.Brush = Brush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
//		Flags  -> ()
// Parameters:
//		struct FSlateBrush                                 Brush                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UMaterialInterface*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInterface* UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(const struct FSlateBrush& Brush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial");

	UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params params {};
	params.Brush = Brush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetBrushResource
//		Flags  -> ()
// Parameters:
//		struct FSlateBrush                                 Brush                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UObject*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UWidgetBlueprintLibrary::GetBrushResource(const struct FSlateBrush& Brush)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetBrushResource");

	UWidgetBlueprintLibrary_GetBrushResource_Params params {};
	params.Brush = Brush;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class UUserWidget*>                         FoundWidgets                                               (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		class UClass*                                      Interface                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               TopLevelOnly                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::GetAllWidgetsWithInterface(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UClass* Interface, bool TopLevelOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface");

	UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.Interface = Interface;
	params.TopLevelOnly = TopLevelOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FoundWidgets != nullptr)
		*FoundWidgets = params.FoundWidgets;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<class UUserWidget*>                         FoundWidgets                                               (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		class UClass*                                      WidgetClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               TopLevelOnly                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass");

	UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.WidgetClass = WidgetClass;
	params.TopLevelOnly = TopLevelOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FoundWidgets != nullptr)
		*FoundWidgets = params.FoundWidgets;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.EndDragDrop
//		Flags  -> ()
// Parameters:
//		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::EndDragDrop(struct FEventReply* Reply)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.EndDragDrop");

	UWidgetBlueprintLibrary_EndDragDrop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
//		Flags  -> ()
// Parameters:
//		struct FPaintContext                               Context                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FText                                       Text                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FVector2D                                   position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UFont*                                       Font                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                FontSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       FontTypeFace                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                Tint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::DrawTextFormatted(struct FPaintContext* Context, const struct FText& Text, const struct FVector2D& position, class UFont* Font, int FontSize, const struct FName& FontTypeFace, const struct FLinearColor& Tint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawTextFormatted");

	UWidgetBlueprintLibrary_DrawTextFormatted_Params params {};
	params.Text = Text;
	params.position = position;
	params.Font = Font;
	params.FontSize = FontSize;
	params.FontTypeFace = FontTypeFace;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.DrawText
//		Flags  -> ()
// Parameters:
//		struct FPaintContext                               Context                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     inString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                Tint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::DrawText(struct FPaintContext* Context, const struct FString& inString, const struct FVector2D& position, const struct FLinearColor& Tint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawText");

	UWidgetBlueprintLibrary_DrawText_Params params {};
	params.inString = inString;
	params.position = position;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.DrawLines
//		Flags  -> ()
// Parameters:
//		struct FPaintContext                               Context                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<struct FVector2D>                           Points                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FLinearColor                                Tint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAntiAlias                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::DrawLines(struct FPaintContext* Context, TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawLines");

	UWidgetBlueprintLibrary_DrawLines_Params params {};
	params.Points = Points;
	params.Tint = Tint;
	params.bAntiAlias = bAntiAlias;
	params.Thickness = Thickness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.DrawLine
//		Flags  -> ()
// Parameters:
//		struct FPaintContext                               Context                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector2D                                   PositionA                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   PositionB                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                Tint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bAntiAlias                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::DrawLine(struct FPaintContext* Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawLine");

	UWidgetBlueprintLibrary_DrawLine_Params params {};
	params.PositionA = PositionA;
	params.PositionB = PositionB;
	params.Tint = Tint;
	params.bAntiAlias = bAntiAlias;
	params.Thickness = Thickness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.DrawBox
//		Flags  -> ()
// Parameters:
//		struct FPaintContext                               Context                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FVector2D                                   position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USlateBrushAsset*                            Brush                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLinearColor                                Tint                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetBlueprintLibrary::DrawBox(struct FPaintContext* Context, const struct FVector2D& position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DrawBox");

	UWidgetBlueprintLibrary_DrawBox_Params params {};
	params.position = position;
	params.Size = Size;
	params.Brush = Brush;
	params.Tint = Tint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Context != nullptr)
		*Context = params.Context;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.DismissAllMenus
//		Flags  -> ()
void UWidgetBlueprintLibrary::DismissAllMenus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DismissAllMenus");

	UWidgetBlueprintLibrary_DismissAllMenus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
//		Flags  -> ()
// Parameters:
//		struct FPointerEvent                               PointerEvent                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UWidget*                                     WidgetDetectingDrag                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FKey                                        DragKey                                                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed");

	UWidgetBlueprintLibrary_DetectDragIfPressed_Params params {};
	params.PointerEvent = PointerEvent;
	params.WidgetDetectingDrag = WidgetDetectingDrag;
	params.DragKey = DragKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.DetectDrag
//		Flags  -> ()
// Parameters:
//		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UWidget*                                     WidgetDetectingDrag                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FKey                                        DragKey                                                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::DetectDrag(struct FEventReply* Reply, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.DetectDrag");

	UWidgetBlueprintLibrary_DetectDrag_Params params {};
	params.WidgetDetectingDrag = WidgetDetectingDrag;
	params.DragKey = DragKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
//		Flags  -> ()
// Parameters:
//		class UClass*                                      OperationClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UDragDropOperation*                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UDragDropOperation* UWidgetBlueprintLibrary::CreateDragDropOperation(class UClass* OperationClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation");

	UWidgetBlueprintLibrary_CreateDragDropOperation_Params params {};
	params.OperationClass = OperationClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.Create
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      WidgetType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class APlayerController*                           OwningPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUserWidget*                                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUserWidget* UWidgetBlueprintLibrary::Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.Create");

	UWidgetBlueprintLibrary_Create_Params params {};
	params.WorldContextObject = WorldContextObject;
	params.WidgetType = WidgetType;
	params.OwningPlayer = OwningPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.ClearUserFocus
//		Flags  -> ()
// Parameters:
//		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               bInAllUsers                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::ClearUserFocus(struct FEventReply* Reply, bool bInAllUsers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.ClearUserFocus");

	UWidgetBlueprintLibrary_ClearUserFocus_Params params {};
	params.bInAllUsers = bInAllUsers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.CaptureMouse
//		Flags  -> ()
// Parameters:
//		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UWidget*                                     CapturingWidget                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::CaptureMouse(struct FEventReply* Reply, class UWidget* CapturingWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CaptureMouse");

	UWidgetBlueprintLibrary_CaptureMouse_Params params {};
	params.CapturingWidget = CapturingWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.CaptureJoystick
//		Flags  -> ()
// Parameters:
//		struct FEventReply                                 Reply                                                      (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		class UWidget*                                     CapturingWidget                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bInAllJoysticks                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FEventReply UWidgetBlueprintLibrary::CaptureJoystick(struct FEventReply* Reply, class UWidget* CapturingWidget, bool bInAllJoysticks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CaptureJoystick");

	UWidgetBlueprintLibrary_CaptureJoystick_Params params {};
	params.CapturingWidget = CapturingWidget;
	params.bInAllJoysticks = bInAllJoysticks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Reply != nullptr)
		*Reply = params.Reply;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetBlueprintLibrary.CancelDragDrop
//		Flags  -> ()
void UWidgetBlueprintLibrary::CancelDragDrop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetBlueprintLibrary.CancelDragDrop");

	UWidgetBlueprintLibrary_CancelDragDrop_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.SetWindowVisibility
//		Flags  -> ()
// Parameters:
//		UMG_EWindowVisibility                              InVisibility                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetWindowVisibility(UMG_EWindowVisibility InVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWindowVisibility");

	UWidgetComponent_SetWindowVisibility_Params params {};
	params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.SetWindowFocusable
//		Flags  -> ()
// Parameters:
//		bool                                               bInWindowFocusable                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetWindowFocusable(bool bInWindowFocusable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWindowFocusable");

	UWidgetComponent_SetWindowFocusable_Params params {};
	params.bInWindowFocusable = bInWindowFocusable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.SetWidgetSpace
//		Flags  -> ()
// Parameters:
//		UMG_EWidgetSpace                                   NewSpace                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetWidgetSpace(UMG_EWidgetSpace NewSpace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWidgetSpace");

	UWidgetComponent_SetWidgetSpace_Params params {};
	params.NewSpace = NewSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.SetWidget
//		Flags  -> ()
// Parameters:
//		class UUserWidget*                                 Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetWidget(class UUserWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWidget");

	UWidgetComponent_SetWidget_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.SetTwoSided
//		Flags  -> ()
// Parameters:
//		bool                                               bWantTwoSided                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetTwoSided(bool bWantTwoSided)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTwoSided");

	UWidgetComponent_SetTwoSided_Params params {};
	params.bWantTwoSided = bWantTwoSided;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.SetTintColorAndOpacity
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                NewTintColorAndOpacity                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTintColorAndOpacity");

	UWidgetComponent_SetTintColorAndOpacity_Params params {};
	params.NewTintColorAndOpacity = NewTintColorAndOpacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.SetTickWhenOffscreen
//		Flags  -> ()
// Parameters:
//		bool                                               bWantTickWhenOffscreen                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetTickWhenOffscreen(bool bWantTickWhenOffscreen)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTickWhenOffscreen");

	UWidgetComponent_SetTickWhenOffscreen_Params params {};
	params.bWantTickWhenOffscreen = bWantTickWhenOffscreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.SetTickMode
//		Flags  -> ()
// Parameters:
//		UMG_ETickMode                                      InTickMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetTickMode(UMG_ETickMode InTickMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTickMode");

	UWidgetComponent_SetTickMode_Params params {};
	params.InTickMode = InTickMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.SetRedrawTime
//		Flags  -> ()
// Parameters:
//		float                                              InRedrawTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetRedrawTime(float InRedrawTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetRedrawTime");

	UWidgetComponent_SetRedrawTime_Params params {};
	params.InRedrawTime = InRedrawTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.SetPivot
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   InPivot                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetPivot(const struct FVector2D& InPivot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetPivot");

	UWidgetComponent_SetPivot_Params params {};
	params.InPivot = InPivot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.SetOwnerPlayer
//		Flags  -> ()
// Parameters:
//		class ULocalPlayer*                                LocalPlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetOwnerPlayer(class ULocalPlayer* LocalPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetOwnerPlayer");

	UWidgetComponent_SetOwnerPlayer_Params params {};
	params.LocalPlayer = LocalPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.SetManuallyRedraw
//		Flags  -> ()
// Parameters:
//		bool                                               bUseManualRedraw                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetManuallyRedraw(bool bUseManualRedraw)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetManuallyRedraw");

	UWidgetComponent_SetManuallyRedraw_Params params {};
	params.bUseManualRedraw = bUseManualRedraw;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.SetGeometryMode
//		Flags  -> ()
// Parameters:
//		UMG_EWidgetGeometryMode                            InGeometryMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetGeometryMode(UMG_EWidgetGeometryMode InGeometryMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetGeometryMode");

	UWidgetComponent_SetGeometryMode_Params params {};
	params.InGeometryMode = InGeometryMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.SetDrawSize
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   Size                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetDrawSize(const struct FVector2D& Size)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetDrawSize");

	UWidgetComponent_SetDrawSize_Params params {};
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.SetDrawAtDesiredSize
//		Flags  -> ()
// Parameters:
//		bool                                               bInDrawAtDesiredSize                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetDrawAtDesiredSize(bool bInDrawAtDesiredSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetDrawAtDesiredSize");

	UWidgetComponent_SetDrawAtDesiredSize_Params params {};
	params.bInDrawAtDesiredSize = bInDrawAtDesiredSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.SetCylinderArcAngle
//		Flags  -> ()
// Parameters:
//		float                                              InCylinderArcAngle                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetCylinderArcAngle(float InCylinderArcAngle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetCylinderArcAngle");

	UWidgetComponent_SetCylinderArcAngle_Params params {};
	params.InCylinderArcAngle = InCylinderArcAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.SetBackgroundColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                NewBackgroundColor                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetComponent::SetBackgroundColor(const struct FLinearColor& NewBackgroundColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetBackgroundColor");

	UWidgetComponent_SetBackgroundColor_Params params {};
	params.NewBackgroundColor = NewBackgroundColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.RequestRedraw
//		Flags  -> ()
void UWidgetComponent::RequestRedraw()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.RequestRedraw");

	UWidgetComponent_RequestRedraw_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.IsWidgetVisible
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetComponent::IsWidgetVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.IsWidgetVisible");

	UWidgetComponent_IsWidgetVisible_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.GetWindowVisiblility
//		Flags  -> ()
// Parameters:
//		UMG_EWindowVisibility                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_EWindowVisibility UWidgetComponent::GetWindowVisiblility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWindowVisiblility");

	UWidgetComponent_GetWindowVisiblility_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.GetWindowFocusable
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetComponent::GetWindowFocusable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWindowFocusable");

	UWidgetComponent_GetWindowFocusable_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.GetWidgetSpace
//		Flags  -> ()
// Parameters:
//		UMG_EWidgetSpace                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_EWidgetSpace UWidgetComponent::GetWidgetSpace()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWidgetSpace");

	UWidgetComponent_GetWidgetSpace_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.GetWidget
//		Flags  -> ()
// Parameters:
//		class UUserWidget*                                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUserWidget* UWidgetComponent::GetWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWidget");

	UWidgetComponent_GetWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.GetUserWidgetObject
//		Flags  -> ()
// Parameters:
//		class UUserWidget*                                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUserWidget* UWidgetComponent::GetUserWidgetObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetUserWidgetObject");

	UWidgetComponent_GetUserWidgetObject_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.GetTwoSided
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetComponent::GetTwoSided()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetTwoSided");

	UWidgetComponent_GetTwoSided_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.GetTickWhenOffscreen
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetComponent::GetTickWhenOffscreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetTickWhenOffscreen");

	UWidgetComponent_GetTickWhenOffscreen_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.GetRenderTarget
//		Flags  -> ()
// Parameters:
//		class UTextureRenderTarget2D*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UTextureRenderTarget2D* UWidgetComponent::GetRenderTarget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetRenderTarget");

	UWidgetComponent_GetRenderTarget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.GetRedrawTime
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWidgetComponent::GetRedrawTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetRedrawTime");

	UWidgetComponent_GetRedrawTime_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.GetPivot
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UWidgetComponent::GetPivot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetPivot");

	UWidgetComponent_GetPivot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.GetOwnerPlayer
//		Flags  -> ()
// Parameters:
//		class ULocalPlayer*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULocalPlayer* UWidgetComponent::GetOwnerPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetOwnerPlayer");

	UWidgetComponent_GetOwnerPlayer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.GetMaterialInstance
//		Flags  -> ()
// Parameters:
//		class UMaterialInstanceDynamic*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMaterialInstanceDynamic* UWidgetComponent::GetMaterialInstance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetMaterialInstance");

	UWidgetComponent_GetMaterialInstance_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.GetManuallyRedraw
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetComponent::GetManuallyRedraw()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetManuallyRedraw");

	UWidgetComponent_GetManuallyRedraw_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.GetGeometryMode
//		Flags  -> ()
// Parameters:
//		UMG_EWidgetGeometryMode                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
UMG_EWidgetGeometryMode UWidgetComponent::GetGeometryMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetGeometryMode");

	UWidgetComponent_GetGeometryMode_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.GetDrawSize
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UWidgetComponent::GetDrawSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetDrawSize");

	UWidgetComponent_GetDrawSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.GetDrawAtDesiredSize
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetComponent::GetDrawAtDesiredSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetDrawAtDesiredSize");

	UWidgetComponent_GetDrawAtDesiredSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.GetCylinderArcAngle
//		Flags  -> ()
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWidgetComponent::GetCylinderArcAngle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetCylinderArcAngle");

	UWidgetComponent_GetCylinderArcAngle_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetComponent.GetCurrentDrawSize
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UWidgetComponent::GetCurrentDrawSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetCurrentDrawSize");

	UWidgetComponent_GetCurrentDrawSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetInteractionComponent.SetFocus
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     FocusWidget                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetInteractionComponent::SetFocus(class UWidget* FocusWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SetFocus");

	UWidgetInteractionComponent_SetFocus_Params params {};
	params.FocusWidget = FocusWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetInteractionComponent.SetCustomHitResult
//		Flags  -> ()
// Parameters:
//		struct FHitResult                                  HitResult                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UWidgetInteractionComponent::SetCustomHitResult(const struct FHitResult& HitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SetCustomHitResult");

	UWidgetInteractionComponent_SetCustomHitResult_Params params {};
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetInteractionComponent.SendKeyChar
//		Flags  -> ()
// Parameters:
//		struct FString                                     Characters                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bRepeat                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetInteractionComponent::SendKeyChar(const struct FString& Characters, bool bRepeat)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SendKeyChar");

	UWidgetInteractionComponent_SendKeyChar_Params params {};
	params.Characters = Characters;
	params.bRepeat = bRepeat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetInteractionComponent.ScrollWheel
//		Flags  -> ()
// Parameters:
//		float                                              ScrollDelta                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetInteractionComponent::ScrollWheel(float ScrollDelta)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ScrollWheel");

	UWidgetInteractionComponent_ScrollWheel_Params params {};
	params.ScrollDelta = ScrollDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetInteractionComponent.ReleasePointerKey
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetInteractionComponent::ReleasePointerKey(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ReleasePointerKey");

	UWidgetInteractionComponent_ReleasePointerKey_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetInteractionComponent.ReleaseKey
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetInteractionComponent::ReleaseKey(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ReleaseKey");

	UWidgetInteractionComponent_ReleaseKey_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetInteractionComponent.PressPointerKey
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetInteractionComponent::PressPointerKey(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressPointerKey");

	UWidgetInteractionComponent_PressPointerKey_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetInteractionComponent.PressKey
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bRepeat                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetInteractionComponent::PressKey(const struct FKey& Key, bool bRepeat)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressKey");

	UWidgetInteractionComponent_PressKey_Params params {};
	params.Key = Key;
	params.bRepeat = bRepeat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetInteractionComponent.PressAndReleaseKey
//		Flags  -> ()
// Parameters:
//		struct FKey                                        Key                                                        (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetInteractionComponent::PressAndReleaseKey(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressAndReleaseKey");

	UWidgetInteractionComponent_PressAndReleaseKey_Params params {};
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetInteractionComponent::IsOverInteractableWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverInteractableWidget");

	UWidgetInteractionComponent_IsOverInteractableWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetInteractionComponent::IsOverHitTestVisibleWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget");

	UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetInteractionComponent::IsOverFocusableWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverFocusableWidget");

	UWidgetInteractionComponent_IsOverFocusableWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetInteractionComponent.GetLastHitResult
//		Flags  -> ()
// Parameters:
//		struct FHitResult                                  ReturnValue                                                (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
struct FHitResult UWidgetInteractionComponent::GetLastHitResult()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.GetLastHitResult");

	UWidgetInteractionComponent_GetLastHitResult_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
//		Flags  -> ()
// Parameters:
//		class UWidgetComponent*                            ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidgetComponent* UWidgetInteractionComponent::GetHoveredWidgetComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent");

	UWidgetInteractionComponent_GetHoveredWidgetComponent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetInteractionComponent.Get2DHitLocation
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UWidgetInteractionComponent::Get2DHitLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.Get2DHitLocation");

	UWidgetInteractionComponent_Get2DHitLocation_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWrapBoxSlot*                                ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWrapBoxSlot* UWidgetLayoutLibrary::SlotAsWrapBoxSlot(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot");

	UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidgetSwitcherSlot*                         ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidgetSwitcherSlot* UWidgetLayoutLibrary::SlotAsWidgetSwitcherSlot(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot");

	UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UVerticalBoxSlot*                            ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UVerticalBoxSlot* UWidgetLayoutLibrary::SlotAsVerticalBoxSlot(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot");

	UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UUniformGridSlot*                            ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UUniformGridSlot* UWidgetLayoutLibrary::SlotAsUniformGridSlot(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot");

	UWidgetLayoutLibrary_SlotAsUniformGridSlot_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USizeBoxSlot*                                ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USizeBoxSlot* UWidgetLayoutLibrary::SlotAsSizeBoxSlot(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot");

	UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UScrollBoxSlot*                              ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UScrollBoxSlot* UWidgetLayoutLibrary::SlotAsScrollBoxSlot(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot");

	UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UScaleBoxSlot*                               ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UScaleBoxSlot* UWidgetLayoutLibrary::SlotAsScaleBoxSlot(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot");

	UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USafeZoneSlot*                               ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class USafeZoneSlot* UWidgetLayoutLibrary::SlotAsSafeBoxSlot(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot");

	UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UOverlaySlot*                                ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UOverlaySlot* UWidgetLayoutLibrary::SlotAsOverlaySlot(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot");

	UWidgetLayoutLibrary_SlotAsOverlaySlot_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UHorizontalBoxSlot*                          ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UHorizontalBoxSlot* UWidgetLayoutLibrary::SlotAsHorizontalBoxSlot(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot");

	UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UGridSlot*                                   ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGridSlot* UWidgetLayoutLibrary::SlotAsGridSlot(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsGridSlot");

	UWidgetLayoutLibrary_SlotAsGridSlot_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UCanvasPanelSlot*                            ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UCanvasPanelSlot* UWidgetLayoutLibrary::SlotAsCanvasSlot(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot");

	UWidgetLayoutLibrary_SlotAsCanvasSlot_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UBorderSlot*                                 ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBorderSlot* UWidgetLayoutLibrary::SlotAsBorderSlot(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot");

	UWidgetLayoutLibrary_SlotAsBorderSlot_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetLayoutLibrary::RemoveAllWidgets(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.RemoveAllWidgets");

	UWidgetLayoutLibrary_RemoveAllWidgets_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     WorldLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   ScreenPosition                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bPlayerViewportRelative                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition, bool bPlayerViewportRelative)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition");

	UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params params {};
	params.PlayerController = PlayerController;
	params.WorldLocation = WorldLocation;
	params.bPlayerViewportRelative = bPlayerViewportRelative;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScreenPosition != nullptr)
		*ScreenPosition = params.ScreenPosition;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGeometry                                   ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FGeometry UWidgetLayoutLibrary::GetViewportWidgetGeometry(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry");

	UWidgetLayoutLibrary_GetViewportWidgetGeometry_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetLayoutLibrary.GetViewportSize
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UWidgetLayoutLibrary::GetViewportSize(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetViewportSize");

	UWidgetLayoutLibrary_GetViewportSize_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetLayoutLibrary.GetViewportScale
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UWidgetLayoutLibrary::GetViewportScale(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetViewportScale");

	UWidgetLayoutLibrary_GetViewportScale_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGeometry                                   ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FGeometry UWidgetLayoutLibrary::GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry");

	UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Params params {};
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
//		Flags  -> ()
// Parameters:
//		class APlayerController*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              LocationX                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              LocationY                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UWidgetLayoutLibrary::GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI");

	UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Params params {};
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LocationX != nullptr)
		*LocationX = params.LocationX;
	if (LocationY != nullptr)
		*LocationY = params.LocationY;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
//		Flags  -> ()
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UWidgetLayoutLibrary::GetMousePositionOnViewport(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport");

	UWidgetLayoutLibrary_GetMousePositionOnViewport_Params params {};
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector2D UWidgetLayoutLibrary::GetMousePositionOnPlatform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform");

	UWidgetLayoutLibrary_GetMousePositionOnPlatform_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetSwitcher.SetActiveWidgetIndex
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetSwitcher::SetActiveWidgetIndex(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.SetActiveWidgetIndex");

	UWidgetSwitcher_SetActiveWidgetIndex_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetSwitcher.SetActiveWidget
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Widget                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetSwitcher::SetActiveWidget(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.SetActiveWidget");

	UWidgetSwitcher_SetActiveWidget_Params params {};
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetSwitcher.GetWidgetAtIndex
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWidget*                                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UWidgetSwitcher::GetWidgetAtIndex(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetWidgetAtIndex");

	UWidgetSwitcher_GetWidgetAtIndex_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetSwitcher.GetNumWidgets
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UWidgetSwitcher::GetNumWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetNumWidgets");

	UWidgetSwitcher_GetNumWidgets_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetSwitcher.GetActiveWidgetIndex
//		Flags  -> ()
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UWidgetSwitcher::GetActiveWidgetIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetActiveWidgetIndex");

	UWidgetSwitcher_GetActiveWidgetIndex_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetSwitcher.GetActiveWidget
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWidget* UWidgetSwitcher::GetActiveWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetActiveWidget");

	UWidgetSwitcher_GetActiveWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetSwitcherSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetVerticalAlignment");

	UWidgetSwitcherSlot_SetVerticalAlignment_Params params {};
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetSwitcherSlot.SetPadding
//		Flags  -> ()
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UWidgetSwitcherSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetPadding");

	UWidgetSwitcherSlot_SetPadding_Params params {};
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWidgetSwitcherSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment");

	UWidgetSwitcherSlot_SetHorizontalAlignment_Params params {};
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WindowTitleBarArea.SetVerticalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWindowTitleBarArea::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetVerticalAlignment");

	UWindowTitleBarArea_SetVerticalAlignment_Params params {};
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WindowTitleBarArea.SetPadding
//		Flags  -> ()
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UWindowTitleBarArea::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetPadding");

	UWindowTitleBarArea_SetPadding_Params params {};
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WindowTitleBarArea.SetHorizontalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWindowTitleBarArea::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetHorizontalAlignment");

	UWindowTitleBarArea_SetHorizontalAlignment_Params params {};
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWindowTitleBarAreaSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment");

	UWindowTitleBarAreaSlot_SetVerticalAlignment_Params params {};
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WindowTitleBarAreaSlot.SetPadding
//		Flags  -> ()
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UWindowTitleBarAreaSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetPadding");

	UWindowTitleBarAreaSlot_SetPadding_Params params {};
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWindowTitleBarAreaSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment");

	UWindowTitleBarAreaSlot_SetHorizontalAlignment_Params params {};
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WrapBox.SetInnerSlotPadding
//		Flags  -> ()
// Parameters:
//		struct FVector2D                                   InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWrapBox::SetInnerSlotPadding(const struct FVector2D& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WrapBox.SetInnerSlotPadding");

	UWrapBox_SetInnerSlotPadding_Params params {};
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WrapBox.AddChildToWrapBox
//		Flags  -> ()
// Parameters:
//		class UWidget*                                     Content                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UWrapBoxSlot*                                ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UWrapBoxSlot* UWrapBox::AddChildToWrapBox(class UWidget* Content)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WrapBox.AddChildToWrapBox");

	UWrapBox_AddChildToWrapBox_Params params {};
	params.Content = Content;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WrapBoxSlot.SetVerticalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EVerticalAlignment>          InVerticalAlignment                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWrapBoxSlot::SetVerticalAlignment(TEnumAsByte<SlateCore_EVerticalAlignment> InVerticalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetVerticalAlignment");

	UWrapBoxSlot_SetVerticalAlignment_Params params {};
	params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WrapBoxSlot.SetPadding
//		Flags  -> ()
// Parameters:
//		struct FMargin                                     InPadding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UWrapBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetPadding");

	UWrapBoxSlot_SetPadding_Params params {};
	params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WrapBoxSlot.SetHorizontalAlignment
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<SlateCore_EHorizontalAlignment>        InHorizontalAlignment                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWrapBoxSlot::SetHorizontalAlignment(TEnumAsByte<SlateCore_EHorizontalAlignment> InHorizontalAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetHorizontalAlignment");

	UWrapBoxSlot_SetHorizontalAlignment_Params params {};
	params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
//		Flags  -> ()
// Parameters:
//		float                                              InFillSpanWhenLessThan                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan");

	UWrapBoxSlot_SetFillSpanWhenLessThan_Params params {};
	params.InFillSpanWhenLessThan = InFillSpanWhenLessThan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UMG.WrapBoxSlot.SetFillEmptySpace
//		Flags  -> ()
// Parameters:
//		bool                                               InbFillEmptySpace                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetFillEmptySpace");

	UWrapBoxSlot_SetFillEmptySpace_Params params {};
	params.InbFillEmptySpace = InbFillEmptySpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
