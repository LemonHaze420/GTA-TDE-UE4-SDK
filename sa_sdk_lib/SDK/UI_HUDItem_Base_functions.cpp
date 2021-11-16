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
//		Name   -> Function UI_HUDItem_Base.UI_HUDItem_Base_C.GetConvertedLocFromC++
//		Flags  -> ()
// Parameters:
//		float                                              InLeft                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InTop                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InRight                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InBottom                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              XMult                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              YMult                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              XOffset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              YOffset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              OutLeft                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              OutTop                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              OutRight                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              OutBottom                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Base_C::GetConvertedLocFromC__(float InLeft, float InTop, float InRight, float InBottom, float XMult, float YMult, float XOffset, float YOffset, float* OutLeft, float* OutTop, float* OutRight, float* OutBottom)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Base.UI_HUDItem_Base_C.GetConvertedLocFromC++");

	UUI_HUDItem_Base_C_GetConvertedLocFromC___Params params {};
	params.InLeft = InLeft;
	params.InTop = InTop;
	params.InRight = InRight;
	params.InBottom = InBottom;
	params.XMult = XMult;
	params.YMult = YMult;
	params.XOffset = XOffset;
	params.YOffset = YOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutLeft != nullptr)
		*OutLeft = params.OutLeft;
	if (OutTop != nullptr)
		*OutTop = params.OutTop;
	if (OutRight != nullptr)
		*OutRight = params.OutRight;
	if (OutBottom != nullptr)
		*OutBottom = params.OutBottom;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Base.UI_HUDItem_Base_C.GetPosition
//		Flags  -> ()
// Parameters:
//		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Xmax                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Ymax                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Base_C::GetPosition(float* X, float* Y, float* Xmax, float* Ymax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Base.UI_HUDItem_Base_C.GetPosition");

	UUI_HUDItem_Base_C_GetPosition_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (Xmax != nullptr)
		*Xmax = params.Xmax;
	if (Ymax != nullptr)
		*Ymax = params.Ymax;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Base.UI_HUDItem_Base_C.SetAnchors
//		Flags  -> ()
// Parameters:
//		float                                              minX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              maxX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              minY                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              maxY                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Base_C::SetAnchors(float minX, float maxX, float minY, float maxY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Base.UI_HUDItem_Base_C.SetAnchors");

	UUI_HUDItem_Base_C_SetAnchors_Params params {};
	params.minX = minX;
	params.maxX = maxX;
	params.minY = minY;
	params.maxY = maxY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Base.UI_HUDItem_Base_C.SetImageWithSprite
//		Flags  -> ()
// Parameters:
//		class UImage*                                      ImageToChange                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMaterial*                                   Material                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              U                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              V                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ULength                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              VLength                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Base_C::SetImageWithSprite(class UImage* ImageToChange, class UMaterial* Material, class UTexture2D* Texture, float U, float V, float ULength, float VLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Base.UI_HUDItem_Base_C.SetImageWithSprite");

	UUI_HUDItem_Base_C_SetImageWithSprite_Params params {};
	params.ImageToChange = ImageToChange;
	params.Material = Material;
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
//		Name   -> Function UI_HUDItem_Base.UI_HUDItem_Base_C.MovePositionAndSize
//		Flags  -> ()
// Parameters:
//		float                                              Left                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Top                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Right                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Bottom                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Base_C::MovePositionAndSize(float Left, float Top, float Right, float Bottom)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Base.UI_HUDItem_Base_C.MovePositionAndSize");

	UUI_HUDItem_Base_C_MovePositionAndSize_Params params {};
	params.Left = Left;
	params.Top = Top;
	params.Right = Right;
	params.Bottom = Bottom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Base.UI_HUDItem_Base_C.MakeDynamicOfType
//		Flags  -> ()
// Parameters:
//		class UImage*                                      Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMaterial*                                   MatType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UMaterialInstanceDynamic*                    DynamicMat                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Base_C::MakeDynamicOfType(class UImage* Image, class UMaterial* MatType, class UMaterialInstanceDynamic** DynamicMat)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Base.UI_HUDItem_Base_C.MakeDynamicOfType");

	UUI_HUDItem_Base_C_MakeDynamicOfType_Params params {};
	params.Image = Image;
	params.MatType = MatType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DynamicMat != nullptr)
		*DynamicMat = params.DynamicMat;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Base.UI_HUDItem_Base_C.SetImageWithColor
