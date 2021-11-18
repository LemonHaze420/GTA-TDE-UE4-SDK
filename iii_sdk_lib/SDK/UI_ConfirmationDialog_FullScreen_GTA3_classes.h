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

// WidgetBlueprintGeneratedClass UI_ConfirmationDialog_FullScreen_GTA3.UI_ConfirmationDialog_FullScreen_GTA3_C
// 0x00F8 (FullSize[0x0D48] - InheritedSize[0x0C50])
class UUI_ConfirmationDialog_FullScreen_GTA3_C : public UUI_ConfirmationDialog_FullScreen_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0C50(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FConfirmationMenuStyle                      MenuStyle_1;                                               // 0x0C58(0x00F0) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ConfirmationDialog_FullScreen_GTA3.UI_ConfirmationDialog_FullScreen_GTA3_C");
		return ptr;
	}



	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_ConfirmationDialog_FullScreen_GTA3(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
