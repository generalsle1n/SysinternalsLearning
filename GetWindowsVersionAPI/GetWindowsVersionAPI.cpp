#include <windows.h>
#include <stdio.h>
#include <VersionHelpers.h>

void main()
{
    OSVERSIONINFOA osvi;
    BOOL bIsWindowsXPorLater;

    ZeroMemory(&osvi, sizeof(OSVERSIONINFO));
    osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);
    #pragma warning(disable : 4996)
    GetVersionExA(&osvi);

    bIsWindowsXPorLater =
        ((osvi.dwMajorVersion > 5) ||
            ((osvi.dwMajorVersion == 5) && (osvi.dwMinorVersion >= 1)));

    if (bIsWindowsXPorLater)
        printf("The system meets the requirements.\n");
    else printf("The system does not meet the requirements.\n");

    bool windows8 = IsWindows8OrGreater();
    bool WindowsServer = IsWindowsServer();
    if (windows8) {
        printf("Windows8 or greater\n");
    }
    if (WindowsServer) {
        printf("Is Windows Server\n");
    }
    else {
        printf("No Windowsserver");
    }
    
}
