#include <iostream>
#include <windows.h>
int main(){
    FreeConsole();
    srand(GetTickCount());
    int ancho=GetSystemMetrics(SM_CXSCREEN)-1;
    int alto=GetSystemMetrics(SM_CXSCREEN)-1;
    while (!GetAsyncKeyState(VK_F8)){
        SetCursorPos( (rand()%ancho)+1,( rand()%alto)+1  );
        Sleep(50);
    }
    system("pause");
    return 0;
}