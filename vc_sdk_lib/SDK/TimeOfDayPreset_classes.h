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

// BlueprintGeneratedClass TimeOfDayPreset.TimeOfDayPreset_C
// 0x00A4 (FullSize[0x00CC] - InheritedSize[0x0028])
class UTimeOfDayPreset_C : public UObject
{
public:
	struct FTimeOfDayData                              Data;                                                      // 0x0028(0x00A4) (Edit, BlueprintVisible, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TimeOfDayPreset.TimeOfDayPreset_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
