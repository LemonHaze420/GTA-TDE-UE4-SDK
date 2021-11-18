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

// WidgetBlueprintGeneratedClass UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C
// 0x0028 (FullSize[0x05E8] - InheritedSize[0x05C0])
class UUI_OptionsMenuTab_Game_C : public UUI_OptionsMenuTab_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x05C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FText                                       SaveTabName;                                               // 0x05C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      SaveTabContent;                                            // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_OptionsMenuTab_Game.UI_OptionsMenuTab_Game_C");
		return ptr;
	}



	void SetToTab(int Index, bool ForceNoFocusChange, bool ForceNoSound);
	void SetupForSaveGames();
	void RefreshSaveTabState();
	void UpdateSaveTabState(TEnumAsByte<GTABase_EGTASaveTabState> NewSaveTabState);
	void NextTab();
	void PrevTab();
	void SetToSaveTabState(TEnumAsByte<GTABase_EGTASaveTabState> State);
	void RefreshSaves();
	void InteractedButton(TEnumAsByte<ButtonStateEnum_EButtonStateEnum> Interact_Type, int Bound_Value);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UI_OptionsMenuTab_Game(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
