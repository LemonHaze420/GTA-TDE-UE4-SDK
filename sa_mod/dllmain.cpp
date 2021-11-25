#include "pch.h"

#define MOD_STRING "Flat Radar Mod"
//#define CONSOLE_IN_RELEASE                // Enables console in Release configuration
//#define NO_LOG_IN_RELEASE                 // Disables logging in Release (by default the Release config. will log to 'sdk.log' in the executable directory)
//#define NO_LOG_IN_DEBUG                   // Disables logging in Debug

#include "SDK.h"

using namespace CG;

bool IsNameDefault(std::string name) {
    return name.find("Default") != std::string::npos;
}

static bool gThread = false;
static bool bFlatRadar = false;

static AGTAGameMode* gGameMode = nullptr;
static UGameterface* gInterface = nullptr;
static AGTARadar* gRadar = nullptr;

static void Thread()
{
    LOG("Thread started!");

    Sleep(18 * 1000);   // 18sec. delay to ensure the engine is brought up before we run our code.

    while (gThread) {
        if (!gGameMode) {
            for (const auto& gameMode : UObject::FindObjects<AGTAGameMode>())
                gGameMode = gameMode;
        } 
        if (gGameMode && !gInterface) {
            if (gGameMode->GetGameterface())
                gInterface = gGameMode->GetGameterface();
        }
        if (gInterface && !gRadar) {
            if (gInterface->Radar)
                gRadar = gInterface->Radar;
        } 
        if (!gRadar) {
            for (const auto& tmp : UObject::FindObjects<AGTARadar>())
                gRadar = tmp;
        }

        if (gRadar) {
            // CTRL+R - Flat Radar Mod
            if ((GetAsyncKeyState(VK_CONTROL) & 0x8000) && (GetAsyncKeyState('R') & 0x8000)) {
                if (gRadar) {
                    gRadar->InGamePitch = (!bFlatRadar ? 90.f : 55.f);

                    bFlatRadar = !bFlatRadar;
                    LOG("%s flat radar", bFlatRadar ? "Enabled" : "Disabled");
                }
                else LOG("No radar instance could be found!");

                Sleep(100);
            }
        }
        Sleep(10);
    }
}

void Attach()
{
    LOG("Attached!");

    Sleep(2 * 1000);   // 2sec. delay to ensure the engine is brought up before we run our code.

#   if defined(_DEBUG) || defined(CONSOLE_IN_RELEASE)
        AllocConsole();
        freopen("CONIN$", "r", stdin);
        freopen("CONOUT$", "w", stdout);
        freopen("CONOUT$", "w", stderr);
        SetConsoleTitleA(MOD_STRING);
        LOG("Allocated console\n");
#   endif

    if (!InitSdk()) {
        LOG("SDK couldn't be initialized!");
        gThread = false; 
        return;
    } else {
        LOG("SDK initialized");
        gThread = true;
        CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)&Thread, NULL, 0, NULL);
    }
}
void Detach() 
{
    LOG("Detached!");
    gThread = false;
}
BOOL APIENTRY DllMain(HMODULE hModule, DWORD  dwReason, LPVOID lpReserved)
{
    switch (dwReason) {
        case DLL_PROCESS_ATTACH:
            Attach();
            break;
        case DLL_PROCESS_DETACH:
            Detach();
            break;
    }
    return TRUE;
}