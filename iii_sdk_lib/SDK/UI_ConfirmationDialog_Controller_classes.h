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

// WidgetBlueprintGeneratedClass UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C
// 0x0008 (FullSize[0x0C58] - InheritedSize[0x0C50])
class UUI_ConfirmationDialog_Controller_C : public UUI_ConfirmationDialog_FullScreen_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0C50(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ConfirmationDialog_Controller.UI_ConfirmationDialog_Controller_C");
		return ptr;
	}



	void ForceDialogClose();
	void ForceDialogCancel();
	void OnSelectionPicked(bool Confirmed, bool WasForced_);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_ConfirmationDialog_Controller(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
