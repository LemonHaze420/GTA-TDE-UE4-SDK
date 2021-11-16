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

// WidgetBlueprintGeneratedClass UI_LegalScreen_Stinger_SA.UI_LegalScreen_Stinger_SA_C
// 0x0008 (FullSize[0x0308] - InheritedSize[0x0300])
class UUI_LegalScreen_Stinger_SA_C : public ULegalScreen_Stinger_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0300(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_LegalScreen_Stinger_SA.UI_LegalScreen_Stinger_SA_C");
		return ptr;
	}



	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_LegalScreen_Stinger_SA(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
