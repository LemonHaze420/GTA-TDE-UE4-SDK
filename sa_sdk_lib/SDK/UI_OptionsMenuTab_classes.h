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

// WidgetBlueprintGeneratedClass UI_OptionsMenuTab.UI_OptionsMenuTab_C
// 0x0038 (FullSize[0x05C0] - InheritedSize[0x0588])
class UUI_OptionsMenuTab_C : public UUI_TabbedLayout_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0588(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	int                                                CurrentGameTypeBitMask;                                    // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       MenuName;                                                  // 0x0594(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7D9L[0x4];                                     // 0x059C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<GTABase_EGTASaveTabState>>      SaveTabStates;                                             // 0x05A0(0x0010) (Edit, BlueprintVisible)
	bool                                               RefreshOnInputTypeChange;                                  // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SMAG[0x3];                                     // 0x05B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                LastInputTypeFlag;                                         // 0x05B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      AdjustableControlsClass;                                   // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_OptionsMenuTab.UI_OptionsMenuTab_C");
		return ptr;
	}



	void NextTab();
	void PrevTab();
	void GrabFocus();
	void SetToTab(int Index, bool ForceNoFocusChange, bool ForceNoSound);
	void RefreshLists();
	void GetCurrentInputType(int* OutInputFlag);
	void AddContentToSelector(class UClass* Widget_Class, class UWidgetSwitcher* Selector_to_add_to, class UUserWidget** ContentCreated);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_UI_OptionsMenuTab(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
