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

// WidgetBlueprintGeneratedClass UI_HUDBar_VC.UI_HUDBar_VC_C
// 0x0000 (FullSize[0x0318] - InheritedSize[0x0318])
class UUI_HUDBar_VC_C : public UUI_HUDBar_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUDBar_VC.UI_HUDBar_VC_C");
		return ptr;
	}



	void SetProgres(float TopBar, float BottomBar, bool IsPositive);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
