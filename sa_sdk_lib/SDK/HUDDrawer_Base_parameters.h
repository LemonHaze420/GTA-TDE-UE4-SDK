#pragma once

// Name: SanAndreas, Version: 1.0.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function HUDDrawer_Base.HUDDrawer_Base_C.UpdateHudItemsOnLanguageChanges
struct UHUDDrawer_Base_C_UpdateHudItemsOnLanguageChanges_Params
{
};

// Function HUDDrawer_Base.HUDDrawer_Base_C.GetScreenMultAndOverrideSize
struct UHUDDrawer_Base_C_GetScreenMultAndOverrideSize_Params
{
	float                                              SizeMult;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WidthOverride;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HeightOverride;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HUDDrawer_Base.HUDDrawer_Base_C.SetScreenSize
struct UHUDDrawer_Base_C_SetScreenSize_Params
{
	float                                              screenWidth;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              screenHeight;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HUDDrawer_Base.HUDDrawer_Base_C.UpdateScreenSize
struct UHUDDrawer_Base_C_UpdateScreenSize_Params
{
	float                                              InWidthOverride;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InHeightOverride;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DidChange;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HUDDrawer_Base.HUDDrawer_Base_C.RemoveGTAHUDItem
struct UHUDDrawer_Base_C_RemoveGTAHUDItem_Params
{
	struct FName                                       ForName;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function HUDDrawer_Base.HUDDrawer_Base_C.AddNewItemToCanvas
struct UHUDDrawer_Base_C_AddNewItemToCanvas_Params
{
	class UUI_GTAHUDItem*                              Item;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       UnderName;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HUDDrawer_Base.HUDDrawer_Base_C.CreateAllHudItems
struct UHUDDrawer_Base_C_CreateAllHudItems_Params
{
};

// Function HUDDrawer_Base.HUDDrawer_Base_C.CreateHudItem
struct UHUDDrawer_Base_C_CreateHudItem_Params
{
	struct FName                                       For;                                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_GTAHUDItem*                              OutItem;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HUDDrawer_Base.HUDDrawer_Base_C.GetGTAHUDItem
struct UHUDDrawer_Base_C_GetGTAHUDItem_Params
{
	struct FName                                       ForName;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CreateIfNotFound;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUI_GTAHUDItem*                              ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HUDDrawer_Base.HUDDrawer_Base_C.Construct
struct UHUDDrawer_Base_C_Construct_Params
{
};

// Function HUDDrawer_Base.HUDDrawer_Base_C.Tick
struct UHUDDrawer_Base_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HUDDrawer_Base.HUDDrawer_Base_C.UpdateItemsForSettings
struct UHUDDrawer_Base_C_UpdateItemsForSettings_Params
{
	struct FString                                     Setting;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function HUDDrawer_Base.HUDDrawer_Base_C.ExecuteUbergraph_HUDDrawer_Base
struct UHUDDrawer_Base_C_ExecuteUbergraph_HUDDrawer_Base_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
