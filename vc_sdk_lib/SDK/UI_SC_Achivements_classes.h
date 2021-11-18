#pragma once

// Name: ViceCity, Version: 1.0.0


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

// WidgetBlueprintGeneratedClass UI_SC_Achivements.UI_SC_Achivements_C
// 0x0009 (FullSize[0x0511] - InheritedSize[0x0508])
class UUI_SC_Achivements_C : public UUI_ScrollingSlotList_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0508(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                               DidConstructAchivements;                                   // 0x0510(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SC_Achivements.UI_SC_Achivements_C");
		return ptr;
	}



	bool TakeFocus();
	void WrapNavigation();
	void SetupNavigation();
	void RefreshList();
	void CheckCreation();
	void CreateScrollingListItems(bool DEBUG_ALL_ITEMS);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnSynchronizeProperties();
	void ExecuteUbergraph_UI_SC_Achivements(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
