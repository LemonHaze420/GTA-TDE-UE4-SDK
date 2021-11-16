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
//		Name   -> Function UI_HUD_Screen_ArcadeCabinet.UI_HUD_Screen_ArcadeCabinet_C.GetMainIcon
//		Flags  -> ()
// Parameters:
//		class UImage*                                      Image1                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_Screen_ArcadeCabinet_C::GetMainIcon(class UImage** Image1)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_Screen_ArcadeCabinet.UI_HUD_Screen_ArcadeCabinet_C.GetMainIcon");

	UUI_HUD_Screen_ArcadeCabinet_C_GetMainIcon_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Image1 != nullptr)
		*Image1 = params.Image1;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
