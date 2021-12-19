// Name: GTA III, Version: 1.0.0

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
bool InitSdk(GameDetails details)
{
	uintptr_t mBaseAddress = reinterpret_cast<uintptr_t>(GetModuleHandleA(NULL));

	if (mBaseAddress == 0x00)
		return false;

	if (details.version != eVersion::INVALID && (details.offsets.objects != 0 && details.offsets.names != 0)) {
		UObject::GObjects = reinterpret_cast<CG::TUObjectArray*>(mBaseAddress + details.offsets.objects);
		FName::GNames = reinterpret_cast<CG::GNAME_TYPE*>(mBaseAddress + details.offsets.names);
	}
	return (details.version != eVersion::INVALID) == true;
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

