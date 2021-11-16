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
//		Name   -> Function UI_HUD_Screen_Base.UI_HUD_Screen_Base_C.GetSecondIcon
//		Flags  -> ()
// Parameters:
//		class UImage*                                      Image2                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Screen_Base_C::GetSecondIcon(class UImage** Image2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_Base.UI_HUD_Screen_Base_C.GetSecondIcon");

	UUI_HUD_Screen_Base_C_GetSecondIcon_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Image2 != nullptr)
		*Image2 = params.Image2;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Screen_Base.UI_HUD_Screen_Base_C.GetMainIcon
//		Flags  -> ()
// Parameters:
//		class UImage*                                      Image1                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Screen_Base_C::GetMainIcon(class UImage** Image1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_Base.UI_HUD_Screen_Base_C.GetMainIcon");

	UUI_HUD_Screen_Base_C_GetMainIcon_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Image1 != nullptr)
		*Image1 = params.Image1;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Screen_Base.UI_HUD_Screen_Base_C.SetSpecificImageLocation
//		Flags  -> ()
// Parameters:
//		class UCanvasPanelSlot*                            Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              xMin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              yMin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Xmax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Ymax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Debug                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_Screen_Base_C::SetSpecificImageLocation(class UCanvasPanelSlot* Slot, float xMin, float yMin, float Xmax, float Ymax, bool Debug)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_Base.UI_HUD_Screen_Base_C.SetSpecificImageLocation");

	UUI_HUD_Screen_Base_C_SetSpecificImageLocation_Params params {};
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
//		Name   -> Function UI_HUD_Screen_Base.UI_HUD_Screen_Base_C.Set Icon Anchors
//		Flags  -> ()
// Parameters:
//		class UCanvasPanelSlot*                            Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FAnchors                                    DefaultAnchor                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		float                                              xMin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Xmax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              yMin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Ymax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Screen_Base_C::Set_Icon_Anchors(class UCanvasPanelSlot* Slot, const struct FAnchors& DefaultAnchor, float xMin, float Xmax, float yMin, float Ymax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_Base.UI_HUD_Screen_Base_C.Set Icon Anchors");

	UUI_HUD_Screen_Base_C_Set_Icon_Anchors_Params params {};
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
//		Name   -> Function UI_HUD_Screen_Base.UI_HUD_Screen_Base_C.StartShowHide
//		Flags  -> ()
// Parameters:
//		bool                                               DoShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_Screen_Base_C::StartShowHide(bool DoShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_Base.UI_HUD_Screen_Base_C.StartShowHide");

	UUI_HUD_Screen_Base_C_StartShowHide_Params params {};
	params.DoShow = DoShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Screen_Base.UI_HUD_Screen_Base_C.SetImage
//		Flags  -> ()
// Parameters:
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Screen_Base_C::SetImage(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_Base.UI_HUD_Screen_Base_C.SetImage");

	UUI_HUD_Screen_Base_C_SetImage_Params params {};
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Screen_Base.UI_HUD_Screen_Base_C.SetImageColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               forceVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUD_Screen_Base_C::SetImageColor(const struct FLinearColor& Color, bool forceVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_Base.UI_HUD_Screen_Base_C.SetImageColor");

	UUI_HUD_Screen_Base_C_SetImageColor_Params params {};
	params.Color = Color;
	params.forceVisible = forceVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Screen_Base.UI_HUD_Screen_Base_C.Construct
//		Flags  -> ()
void UUI_HUD_Screen_Base_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_Base.UI_HUD_Screen_Base_C.Construct");

	UUI_HUD_Screen_Base_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Screen_Base.UI_HUD_Screen_Base_C.SetSecondImageColor
//		Flags  -> ()
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Screen_Base_C::SetSecondImageColor(const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_Base.UI_HUD_Screen_Base_C.SetSecondImageColor");

	UUI_HUD_Screen_Base_C_SetSecondImageColor_Params params {};
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUD_Screen_Base.UI_HUD_Screen_Base_C.SetImageOffsets
//		Flags  -> ()
// Parameters:
//		float                                              xMin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              yMin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Xmax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Ymax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Screen_Base_C::SetImageOffsets(float xMin, float yMin, float Xmax, float Ymax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_Base.UI_HUD_Screen_Base_C.SetImageOffsets");

	UUI_HUD_Screen_Base_C_SetImageOffsets_Params params {};
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
//		Name   -> Function UI_HUD_Screen_Base.UI_HUD_Screen_Base_C.SetImageAnchors
//		Flags  -> ()
// Parameters:
//		float                                              xMin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Xmax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              yMin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Ymax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Screen_Base_C::SetImageAnchors(float xMin, float Xmax, float yMin, float Ymax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_Base.UI_HUD_Screen_Base_C.SetImageAnchors");

	UUI_HUD_Screen_Base_C_SetImageAnchors_Params params {};
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
//		Name   -> Function UI_HUD_Screen_Base.UI_HUD_Screen_Base_C.ExecuteUbergraph_UI_HUD_Screen_Base
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Screen_Base_C::ExecuteUbergraph_UI_HUD_Screen_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_Base.UI_HUD_Screen_Base_C.ExecuteUbergraph_UI_HUD_Screen_Base");

	UUI_HUD_Screen_Base_C_ExecuteUbergraph_UI_HUD_Screen_Base_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
