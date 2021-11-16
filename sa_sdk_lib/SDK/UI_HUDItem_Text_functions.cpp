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
//		Name   -> Function UI_HUDItem_Text.UI_HUDItem_Text_C.ScaleTextDown
//		Flags  -> ()
// Parameters:
void UUI_HUDItem_Text_C::ScaleTextDown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Text.UI_HUDItem_Text_C.ScaleTextDown");

	UUI_HUDItem_Text_C_ScaleTextDown_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Text.UI_HUDItem_Text_C.CalcRightSideBackground
//		Flags  -> ()
// Parameters:
//		float                                              Right                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Text_C::CalcRightSideBackground(float* Right)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Text.UI_HUDItem_Text_C.CalcRightSideBackground");

	UUI_HUDItem_Text_C_CalcRightSideBackground_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Right != nullptr)
		*Right = params.Right;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Text.UI_HUDItem_Text_C.SetBackgroundSize
//		Flags  -> ()
// Parameters:
//		float                                              Bottom                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Text_C::SetBackgroundSize(float Bottom, float Right)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Text.UI_HUDItem_Text_C.SetBackgroundSize");

	UUI_HUDItem_Text_C_SetBackgroundSize_Params params {};
	params.Bottom = Bottom;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Text.UI_HUDItem_Text_C.ResizeTextToFitReasonably
//		Flags  -> ()
// Parameters:
//		float                                              TextSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ExtraTextSizeMult                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              DesiredSize                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Text_C::ResizeTextToFitReasonably(float TextSize, float ExtraTextSizeMult, float DesiredSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Text.UI_HUDItem_Text_C.ResizeTextToFitReasonably");

	UUI_HUDItem_Text_C_ResizeTextToFitReasonably_Params params {};
	params.TextSize = TextSize;
	params.ExtraTextSizeMult = ExtraTextSizeMult;
	params.DesiredSize = DesiredSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Text.UI_HUDItem_Text_C.UpdateBoxSize
//		Flags  -> ()
// Parameters:
void UUI_HUDItem_Text_C::UpdateBoxSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Text.UI_HUDItem_Text_C.UpdateBoxSize");

	UUI_HUDItem_Text_C_UpdateBoxSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Text.UI_HUDItem_Text_C.UpdateMainText
//		Flags  -> ()
// Parameters:
//		struct FText                                       InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FLinearColor                                SpecifiedColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Text_C::UpdateMainText(const struct FText& InText, const struct FLinearColor& SpecifiedColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Text.UI_HUDItem_Text_C.UpdateMainText");

	UUI_HUDItem_Text_C_UpdateMainText_Params params {};
	params.InText = InText;
	params.SpecifiedColor = SpecifiedColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Text.UI_HUDItem_Text_C.CreateOrUpdateAdditionalText
//		Flags  -> ()
// Parameters:
//		struct FText                                       NewText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Text_C::CreateOrUpdateAdditionalText(const struct FText& NewText, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Text.UI_HUDItem_Text_C.CreateOrUpdateAdditionalText");

	UUI_HUDItem_Text_C_CreateOrUpdateAdditionalText_Params params {};
	params.NewText = NewText;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Text.UI_HUDItem_Text_C.RemoveAdditionalText
//		Flags  -> ()
void UUI_HUDItem_Text_C::RemoveAdditionalText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Text.UI_HUDItem_Text_C.RemoveAdditionalText");

	UUI_HUDItem_Text_C_RemoveAdditionalText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Text.UI_HUDItem_Text_C.CreateAdditionalText
//		Flags  -> ()
// Parameters:
void UUI_HUDItem_Text_C::CreateAdditionalText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Text.UI_HUDItem_Text_C.CreateAdditionalText");

	UUI_HUDItem_Text_C_CreateAdditionalText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Text.UI_HUDItem_Text_C.CreateBar
//		Flags  -> ()
// Parameters:
void UUI_HUDItem_Text_C::CreateBar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Text.UI_HUDItem_Text_C.CreateBar");

	UUI_HUDItem_Text_C_CreateBar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Text.UI_HUDItem_Text_C.RemoveProgressBar
//		Flags  -> ()
// Parameters:
void UUI_HUDItem_Text_C::RemoveProgressBar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Text.UI_HUDItem_Text_C.RemoveProgressBar");

	UUI_HUDItem_Text_C_RemoveProgressBar_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Text.UI_HUDItem_Text_C.CreateOrUpdateProgressBar
