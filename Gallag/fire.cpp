#include "Main.h"
void Function::FireShoot(int& x3, int& y3) // 내가 쏘는 발사체 
{
    int y;
    int x;
    TimeDelay T;
    T.timeSet(0.1);
    char c;
    if (_kbhit()) {
        c = _getch();
         switch (c) {
        case SPACEBAR:
            x = *Lx;
            
            y = 5;
            
            
            while (y <= 44) {

                T.timeSet(0.01);
                y++;
                gotoxy(x,y);
                printf("@");
                Fx = &x;
                Fy = &y;
                lasercrash();
                //Sleep(30);
                //gotoxy(Fx, Fy);
                //printf(" ");
                
            }
        }
    }

    
}