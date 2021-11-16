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

// BlueprintGeneratedClass BP_Marker_Cylinder.BP_Marker_Cylinder_C
// 0x0020 (FullSize[0x02FC] - InheritedSize[0x02DC])
class ABP_Marker_Cylinder_C : public ABP_Marker_Base_C
{
public:
	unsigned char                                      UnknownData_RHQN[0x4];                                     // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                        PointLight;                                                // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        CheckpointFlag;                                            // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              billboardlerp;                                             // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_Marker_Cylinder.BP_Marker_Cylinder_C");
		return ptr;
	}



	void ProcessCheckpointType(TEnumAsByte<GTABase_ECheckpointType> CheckpointType);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void SetMarkerColor(const struct FColor& withColor);
	void ExecuteUbergraph_BP_Marker_Cylinder(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
