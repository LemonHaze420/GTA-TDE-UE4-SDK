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

// WidgetBlueprintGeneratedClass CreditsTransition_Base.CreditsTransition_Base_C
// 0x016A (FullSize[0x0430] - InheritedSize[0x02C6])
class UCreditsTransition_Base_C : public UTransition_Base_C
{
public:
	unsigned char                                      UnknownData_U7MN[0x2];                                     // 0x02C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     BlockingButton;                                            // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                CreditBox;                                                 // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    CreditSizeBox;                                             // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                FadeIn1;                                                   // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                FadeIn2;                                                   // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image1;                                                    // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                LineNumberStarted;                                         // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumCreditsRemoved;                                         // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             CreditArray;                                               // 0x0308(0x0010) (Edit, BlueprintVisible)
	float                                              LastVerticalCreditSize;                                    // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DidJustChangeCreditSize;                                   // 0x031C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_A4LZ[0x3];                                     // 0x031D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ScrollingSpeed;                                            // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TotalVerticalSize;                                         // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                              DefaultFont;                                               // 0x0328(0x0058) (Edit, BlueprintVisible, HasGetValueTypeHash)
	TMap<struct FString, float>                        FontSize;                                                  // 0x0380(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FString>                             AllKnownFormats;                                           // 0x03D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FString>                             EmptyTextFormats;                                          // 0x03E0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DidAddLastCredit;                                          // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ET04[0x3];                                     // 0x03F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumOriginalCredits;                                        // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             RockStarCreditArray;                                       // 0x03F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FString>                             TechnicolorCreditArray;                                    // 0x0408(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FString>                             EfectoCreditArray;                                         // 0x0418(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DidStartFinalFade;                                         // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G6E4[0x3];                                     // 0x0429(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OriginalFade0Time;                                         // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CreditsTransition_Base.CreditsTransition_Base_C");
		return ptr;
	}



	void UpdateFinalFade();
	bool AllowBackwardsTransition();
	void EntryValidWithLanguage(const struct FString& LanguagesString, bool* ValidWithLanguage);
	void IsEntryValidNow(const struct FString& Entry, bool* Valid);
	void ParseCreditEntry(const struct FString& InText, int EntryNum, struct FText* TextToDisplay, struct FSlateFontInfo* Font);
	void RemoveTopCredit();
	void AddNewCredit();
	void Get_Current_Vertical_Credit_Size(float* Size);
	void GetNextCreditText(bool MoveLineNumber, struct FString* CreditText, struct FString* DoubleText, bool* AtEnd);
	void UpdateCredits(float dT);
	void UpdateToCurrentState();
	void Update(float dT);
	void GetNextState(TEnumAsByte<GTABase_EGTATransitionState> CurrentState, TEnumAsByte<GTABase_EGTATransitionState>* NextState);
	bool IsOpaque();
	void GetCurrentFadeCanvas(TEnumAsByte<GTABase_EGTATransitionState> State, class UCanvasPanel** OutCanvas);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_CreditsTransition_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
