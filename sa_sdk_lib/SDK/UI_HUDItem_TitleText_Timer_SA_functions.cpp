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
//		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CreateNewVerticalEntry
//		Flags  -> ()
// Parameters:
void UUI_HUDItem_TitleText_Timer_SA_C::CreateNewVerticalEntry()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CreateNewVerticalEntry");

	UUI_HUDItem_TitleText_Timer_SA_C_CreateNewVerticalEntry_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.UpdateStrings
//		Flags  -> ()
// Parameters:
//		struct FString                                     Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TArray<struct FString>                             TargetArray                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_HUDItem_TitleText_Timer_SA_C::UpdateStrings(const struct FString& Selection, TArray<struct FString> TargetArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.UpdateStrings");

	UUI_HUDItem_TitleText_Timer_SA_C_UpdateStrings_Params params {};
	params.Selection = Selection;
	params.TargetArray = TargetArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetElementNum
//		Flags  -> ()
// Parameters:
//		int                                                NumItems                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               NeedsWideElement                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUDItem_TitleText_Timer_SA_C::SetElementNum(int NumItems, bool NeedsWideElement)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetElementNum");

	UUI_HUDItem_TitleText_Timer_SA_C_SetElementNum_Params params {};
	params.NumItems = NumItems;
	params.NeedsWideElement = NeedsWideElement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.Set Text for Element
//		Flags  -> ()
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsMainText                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FText                                       TextValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               SetColor_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_TitleText_Timer_SA_C::Set_Text_for_Element(int Index, bool IsMainText, const struct FText& TextValue, bool SetColor_, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.Set Text for Element");

	UUI_HUDItem_TitleText_Timer_SA_C_Set_Text_for_Element_Params params {};
	params.Index = Index;
	params.IsMainText = IsMainText;
	params.TextValue = TextValue;
	params.SetColor_ = SetColor_;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.UpdateTimerText
//		Flags  -> ()
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FLinearColor                                SpecifiedColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class URichTextBlock*                              TextToUpdate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_TitleText_Timer_SA_C::UpdateTimerText(const struct FText& InText, const struct FLinearColor& SpecifiedColor, class URichTextBlock* TextToUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.UpdateTimerText");

	UUI_HUDItem_TitleText_Timer_SA_C_UpdateTimerText_Params params {};
	params.InText = InText;
	params.SpecifiedColor = SpecifiedColor;
	params.TextToUpdate = TextToUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.Construct
//		Flags  -> ()
void UUI_HUDItem_TitleText_Timer_SA_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.Construct");

	UUI_HUDItem_TitleText_Timer_SA_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_TitleText_Timer_SA_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.Tick");

	UUI_HUDItem_TitleText_Timer_SA_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetContentText
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_TitleText_Timer_SA_C::SetContentText(const struct FText& Text, const struct FLinearColor& FontColorOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetContentText");

	UUI_HUDItem_TitleText_Timer_SA_C_SetContentText_Params params {};
	params.Text = Text;
	params.FontColorOverride = FontColorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.OnSynchronizeProperties
//		Flags  -> ()
void UUI_HUDItem_TitleText_Timer_SA_C::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.OnSynchronizeProperties");

	UUI_HUDItem_TitleText_Timer_SA_C_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetContentPercentOffset
//		Flags  -> ()
// Parameters:
//		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Y                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_TitleText_Timer_SA_C::SetContentPercentOffset(float X, float Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetContentPercentOffset");

	UUI_HUDItem_TitleText_Timer_SA_C_SetContentPercentOffset_Params params {};
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetPosition
//		Flags  -> ()
// Parameters:
//		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Y                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Xmax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Ymax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_TitleText_Timer_SA_C::SetPosition(float X, float Y, float Xmax, float Ymax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetPosition");

	UUI_HUDItem_TitleText_Timer_SA_C_SetPosition_Params params {};
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
//		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetImage
//		Flags  -> ()
// Parameters:
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_TitleText_Timer_SA_C::SetImage(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetImage");

	UUI_HUDItem_TitleText_Timer_SA_C_SetImage_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetImageColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               forceVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUDItem_TitleText_Timer_SA_C::SetImageColor(const struct FLinearColor& Color, bool forceVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetImageColor");

	UUI_HUDItem_TitleText_Timer_SA_C_SetImageColor_Params params {};
	params.Color = Color;
	params.forceVisible = forceVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithFloat
//		Flags  -> ()
// Parameters:
//		struct FString                                     FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		float                                              floatNum                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_TitleText_Timer_SA_C::CustomFunctionWithFloat(const struct FString& FunctionName, float floatNum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithFloat");

	UUI_HUDItem_TitleText_Timer_SA_C_CustomFunctionWithFloat_Params params {};
	params.FunctionName = FunctionName;
	params.floatNum = floatNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunction
//		Flags  -> ()
// Parameters:
//		struct FString                                     FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UUI_HUDItem_TitleText_Timer_SA_C::CustomFunction(const struct FString& FunctionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunction");

	UUI_HUDItem_TitleText_Timer_SA_C_CustomFunction_Params params {};
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetContentTextAdditional
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_TitleText_Timer_SA_C::SetContentTextAdditional(const struct FText& Text, const struct FLinearColor& FontColorOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.SetContentTextAdditional");

	UUI_HUDItem_TitleText_Timer_SA_C_SetContentTextAdditional_Params params {};
	params.Text = Text;
	params.FontColorOverride = FontColorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithStrings
//		Flags  -> ()
// Parameters:
//		struct FString                                     FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TArray<struct FString>                             Strings                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_HUDItem_TitleText_Timer_SA_C::CustomFunctionWithStrings(const struct FString& FunctionName, TArray<struct FString> Strings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithStrings");

	UUI_HUDItem_TitleText_Timer_SA_C_CustomFunctionWithStrings_Params params {};
	params.FunctionName = FunctionName;
	params.Strings = Strings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithInteger
//		Flags  -> ()
// Parameters:
//		struct FString                                     FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                integer                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_TitleText_Timer_SA_C::CustomFunctionWithInteger(const struct FString& FunctionName, int integer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithInteger");

	UUI_HUDItem_TitleText_Timer_SA_C_CustomFunctionWithInteger_Params params {};
	params.FunctionName = FunctionName;
	params.integer = integer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithColor
//		Flags  -> ()
// Parameters:
//		struct FString                                     FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_TitleText_Timer_SA_C::CustomFunctionWithColor(const struct FString& FunctionName, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithColor");

	UUI_HUDItem_TitleText_Timer_SA_C_CustomFunctionWithColor_Params params {};
	params.FunctionName = FunctionName;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithColors
//		Flags  -> ()
// Parameters:
//		struct FString                                     FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TArray<struct FLinearColor>                        Colors                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_HUDItem_TitleText_Timer_SA_C::CustomFunctionWithColors(const struct FString& FunctionName, TArray<struct FLinearColor> Colors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.CustomFunctionWithColors");

	UUI_HUDItem_TitleText_Timer_SA_C_CustomFunctionWithColors_Params params {};
	params.FunctionName = FunctionName;
	params.Colors = Colors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.ExecuteUbergraph_UI_HUDItem_TitleText_Timer_SA
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_TitleText_Timer_SA_C::ExecuteUbergraph_UI_HUDItem_TitleText_Timer_SA(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_TitleText_Timer_SA.UI_HUDItem_TitleText_Timer_SA_C.ExecuteUbergraph_UI_HUDItem_TitleText_Timer_SA");

	UUI_HUDItem_TitleText_Timer_SA_C_ExecuteUbergraph_UI_HUDItem_TitleText_Timer_SA_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
