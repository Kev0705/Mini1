#include "Main.h"
void Function::FireShoot(int& x3, int& y3) // 내가 쏘는 발사체 
{
    int y;
    int x;
    TimeDelay T;
    T.timeSet(0.1);
    while (true) {
         char c;
            if (_kbhit()) {
                c = _getch();
                switch (c) {
                case SPACEBAR:
                    x = *Lx+1;
                    y = *Ly-1;

                    while (y > 6) {
                        
                        y--;
                        if (T.timeDelay() == true) {
                            gotoxy(x, y);
                            printf("@");
                            Fx = &x;
                            Fy = &y;
                            lasercrash();
                        }
                        if (T.timeDelay() == true) {
                        gotoxy(x, y);
                        printf(" ");

                    }
                }
            }

        }
    }
     
}