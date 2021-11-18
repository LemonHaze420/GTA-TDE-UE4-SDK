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

// BlueprintGeneratedClass BP_Tree_All.BP_Tree_All_C
// 0x0008 (FullSize[0x02C8] - InheritedSize[0x02C0])
class ABP_Tree_All_C : public AIPLMapActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Tree_All.BP_Tree_All_C");
		return ptr;
	}



	void GetStaticVolumetricStrength(float* intoAO, float* intoUplight);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Tree_All(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
