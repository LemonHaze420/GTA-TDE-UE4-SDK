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

// Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.GetWeaponWheelItemOffset
struct UUI_HUD_WeaponWheel_Base_C_GetWeaponWheelItemOffset_Params
{
	float                                              NewParam;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.GetRadioWheelItemOffset
struct UUI_HUD_WeaponWheel_Base_C_GetRadioWheelItemOffset_Params
{
	float                                              NewParam;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.SetupDynamicMat
struct UUI_HUD_WeaponWheel_Base_C_SetupDynamicMat_Params
{
};

// Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.AddTextToImages
struct UUI_HUD_WeaponWheel_Base_C_AddTextToImages_Params
{
	TArray<struct FString>                             Array;                                                     // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.SetupStrings
struct UUI_HUD_WeaponWheel_Base_C_SetupStrings_Params
{
	TArray<struct FString>                             Images;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.SetupNewText
struct UUI_HUD_WeaponWheel_Base_C_SetupNewText_Params
{
	struct FString                                     string;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Length;                                                    // 0x0014(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.UpdateSelection
struct UUI_HUD_WeaponWheel_Base_C_UpdateSelection_Params
{
};

// Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.SetSelection
struct UUI_HUD_WeaponWheel_Base_C_SetSelection_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.Setup New Image
struct UUI_HUD_WeaponWheel_Base_C_Setup_New_Image_Params
{
	class UObject*                                     Texture;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Length;                                                    // 0x000C(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Enabled;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     string;                                                    // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     extraString;                                               // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UUserWidget*                                 ReturnValue;                                               // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.SetupSections
struct UUI_HUD_WeaponWheel_Base_C_SetupSections_Params
{
	int                                                NumSections;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.SetupImages
struct UUI_HUD_WeaponWheel_Base_C_SetupImages_Params
{
	TArray<struct FSlotImageStruct>                    Images;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.Tick
struct UUI_HUD_WeaponWheel_Base_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.OnSynchronizeProperties
struct UUI_HUD_WeaponWheel_Base_C_OnSynchronizeProperties_Params
{
};

// Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.Construct
struct UUI_HUD_WeaponWheel_Base_C_Construct_Params
{
};

// Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.CustomFunctionWithObjects
struct UUI_HUD_WeaponWheel_Base_C_CustomFunctionWithObjects_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FSlotImageStruct>                    Objects;                                                   // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.CustomFunctionWithInteger
struct UUI_HUD_WeaponWheel_Base_C_CustomFunctionWithInteger_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int                                                integer;                                                   // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.CustomFunctionWithStrings
struct UUI_HUD_WeaponWheel_Base_C_CustomFunctionWithStrings_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FString>                             Strings;                                                   // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.CustomFunctionWithFloat
struct UUI_HUD_WeaponWheel_Base_C_CustomFunctionWithFloat_Params
{
	struct FString                                     FunctionName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              floatNum;                                                  // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function UI_HUD_WeaponWheel_Base.UI_HUD_WeaponWheel_Base_C.ExecuteUbergraph_UI_HUD_WeaponWheel_Base
struct UUI_HUD_WeaponWheel_Base_C_ExecuteUbergraph_UI_HUD_WeaponWheel_Base_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
