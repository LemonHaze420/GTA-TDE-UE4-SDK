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
//		Name   -> Function MenuHelpText_Template.MenuHelpText_Template_C.UpdateText
//		Flags  -> ()
void UMenuHelpText_Template_C::UpdateText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MenuHelpText_Template.MenuHelpText_Template_C.UpdateText");

	UMenuHelpText_Template_C_UpdateText_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MenuHelpText_Template.MenuHelpText_Template_C.Set Button Image FromMapping
//		Flags  -> ()
// Parameters:
//		class UGameterface*                                Gameterface                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<GTABase_EHIDMapping>                   mapping                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               FoundImage                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMenuHelpText_Template_C::Set_Button_Image_FromMapping(class UGameterface* Gameterface, TEnumAsByte<GTABase_EHIDMapping> mapping, bool* FoundImage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MenuHelpText_Template.MenuHelpText_Template_C.Set Button Image FromMapping");

	UMenuHelpText_Template_C_Set_Button_Image_FromMapping_Params params {};
	params.Gameterface = Gameterface;
	params.mapping = mapping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FoundImage != nullptr)
		*FoundImage = params.FoundImage;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MenuHelpText_Template.MenuHelpText_Template_C.Set Button Image With UVs
//		Flags  -> ()
// Parameters:
//		class UTexture2D*                                  InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              U                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              V                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ULength                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              VLength                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenuHelpText_Template_C::Set_Button_Image_With_UVs(class UTexture2D* InTexture, float U, float V, float ULength, float VLength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MenuHelpText_Template.MenuHelpText_Template_C.Set Button Image With UVs");

	UMenuHelpText_Template_C_Set_Button_Image_With_UVs_Params params {};
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
//		Name   -> Function MenuHelpText_Template.MenuHelpText_Template_C.GetButton
//		Flags  -> ()
// Parameters:
//		class UButton*                                     Button                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenuHelpText_Template_C::GetButton(class UButton** Button)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MenuHelpText_Template.MenuHelpText_Template_C.GetButton");

	UMenuHelpText_Template_C_GetButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Button != nullptr)
		*Button = params.Button;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MenuHelpText_Template.MenuHelpText_Template_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UMenuHelpText_Template_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MenuHelpText_Template.MenuHelpText_Template_C.PreConstruct");

	UMenuHelpText_Template_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MenuHelpText_Template.MenuHelpText_Template_C.Construct
//		Flags  -> ()
void UMenuHelpText_Template_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MenuHelpText_Template.MenuHelpText_Template_C.Construct");

	UMenuHelpText_Template_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function MenuHelpText_Template.MenuHelpText_Template_C.ExecuteUbergraph_MenuHelpText_Template
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMenuHelpText_Template_C::ExecuteUbergraph_MenuHelpText_Template(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MenuHelpText_Template.MenuHelpText_Template_C.ExecuteUbergraph_MenuHelpText_Template");

	UMenuHelpText_Template_C_ExecuteUbergraph_MenuHelpText_Template_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
