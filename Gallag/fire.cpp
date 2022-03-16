#include "Main.h"
void Function::FireShoot(int& x3, int& y3) // 내가 쏘는 발사체 
{
    int y;
    int x;
    TimeDelay T;
    T.timeSet(0.1);
    while (true) {
        if (GetAsyncKeyState(VK_SPACE) & 0x8000) {
            FireShoot(x, y);

            x = *Lx + 1;
            y = *Ly;
            while (y > 7) {

                y--;
                gotoxy(x, y - 1);
                printf("@");
                Fx = &x;
                Fy = &y;
                lasercrash();

            }
            x = *Lx + 1;
            y = *Ly;
            T.timeDelay();
            while (y > 6) {
                y--;
                gotoxy(x, y);
                printf(" ");

            }break;

        }
    }

}