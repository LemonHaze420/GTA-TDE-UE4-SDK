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
//		Name   -> Function UI_Stats.UI_Stats_C.MoveToCategory
//		Flags  -> ()
// Parameters:
//		bool                                               PreviousCategory                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Stats_C::MoveToCategory(bool PreviousCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Stats.UI_Stats_C.MoveToCategory");

	UUI_Stats_C_MoveToCategory_Params params {};
	params.PreviousCategory = PreviousCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Stats.UI_Stats_C.UpdateCategoriesCheck
//		Flags  -> ()
// Parameters:
void UUI_Stats_C::UpdateCategoriesCheck()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Stats.UI_Stats_C.UpdateCategoriesCheck");

	UUI_Stats_C_UpdateCategoriesCheck_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Stats.UI_Stats_C.CreateStat
//		Flags  -> ()
// Parameters:
//		struct FString                                     inString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     InString2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UUI_SlotButton_C*                            CreatedButton                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Is_Category_Divider                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_Stats_C::CreateStat(const struct FString& inString, const struct FString& InString2, class UUI_SlotButton_C** CreatedButton, bool* Is_Category_Divider)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Stats.UI_Stats_C.CreateStat");

	UUI_Stats_C_CreateStat_Params params {};
	params.inString = inString;
	params.InString2 = InString2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CreatedButton != nullptr)
		*CreatedButton = params.CreatedButton;
	if (Is_Category_Divider != nullptr)
		*Is_Category_Divider = params.Is_Category_Divider;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Stats.UI_Stats_C.Set Main Style
//		Flags  -> ()
void UUI_Stats_C::Set_Main_Style()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Stats.UI_Stats_C.Set Main Style");

	UUI_Stats_C_Set_Main_Style_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Stats.UI_Stats_C.TakeFocus
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUI_Stats_C::TakeFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Stats.UI_Stats_C.TakeFocus");

	UUI_Stats_C_TakeFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Stats.UI_Stats_C.SetupStats
//		Flags  -> ()
// Parameters:
//		class UGameterface*                                Gameterface                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Stats_C::SetupStats(class UGameterface* Gameterface)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Stats.UI_Stats_C.SetupStats");

	UUI_Stats_C_SetupStats_Params params {};
	params.Gameterface = Gameterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Stats.UI_Stats_C.Construct
//		Flags  -> ()
void UUI_Stats_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Stats.UI_Stats_C.Construct");

	UUI_Stats_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Stats.UI_Stats_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Stats_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Stats.UI_Stats_C.Tick");

	UUI_Stats_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Stats.UI_Stats_C.OnSynchronizeProperties
//		Flags  -> ()
void UUI_Stats_C::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Stats.UI_Stats_C.OnSynchronizeProperties");

	UUI_Stats_C_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Stats.UI_Stats_C.ExecuteUbergraph_UI_Stats
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Stats_C::ExecuteUbergraph_UI_Stats(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Stats.UI_Stats_C.ExecuteUbergraph_UI_Stats");

	UUI_Stats_C_ExecuteUbergraph_UI_Stats_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
