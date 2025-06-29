#include <iostream>
#include<Windows.h>
#define DLL_EXPORT
#include "popUpDll.h"


extern "C" {
DECLDIR void popUp(LPCSTR title, LPCSTR text) {
    int value = MessageBoxA(NULL, text, title, MB_ICONEXCLAMATION);
}
}
