// SimpleLibrary.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "SimpleLibrary.h"


// This is an example of an exported variable
SIMPLELIBRARY_API int nSimpleLibrary=0;

// This is an example of an exported function.
SIMPLELIBRARY_API int fnSimpleLibrary(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see SimpleLibrary.h for the class definition
CSimpleLibrary::CSimpleLibrary()
{
	return;
}
