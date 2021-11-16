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

// Function DoubleCreditBox.DoubleCreditBox_C.SetTextValues
struct UDoubleCreditBox_C_SetTextValues_Params
{
	struct FText                                       Text1;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Text2;                                                     // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateFontInfo                              Font;                                                      // 0x0030(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function DoubleCreditBox.DoubleCreditBox_C.Construct
struct UDoubleCreditBox_C_Construct_Params
{
};

// Function DoubleCreditBox.DoubleCreditBox_C.DelayedTextAdd
struct UDoubleCreditBox_C_DelayedTextAdd_Params
{
	struct FText                                       Text1;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Text2;                                                     // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateFontInfo                              Font;                                                      // 0x0030(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function DoubleCreditBox.DoubleCreditBox_C.ExecuteUbergraph_DoubleCreditBox
struct UDoubleCreditBox_C_ExecuteUbergraph_DoubleCreditBox_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
