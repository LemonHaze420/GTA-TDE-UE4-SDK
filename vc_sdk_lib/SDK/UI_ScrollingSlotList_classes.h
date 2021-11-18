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

// WidgetBlueprintGeneratedClass UI_ScrollingSlotList.UI_ScrollingSlotList_C
// 0x0278 (FullSize[0x0508] - InheritedSize[0x0290])
class UUI_ScrollingSlotList_C : public UUI_DesignTimeUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UScrollBox*                                  MainScrollBox;                                             // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                ScrollingCanvas;                                           // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                      EmptyButtonType;                                           // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasConstructed;                                            // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_51ML[0x7];                                     // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ParentTabbedLayout[0x28];                                  // 0x02B1(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FScrollListStyle                            SlotStyle;                                                 // 0x02E0(0x0158) (Edit, BlueprintVisible)
	bool                                               RunInitOnConstruct;                                        // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VWYA[0x7];                                     // 0x0439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      LastUserSelectedWidget[0x28];                              // 0x0439(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FSlotListSlotClasses                        SlotClasses;                                               // 0x0468(0x0020) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	unsigned char                                      InteractSlotButtonSound[0x28];                             // 0x0488(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	int                                                OverrideSlotFocus;                                         // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DidClearMouseFocus;                                        // 0x04B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KDU9[0x3];                                     // 0x04B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnSelectedTab;                                             // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnDeselectedTab;                                           // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               bUseHapticNavigation;                                      // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bUseHapticInteract;                                        // 0x04D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8495[0x2];                                     // 0x04DA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ScrollbarThickness;                                        // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMG_ESlateVisibility                               ScrollBarVisibility;                                       // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UNHL[0x7];                                     // 0x04E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       VersionString;                                             // 0x04E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      VersionClass;                                              // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ScrollingSlotList.UI_ScrollingSlotList_C");
		return ptr;
	}



	void SetVersionText();
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void UpdateControllerFocusVisability();
	bool IsCurrentInputController();
	void FocusSpecificSlot(int SlotIndex, bool* WasValid, class UUI_SlotButton_C** SelectedSlotButton);
	void GrabSpecificOptionFocus(const struct FName& PropertyName, class UWidget** FocusedWidget);
	void ClearSlotList();
	void SetFocusToFirstEntry();
	void SetupNavigation();
	void Grab_Slot_Focus(bool ForceIgnoreSound, class UUI_SlotButton_C** SelectedSlotButton);
	void UpdateFocus();
	void UpdateSelectedSlot(class UUI_SlotButton_C* SelectedItem);
	void SetMenu();
	void AddSlotItem(class UUI_SlotButton_C* Slot_Item, const struct FGTAOptionsItemTemplate& Options, class UGameterSettings* SettingsObject);
	void CreateScrollingListItems(bool DEBUG_ALL_ITEMS);
	void ScrollingList_Init();
	void Construct();
	void OnSynchronizeProperties();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void DelayedSetFocusToFirst();
	void SlotButtonPressed(unsigned char InteractionType, int BoundValue, class UUI_SlotButton_C* ButtonSentFrom);
	void ExecuteUbergraph_UI_ScrollingSlotList(int EntryPoint);
	void OnDeselectedTab__DelegateSignature();
	void OnSelectedTab__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
