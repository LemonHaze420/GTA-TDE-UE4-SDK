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

// BlueprintGeneratedClass BP_Radar_Base.BP_Radar_Base_C
// 0x0008 (FullSize[0x0688] - InheritedSize[0x0680])
class ABP_Radar_Base_C : public AGTARadar
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0680(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Radar_Base.BP_Radar_Base_C");
		return ptr;
	}



	void GetRadarComponents(TArray<class UPrimitiveComponent*>* RadarComps);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Radar_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
