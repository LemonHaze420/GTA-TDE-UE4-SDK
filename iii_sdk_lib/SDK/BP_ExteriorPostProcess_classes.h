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

// BlueprintGeneratedClass BP_ExteriorPostProcess.BP_ExteriorPostProcess_C
// 0x0010 (FullSize[0x08A0] - InheritedSize[0x0890])
class ABP_ExteriorPostProcess_C : public AGTAPostProcessVolume
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0890(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ABP_GTA_ProceduralSky_C*                     SkyBox;                                                    // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ExteriorPostProcess.BP_ExteriorPostProcess_C");
		return ptr;
	}



	void UpdateSettings();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ExteriorPostProcess(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
