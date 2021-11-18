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

// WidgetBlueprintGeneratedClass UI_MenuBackground_VCMenu.UI_MenuBackground_VCMenu_C
// 0x0010 (FullSize[0x02A8] - InheritedSize[0x0298])
class UUI_MenuBackground_VCMenu_C : public UUI_MenuBackground_C
{
public:
	class UImage*                                      ColorBackground;                                           // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      MainImage;                                                 // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MenuBackground_VCMenu.UI_MenuBackground_VCMenu_C");
		return ptr;
	}



	void GetBGCharImage(class UImage** BGChar);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