//		Flags  -> ()
// Parameters:
//		class UImage*                                      ImageToChange                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ForceNoVisibilityChange                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               forceVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUDItem_Base_C::SetImageWithColor(class UImage* ImageToChange, const struct FLinearColor& InColor, bool ForceNoVisibilityChange, bool forceVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Base.UI_HUDItem_Base_C.SetImageWithColor");

	UUI_HUDItem_Base_C_SetImageWithColor_Params params {};
	params.ImageToChange = ImageToChange;
	params.InColor = InColor;
	params.ForceNoVisibilityChange = ForceNoVisibilityChange;
	params.forceVisible = forceVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Base.UI_HUDItem_Base_C.SetImageWithTexture
//		Flags  -> ()
// Parameters:
//		class UImage*                                      ImageToChange                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               DidChange                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUDItem_Base_C::SetImageWithTexture(class UImage* ImageToChange, class UTexture2D* Texture, bool* DidChange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Base.UI_HUDItem_Base_C.SetImageWithTexture");

	UUI_HUDItem_Base_C_SetImageWithTexture_Params params {};
	params.ImageToChange = ImageToChange;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DidChange != nullptr)
		*DidChange = params.DidChange;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Base.UI_HUDItem_Base_C.SetupSpriteMaterialValues
//		Flags  -> ()
// Parameters:
//		class UMaterialInstanceDynamic*                    DynamicMat                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              U                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              V                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ULength                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              VLength                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Base_C::SetupSpriteMaterialValues(class UMaterialInstanceDynamic* DynamicMat, class UTexture2D* InTexture, float U, float V, float ULength, float VLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Base.UI_HUDItem_Base_C.SetupSpriteMaterialValues");

	UUI_HUDItem_Base_C_SetupSpriteMaterialValues_Params params {};
	params.DynamicMat = DynamicMat;
	params.InTexture = InTexture;
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
//		Name   -> Function UI_HUDItem_Base.UI_HUDItem_Base_C.SetVisible
//		Flags  -> ()
// Parameters:
//		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_HUDItem_Base_C::SetVisible(bool IsVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Base.UI_HUDItem_Base_C.SetVisible");

	UUI_HUDItem_Base_C_SetVisible_Params params {};
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Base.UI_HUDItem_Base_C.SetPosition
//		Flags  -> ()
// Parameters:
//		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Y                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Xmax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Ymax                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Base_C::SetPosition(float X, float Y, float Xmax, float Ymax)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Base.UI_HUDItem_Base_C.SetPosition");

	UUI_HUDItem_Base_C_SetPosition_Params params {};
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
//		Name   -> Function UI_HUDItem_Base.UI_HUDItem_Base_C.SetAnchorsInDrawer
//		Flags  -> ()
// Parameters:
//		float                                              minX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              maxX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              minY                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              maxY                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Base_C::SetAnchorsInDrawer(float minX, float maxX, float minY, float maxY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Base.UI_HUDItem_Base_C.SetAnchorsInDrawer");

	UUI_HUDItem_Base_C_SetAnchorsInDrawer_Params params {};
	params.minX = minX;
	params.maxX = maxX;
	params.minY = minY;
	params.maxY = maxY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Base.UI_HUDItem_Base_C.SetWidgetTranslationPercent
//		Flags  -> ()
// Parameters:
//		float                                              X                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Y                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Base_C::SetWidgetTranslationPercent(float X, float Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Base.UI_HUDItem_Base_C.SetWidgetTranslationPercent");

	UUI_HUDItem_Base_C_SetWidgetTranslationPercent_Params params {};
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Base.UI_HUDItem_Base_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Base_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Base.UI_HUDItem_Base_C.Tick");

	UUI_HUDItem_Base_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Base.UI_HUDItem_Base_C.Construct
//		Flags  -> ()
void UUI_HUDItem_Base_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Base.UI_HUDItem_Base_C.Construct");

	UUI_HUDItem_Base_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Base.UI_HUDItem_Base_C.ExecuteUbergraph_UI_HUDItem_Base
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Base_C::ExecuteUbergraph_UI_HUDItem_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Base.UI_HUDItem_Base_C.ExecuteUbergraph_UI_HUDItem_Base");

	UUI_HUDItem_Base_C_ExecuteUbergraph_UI_HUDItem_Base_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
