// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


class CMainApp
{
public:
    HRESULT MainHR( VOID )
    {
        wprintf(L"Hello World!\n");

        return S_OK;
    }

    void StubFunctionOne(int a)
    {
        a += 1;
        StubFunctionTwo("Aha! calling the next stub function",
            a,
            10);
    }

    void StubFunctionTwo(char *pInputStr,
                         int a,
                         int b)
    {
        UNREFERENCED_PARAMETER(pInputStr);
        UNREFERENCED_PARAMETER(a);
        UNREFERENCED_PARAMETER(b);

    }

    void CallStubFunctions()
    {
        StubFunctionOne(5);
    }
};

int _tmain(int argc, _TCHAR* argv[])
{
    HRESULT hr;
    CMainApp app;

    hr = app.MainHR();
    app.CallStubFunctions();
    if (FAILED(hr))
    {
        wprintf(L"HRESULT: 0x%08X\n", hr);
    }
    else
    {
        wprintf(L"Success.\n");
    }

	return 0;
}

