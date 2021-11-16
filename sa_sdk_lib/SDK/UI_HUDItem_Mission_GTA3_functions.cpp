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
//		Name   -> Function UI_HUDItem_Mission_GTA3.UI_HUDItem_Mission_GTA3_C.UpdateText
//		Flags  -> ()
void UUI_HUDItem_Mission_GTA3_C::UpdateText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Mission_GTA3.UI_HUDItem_Mission_GTA3_C.UpdateText");

	UUI_HUDItem_Mission_GTA3_C_UpdateText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Mission_GTA3.UI_HUDItem_Mission_GTA3_C.GetMainContentCanvasSlot
//		Flags  -> ()
// Parameters:
//		class UCanvasPanelSlot*                            ContentCanvasSlot                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Mission_GTA3_C::GetMainContentCanvasSlot(class UCanvasPanelSlot** ContentCanvasSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Mission_GTA3.UI_HUDItem_Mission_GTA3_C.GetMainContentCanvasSlot");

	UUI_HUDItem_Mission_GTA3_C_GetMainContentCanvasSlot_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ContentCanvasSlot != nullptr)
		*ContentCanvasSlot = params.ContentCanvasSlot;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Mission_GTA3.UI_HUDItem_Mission_GTA3_C.GetRichText
//		Flags  -> ()
// Parameters:
//		class URichTextBlock*                              Text                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Mission_GTA3_C::GetRichText(class URichTextBlock** Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Mission_GTA3.UI_HUDItem_Mission_GTA3_C.GetRichText");

	UUI_HUDItem_Mission_GTA3_C_GetRichText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Mission_GTA3.UI_HUDItem_Mission_GTA3_C.SetContentText
//		Flags  -> ()
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FLinearColor                                FontColorOverride                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Mission_GTA3_C::SetContentText(const struct FText& Text, const struct FLinearColor& FontColorOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Mission_GTA3.UI_HUDItem_Mission_GTA3_C.SetContentText");

	UUI_HUDItem_Mission_GTA3_C_SetContentText_Params params {};
	params.Text = Text;
	params.FontColorOverride = FontColorOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Mission_GTA3.UI_HUDItem_Mission_GTA3_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Mission_GTA3_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Mission_GTA3.UI_HUDItem_Mission_GTA3_C.Tick");

	UUI_HUDItem_Mission_GTA3_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Mission_GTA3.UI_HUDItem_Mission_GTA3_C.Construct
//		Flags  -> ()
void UUI_HUDItem_Mission_GTA3_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Mission_GTA3.UI_HUDItem_Mission_GTA3_C.Construct");

	UUI_HUDItem_Mission_GTA3_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_HUDItem_Mission_GTA3.UI_HUDItem_Mission_GTA3_C.ExecuteUbergraph_UI_HUDItem_Mission_GTA3
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUDItem_Mission_GTA3_C::ExecuteUbergraph_UI_HUDItem_Mission_GTA3(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUDItem_Mission_GTA3.UI_HUDItem_Mission_GTA3_C.ExecuteUbergraph_UI_HUDItem_Mission_GTA3");

	UUI_HUDItem_Mission_GTA3_C_ExecuteUbergraph_UI_HUDItem_Mission_GTA3_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
