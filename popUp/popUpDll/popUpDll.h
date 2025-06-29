#pragma once

#ifdef DLL_EXPORT
#define DECLDIR __declspec(dllexport)
#else
#define DECLDIR __declspec(dllimport)
#endif // DLL_EXPORT
#include <windows.h>

extern "C" {
	DECLDIR void popUp(LPCSTR title, LPCSTR text);
}