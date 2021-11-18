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

// WidgetBlueprintGeneratedClass HUDDrawer_Base.HUDDrawer_Base_C
// 0x00E8 (FullSize[0x0388] - InheritedSize[0x02A0])
class UHUDDrawer_Base_C : public UUI_GTAHUDDrawer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                                MainCanvas;                                                // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   MainScaleBox;                                              // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    MainSizeBox;                                               // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  NotifyText;                                                // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<struct FName, class UClass*>                  HUDItemTemplates;                                          // 0x02C8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FName, class UUI_GTAHUDItem*>          HUDItems;                                                  // 0x0318(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                               CreateAllItemsAtStart;                                     // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L04A[0x3];                                     // 0x0369(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   TotalScreenSize;                                           // 0x036C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HudSizeMult;                                               // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              HudItemRefreshOnLanguageChanges;                           // 0x0378(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDDrawer_Base.HUDDrawer_Base_C");
		return ptr;
	}



	void UpdateHudItemsOnLanguageChanges();
	void GetScreenMultAndOverrideSize(float* SizeMult, float* WidthOverride, float* HeightOverride);
	bool SetScreenSize(float screenWidth, float screenHeight);
	void UpdateScreenSize(float InWidthOverride, float InHeightOverride, bool* DidChange);
	bool RemoveGTAHUDItem(const struct FName& ForName);
	void AddNewItemToCanvas(class UUI_GTAHUDItem* Item, const struct FName& UnderName);
	void CreateAllHudItems();
	void CreateHudItem(const struct FName& For, class UUI_GTAHUDItem** OutItem);
	class UUI_GTAHUDItem* GetGTAHUDItem(const struct FName& ForName, bool CreateIfNotFound);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateItemsForSettings(const struct FString& Setting);
	void ExecuteUbergraph_HUDDrawer_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
