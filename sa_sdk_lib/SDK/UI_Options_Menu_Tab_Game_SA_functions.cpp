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
//		Name   -> Function UI_Options_Menu_Tab_Game_SA.UI_Options_Menu_Tab_Game_SA_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_Menu_Tab_Game_SA_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Options_Menu_Tab_Game_SA.UI_Options_Menu_Tab_Game_SA_C.Tick");

	UUI_Options_Menu_Tab_Game_SA_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_Options_Menu_Tab_Game_SA.UI_Options_Menu_Tab_Game_SA_C.ExecuteUbergraph_UI_Options_Menu_Tab_Game_SA
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_Options_Menu_Tab_Game_SA_C::ExecuteUbergraph_UI_Options_Menu_Tab_Game_SA(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_Options_Menu_Tab_Game_SA.UI_Options_Menu_Tab_Game_SA_C.ExecuteUbergraph_UI_Options_Menu_Tab_Game_SA");

	UUI_Options_Menu_Tab_Game_SA_C_ExecuteUbergraph_UI_Options_Menu_Tab_Game_SA_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
