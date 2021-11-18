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

// BlueprintGeneratedClass BP_BloodyFootprint_Base.BP_BloodyFootprint_Base_C
// 0x0018 (FullSize[0x0318] - InheritedSize[0x0300])
class ABP_BloodyFootprint_Base_C : public AGTABloodyFootprints
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0300(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              FadeTime;                                                  // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HEPE[0x4];                                     // 0x030C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInstanceDynamic*                    DynMaterial;                                               // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_BloodyFootprint_Base.BP_BloodyFootprint_Base_C");
		return ptr;
	}



	void SetFootprintAlpha(int Mesh_Section, float Alpha);
	void OnFootprintTick(int MeshSection, float Lifetime);
	void OnFootprintAdded(int MeshSection, float Alpha);
	void ExecuteUbergraph_BP_BloodyFootprint_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
