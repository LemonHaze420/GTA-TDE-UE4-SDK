// Name: SanAndreas, Version: 1.0.0

#include "../SDK.h"
#include "../../VersionManager.hpp"
#include <iostream>
#include <sstream>

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{


GNAME_TYPE* FName::GNames = nullptr;
TUObjectArray* UObject::GObjects = nullptr;

//---------------------------------------------------------------------------
#if defined(EXTERNAL_PROPS)
MemoryManager* Mem = new MemoryManager();
#else
bool InitSdk(const std::string& moduleName, const uintptr_t gObjectsOffset = 0, const uintptr_t gNamesOffset = 0)
{
	Version version = GetGameVersion();
	auto mBaseAddress = reinterpret_cast<uintptr_t>(GetModuleHandleA(moduleName.c_str()));

	if (mBaseAddress == 0x00)
		return false;
	
	auto objectsOffset = 0, namesOffset = 0;
	switch (version) {
		case SA_V01_00: {
			objectsOffset	= SA_V01_00_OBJECTS;
			namesOffset		= SA_V01_00_NAMES;
			break;
		}
		case SA_V01_01: {
			objectsOffset	= SA_V01_01_OBJECTS;
			namesOffset		= SA_V01_01_NAMES;
			break;
		}
		case VC_V01_00: {
			objectsOffset	= VC_V01_00_OBJECTS;
			namesOffset		= VC_V01_00_NAMES;
			break;
		}
		case VC_V01_01: {
			objectsOffset	= VC_V01_01_OBJECTS;
			namesOffset		= VC_V01_01_NAMES;
			break;
		}
		case III_V01_00: {
			objectsOffset	= III_V01_00_OBJECTS;
			namesOffset		= III_V01_00_NAMES;
			break;
		}
		case III_V01_01: {
			objectsOffset	= III_V01_01_OBJECTS;
			namesOffset		= III_V01_01_NAMES;
			break;
		}
	}

	if (objectsOffset != 0 && namesOffset != 0) {
		UObject::GObjects = reinterpret_cast<CG::TUObjectArray*>(mBaseAddress + objectsOffset);
		FName::GNames = reinterpret_cast<CG::GNAME_TYPE*>(mBaseAddress + namesOffset);
	} else if(gObjectsOffset != 0 && gNamesOffset != 0) {
		UObject::GObjects = reinterpret_cast<CG::TUObjectArray*>(mBaseAddress + gObjectsOffset);
		FName::GNames = reinterpret_cast<CG::GNAME_TYPE*>(mBaseAddress + gNamesOffset);
	}

	return version != INVALID;
}
bool InitSdk()
{
	return InitSdk("SanAndreas.exe");
}
#endif
//---------------------------------------------------------------------------
#ifdef UE4
bool FWeakObjectPtr::IsValid() const
{
	if (ObjectSerialNumber == 0)
	{
		return false;
	}
	if (ObjectIndex < 0)
	{
		return false;
	}
	auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
	if (!ObjectItem)
	{
		return false;
	}
	if (!SerialNumbersMatch(ObjectItem))
	{
		return false;
	}
	return !(ObjectItem->IsUnreachable() || ObjectItem->IsPendingKill());
}
//---------------------------------------------------------------------------
UObject* FWeakObjectPtr::Get() const
{
	if (IsValid())
	{
		auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
		if (ObjectItem)
		{
			return ObjectItem->Object;
		}
	}
	return nullptr;
}
#endif
//---------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

