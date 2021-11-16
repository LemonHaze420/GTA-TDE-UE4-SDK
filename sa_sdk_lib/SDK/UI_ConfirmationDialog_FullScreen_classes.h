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

// WidgetBlueprintGeneratedClass UI_ConfirmationDialog_FullScreen.UI_ConfirmationDialog_FullScreen_C
// 0x000A (FullSize[0x0C50] - InheritedSize[0x0C46])
class UUI_ConfirmationDialog_FullScreen_C : public UConfirmationDialog_C
{
public:
	unsigned char                                      UnknownData_D0XG[0x2];                                     // 0x0C46(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0C48(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ConfirmationDialog_FullScreen.UI_ConfirmationDialog_FullScreen_C");
		return ptr;
	}



	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_ConfirmationDialog_FullScreen(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
