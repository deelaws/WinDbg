// DoubleCleanup.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
    char * pStr = NULL;

    pStr = new char[10];
    
    delete[] pStr;

    if (pStr)
    {
        delete[] pStr;
    }
	return 0;
}

