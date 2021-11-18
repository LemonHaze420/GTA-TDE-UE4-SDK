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

// Class Gameface.GamefaceGameModeBase
// 0x0000 (FullSize[0x02C0] - InheritedSize[0x02C0])
class AGamefaceGameModeBase : public AGameModeBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Gameface.GamefaceGameModeBase");
		return ptr;
	}



};

// Class Gameface.ModelDataCommandlet
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UModelDataCommandlet : public UCommandlet
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Gameface.ModelDataCommandlet");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
