#include "Main.h"

void Function::FireShoot(int posx, int posy)
{

    int x = posx;
    int y = posy;
    
    gotoxy(80, 20);
    printf("absdb");

    x = posx + 1; // 발사체를 기체의 정중앙에 고정하기 위함
    y = posy -1; // 발사체를 기체의 정중앙에 고정하기 위함

    if (GetAsyncKeyState(VK_SPACE) & 0x8000) {
        while (y > 6)
        {
            gotoxy(x, y);
            printf("@");
            Sleep(30);
            gotoxy(x, y);
            printf(" ");
            Sleep(30);
            y--;
        }
    }
 }
