#include "Main.h"
void Fire::FireShoot(int& x, int& y) // ���� ��� �߻�ü 
{
 
    if (_kbhit()) {
        c = _getch();
        switch (c) {
        case SPACEBAR:
            int HY = y;
            while (HY>6) {
                
                Sleep(20);
                HY--;
                gotoxy(x, HY);
                printf("@");
                
            }
        }
    }
}

