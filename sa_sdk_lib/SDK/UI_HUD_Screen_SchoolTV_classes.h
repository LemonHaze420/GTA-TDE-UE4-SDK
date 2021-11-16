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

// WidgetBlueprintGeneratedClass UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C
// 0x001C (FullSize[0x0304] - InheritedSize[0x02E8])
class UUI_HUD_Screen_SchoolTV_C : public UUI_HUD_Screen_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      BlackScreen;                                               // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      MainIcon;                                                  // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              FadeTime;                                                  // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_HUD_Screen_SchoolTV.UI_HUD_Screen_SchoolTV_C");
		return ptr;
	}



	bool CustomBoolReturnFunction(const struct FString& FunctionName);
	void UpdateBlackFade(float dT);
	void GetMainIcon(class UImage** Image1);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void CustomFunctionWithFloat(const struct FString& FunctionName, float floatNum);
	void ExecuteUbergraph_UI_HUD_Screen_SchoolTV(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
