#pragma once

// Name: ViceCity, Version: 1.0.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ControllerButtonLayout.ControllerButtonLayout
// 0x0026
struct FControllerButtonLayout
{
	TEnumAsByte<ControllerButtonIDDefinitions_EControllerButtonIDDefinitions> ButtonValue_19_9CAB8B674C518A083C0DDB817F4719F9;           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N0RR[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAnchors                                    Anchor_6_4E3712EF4D5999008732DEA68DF48625;                 // 0x0004(0x0010) (Edit, BlueprintVisible, NoDestructor)
	struct FMargin                                     Margin_9_5714A3E84480593CEE24ACB0FD45FBBC;                 // 0x0014(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment_15_A54405BA469CE19091984EBD011E6FED;   // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EVerticalAlignment>          VerticalAlignment_18_A3065697449FCE7AED59C7B6D4DDBCDD;     // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
