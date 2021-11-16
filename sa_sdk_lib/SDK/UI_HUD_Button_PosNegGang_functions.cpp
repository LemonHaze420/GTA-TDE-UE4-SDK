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
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.Reset Text Content Timer
//		Flags  -> ()
// Parameters:
void UUI_HUD_Button_PosNegGang_C::Reset_Text_Content_Timer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.Reset Text Content Timer");

	UUI_HUD_Button_PosNegGang_C_Reset_Text_Content_Timer_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.GetTextContent
//		Flags  -> ()
// Parameters:
//		class UUI_HUDText_C*                               Text                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Button_PosNegGang_C::GetTextContent(class UUI_HUDText_C** Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.GetTextContent");

	UUI_HUD_Button_PosNegGang_C_GetTextContent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.DestroyTextContent
//		Flags  -> ()
// Parameters:
void UUI_HUD_Button_PosNegGang_C::DestroyTextContent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.DestroyTextContent");

	UUI_HUD_Button_PosNegGang_C_DestroyTextContent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.CreateOrGetTextContent
//		Flags  -> ()
// Parameters:
//		class UUI_HUDText_C*                               Output                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Button_PosNegGang_C::CreateOrGetTextContent(class UUI_HUDText_C** Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.CreateOrGetTextContent");

	UUI_HUD_Button_PosNegGang_C_CreateOrGetTextContent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.Set Main Text
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Button_PosNegGang_C::Set_Main_Text(const struct FText& Text, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.Set Main Text");

	UUI_HUD_Button_PosNegGang_C_Set_Main_Text_Params params {};
	params.Text = Text;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.GetMappingWidget
//		Flags  -> ()
// Parameters:
//		class UUI_HUD_MappingImage_C*                      Output                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Button_PosNegGang_C::GetMappingWidget(class UUI_HUD_MappingImage_C** Output)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.GetMappingWidget");

	UUI_HUD_Button_PosNegGang_C_GetMappingWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.CreateOrGetMappingWidget
//		Flags  -> ()
// Parameters:
//		class UUI_HUD_MappingImage_C*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UUI_HUD_MappingImage_C* UUI_HUD_Button_PosNegGang_C::CreateOrGetMappingWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.CreateOrGetMappingWidget");

	UUI_HUD_Button_PosNegGang_C_CreateOrGetMappingWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.DestroyMappingWidget
//		Flags  -> ()
// Parameters:
void UUI_HUD_Button_PosNegGang_C::DestroyMappingWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.DestroyMappingWidget");

	UUI_HUD_Button_PosNegGang_C_DestroyMappingWidget_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.SetTextValue
//		Flags  -> ()
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FLinearColor                                LinearColor                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTextBlock*                                  Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Button_PosNegGang_C::SetTextValue(const struct FText& InText, const struct FLinearColor& LinearColor, class UTextBlock* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.SetTextValue");

	UUI_HUD_Button_PosNegGang_C_SetTextValue_Params params {};
	params.InText = InText;
	params.LinearColor = LinearColor;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.SetSpecificImageLocation
//		Flags  -> ()
// Parameters:
//		class UCanvasPanelSlot*                            Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              xMin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              yMin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Xmax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Ymax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Debug                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_Button_PosNegGang_C::SetSpecificImageLocation(class UCanvasPanelSlot* Slot, float xMin, float yMin, float Xmax, float Ymax, bool Debug)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.SetSpecificImageLocation");

	UUI_HUD_Button_PosNegGang_C_SetSpecificImageLocation_Params params {};
	params.Slot = Slot;
	params.xMin = xMin;
	params.yMin = yMin;
	params.Xmax = Xmax;
	params.Ymax = Ymax;
	params.Debug = Debug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.Set Icon Anchors
//		Flags  -> ()
// Parameters:
//		class UCanvasPanelSlot*                            Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FAnchors                                    DefaultAnchor                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		float                                              xMin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Xmax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              yMin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Ymax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Button_PosNegGang_C::Set_Icon_Anchors(class UCanvasPanelSlot* Slot, const struct FAnchors& DefaultAnchor, float xMin, float Xmax, float yMin, float Ymax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.Set Icon Anchors");

	UUI_HUD_Button_PosNegGang_C_Set_Icon_Anchors_Params params {};
	params.Slot = Slot;
	params.DefaultAnchor = DefaultAnchor;
	params.xMin = xMin;
	params.Xmax = Xmax;
	params.yMin = yMin;
	params.Ymax = Ymax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.SetHelpImage
//		Flags  -> ()
// Parameters:
//		class UTexture2D*                                  InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              U                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              V                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ULength                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              VLength                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Button_PosNegGang_C::SetHelpImage(class UTexture2D* InTexture, float U, float V, float ULength, float VLength, const struct FLinearColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.SetHelpImage");

	UUI_HUD_Button_PosNegGang_C_SetHelpImage_Params params {};
	params.InTexture = InTexture;
	params.U = U;
	params.V = V;
	params.ULength = ULength;
	params.VLength = VLength;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.StartShowHide
//		Flags  -> ()
// Parameters:
//		bool                                               DoShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_Button_PosNegGang_C::StartShowHide(bool DoShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.StartShowHide");

	UUI_HUD_Button_PosNegGang_C_StartShowHide_Params params {};
	params.DoShow = DoShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.SetImage
//		Flags  -> ()
// Parameters:
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Button_PosNegGang_C::SetImage(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.SetImage");

	UUI_HUD_Button_PosNegGang_C_SetImage_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.SetImageColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               forceVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_Button_PosNegGang_C::SetImageColor(const struct FLinearColor& Color, bool forceVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.SetImageColor");

	UUI_HUD_Button_PosNegGang_C_SetImageColor_Params params {};
	params.Color = Color;
	params.forceVisible = forceVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.SetMappingImage
//		Flags  -> ()
// Parameters:
//		class UTexture2D*                                  Tex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              U                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              V                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ULength                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              VLength                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Button_PosNegGang_C::SetMappingImage(class UTexture2D* Tex, float U, float V, float ULength, float VLength, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.SetMappingImage");

	UUI_HUD_Button_PosNegGang_C_SetMappingImage_Params params {};
	params.Tex = Tex;
	params.U = U;
	params.V = V;
	params.ULength = ULength;
	params.VLength = VLength;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.Construct
//		Flags  -> ()
void UUI_HUD_Button_PosNegGang_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.Construct");

	UUI_HUD_Button_PosNegGang_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.OverrideMappingImageLocation
//		Flags  -> ()
// Parameters:
//		float                                              XMinOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              XMaxOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              YMinOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              YMaxOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Button_PosNegGang_C::OverrideMappingImageLocation(float XMinOverride, float XMaxOverride, float YMinOverride, float YMaxOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.OverrideMappingImageLocation");

	UUI_HUD_Button_PosNegGang_C_OverrideMappingImageLocation_Params params {};
	params.XMinOverride = XMinOverride;
	params.XMaxOverride = XMaxOverride;
	params.YMinOverride = YMinOverride;
	params.YMaxOverride = YMaxOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.SetSecondImageColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Button_PosNegGang_C::SetSecondImageColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.SetSecondImageColor");

	UUI_HUD_Button_PosNegGang_C_SetSecondImageColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.SetImageOffsets
//		Flags  -> ()
// Parameters:
//		float                                              xMin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              yMin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Xmax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Ymax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Button_PosNegGang_C::SetImageOffsets(float xMin, float yMin, float Xmax, float Ymax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.SetImageOffsets");

	UUI_HUD_Button_PosNegGang_C_SetImageOffsets_Params params {};
	params.xMin = xMin;
	params.yMin = yMin;
	params.Xmax = Xmax;
	params.Ymax = Ymax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.SetImageAnchors
//		Flags  -> ()
// Parameters:
//		float                                              xMin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Xmax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              yMin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Ymax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Button_PosNegGang_C::SetImageAnchors(float xMin, float Xmax, float yMin, float Ymax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.SetImageAnchors");

	UUI_HUD_Button_PosNegGang_C_SetImageAnchors_Params params {};
	params.xMin = xMin;
	params.Xmax = Xmax;
	params.yMin = yMin;
	params.Ymax = Ymax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.SetContentText
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Button_PosNegGang_C::SetContentText(const struct FText& Text, const struct FLinearColor& FontColorOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.SetContentText");

	UUI_HUD_Button_PosNegGang_C_SetContentText_Params params {};
	params.Text = Text;
	params.FontColorOverride = FontColorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.SetContentTextAnchors
//		Flags  -> ()
// Parameters:
//		float                                              xMin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Xmax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              yMin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Ymax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Button_PosNegGang_C::SetContentTextAnchors(float xMin, float Xmax, float yMin, float Ymax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.SetContentTextAnchors");

	UUI_HUD_Button_PosNegGang_C_SetContentTextAnchors_Params params {};
	params.xMin = xMin;
	params.Xmax = Xmax;
	params.yMin = yMin;
	params.Ymax = Ymax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.SetImageWithSpriteSheet
//		Flags  -> ()
// Parameters:
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              U                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              V                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ULength                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              VLength                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Button_PosNegGang_C::SetImageWithSpriteSheet(class UTexture2D* Texture, float U, float V, float ULength, float VLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.SetImageWithSpriteSheet");

	UUI_HUD_Button_PosNegGang_C_SetImageWithSpriteSheet_Params params {};
	params.Texture = Texture;
	params.U = U;
	params.V = V;
	params.ULength = ULength;
	params.VLength = VLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.CheckMapping
//		Flags  -> ()
void UUI_HUD_Button_PosNegGang_C::CheckMapping()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.CheckMapping");

	UUI_HUD_Button_PosNegGang_C_CheckMapping_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.CheckTextContent
//		Flags  -> ()
void UUI_HUD_Button_PosNegGang_C::CheckTextContent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.CheckTextContent");

	UUI_HUD_Button_PosNegGang_C_CheckTextContent_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.ExecuteUbergraph_UI_HUD_Button_PosNegGang
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Button_PosNegGang_C::ExecuteUbergraph_UI_HUD_Button_PosNegGang(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Button_PosNegGang.UI_HUD_Button_PosNegGang_C.ExecuteUbergraph_UI_HUD_Button_PosNegGang");

	UUI_HUD_Button_PosNegGang_C_ExecuteUbergraph_UI_HUD_Button_PosNegGang_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
