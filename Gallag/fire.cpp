#include "Main.h"

void Function::FireShoot(int posx, int posy)
{
    static std::mutex fMutex;
    
    int x = posx;
    int y = posy;

    TimeDelay T;
    T.timeSet(0.1);
    
    

    while (true) 
    {
        gotoxy(80, 20);
        fMutex.lock();
        printf("absdb");
        fMutex.unlock();
        /*
        char c;
        if (_kbhit())
        {
            c = _getch();
            switch (c)
            {
            case SPACEBAR:
                x = posx + 1; // 발사체를 기체의 정중앙에 고정하기 위함
                y = -1; // 발사체를 기체의 정중앙에 고정하기 위함
                while (y > 6)
                {
                    if (T.timeDelay() == true)
                    {
                        gotoxy(x, y);
                        printf("@");

                        gotoxy(x, y);
                        printf(" ");
                    }
                }
            }

        }
        */
    }
    
 }
