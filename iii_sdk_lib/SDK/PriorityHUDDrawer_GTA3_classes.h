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

// WidgetBlueprintGeneratedClass PriorityHUDDrawer_GTA3.PriorityHUDDrawer_GTA3_C
// 0x0008 (FullSize[0x0390] - InheritedSize[0x0388])
class UPriorityHUDDrawer_GTA3_C : public UHUDDrawer_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PriorityHUDDrawer_GTA3.PriorityHUDDrawer_GTA3_C");
		return ptr;
	}



	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_PriorityHUDDrawer_GTA3(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
