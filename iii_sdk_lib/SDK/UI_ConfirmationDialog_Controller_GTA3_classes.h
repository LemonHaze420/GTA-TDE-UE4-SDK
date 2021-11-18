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

// WidgetBlueprintGeneratedClass UI_ConfirmationDialog_Controller_GTA3.UI_ConfirmationDialog_Controller_GTA3_C
// 0x0008 (FullSize[0x0C60] - InheritedSize[0x0C58])
class UUI_ConfirmationDialog_Controller_GTA3_C : public UUI_ConfirmationDialog_Controller_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0C58(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ConfirmationDialog_Controller_GTA3.UI_ConfirmationDialog_Controller_GTA3_C");
		return ptr;
	}



	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_ConfirmationDialog_Controller_GTA3(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
