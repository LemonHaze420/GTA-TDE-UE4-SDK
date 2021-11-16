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

// WidgetBlueprintGeneratedClass Transition_Wasted_Base.Transition_Wasted_Base_C
// 0x0082 (FullSize[0x0348] - InheritedSize[0x02C6])
class UTransition_Wasted_Base_C : public UTransition_Base_C
{
public:
	unsigned char                                      UnknownData_JF6S[0x2];                                     // 0x02C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     BlockingButton;                                            // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                FadeIn1;                                                   // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                FadeIn2;                                                   // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image1;                                                    // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                                 StartingColor;                                             // 0x02F0(0x0028) (Edit, BlueprintVisible)
	class UClass*                                      MainScreenBP;                                              // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      TextOverlayBP;                                             // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_GTAHUDItem*                              CreatedUserWidget;                                         // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_GTAHUDItem*                              missionText;                                               // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                MissionTextColor;                                          // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Transition_Wasted_Base.Transition_Wasted_Base_C");
		return ptr;
	}



	class UUI_GTAHUDItem* CreateWidgetAndAdd(class UClass* WidgetClass, class UPanelWidget* PanelToAddTo);
	void ShowMissionFailedExtras(const struct FText& TextOverride);
	void GetNextState(TEnumAsByte<GTABase_EGTATransitionState> CurrentState, TEnumAsByte<GTABase_EGTATransitionState>* NextState);
	void SetInitialColor();
	void SetMainImage();
	bool IsOpaque();
	void UpdateToCurrentState();
	void Update(float dT);
	void GetCurrentFadeCanvas(TEnumAsByte<GTABase_EGTATransitionState> State, class UCanvasPanel** OutCanvas);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void CustomFunctionFromString(const struct FString& FunctionString);
	void CustomFunctionFromStringWithString(const struct FString& FunctionString, const struct FString& VariableString);
	void CustomFunctionFromStringWithColor(const struct FString& FunctionString, const struct FLinearColor& Color);
	void ExecuteUbergraph_Transition_Wasted_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
