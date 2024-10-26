#include <Windows.h>

extern __declspec(dllexport) void HelloWorld() {
    MessageBoxA(NULL, "Hello, World!", "Exported Function", MB_OK | MB_ICONINFORMATION);
}

BOOL APIENTRY DllMain (HMODULE hModule, DWORD  dwReason, LPVOID lpReserved) {

    switch (dwReason)
    {
    case DLL_PROCESS_ATTACH:
        MessageBoxA(NULL, "Hello World!", "Hello World!", MB_OK | MB_ICONINFORMATION);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

