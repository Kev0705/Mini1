#include "Main.h"
void Fire::FireShoot(int x, int y) // ���� ��� �߻�ü 
{
    TimeDelay T;
    T.timeSet(0.1);

    if (_kbhit()) {
        c = _getch();
        switch (c) {
        case SPACEBAR:
            int HY = y - 1;
            int x2 = x;
            while (HY>6) {
                
                Sleep(20);
                HY--;
                gotoxy(x2, HY);
                printf("@");
                Sleep(30);
                gotoxy(x2, HY);
                printf(" ");
                
            }
        }
    }
    
}

