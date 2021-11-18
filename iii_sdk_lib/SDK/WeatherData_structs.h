﻿#pragma once

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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct WeatherData.WeatherData
// 0x0068
struct FWeatherData
{
	float                                              CloudsScale_6_46BD2FFD4101E62C58B396AE3DAA8046;            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudsDensity_8_C959F15B494C31785AB9BDA43B1D7D13;          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudsVertexDensity_80_5B70D3CB4EBF864F08091E8395A218C9;   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudsHarness_10_C035BB69421FE083D844959BBFE947D1;         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudsTranslucent_18_6BF1A8914FAA8F67988B9DADC914CBC6;     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudsBlend_17_0B0902B849FFF532D0FA73AD750162A7;           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudsDistotion_19_FF8260554CA3B701D6C62A87A392E3BA;       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudsScattering_20_EA03A384445C04BBBC4EA2A3A28674D9;      // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudsUpperBrightness_47_80E6F59C44C0E63FF352E1ACA405DEAD; // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudsLowerBrightness_48_C275CDC444671D9809D344A043817F24; // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudsAmbient_26_B3DE5189457AF2F2C9061DAE095629E4;         // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudsShadowSize_32_30070F544C29A5175B4905A3CAA43C9B;      // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudsShadowSoft_33_242397844998748E4CE442A82FABD76E;      // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudsBackground_34_81AB1CD743507906283E26BC8179CD02;      // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudsHorizonDensity_35_A9DA12E04BD1ACCE877556A07AFC0A81;  // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudsHorizonAlpha_36_B5FE09604EE51B66C6109689DD26A633;    // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CloudsHorizonScattering_38_96C12A72485C8C653890E983ADECA031; // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HorizonFalloff_41_7ADEA15D4BAFCED09051BDAAB67D0E6E;        // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WindForceScale_42_494196B04350B9CE2B731E97799FE070;        // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WindDynamic_45_4BD5C5EC4B00477CD0BAC8857B6087F7;           // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WindDispersing_46_747C4F2B40612E5FE76792B0CB7C4E90;        // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SkylightBrightness_52_D0DC0C2C48095A9468CA2A8ECC6B512B;    // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SecondLayerColor_71_16427994489B87788D8B02B67E7E863B;      // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SecondLayerAlpha_72_8759E297465AF80FD8856791526E7414;      // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SecondLayerScale_77_6F5F9AE84D7C8132AF2BD68DD7F5A018;      // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SecondLayerWind_73_58F8ABAE4AE471692F3D53A832B70EC0;       // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
