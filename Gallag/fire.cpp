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
                x = posx + 1; // �߻�ü�� ��ü�� ���߾ӿ� �����ϱ� ����
                y = -1; // �߻�ü�� ��ü�� ���߾ӿ� �����ϱ� ����
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
