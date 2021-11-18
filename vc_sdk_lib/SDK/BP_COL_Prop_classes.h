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

// BlueprintGeneratedClass BP_COL_Prop.BP_COL_Prop_C
// 0x0008 (FullSize[0x02E0] - InheritedSize[0x02D8])
class ABP_COL_Prop_C : public AGTACustomEntitySM
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_COL_Prop.BP_COL_Prop_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_COL_Prop(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
