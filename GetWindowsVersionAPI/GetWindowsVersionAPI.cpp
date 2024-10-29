#include <windows.h>
#include <stdio.h>

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
}
