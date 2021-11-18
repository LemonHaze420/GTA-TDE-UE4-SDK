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
//		Name   -> Function UI_SocialClub_MainScreen.UI_SocialClub_MainScreen_C.HandleBack
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUI_SocialClub_MainScreen_C::HandleBack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SocialClub_MainScreen.UI_SocialClub_MainScreen_C.HandleBack");

	UUI_SocialClub_MainScreen_C_HandleBack_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SocialClub_MainScreen.UI_SocialClub_MainScreen_C.ShowAchievements
//		Flags  -> ()
// Parameters:
void UUI_SocialClub_MainScreen_C::ShowAchievements()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SocialClub_MainScreen.UI_SocialClub_MainScreen_C.ShowAchievements");

	UUI_SocialClub_MainScreen_C_ShowAchievements_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SocialClub_MainScreen.UI_SocialClub_MainScreen_C.SetupLayout
//		Flags  -> ()
// Parameters:
void UUI_SocialClub_MainScreen_C::SetupLayout()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SocialClub_MainScreen.UI_SocialClub_MainScreen_C.SetupLayout");

	UUI_SocialClub_MainScreen_C_SetupLayout_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SocialClub_MainScreen.UI_SocialClub_MainScreen_C.TakeFocus
//		Flags  -> ()
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UUI_SocialClub_MainScreen_C::TakeFocus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SocialClub_MainScreen.UI_SocialClub_MainScreen_C.TakeFocus");

	UUI_SocialClub_MainScreen_C_TakeFocus_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SocialClub_MainScreen.UI_SocialClub_MainScreen_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_SocialClub_MainScreen_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SocialClub_MainScreen.UI_SocialClub_MainScreen_C.PreConstruct");

	UUI_SocialClub_MainScreen_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SocialClub_MainScreen.UI_SocialClub_MainScreen_C.Construct
//		Flags  -> ()
void UUI_SocialClub_MainScreen_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SocialClub_MainScreen.UI_SocialClub_MainScreen_C.Construct");

	UUI_SocialClub_MainScreen_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SocialClub_MainScreen.UI_SocialClub_MainScreen_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SocialClub_MainScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SocialClub_MainScreen.UI_SocialClub_MainScreen_C.Tick");

	UUI_SocialClub_MainScreen_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_SocialClub_MainScreen.UI_SocialClub_MainScreen_C.ExecuteUbergraph_UI_SocialClub_MainScreen
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_SocialClub_MainScreen_C::ExecuteUbergraph_UI_SocialClub_MainScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_SocialClub_MainScreen.UI_SocialClub_MainScreen_C.ExecuteUbergraph_UI_SocialClub_MainScreen");

	UUI_SocialClub_MainScreen_C_ExecuteUbergraph_UI_SocialClub_MainScreen_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
