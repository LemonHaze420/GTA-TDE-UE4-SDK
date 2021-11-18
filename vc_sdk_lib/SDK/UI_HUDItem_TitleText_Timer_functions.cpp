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
//		Name   -> Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.CreateBar
//		Flags  -> ()
// Parameters:
//		TEnumAsByte<UMG_ESlateSizeRule>                    Size_Rule                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector2D                                   SizeBoxOverride                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_TitleText_Timer_C::CreateBar(TEnumAsByte<UMG_ESlateSizeRule> Size_Rule, const struct FVector2D& SizeBoxOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.CreateBar");

	UUI_HUDItem_TitleText_Timer_C_CreateBar_Params params {};
	params.Size_Rule = Size_Rule;
	params.SizeBoxOverride = SizeBoxOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.CreateOrUpdateBar
//		Flags  -> ()
// Parameters:
//		float                                              NewValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_TitleText_Timer_C::CreateOrUpdateBar(float NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.CreateOrUpdateBar");

	UUI_HUDItem_TitleText_Timer_C_CreateOrUpdateBar_Params params {};
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.UpdateTimerText
//		Flags  -> ()
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FLinearColor                                SpecifiedColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_TitleText_Timer_C::UpdateTimerText(const struct FText& InText, const struct FLinearColor& SpecifiedColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.UpdateTimerText");

	UUI_HUDItem_TitleText_Timer_C_UpdateTimerText_Params params {};
	params.InText = InText;
	params.SpecifiedColor = SpecifiedColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.SetPosition
//		Flags  -> ()
// Parameters:
//		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Y                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Xmax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Ymax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_TitleText_Timer_C::SetPosition(float X, float Y, float Xmax, float Ymax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.SetPosition");

	UUI_HUDItem_TitleText_Timer_C_SetPosition_Params params {};
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
//		Name   -> Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.SetImage
//		Flags  -> ()
// Parameters:
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_TitleText_Timer_C::SetImage(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.SetImage");

	UUI_HUDItem_TitleText_Timer_C_SetImage_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.SetImageColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               forceVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUDItem_TitleText_Timer_C::SetImageColor(const struct FLinearColor& Color, bool forceVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.SetImageColor");

	UUI_HUDItem_TitleText_Timer_C_SetImageColor_Params params {};
	params.Color = Color;
	params.forceVisible = forceVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.CustomFunctionWithFloat
//		Flags  -> ()
// Parameters:
//		struct FString                                     FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		float                                              floatNum                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_TitleText_Timer_C::CustomFunctionWithFloat(const struct FString& FunctionName, float floatNum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.CustomFunctionWithFloat");

	UUI_HUDItem_TitleText_Timer_C_CustomFunctionWithFloat_Params params {};
	params.FunctionName = FunctionName;
	params.floatNum = floatNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.CustomFunction
//		Flags  -> ()
// Parameters:
//		struct FString                                     FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UUI_HUDItem_TitleText_Timer_C::CustomFunction(const struct FString& FunctionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.CustomFunction");

	UUI_HUDItem_TitleText_Timer_C_CustomFunction_Params params {};
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.SetContentText
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_TitleText_Timer_C::SetContentText(const struct FText& Text, const struct FLinearColor& FontColorOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.SetContentText");

	UUI_HUDItem_TitleText_Timer_C_SetContentText_Params params {};
	params.Text = Text;
	params.FontColorOverride = FontColorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_TitleText_Timer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.Tick");

	UUI_HUDItem_TitleText_Timer_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.Construct
//		Flags  -> ()
void UUI_HUDItem_TitleText_Timer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.Construct");

	UUI_HUDItem_TitleText_Timer_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.SetContentPercentOffset
//		Flags  -> ()
// Parameters:
//		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Y                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_TitleText_Timer_C::SetContentPercentOffset(float X, float Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.SetContentPercentOffset");

	UUI_HUDItem_TitleText_Timer_C_SetContentPercentOffset_Params params {};
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.OnSynchronizeProperties
//		Flags  -> ()
void UUI_HUDItem_TitleText_Timer_C::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.OnSynchronizeProperties");

	UUI_HUDItem_TitleText_Timer_C_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.ExecuteUbergraph_UI_HUDItem_TitleText_Timer
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_TitleText_Timer_C::ExecuteUbergraph_UI_HUDItem_TitleText_Timer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer.UI_HUDItem_TitleText_Timer_C.ExecuteUbergraph_UI_HUDItem_TitleText_Timer");

	UUI_HUDItem_TitleText_Timer_C_ExecuteUbergraph_UI_HUDItem_TitleText_Timer_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
