#pragma once

#ifdef DLL_EXPORT
#define DECLDIR __declspec(dllexport)
#else
#define DECLDIR __declspec(dllimport)
#endif // DLL_EXPORT
#include <windows.h>

extern "C" {
	/*
	create a pop up message using message box (using ascii)

	@param title - the title of the popup message
	@param text - the text of the message
	*/
	DECLDIR void popUp(const char* title, const char* text);
}