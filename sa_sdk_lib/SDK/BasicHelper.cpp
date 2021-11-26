// Name: SanAndreas, Version: 1.0.0

#include "../SDK.h"


/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

Version GetGameVersion() {
	Version theVersion = Version::INVALID;
	uintptr_t base = reinterpret_cast<uintptr_t>(GetModuleHandleA(NULL));
	if (base) {
		// SA
		if (!memcmp((void*)(base + SA_V01_00_VER_STRING), UE4_VERSION_STRING, 8)) {
			theVersion = Version::SA_V01_00;
			LOG("Detected version SA - V01.00");
		}
		else if (!memcmp((void*)(base + SA_V01_01_VER_STRING), UE4_VERSION_STRING, 8)) {
			theVersion = Version::SA_V01_01;
			LOG("Detected version SA - V01.01");
		}
		// VC
		else if (!memcmp((void*)(base + VC_V01_00_VER_STRING), UE4_VERSION_STRING, 8)) {
			theVersion = Version::VC_V01_00;
			LOG("Detected version VC - V01.00");
		}
		else if (!memcmp((void*)(base + VC_V01_01_VER_STRING), UE4_VERSION_STRING, 8)) {
			theVersion = Version::VC_V01_01;
			LOG("Detected version VC - V01.01");
		}
		// III
		else if (!memcmp((void*)(base + III_V01_00_VER_STRING), UE4_VERSION_STRING, 8)) {
			theVersion = Version::III_V01_00;
			LOG("Detected version III - V01.00");
		}
		else if (!memcmp((void*)(base + III_V01_01_VER_STRING), UE4_VERSION_STRING, 8)) {
			theVersion = Version::III_V01_01;
			LOG("Detected version III - V01.01");
		}
	}
	return theVersion;
}

namespace CG
{


GNAME_TYPE* FName::GNames = nullptr;
TUObjectArray* UObject::GObjects = nullptr;

//---------------------------------------------------------------------------
#if defined(EXTERNAL_PROPS)
MemoryManager* Mem = new MemoryManager();
#else
bool InitSdk()
{
	Version version = GetGameVersion();
	uintptr_t mBaseAddress = reinterpret_cast<uintptr_t>(GetModuleHandleA(NULL));

	if (mBaseAddress == 0x00)
		return false;
	
	uintptr_t objectsOffset = 0, namesOffset = 0;
	switch (version) {
		case Version::SA_V01_00: {
			objectsOffset	= SA_V01_00_OBJECTS;
			namesOffset		= SA_V01_00_NAMES;
			break;
		}
		case Version::SA_V01_01: {
			objectsOffset	= SA_V01_01_OBJECTS;
			namesOffset		= SA_V01_01_NAMES;
			break;
		}
		case Version::VC_V01_00: {
			objectsOffset	= VC_V01_00_OBJECTS;
			namesOffset		= VC_V01_00_NAMES;
			break;
		}
		case Version::VC_V01_01: {
			objectsOffset	= VC_V01_01_OBJECTS;
			namesOffset		= VC_V01_01_NAMES;
			break;
		}
		case Version::III_V01_00: {
			objectsOffset	= III_V01_00_OBJECTS;
			namesOffset		= III_V01_00_NAMES;
			break;
		}
		case Version::III_V01_01: {
			objectsOffset	= III_V01_01_OBJECTS;
			namesOffset		= III_V01_01_NAMES;
			break;
		}
	}

	if (version != Version::INVALID && (objectsOffset != 0 && namesOffset != 0)) {
		UObject::GObjects = reinterpret_cast<CG::TUObjectArray*>(mBaseAddress + objectsOffset);
		FName::GNames = reinterpret_cast<CG::GNAME_TYPE*>(mBaseAddress + namesOffset);
	}
	return (version != Version::INVALID) == true;
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

