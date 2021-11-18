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

// BlueprintGeneratedClass BP_COL_Tree.BP_COL_Tree_C
// 0x0008 (FullSize[0x02E8] - InheritedSize[0x02E0])
class ABP_COL_Tree_C : public ABP_COL_Prop_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_COL_Tree.BP_COL_Tree_C");
		return ptr;
	}



	void GetStaticVolumetricStrength(float* intoAO, float* intoUplight);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_COL_Tree(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
