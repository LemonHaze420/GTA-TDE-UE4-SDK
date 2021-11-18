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

// WidgetBlueprintGeneratedClass UI_Brief_GTA3.UI_Brief_GTA3_C
// 0x0160 (FullSize[0x08C8] - InheritedSize[0x0768])
class UUI_Brief_GTA3_C : public UUI_Brief_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0768(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScrollListStyle                            SlotStyle_1;                                               // 0x0770(0x0158) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Brief_GTA3.UI_Brief_GTA3_C");
		return ptr;
	}



	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_Brief_GTA3(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
