#include "pch.h"

#define MOD_STRING "Flat Radar Mod"
//#define CONSOLE_IN_RELEASE                // Enables console in Release configuration
//#define NO_LOG_IN_RELEASE                 // Disables logging in Release (by default the Release config. will log to 'sdk.log' in the executable directory)
//#define NO_LOG_IN_DEBUG                   // Disables logging in Debug

#include "SDK.h"
#include "MinHook.h"

using namespace CG;

bool IsNameDefault(std::string name) {
    return name.find("Default") != std::string::npos;
}

static bool             gThread     = false;
static bool             bFlatRadar  = false;

static AGTAGameMode*    gGameMode   = nullptr;
static UGameterface*    gInterface  = nullptr;
static AGTARadar*       gRadar      = nullptr;

static void CheckGlobals()
{
    if (!gThread)
        return;

    if (!gGameMode) {
        for (const auto& gameMode : UObject::FindObjects<AGTAGameMode>())
            gGameMode = gameMode;
    }
    if (gGameMode && !gInterface) {
        if (gGameMode->GetGameterface())
            gInterface = gGameMode->GetGameterface();
    }
    if (!gGameMode && !gInterface) {
        for (const auto& interface : UObject::FindObjects<UGameterface>())
            gInterface = interface;
    }
    if (gInterface && !gRadar) {
        if (gInterface->Radar)
            gRadar = gInterface->Radar;
    }
    if (!gRadar) {
        for (const auto& tmp : UObject::FindObjects<AGTARadar>())
            gRadar = tmp;
    }
}

static void Thread()
{
    LOG("Thread started!");

    GameDetails details = GetGameDetails();
    if (details.version == eVersion::INVALID) {
        LOG("Couldn't find offsets.");
        return;
    }

    Sleep(30 * 1000);   // 18sec. delay to ensure the engine is brought up before we run our code.

    if (!InitSdk(details)) {
        LOG("SDK couldn't be initialized!");
    } else {
        LOG("SDK initialized");
        gThread = true;
    }

    while (gThread) {
        CheckGlobals();

        if (gInterface) {
            LOG("%s", gInterface->IsPlayingGame() ? "Playing game" : "Not playing game");
            //if (gInterface->CurrentMenu)
                //LOG("Current Menu: %s", gInterface->CurrentMenu->Name.GetName().c_str());
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

    // @todo: Implement hook on StartIntroMovie()
    // 140B9F710 - SA - Gameterface::StartIntroMovie

#   if defined(_DEBUG) || defined(CONSOLE_IN_RELEASE)
        AllocConsole();
        freopen("CONIN$", "r", stdin);
        freopen("CONOUT$", "w", stdout);
        freopen("CONOUT$", "w", stderr);
        SetConsoleTitleA(MOD_STRING);
        LOG("Allocated console");
#   endif

    CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)&Thread, NULL, 0, NULL);
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