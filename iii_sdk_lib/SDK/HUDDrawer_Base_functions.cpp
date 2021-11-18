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
//		Name   -> Function HUDDrawer_Base.HUDDrawer_Base_C.UpdateHudItemsOnLanguageChanges
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UHUDDrawer_Base_C::UpdateHudItemsOnLanguageChanges()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUDDrawer_Base.HUDDrawer_Base_C.UpdateHudItemsOnLanguageChanges");

	UHUDDrawer_Base_C_UpdateHudItemsOnLanguageChanges_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function HUDDrawer_Base.HUDDrawer_Base_C.GetScreenMultAndOverrideSize
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              SizeMult                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              WidthOverride                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              HeightOverride                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHUDDrawer_Base_C::GetScreenMultAndOverrideSize(float* SizeMult, float* WidthOverride, float* HeightOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUDDrawer_Base.HUDDrawer_Base_C.GetScreenMultAndOverrideSize");

	UHUDDrawer_Base_C_GetScreenMultAndOverrideSize_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SizeMult != nullptr)
		*SizeMult = params.SizeMult;
	if (WidthOverride != nullptr)
		*WidthOverride = params.WidthOverride;
	if (HeightOverride != nullptr)
		*HeightOverride = params.HeightOverride;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function HUDDrawer_Base.HUDDrawer_Base_C.SetScreenSize
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              screenWidth                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              screenHeight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UHUDDrawer_Base_C::SetScreenSize(float screenWidth, float screenHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUDDrawer_Base.HUDDrawer_Base_C.SetScreenSize");

	UHUDDrawer_Base_C_SetScreenSize_Params params {};
	params.screenWidth = screenWidth;
	params.screenHeight = screenHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function HUDDrawer_Base.HUDDrawer_Base_C.UpdateScreenSize
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InWidthOverride                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InHeightOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               DidChange                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UHUDDrawer_Base_C::UpdateScreenSize(float InWidthOverride, float InHeightOverride, bool* DidChange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUDDrawer_Base.HUDDrawer_Base_C.UpdateScreenSize");

	UHUDDrawer_Base_C_UpdateScreenSize_Params params {};
	params.InWidthOverride = InWidthOverride;
	params.InHeightOverride = InHeightOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DidChange != nullptr)
		*DidChange = params.DidChange;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function HUDDrawer_Base.HUDDrawer_Base_C.RemoveGTAHUDItem
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ForName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UHUDDrawer_Base_C::RemoveGTAHUDItem(const struct FName& ForName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUDDrawer_Base.HUDDrawer_Base_C.RemoveGTAHUDItem");

	UHUDDrawer_Base_C_RemoveGTAHUDItem_Params params {};
	params.ForName = ForName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function HUDDrawer_Base.HUDDrawer_Base_C.AddNewItemToCanvas
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUI_GTAHUDItem*                              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       UnderName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHUDDrawer_Base_C::AddNewItemToCanvas(class UUI_GTAHUDItem* Item, const struct FName& UnderName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUDDrawer_Base.HUDDrawer_Base_C.AddNewItemToCanvas");

	UHUDDrawer_Base_C_AddNewItemToCanvas_Params params {};
	params.Item = Item;
	params.UnderName = UnderName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function HUDDrawer_Base.HUDDrawer_Base_C.CreateAllHudItems
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UHUDDrawer_Base_C::CreateAllHudItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUDDrawer_Base.HUDDrawer_Base_C.CreateAllHudItems");

	UHUDDrawer_Base_C_CreateAllHudItems_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function HUDDrawer_Base.HUDDrawer_Base_C.CreateHudItem
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       For                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UUI_GTAHUDItem*                              OutItem                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHUDDrawer_Base_C::CreateHudItem(const struct FName& For, class UUI_GTAHUDItem** OutItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUDDrawer_Base.HUDDrawer_Base_C.CreateHudItem");

	UHUDDrawer_Base_C_CreateHudItem_Params params {};
	params.For = For;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutItem != nullptr)
		*OutItem = params.OutItem;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function HUDDrawer_Base.HUDDrawer_Base_C.GetGTAHUDItem
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       ForName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               CreateIfNotFound                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UUI_GTAHUDItem*                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UUI_GTAHUDItem* UHUDDrawer_Base_C::GetGTAHUDItem(const struct FName& ForName, bool CreateIfNotFound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUDDrawer_Base.HUDDrawer_Base_C.GetGTAHUDItem");

	UHUDDrawer_Base_C_GetGTAHUDItem_Params params {};
	params.ForName = ForName;
	params.CreateIfNotFound = CreateIfNotFound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function HUDDrawer_Base.HUDDrawer_Base_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UHUDDrawer_Base_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUDDrawer_Base.HUDDrawer_Base_C.Construct");

	UHUDDrawer_Base_C_Construct_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function HUDDrawer_Base.HUDDrawer_Base_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHUDDrawer_Base_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUDDrawer_Base.HUDDrawer_Base_C.Tick");

	UHUDDrawer_Base_C_Tick_Params params {};
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function HUDDrawer_Base.HUDDrawer_Base_C.UpdateItemsForSettings
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     Setting                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UHUDDrawer_Base_C::UpdateItemsForSettings(const struct FString& Setting)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUDDrawer_Base.HUDDrawer_Base_C.UpdateItemsForSettings");

	UHUDDrawer_Base_C_UpdateItemsForSettings_Params params {};
	params.Setting = Setting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0188C180
//		Name   -> Function HUDDrawer_Base.HUDDrawer_Base_C.ExecuteUbergraph_HUDDrawer_Base
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UHUDDrawer_Base_C::ExecuteUbergraph_HUDDrawer_Base(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function HUDDrawer_Base.HUDDrawer_Base_C.ExecuteUbergraph_HUDDrawer_Base");

	UHUDDrawer_Base_C_ExecuteUbergraph_HUDDrawer_Base_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
