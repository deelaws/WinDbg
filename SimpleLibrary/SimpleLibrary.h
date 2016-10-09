// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the SIMPLELIBRARY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// SIMPLELIBRARY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef SIMPLELIBRARY_EXPORTS
#define SIMPLELIBRARY_API __declspec(dllexport)
#else
#define SIMPLELIBRARY_API __declspec(dllimport)
#endif

#include <stdint.h>

// This class is exported from the SimpleLibrary.dll
class SIMPLELIBRARY_API CSimpleLibrary {
public:
	CSimpleLibrary(void);

    void StubFunction(void)
    {
        printf("stub function");
    }
	// TODO: add your methods here.
};

extern SIMPLELIBRARY_API int nSimpleLibrary;

SIMPLELIBRARY_API int fnSimpleLibrary(void);
