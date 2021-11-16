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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_HUD_Screen_ArcadeCabinet.UI_HUD_Screen_ArcadeCabinet_C
// 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
class UUI_HUD_Screen_ArcadeCabinet_C : public UUI_HUD_Screen_Base_C
{
public:
	class UImage*                                      MainIcon;                                                  // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUD_Screen_ArcadeCabinet.UI_HUD_Screen_ArcadeCabinet_C");
		return ptr;
	}



	void GetMainIcon(class UImage** Image1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
