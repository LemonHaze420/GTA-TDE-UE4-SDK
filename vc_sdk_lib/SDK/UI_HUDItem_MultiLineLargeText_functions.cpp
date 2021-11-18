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
//		Name   -> Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.UpdateBoxSize
//		Flags  -> ()
// Parameters:
void UUI_HUDItem_MultiLineLargeText_C::UpdateBoxSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.UpdateBoxSize");

	UUI_HUDItem_MultiLineLargeText_C_UpdateBoxSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.UpdateTextBox
//		Flags  -> ()
void UUI_HUDItem_MultiLineLargeText_C::UpdateTextBox()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.UpdateTextBox");

	UUI_HUDItem_MultiLineLargeText_C_UpdateTextBox_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.UpdateMainText
//		Flags  -> ()
// Parameters:
//		struct FText                                       InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FLinearColor                                SpecifiedColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_MultiLineLargeText_C::UpdateMainText(const struct FText& InText, const struct FLinearColor& SpecifiedColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.UpdateMainText");

	UUI_HUDItem_MultiLineLargeText_C_UpdateMainText_Params params {};
	params.InText = InText;
	params.SpecifiedColor = SpecifiedColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.Construct
//		Flags  -> ()
void UUI_HUDItem_MultiLineLargeText_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.Construct");

	UUI_HUDItem_MultiLineLargeText_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_MultiLineLargeText_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.Tick");

	UUI_HUDItem_MultiLineLargeText_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.SetContentText
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_MultiLineLargeText_C::SetContentText(const struct FText& Text, const struct FLinearColor& FontColorOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.SetContentText");

	UUI_HUDItem_MultiLineLargeText_C_SetContentText_Params params {};
	params.Text = Text;
	params.FontColorOverride = FontColorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.OnSynchronizeProperties
//		Flags  -> ()
void UUI_HUDItem_MultiLineLargeText_C::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.OnSynchronizeProperties");

	UUI_HUDItem_MultiLineLargeText_C_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.SetContentPercentOffset
//		Flags  -> ()
// Parameters:
//		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Y                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_MultiLineLargeText_C::SetContentPercentOffset(float X, float Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.SetContentPercentOffset");

	UUI_HUDItem_MultiLineLargeText_C_SetContentPercentOffset_Params params {};
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.SetPosition
//		Flags  -> ()
// Parameters:
//		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Y                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Xmax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Ymax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_MultiLineLargeText_C::SetPosition(float X, float Y, float Xmax, float Ymax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.SetPosition");

	UUI_HUDItem_MultiLineLargeText_C_SetPosition_Params params {};
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
//		Name   -> Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.SetImage
//		Flags  -> ()
// Parameters:
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_MultiLineLargeText_C::SetImage(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.SetImage");

	UUI_HUDItem_MultiLineLargeText_C_SetImage_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.SetImageColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               forceVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUDItem_MultiLineLargeText_C::SetImageColor(const struct FLinearColor& Color, bool forceVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.SetImageColor");

	UUI_HUDItem_MultiLineLargeText_C_SetImageColor_Params params {};
	params.Color = Color;
	params.forceVisible = forceVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.ExecuteUbergraph_UI_HUDItem_MultiLineLargeText
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_MultiLineLargeText_C::ExecuteUbergraph_UI_HUDItem_MultiLineLargeText(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_MultiLineLargeText.UI_HUDItem_MultiLineLargeText_C.ExecuteUbergraph_UI_HUDItem_MultiLineLargeText");

	UUI_HUDItem_MultiLineLargeText_C_ExecuteUbergraph_UI_HUDItem_MultiLineLargeText_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
