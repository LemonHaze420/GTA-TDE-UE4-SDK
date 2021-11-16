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
//		Name   -> Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.SetTextColor
//		Flags  -> ()
// Parameters:
//		class URichTextBlock*                              RichTextObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                NewColor                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Timer_SA_PartWide_C::SetTextColor(class URichTextBlock* RichTextObject, const struct FLinearColor& NewColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.SetTextColor");

	UUI_HUD_Timer_SA_PartWide_C_SetTextColor_Params params {};
	params.RichTextObject = RichTextObject;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.CreateBar
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<UMG_ESlateSizeRule>                    SizeRule                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Timer_SA_PartWide_C::CreateBar(TEnumAsByte<UMG_ESlateSizeRule> SizeRule)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.CreateBar");

	UUI_HUD_Timer_SA_PartWide_C_CreateBar_Params params {};
	params.SizeRule = SizeRule;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.CreateOrUpdateBar
//		Flags  -> ()
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Timer_SA_PartWide_C::CreateOrUpdateBar(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.CreateOrUpdateBar");

	UUI_HUD_Timer_SA_PartWide_C_CreateOrUpdateBar_Params params {};
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.UpdateTimerText
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		class URichTextBlock*                              TextObject                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               SetColor_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Timer_SA_PartWide_C::UpdateTimerText(const struct FText& Text, class URichTextBlock* TextObject, bool SetColor_, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.UpdateTimerText");

	UUI_HUD_Timer_SA_PartWide_C_UpdateTimerText_Params params {};
	params.Text = Text;
	params.TextObject = TextObject;
	params.SetColor_ = SetColor_;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.OnSynchronizeProperties
//		Flags  -> ()
void UUI_HUD_Timer_SA_PartWide_C::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.OnSynchronizeProperties");

	UUI_HUD_Timer_SA_PartWide_C_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Timer_SA_PartWide_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.Tick");

	UUI_HUD_Timer_SA_PartWide_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.SetContentText
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Timer_SA_PartWide_C::SetContentText(const struct FText& Text, const struct FLinearColor& FontColorOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.SetContentText");

	UUI_HUD_Timer_SA_PartWide_C_SetContentText_Params params {};
	params.Text = Text;
	params.FontColorOverride = FontColorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.SetContentPercentOffset
//		Flags  -> ()
// Parameters:
//		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Y                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Timer_SA_PartWide_C::SetContentPercentOffset(float X, float Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.SetContentPercentOffset");

	UUI_HUD_Timer_SA_PartWide_C_SetContentPercentOffset_Params params {};
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.SetPosition
//		Flags  -> ()
// Parameters:
//		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Y                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Xmax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Ymax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Timer_SA_PartWide_C::SetPosition(float X, float Y, float Xmax, float Ymax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.SetPosition");

	UUI_HUD_Timer_SA_PartWide_C_SetPosition_Params params {};
	params.X = X;
	params.Y = Y;
	params.Xmax = Xmax;
	params.Ymax = Ymax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.SetImage
//		Flags  -> ()
// Parameters:
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Timer_SA_PartWide_C::SetImage(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.SetImage");

	UUI_HUD_Timer_SA_PartWide_C_SetImage_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.SetImageColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               forceVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_Timer_SA_PartWide_C::SetImageColor(const struct FLinearColor& Color, bool forceVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.SetImageColor");

	UUI_HUD_Timer_SA_PartWide_C_SetImageColor_Params params {};
	params.Color = Color;
	params.forceVisible = forceVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.CustomFunctionWithFloat
//		Flags  -> ()
// Parameters:
//		struct FString                                     FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		float                                              floatNum                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Timer_SA_PartWide_C::CustomFunctionWithFloat(const struct FString& FunctionName, float floatNum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.CustomFunctionWithFloat");

	UUI_HUD_Timer_SA_PartWide_C_CustomFunctionWithFloat_Params params {};
	params.FunctionName = FunctionName;
	params.floatNum = floatNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.CustomFunction
//		Flags  -> ()
// Parameters:
//		struct FString                                     FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UUI_HUD_Timer_SA_PartWide_C::CustomFunction(const struct FString& FunctionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.CustomFunction");

	UUI_HUD_Timer_SA_PartWide_C_CustomFunction_Params params {};
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.SetContentTextAdditional
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Timer_SA_PartWide_C::SetContentTextAdditional(const struct FText& Text, const struct FLinearColor& FontColorOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.SetContentTextAdditional");

	UUI_HUD_Timer_SA_PartWide_C_SetContentTextAdditional_Params params {};
	params.Text = Text;
	params.FontColorOverride = FontColorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.Reset
//		Flags  -> ()
void UUI_HUD_Timer_SA_PartWide_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.Reset");

	UUI_HUD_Timer_SA_PartWide_C_Reset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.Construct
//		Flags  -> ()
void UUI_HUD_Timer_SA_PartWide_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.Construct");

	UUI_HUD_Timer_SA_PartWide_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.ExecuteUbergraph_UI_HUD_Timer_SA_PartWide
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Timer_SA_PartWide_C::ExecuteUbergraph_UI_HUD_Timer_SA_PartWide(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Timer_SA_PartWide.UI_HUD_Timer_SA_PartWide_C.ExecuteUbergraph_UI_HUD_Timer_SA_PartWide");

	UUI_HUD_Timer_SA_PartWide_C_ExecuteUbergraph_UI_HUD_Timer_SA_PartWide_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
