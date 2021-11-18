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

// WidgetBlueprintGeneratedClass Transition_Base.Transition_Base_C
// 0x0016 (FullSize[0x02C6] - InheritedSize[0x02B0])
class UTransition_Base_C : public UUITransitionScreen
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                               ShouldAutoContinueFromFade;                                // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShouldStaticStatesAutoContinue;                            // 0x02B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9H6E[0x2];                                     // 0x02BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StaticTransitionTime;                                      // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeSinceLastTransition;                                   // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ForceDisableTimeoutWarning;                                // 0x02C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DidSkip;                                                   // 0x02C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Transition_Base.Transition_Base_C");
		return ptr;
	}



	void GetSecondaryUnderImage(TEnumAsByte<GTABase_EGTATransitionState> State, class UCanvasPanel** OutCanvas);
	void IsBelowPauseMenu(bool* IsBelow);
	void UpdateVolumeFades();
	float GetFadeOpacity(class UWidget* Canvas);
	void SetFadeOpacity(TEnumAsByte<GTABase_EGTATransitionState> CurrentState, class UCanvasPanel* Canvas, float Alpha);
	void AutoContinue(TEnumAsByte<GTABase_EGTATransitionState> toState);
	bool GetIsFading();
	void UpdateUptime(float dT);
	void GetNextState(TEnumAsByte<GTABase_EGTATransitionState> CurrentState, TEnumAsByte<GTABase_EGTATransitionState>* NextState);
	float GetCurrentFadeOpacity();
	void RecievedATimeChangeInCurrentState(TEnumAsByte<GTABase_EGTATransitionState> CurrentState);
	void GetFadeDirectionAndLength(TEnumAsByte<GTABase_EGTATransitionState> State, float* Length, bool* IsFadeIn);
	void UpdateToCurrentState();
	void UpdateFade(TEnumAsByte<GTABase_EGTATransitionState> State, float dT);
	void Update(float dT);
	void UpdateStatic(float dT, TEnumAsByte<GTABase_EGTATransitionState> State);
	void GetCurrentFadeCanvas(TEnumAsByte<GTABase_EGTATransitionState> State, class UCanvasPanel** OutCanvas);
	bool IsFading(TEnumAsByte<GTABase_EGTATransitionState> State);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BP_Continue();
	void BP_SetTransitionStateFadeTime(TEnumAsByte<GTABase_EGTATransitionState> StateToChange, float TimeToFade);
	void ForceCurrentFadeOpacity(float newOpacity);
	void Destruct();
	void ExecuteUbergraph_Transition_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
