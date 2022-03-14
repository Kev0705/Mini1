#include "Main.h"

void Function::MoveFlight(int& x, int& y)
{
    while(true) // 화면 전체 초기화 유의. 나중에 멀티스레드로 화면 전체 띄울 수 있는지 확인. 아마 안될듯ㅋㅋ
    {
        if (GetAsyncKeyState(VK_LEFT) & 0x8000) { //왼쪽
            x = x - 2;
        }
        if (GetAsyncKeyState(VK_RIGHT) & 0x8000) { //오른쪽
            x = x + 2;
        }
        if (GetAsyncKeyState(VK_UP) & 0x8000) { //위
            y--;
        }
        if (GetAsyncKeyState(VK_DOWN) & 0x8000) { //아래
            y++;
        }

        if (x < 30) x = x + 2;
        if (x >= 132) x = x - 2;

        if (y >= 45) y = y - 2;
        if (y <= 10) y = y + 2;
       
        gotoxy(x, y);
        mydx = &x;
        mydy = &y;
        printf("<O>"); // 추후 Unit 쪽으로 분리시킬 예정
        
        Sleep(100);
    }
}