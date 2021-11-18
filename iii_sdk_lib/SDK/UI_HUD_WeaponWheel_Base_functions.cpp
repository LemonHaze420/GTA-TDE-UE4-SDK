// Name: GTA III, Version: 1.0.0

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
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.GetWeaponWheelItemOffset
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_WeaponWheel_Base_C::GetWeaponWheelItemOffset(float* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.GetWeaponWheelItemOffset");

	UUI_HUD_WeaponWheel_Base_C_GetWeaponWheelItemOffset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.GetRadioWheelItemOffset
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_WeaponWheel_Base_C::GetRadioWheelItemOffset(float* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.GetRadioWheelItemOffset");

	UUI_HUD_WeaponWheel_Base_C_GetRadioWheelItemOffset_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.SetupDynamicMat
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_HUD_WeaponWheel_Base_C::SetupDynamicMat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.SetupDynamicMat");

	UUI_HUD_WeaponWheel_Base_C_SetupDynamicMat_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.AddTextToImages
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FString>                             Array                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_HUD_WeaponWheel_Base_C::AddTextToImages(TArray<struct FString> Array)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.AddTextToImages");

	UUI_HUD_WeaponWheel_Base_C_AddTextToImages_Params params {};
	params.Array = Array;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.SetupStrings
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FString>                             Images                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_HUD_WeaponWheel_Base_C::SetupStrings(TArray<struct FString>* Images)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.SetupStrings");

	UUI_HUD_WeaponWheel_Base_C_SetupStrings_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Images != nullptr)
		*Images = params.Images;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.SetupNewText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     string                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Length                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_WeaponWheel_Base_C::SetupNewText(const struct FString& string, int Index, int Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.SetupNewText");

	UUI_HUD_WeaponWheel_Base_C_SetupNewText_Params params {};
	params.string = string;
	params.Index = Index;
	params.Length = Length;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.UpdateSelection
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UUI_HUD_WeaponWheel_Base_C::UpdateSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.UpdateSelection");

	UUI_HUD_WeaponWheel_Base_C_UpdateSelection_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.SetSelection
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_WeaponWheel_Base_C::SetSelection(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.SetSelection");

	UUI_HUD_WeaponWheel_Base_C_SetSelection_Params params {};
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.Setup New Image
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Length                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     string                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FString                                     extraString                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		class UUserWidget*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UUserWidget* UUI_HUD_WeaponWheel_Base_C::Setup_New_Image(class UObject* Texture, int Index, int Length, bool Enabled, const struct FString& string, const struct FString& extraString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.Setup New Image");

	UUI_HUD_WeaponWheel_Base_C_Setup_New_Image_Params params {};
	params.Texture = Texture;
	params.Index = Index;
	params.Length = Length;
	params.Enabled = Enabled;
	params.string = string;
	params.extraString = extraString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.SetupSections
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NumSections                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_WeaponWheel_Base_C::SetupSections(int NumSections)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.SetupSections");

	UUI_HUD_WeaponWheel_Base_C_SetupSections_Params params {};
	params.NumSections = NumSections;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.SetupImages
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FSlotImageStruct>                    Images                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_HUD_WeaponWheel_Base_C::SetupImages(TArray<struct FSlotImageStruct>* Images)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.SetupImages");

	UUI_HUD_WeaponWheel_Base_C_SetupImages_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Images != nullptr)
		*Images = params.Images;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_WeaponWheel_Base_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.Tick");

	UUI_HUD_WeaponWheel_Base_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.OnSynchronizeProperties
//		Flags  -> (Event, Public, BlueprintEvent)
void UUI_HUD_WeaponWheel_Base_C::OnSynchronizeProperties()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.OnSynchronizeProperties");

	UUI_HUD_WeaponWheel_Base_C_OnSynchronizeProperties_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UUI_HUD_WeaponWheel_Base_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.Construct");

	UUI_HUD_WeaponWheel_Base_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.CustomFunctionWithObjects
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TArray<struct FSlotImageStruct>                    Objects                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_HUD_WeaponWheel_Base_C::CustomFunctionWithObjects(const struct FString& FunctionName, TArray<struct FSlotImageStruct> Objects)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.CustomFunctionWithObjects");

	UUI_HUD_WeaponWheel_Base_C_CustomFunctionWithObjects_Params params {};
	params.FunctionName = FunctionName;
	params.Objects = Objects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.CustomFunctionWithInteger
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		int                                                integer                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_WeaponWheel_Base_C::CustomFunctionWithInteger(const struct FString& FunctionName, int integer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.CustomFunctionWithInteger");

	UUI_HUD_WeaponWheel_Base_C_CustomFunctionWithInteger_Params params {};
	params.FunctionName = FunctionName;
	params.integer = integer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.CustomFunctionWithStrings
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		TArray<struct FString>                             Strings                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UUI_HUD_WeaponWheel_Base_C::CustomFunctionWithStrings(const struct FString& FunctionName, TArray<struct FString> Strings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.CustomFunctionWithStrings");

	UUI_HUD_WeaponWheel_Base_C_CustomFunctionWithStrings_Params params {};
	params.FunctionName = FunctionName;
	params.Strings = Strings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.CustomFunctionWithFloat
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     FunctionName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
//		float                                              floatNum                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_WeaponWheel_Base_C::CustomFunctionWithFloat(const struct FString& FunctionName, float floatNum)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.CustomFunctionWithFloat");

	UUI_HUD_WeaponWheel_Base_C_CustomFunctionWithFloat_Params params {};
	params.FunctionName = FunctionName;
	params.floatNum = floatNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.ExecuteUbergraph_UI_HUD_WeaponWheel_Base
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UUI_HUD_WeaponWheel_Base_C::ExecuteUbergraph_UI_HUD_WeaponWheel_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.ExecuteUbergraph_UI_HUD_WeaponWheel_Base");

	UUI_HUD_WeaponWheel_Base_C_ExecuteUbergraph_UI_HUD_WeaponWheel_Base_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
