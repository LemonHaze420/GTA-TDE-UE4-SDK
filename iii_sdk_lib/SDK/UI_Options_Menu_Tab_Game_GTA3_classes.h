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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass UI_Options_Menu_Tab_Game_GTA3.UI_Options_Menu_Tab_Game_GTA3_C
// 0x0008 (FullSize[0x05F0] - InheritedSize[0x05E8])
class UUI_Options_Menu_Tab_Game_GTA3_C : public UUI_OptionsMenuTab_Game_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Options_Menu_Tab_Game_GTA3.UI_Options_Menu_Tab_Game_GTA3_C");
		return ptr;
	}



	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_Options_Menu_Tab_Game_GTA3(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
