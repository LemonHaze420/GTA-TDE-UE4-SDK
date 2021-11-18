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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ConfirmationDialogStyle.ConfirmationDialogStyle
// 0x0830
struct FConfirmationDialogStyle
{
	struct FJoinedButtonTemplateModifiers              CancelButtonStyle_4_9F5478264AA3E5E98BEB60AD98233BC1;      // 0x0000(0x0360) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FJoinedButtonTemplateModifiers              AcceptButtonStyle_6_040658794D6E9870F2A860ACA2767F64;      // 0x0360(0x0360) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSlateBrush                                 BackgroundBrush_13_4BE2702D4019F782F561DFAC893C686D;       // 0x06C0(0x0088) (Edit, BlueprintVisible)
	unsigned char                                      BackgroundWidget_25_631981C94738665382B593A4D7A4F09C[0x28]; // 0x0748(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	struct FAnchors                                    MainBoxAnchor_16_7D7EB4A4490A60D7D4D264A82ABBEF19;         // 0x0770(0x0010) (Edit, BlueprintVisible, NoDestructor)
	struct FText                                       DefaultMessageText_9_B213E5EF459CAE05FA1476947443884D;     // 0x0780(0x0018) (Edit, BlueprintVisible)
	struct FSlateFontInfo                              MessageFont_19_17032EA7499133BE31670285543A7690;           // 0x0798(0x0058) (Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FSlateColor                                 MessageColor_22_A7B9E63A495F0F95ADDE68BDA84960A7;          // 0x07F0(0x0028) (Edit, BlueprintVisible)
	class USoundBase*                                  AcceptSound_28_F46CF9884D5E24256CF0F8A1ED6310BA;           // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  CancelSound_31_359043AF4CCE14831EA188ABB7F8B9D1;           // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  HoveredSound_32_02B7EB2E454D5B14BFC24CBA55B35303;          // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
