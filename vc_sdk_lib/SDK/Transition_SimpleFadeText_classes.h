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

// WidgetBlueprintGeneratedClass Transition_SimpleFadeText.Transition_SimpleFadeText_C
// 0x0063 (FullSize[0x0329] - InheritedSize[0x02C6])
class UTransition_SimpleFadeText_C : public UTransition_Base_C
{
public:
	unsigned char                                      UnknownData_PIDA[0x2];                                     // 0x02C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     BlockingButton;                                            // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                FadeIn1;                                                   // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image1;                                                    // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  MainText;                                                  // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTexture2D*>                          RandomImages;                                              // 0x02F0(0x0010) (Edit, BlueprintVisible)
	struct FSlateColor                                 StartingColor;                                             // 0x0300(0x0028) (Edit, BlueprintVisible)
	bool                                               ReadyToShowText;                                           // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Transition_SimpleFadeText.Transition_SimpleFadeText_C");
		return ptr;
	}



	void CheckTextReady();
	void GetNextState(TEnumAsByte<GTABase_EGTATransitionState> CurrentState, TEnumAsByte<GTABase_EGTATransitionState>* NextState);
	void SetInitialColor();
	bool IsOpaque();
	void UpdateToCurrentState();
	void Update(float dT);
	void GetCurrentFadeCanvas(TEnumAsByte<GTABase_EGTATransitionState> State, class UCanvasPanel** OutCanvas);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void CustomFunctionFromStringWithString(const struct FString& FunctionString, const struct FString& VariableString);
	void ExecuteUbergraph_Transition_SimpleFadeText(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
