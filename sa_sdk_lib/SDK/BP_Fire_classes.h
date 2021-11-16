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

// BlueprintGeneratedClass BP_Fire.BP_Fire_C
// 0x0009 (FullSize[0x02A1] - InheritedSize[0x0298])
class ABP_Fire_C : public AGTAFire
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0298(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bExtinguished;                                             // 0x02A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Fire.BP_Fire_C");
		return ptr;
	}



	void GetSystem(class UParticleSystem** System, float* Distance);
	void Extinguish();
	void BndEvt__FX_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature(class UParticleSystemComponent* PSystem);
	void KillAgain();
	void ExecuteUbergraph_BP_Fire(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
