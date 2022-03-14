#include "Main.h"




void Fire::FireShoot(int& x, int& y) // 내가 쏘는 발사체
{
    while (true)
    {
        if (GetAsyncKeyState(VK_SPACE) & 0x8000) { // 머리아픔
            gotoxy(x, y - 1);
            y--;
            printf("↑");
        }
    }
    Sleep(100);
    return;
}

   /* if (_kbhit()) {
        c = _getch();
        switch (c)
        {
        case SPACEBAR:
            for (y; y < 3; y--);
            gotoxy(x + 1, y - 1);
            printf("↑");

        }

    }
   */