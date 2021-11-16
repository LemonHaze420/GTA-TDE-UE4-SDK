#include "pch.h"
#include "SDK.h"

#define MOD_STRING "Flat Radar Mod"

using namespace CG;

bool IsNameDefault(std::string name) {
    return name.find("Default") != std::string::npos;
}

static bool gThread = false;
static bool bFlatRadar = false;

static void Thread()
{
    while (gThread) {
        // CTRL+R - Flat Radar Mod
        if ((GetAsyncKeyState(VK_CONTROL) & 0x8000) && (GetAsyncKeyState('R') & 0x8000)) {
            if (!bFlatRadar) 
            {
                for (auto& radar : UObject::FindObjects<AGTARadar>()) {
                    radar->InGamePitch = 90.f;
                }
                printf("Enabled flat radar\n");
                bFlatRadar = true;
                Sleep(100);
            }
            else if (bFlatRadar) 
            {
                for (auto& radar : UObject::FindObjects<AGTARadar>()) {
                    radar->InGamePitch = 55.f;
                }
                printf("Disabled flat radar\n");
                bFlatRadar = false;
                Sleep(100);
            }
        }
        Sleep(10);
    }
}


void Attach()
{
    Sleep(2000);

#ifdef _DEBUG
    AllocConsole();
    freopen("CONIN$", "r", stdin);
    freopen("CONOUT$", "w", stdout);
    freopen("CONOUT$", "w", stderr);
    SetConsoleTitleA(MOD_STRING);
    printf("Allocated console\n");
#endif

    if (!InitSdk()) {
        gThread = false; 
        return;
    }

#ifdef _DEBUG
    printf("SDK initialized\n");

    for (auto& object : UObject::FindObjects<UGameterface>()) {
        if (!IsNameDefault(object->GetFullName())) {
            printf("Name: %s\n", object->GetFullName().c_str());
            printf("Version String: %ws\n", object->GetVersionString().cw_str());
        }
    }
#endif
    gThread = true;
    CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)&Thread, NULL, 0, NULL);
}
void Detach() {
    gThread = false;
}
BOOL APIENTRY DllMain(HMODULE hModule, DWORD  dwReason, LPVOID lpReserved)
{
    switch (dwReason)
    {
    case DLL_PROCESS_ATTACH:
        Attach();
        break;
    case DLL_PROCESS_DETACH:
        Detach();
        break;
    }
    return TRUE;
}

