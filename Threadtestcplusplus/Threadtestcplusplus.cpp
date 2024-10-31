// Threadtestcplusplus.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
#include <windows.h>
#include <tchar.h>
#include <strsafe.h>
#include <iostream>
#include <processthreadsapi.h>
#include <synchapi.h>

DWORD WINAPI MyThreadFunction(LPVOID lpParam)
{
    printf("Thread Content");
    Sleep(20000);
    return 0;
}

int main()
{
    DWORD dwThreadIdArray;
    printf("Create first Thread");
    HANDLE Thread = CreateThread(NULL, 0, MyThreadFunction, 0, NULL, &dwThreadIdArray);
    WaitForSingleObject(Thread, INFINITE);
    printf("Create second Thread");
    Thread = CreateThread(NULL, 0, MyThreadFunction, 0, NULL, &dwThreadIdArray);
}



