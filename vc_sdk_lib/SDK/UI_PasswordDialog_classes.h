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

// WidgetBlueprintGeneratedClass UI_PasswordDialog.UI_PasswordDialog_C
// 0x0078 (FullSize[0x0308] - InheritedSize[0x0290])
class UUI_PasswordDialog_C : public UUI_DesignTimeUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUI_Button_Base_C*                           ClearButton;                                               // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_Base_C*                           EnterButton;                                               // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_58;                                                  // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                MainCanvas;                                                // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                            TextBox;                                                   // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    PasswordSent;                                              // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               DidJustRecieveControllerInput;                             // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               LastInputTypeController;                                   // 0x02D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NJT8[0x6];                                     // 0x02D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      LastSelectedWidget[0x28];                                  // 0x02D2(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class UConfirmationDialog_C*                       ConfirmationDialog;                                        // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_PasswordDialog.UI_PasswordDialog_C");
		return ptr;
	}



	class UConfirmationDialog_C* CreateIncorrectPassDialog();
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void SetNavigationRules();
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void ButtonFocusUpdate(bool DidInputTypeJustChange);
	void InitFocus();
	void CheckLastInputType(bool* DidJustChange);
	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
	void GrabFocus();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Cleanup(const struct FString& OutPass);
	void BndEvt__ClearButton_K2Node_ComponentBoundEvent_2_ButtonDispatcher__DelegateSignature(unsigned char Interaction, int BoundValue);
	void BndEvt__EnterButton_K2Node_ComponentBoundEvent_3_ButtonDispatcher__DelegateSignature(unsigned char Interaction, int BoundValue);
	void IncorrectPassDialog();
	void CustomEvent_1(bool DidAccept);
	void ExecuteUbergraph_UI_PasswordDialog(int EntryPoint);
	void PasswordSent__DelegateSignature(const struct FString& OutPass);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
