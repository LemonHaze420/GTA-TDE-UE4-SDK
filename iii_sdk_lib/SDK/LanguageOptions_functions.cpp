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
//		Name   -> Function LanguageOptions.LanguageOptions_C.Should Refresh on Option Update
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               RequiresOptionRefresh                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FName                                       PropertyNameToSelect                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULanguageOptions_C::Should_Refresh_on_Option_Update(bool RequiresOptionRefresh, const struct FName& PropertyNameToSelect)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LanguageOptions.LanguageOptions_C.Should Refresh on Option Update");

	ULanguageOptions_C_Should_Refresh_on_Option_Update_Params params {};
	params.RequiresOptionRefresh = RequiresOptionRefresh;
	params.PropertyNameToSelect = PropertyNameToSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function LanguageOptions.LanguageOptions_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void ULanguageOptions_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LanguageOptions.LanguageOptions_C.Construct");

	ULanguageOptions_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function LanguageOptions.LanguageOptions_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULanguageOptions_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LanguageOptions.LanguageOptions_C.Tick");

	ULanguageOptions_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function LanguageOptions.LanguageOptions_C.ExecuteUbergraph_LanguageOptions
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULanguageOptions_C::ExecuteUbergraph_LanguageOptions(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LanguageOptions.LanguageOptions_C.ExecuteUbergraph_LanguageOptions");

	ULanguageOptions_C_ExecuteUbergraph_LanguageOptions_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
