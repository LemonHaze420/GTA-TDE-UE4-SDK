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
//		Name   -> Function SC_Achievement_Button.SC_Achievement_Button_C.UpdateBGColor
//		Flags  -> ()
// Parameters:
void USC_Achievement_Button_C::UpdateBGColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SC_Achievement_Button.SC_Achievement_Button_C.UpdateBGColor");

	USC_Achievement_Button_C_UpdateBGColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SC_Achievement_Button.SC_Achievement_Button_C.SetLockedState
//		Flags  -> ()
// Parameters:
//		bool                                               IsLocked                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USC_Achievement_Button_C::SetLockedState(bool IsLocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SC_Achievement_Button.SC_Achievement_Button_C.SetLockedState");

	USC_Achievement_Button_C_SetLockedState_Params params {};
	params.IsLocked = IsLocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SC_Achievement_Button.SC_Achievement_Button_C.UpdateTextColor
//		Flags  -> ()
// Parameters:
void USC_Achievement_Button_C::UpdateTextColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SC_Achievement_Button.SC_Achievement_Button_C.UpdateTextColor");

	USC_Achievement_Button_C_UpdateTextColor_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SC_Achievement_Button.SC_Achievement_Button_C.SetBackgroundColor
//		Flags  -> ()
// Parameters:
//		struct FSlateColor                                 InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void USC_Achievement_Button_C::SetBackgroundColor(const struct FSlateColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SC_Achievement_Button.SC_Achievement_Button_C.SetBackgroundColor");

	USC_Achievement_Button_C_SetBackgroundColor_Params params {};
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SC_Achievement_Button.SC_Achievement_Button_C.GetSlotButton
//		Flags  -> ()
// Parameters:
//		class UButton*                                     SlotButton                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USC_Achievement_Button_C::GetSlotButton(class UButton** SlotButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SC_Achievement_Button.SC_Achievement_Button_C.GetSlotButton");

	USC_Achievement_Button_C_GetSlotButton_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SlotButton != nullptr)
		*SlotButton = params.SlotButton;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SC_Achievement_Button.SC_Achievement_Button_C.PreConstruct
//		Flags  -> ()
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void USC_Achievement_Button_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SC_Achievement_Button.SC_Achievement_Button_C.PreConstruct");

	USC_Achievement_Button_C_PreConstruct_Params params {};
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SC_Achievement_Button.SC_Achievement_Button_C.Construct
//		Flags  -> ()
void USC_Achievement_Button_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SC_Achievement_Button.SC_Achievement_Button_C.Construct");

	USC_Achievement_Button_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SC_Achievement_Button.SC_Achievement_Button_C.Tick
//		Flags  -> ()
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USC_Achievement_Button_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SC_Achievement_Button.SC_Achievement_Button_C.Tick");

	USC_Achievement_Button_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SC_Achievement_Button.SC_Achievement_Button_C.OnSynchronizeProperties
//		Flags  -> ()
void USC_Achievement_Button_C::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SC_Achievement_Button.SC_Achievement_Button_C.OnSynchronizeProperties");

	USC_Achievement_Button_C_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00000000
//		Name   -> Function SC_Achievement_Button.SC_Achievement_Button_C.ExecuteUbergraph_SC_Achievement_Button
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USC_Achievement_Button_C::ExecuteUbergraph_SC_Achievement_Button(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SC_Achievement_Button.SC_Achievement_Button_C.ExecuteUbergraph_SC_Achievement_Button");

	USC_Achievement_Button_C_ExecuteUbergraph_SC_Achievement_Button_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
