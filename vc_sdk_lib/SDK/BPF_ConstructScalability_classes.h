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

// BlueprintGeneratedClass BPF_ConstructScalability.BPF_ConstructScalability_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPF_ConstructScalability_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPF_ConstructScalability.BPF_ConstructScalability_C");
		return ptr;
	}



	void GetScalabilityClass(class AGTAWorldSettings* WorldSettings, class UObject* __WorldContext, class UClass** ReturnClass);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
