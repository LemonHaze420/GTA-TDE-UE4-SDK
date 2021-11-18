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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_HUDItem_Timer_VC.UI_HUDItem_Timer_VC_C
// 0x0000 (FullSize[0x03A8] - InheritedSize[0x03A8])
class UUI_HUDItem_Timer_VC_C : public UUI_HUDItem_TitleText_Timer_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUDItem_Timer_VC.UI_HUDItem_Timer_VC_C");
		return ptr;
	}



	void CreateBar(TEnumAsByte<UMG_ESlateSizeRule> Size_Rule, const struct FVector2D& SizeBoxOverride);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
