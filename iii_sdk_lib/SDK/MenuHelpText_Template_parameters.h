#pragma once

// Name: GTA III, Version: 1.0.0


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

// Function MenuHelpText_Template.MenuHelpText_Template_C.UpdateText
struct UMenuHelpText_Template_C_UpdateText_Params
{
};

// Function MenuHelpText_Template.MenuHelpText_Template_C.Set Button Image FromMapping
struct UMenuHelpText_Template_C_Set_Button_Image_FromMapping_Params
{
	class UGameterface*                                Gameterface;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GTABase_EHIDMapping>                   mapping;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               FoundImage;                                                // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MenuHelpText_Template.MenuHelpText_Template_C.Set Button Image With UVs
struct UMenuHelpText_Template_C_Set_Button_Image_With_UVs_Params
{
	class UTexture2D*                                  InTexture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              U;                                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              V;                                                         // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ULength;                                                   // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VLength;                                                   // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MenuHelpText_Template.MenuHelpText_Template_C.GetButton
struct UMenuHelpText_Template_C_GetButton_Params
{
	class UButton*                                     Button;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MenuHelpText_Template.MenuHelpText_Template_C.PreConstruct
struct UMenuHelpText_Template_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MenuHelpText_Template.MenuHelpText_Template_C.Construct
struct UMenuHelpText_Template_C_Construct_Params
{
};

// Function MenuHelpText_Template.MenuHelpText_Template_C.ExecuteUbergraph_MenuHelpText_Template
struct UMenuHelpText_Template_C_ExecuteUbergraph_MenuHelpText_Template_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
