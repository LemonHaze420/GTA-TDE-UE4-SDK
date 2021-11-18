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

// WidgetBlueprintGeneratedClass ConfirmationDialog.ConfirmationDialog_C
// 0x09B6 (FullSize[0x0C46] - InheritedSize[0x0290])
class UConfirmationDialog_C : public UUI_DesignTimeUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      Background;                                                // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                BackgroundWidgetCanvas;                                    // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              Buttons;                                                   // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Base_C*                           CancelButton;                                              // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Base_C*                           ConfirmButton;                                             // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                Content;                                                   // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   ContentScaleBox;                                           // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  MainText;                                                  // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                TransparentPaddingLeft;                                    // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                TransparentPaddingRight;                                   // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    ConfirmationCallback;                                      // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FConfirmationMenuStyle                      MenuStyle;                                                 // 0x02F8(0x00F0) (Edit, BlueprintVisible)
	struct FConfirmationDialogStyle                    ConfirmationStyle;                                         // 0x03E8(0x0830) (Edit, BlueprintVisible, HasGetValueTypeHash)
	unsigned char                                      LastUserSelectedWidget[0x28];                              // 0x0C18(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	bool                                               IsOkDialog;                                                // 0x0C40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsCancelRemoved;                                           // 0x0C41(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               isButtonlessWindow;                                        // 0x0C42(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsConfirmDefault;                                          // 0x0C43(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsAutomaticallyGrabbingFocus;                              // 0x0C44(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsFirstTick;                                               // 0x0C45(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConfirmationDialog.ConfirmationDialog_C");
		return ptr;
	}



	void ForceDialogClose();
	void OnSelectionHovered();
	void OnSelectionPicked(bool Confirmed, bool WasForced_);
	bool IsUsingController();
	void UpdateControllerFocus();
	void ForceDialogCancel();
	void InitButton(const struct FJoinedButtonTemplateModifiers& ButtonStyle, class UUI_Button_Base_C* Button);
	void GrabFocus();
	void InitConfirmationDialog();
	void SetTextValues(const struct FText& Message, const struct FText& ConfirmText, const struct FText& CancelText, bool ShouldRemoveCancel);
	void Construct();
	void OnSynchronizeProperties();
	void BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_2_ButtonDispatcher__DelegateSignature(unsigned char Interaction, int BoundValue);
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_ButtonDispatcher__DelegateSignature(unsigned char Interaction, int BoundValue);
	void ForceButtonsSelected();
	void ForceButtonsHovered();
	void ForceButtonsNormal();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_ConfirmationDialog(int EntryPoint);
	void ConfirmationCallback__DelegateSignature(bool DidAccept);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
