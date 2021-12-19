// Name: SanAndreas, Version: 1.0.0

#include "../SDK.h"



#include "Hooking.Patterns.h"
/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

GameDetails GetGameDetails() {
	uintptr_t base = reinterpret_cast<uintptr_t>(GetModuleHandleA(NULL));
	uintptr_t objectsOffset = 0, namesOffset = 0;

	GameDetails details;
	if (base) {
		LOG("base = 0x%I64X", base);

		// SA
		if (!memcmp((void*)(base + SA_V01_00_VER_STRING), UE4_VERSION_STRING, 8)) {
			details.version = eVersion::SA_V01_00;
			details.game = eGame::SA;
			details.offsets.names = SA_V01_00_NAMES;
			details.offsets.objects = SA_V01_00_OBJECTS;
			LOG("Detected version SA - V01.00");
		}
		else if (!memcmp((void*)(base + SA_V01_01_VER_STRING), UE4_VERSION_STRING, 8)) {
			details.version = eVersion::SA_V01_01;
			details.game = eGame::SA;
			details.offsets.names = SA_V01_01_NAMES;
			details.offsets.objects = SA_V01_01_OBJECTS;
			LOG("Detected version SA - V01.01");
		}
		// VC
		else if (!memcmp((void*)(base + VC_V01_00_VER_STRING), UE4_VERSION_STRING, 8)) {
			details.version = eVersion::VC_V01_00;
			details.game = eGame::VC;
			details.offsets.names = VC_V01_00_NAMES;
			details.offsets.objects = VC_V01_00_OBJECTS;
			LOG("Detected version VC - V01.00");
		}
		else if (!memcmp((void*)(base + VC_V01_01_VER_STRING), UE4_VERSION_STRING, 8)) {
			details.version = eVersion::VC_V01_01;
			details.game = eGame::VC;
			details.offsets.names = VC_V01_01_NAMES;
			details.offsets.objects = VC_V01_01_OBJECTS;
			LOG("Detected version VC - V01.01");
		}
		// III
		else if (!memcmp((void*)(base + III_V01_00_VER_STRING), UE4_VERSION_STRING, 8)) {
			details.version = eVersion::III_V01_00;
			details.game = eGame::III;
			details.offsets.names = III_V01_00_NAMES;
			details.offsets.objects = III_V01_00_OBJECTS;
			LOG("Detected version III - V01.00");
		}
		else if (!memcmp((void*)(base + III_V01_01_VER_STRING), UE4_VERSION_STRING, 8)) {
			details.version = eVersion::III_V01_01;
			details.game = eGame::III;
			details.offsets.names = III_V01_01_NAMES;
			details.offsets.objects = III_V01_01_OBJECTS;
			LOG("Detected version III - V01.01");
		}

		// Pattern scan for GObjects and GNames, if necessary..
		if (details.version == eVersion::INVALID) {
			auto ptn = hook::pattern("48 89 5C 24 08 57 48 83 EC 20 8B 3D ? ? ? ? 48 8B ? ? ? ? ? 85 FF 74 1D 0F 1F 44 00 00");
			if (ptn.size() > 168) {
				// .text:0000000143D9172A 8B 3D 80 68 14 01                       mov     edi, cs: dword_144ED7FB0
				auto insn = ptn.get(168).get<uintptr_t>(0xA);
				LOG("offset = 0x%I64X", (uintptr_t)insn - base);
				LOG("VA = 0x%I64X", 0x140000000 + ((uintptr_t)insn - base));

				unsigned int insnOffset = ((uintptr_t)insn) - base;
				unsigned int insnOperand = *ptn.get(168).get<unsigned int>(0xA + 2);

				objectsOffset = (((insnOperand + insnOffset)) + 0x26);
				details.offsets.objects = objectsOffset;
				LOG("\t0x%08X [0x%I64X | 0x%I64X / 0x%I64X]", insnOperand, objectsOffset, objectsOffset + base, objectsOffset + 0x140000000);
			}

			ptn = hook::pattern("48 8D 15 ? ? ? ? 48 8D 0D ? ? ? ? E8 ? ? ? ? 48 83 C4 40 5B C3 80 3D ? ? ? ? 00 74 09");
			if (!ptn.count_hint(1).empty()) {
				// .text:000000014058BE5B 48 8D 05 9E 93 FC 04                    lea     rax, unk_145555200
				auto insn = ptn.get_first<uintptr_t>(0x22);
				LOG("offset = 0x%I64X", (uintptr_t)insn - base);
				LOG("VA = 0x%I64X", 0x140000000 + ((uintptr_t)insn - base));

				unsigned int insnOffset = ((uintptr_t)insn) - base;
				unsigned int insnOperand = *ptn.get_first<unsigned int>(0x22 + 3);

				namesOffset = (((insnOperand + insnOffset)) + 0x7);
				details.offsets.names = namesOffset;
				LOG("\t0x%08X [0x%I64X | 0x%I64X / 0x%I64X]", insnOperand, namesOffset, namesOffset + base, namesOffset + 0x140000000);
			}

			if (objectsOffset != 0 && namesOffset != 0)
				details.version = eVersion::Auto;
		}
	}
	return details;
}

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

