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

// BlueprintGeneratedClass BP_ExteriorHeightFog.BP_ExteriorHeightFog_C
// 0x0008 (FullSize[0x02B8] - InheritedSize[0x02B0])
class ABP_ExteriorHeightFog_C : public ABP_HeightFog_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_ExteriorHeightFog.BP_ExteriorHeightFog_C");
		return ptr;
	}



	void TimeChanged(bool bEditor);
	void ExecuteUbergraph_BP_ExteriorHeightFog(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
