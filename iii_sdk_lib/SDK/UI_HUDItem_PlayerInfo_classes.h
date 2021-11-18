#pragma once

// Name: GTA III, Version: 1.0.0


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

// WidgetBlueprintGeneratedClass UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C
// 0x00C1 (FullSize[0x038D] - InheritedSize[0x02CC])
class UUI_HUDItem_PlayerInfo_C : public UUI_HUDItem_Base_C
{
public:
	unsigned char                                      UnknownData_YN6B[0x4];                                     // 0x02CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UImage*>                              WantedStars;                                               // 0x02D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                               IsBlinking;                                                // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OR3Q[0x3];                                     // 0x02E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeSinceBlink;                                            // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LastWantedLevel;                                           // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LastParoleLevel;                                           // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 WantedStarColorOff;                                        // 0x02F8(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 WantedStarColorOn;                                         // 0x0320(0x0028) (Edit, BlueprintVisible)
	struct FSlateColor                                 WantedStarColorParole;                                     // 0x0348(0x0028) (Edit, BlueprintVisible)
	float                                              WantedStarBlinkOnTime;                                     // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WantedStarBlinkOffTime;                                    // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DoStarsStayOn;                                             // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RF5Q[0x3];                                     // 0x0379(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FLinearColor                                MoneyTextColor;                                            // 0x037C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsMoneyOnlyMode;                                           // 0x038C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUDItem_PlayerInfo.UI_HUDItem_PlayerInfo_C");
		return ptr;
	}



	void SetMoneyOnlyMode(bool MakeMoneyOnly);
	void UpdateTextWithNumber(class UTextBlock* InText, int Number, int MinimumIntegralDigits, int MaximumIntegralDigits);
	void GetArmorText(class UTextBlock** ArmorText);
	void GetHealthText(class UTextBlock** HealthText);
	void GetWeaponImage(class UImage** WeaponImage);
	void GetTimeText(class UTextBlock** TimeText);
	void GetMoneyText(class UTextBlock** MoneyText);
	void GetHealthBar(class UProgressBar** HealthBar);
	void GetBreathMeter(class UProgressBar** BreathMeter);
	void GetArmorBar(class UProgressBar** ArmorBar);
	void GetWantedStarsBox(class UHorizontalBox** WantedStarsBox);
	void GetRightWeaponArrow(class UImage** RightWeaponArrow);
	void GetLeftWeaponArrow(class UImage** LeftWeaponArrow);
	void GetAmmoText(class UTextBlock** AmmoText);
	void SetupStars();
	void UpdateWantedBlink(float dT);
	void UpdateWantedLevel(int Wanted, int Parole, bool DoBlink);
	void SetBarSizeAndFill(class UProgressBar* ProgressBar, float BarPercent, float BarWidth);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetImage(class UTexture2D* Texture);
	void SetContentText(const struct FText& Text, const struct FLinearColor& FontColorOverride);
	void SetFillBarSizeAndFill(float FillBarPct, float FillBarSize);
	void SetSecondFillBarSizeAndFill(float FillBarPct, float FillBarSize);
	void SetTotalWidgetColor(const struct FLinearColor& Color);
	void SetThirdFillBarSizeAndFill(float FillBarPct, float FillBarSize);
	void SetWantedLevel(int numStars, int numParole, bool bIsBlinking);
	void SetThirdImage(class UTexture2D* Texture);
	void SetThirdImageColor(const struct FLinearColor& Color);
	void SetFourthImage(class UTexture2D* Texture);
	void SetFourthImageColor(const struct FLinearColor& Color);
	void SetContentTextAdditional(const struct FText& Text, const struct FLinearColor& FontColorOverride);
	void SetContentTextThree(const struct FText& Text, const struct FLinearColor& FontColorOverride);
	void SetContentTextFour(const struct FText& Text, const struct FLinearColor& FontColorOverride);
	void SetContentTextFive(const struct FText& Text, const struct FLinearColor& FontColorOverride);
	void ExecuteUbergraph_UI_HUDItem_PlayerInfo(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
