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

// WidgetBlueprintGeneratedClass UI_MenuBackground.UI_MenuBackground_C
// 0x0008 (FullSize[0x0298] - InheritedSize[0x0290])
class UUI_MenuBackground_C : public UUI_DesignTimeUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_MenuBackground.UI_MenuBackground_C");
		return ptr;
	}



	void GetBGCharImage(class UImage** BGChar);
	void Hide_BGChar(bool ShowCharacter);
	void ExecuteUbergraph_UI_MenuBackground(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
