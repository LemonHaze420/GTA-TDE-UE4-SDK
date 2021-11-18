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

// WidgetBlueprintGeneratedClass AdjustableControls_ListeningDialog.AdjustableControls_ListeningDialog_C
// 0x000A (FullSize[0x0C50] - InheritedSize[0x0C46])
class UAdjustableControls_ListeningDialog_C : public UConfirmationDialog_C
{
public:
	unsigned char                                      UnknownData_XCWF[0x2];                                     // 0x0C46(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0C48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AdjustableControls_ListeningDialog.AdjustableControls_ListeningDialog_C");
		return ptr;
	}



	void Construct();
	void OnSynchronizeProperties();
	void ExecuteUbergraph_AdjustableControls_ListeningDialog(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