//		Flags  -> ()
// Parameters:
//		TArray<float>                                      Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Text_C::CreateOrUpdateProgressBar(TArray<float>* Info, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Text.UI_HUDItem_Text_C.CreateOrUpdateProgressBar");

	UUI_HUDItem_Text_C_CreateOrUpdateProgressBar_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Text.UI_HUDItem_Text_C.Construct
//		Flags  -> ()
void UUI_HUDItem_Text_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Text.UI_HUDItem_Text_C.Construct");

	UUI_HUDItem_Text_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Text.UI_HUDItem_Text_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Text_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Text.UI_HUDItem_Text_C.Tick");

	UUI_HUDItem_Text_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Text.UI_HUDItem_Text_C.SetImageColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               forceVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUDItem_Text_C::SetImageColor(const struct FLinearColor& Color, bool forceVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Text.UI_HUDItem_Text_C.SetImageColor");

	UUI_HUDItem_Text_C_SetImageColor_Params params {};
	params.Color = Color;
	params.forceVisible = forceVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Text.UI_HUDItem_Text_C.SetContentText
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Text_C::SetContentText(const struct FText& Text, const struct FLinearColor& FontColorOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Text.UI_HUDItem_Text_C.SetContentText");

	UUI_HUDItem_Text_C_SetContentText_Params params {};
	params.Text = Text;
	params.FontColorOverride = FontColorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Text.UI_HUDItem_Text_C.OnSynchronizeProperties
//		Flags  -> ()
void UUI_HUDItem_Text_C::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Text.UI_HUDItem_Text_C.OnSynchronizeProperties");

	UUI_HUDItem_Text_C_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Text.UI_HUDItem_Text_C.SetContentPercentOffset
//		Flags  -> ()
// Parameters:
//		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Y                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Text_C::SetContentPercentOffset(float X, float Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Text.UI_HUDItem_Text_C.SetContentPercentOffset");

	UUI_HUDItem_Text_C_SetContentPercentOffset_Params params {};
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Text.UI_HUDItem_Text_C.CustomFunctionWithFloats
//		Flags  -> ()
// Parameters:
//		struct FString                                     FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TArray<float>                                      Floats                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_HUDItem_Text_C::CustomFunctionWithFloats(const struct FString& FunctionName, TArray<float> Floats)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Text.UI_HUDItem_Text_C.CustomFunctionWithFloats");

	UUI_HUDItem_Text_C_CustomFunctionWithFloats_Params params {};
	params.FunctionName = FunctionName;
	params.Floats = Floats;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Text.UI_HUDItem_Text_C.CustomFunctionWithColor
//		Flags  -> ()
// Parameters:
//		struct FString                                     FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Text_C::CustomFunctionWithColor(const struct FString& FunctionName, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Text.UI_HUDItem_Text_C.CustomFunctionWithColor");

	UUI_HUDItem_Text_C_CustomFunctionWithColor_Params params {};
	params.FunctionName = FunctionName;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Text.UI_HUDItem_Text_C.CustomFunctionWithFloat
//		Flags  -> ()
// Parameters:
//		struct FString                                     FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		float                                              floatNum                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Text_C::CustomFunctionWithFloat(const struct FString& FunctionName, float floatNum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Text.UI_HUDItem_Text_C.CustomFunctionWithFloat");

	UUI_HUDItem_Text_C_CustomFunctionWithFloat_Params params {};
	params.FunctionName = FunctionName;
	params.floatNum = floatNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Text.UI_HUDItem_Text_C.SetContentTextAdditional
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Text_C::SetContentTextAdditional(const struct FText& Text, const struct FLinearColor& FontColorOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Text.UI_HUDItem_Text_C.SetContentTextAdditional");

	UUI_HUDItem_Text_C_SetContentTextAdditional_Params params {};
	params.Text = Text;
	params.FontColorOverride = FontColorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Text.UI_HUDItem_Text_C.RefreshAfterSettingsChange
//		Flags  -> ()
void UUI_HUDItem_Text_C::RefreshAfterSettingsChange()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Text.UI_HUDItem_Text_C.RefreshAfterSettingsChange");

	UUI_HUDItem_Text_C_RefreshAfterSettingsChange_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Text.UI_HUDItem_Text_C.ExecuteUbergraph_UI_HUDItem_Text
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Text_C::ExecuteUbergraph_UI_HUDItem_Text(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Text.UI_HUDItem_Text_C.ExecuteUbergraph_UI_HUDItem_Text");

	UUI_HUDItem_Text_C_ExecuteUbergraph_UI_HUDItem_Text_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
