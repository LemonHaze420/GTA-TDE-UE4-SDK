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
//		Name   -> Function UI_MenuBackground.UI_MenuBackground_C.GetBGCharImage
//		Flags  -> ()
// Parameters:
//		class UImage*                                      BGChar                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MenuBackground_C::GetBGCharImage(class UImage** BGChar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuBackground.UI_MenuBackground_C.GetBGCharImage");

	UUI_MenuBackground_C_GetBGCharImage_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BGChar != nullptr)
		*BGChar = params.BGChar;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_MenuBackground.UI_MenuBackground_C.Hide BGChar
//		Flags  -> ()
// Parameters:
//		bool                                               ShowCharacter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UUI_MenuBackground_C::Hide_BGChar(bool ShowCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuBackground.UI_MenuBackground_C.Hide BGChar");

	UUI_MenuBackground_C_Hide_BGChar_Params params {};
	params.ShowCharacter = ShowCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function UI_MenuBackground.UI_MenuBackground_C.ExecuteUbergraph_UI_MenuBackground
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_MenuBackground_C::ExecuteUbergraph_UI_MenuBackground(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_MenuBackground.UI_MenuBackground_C.ExecuteUbergraph_UI_MenuBackground");

	UUI_MenuBackground_C_ExecuteUbergraph_UI_MenuBackground_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
