#include "Main.h"

void Function::FireShoot(int posx, int posy)
{

    int x = posx;
    int y = posy;
    
    gotoxy(80, 20);
    printf("absdb");

    x = posx + 1; // �߻�ü�� ��ü�� ���߾ӿ� �����ϱ� ����
    y = posy -1; // �߻�ü�� ��ü�� ���߾ӿ� �����ϱ� ����

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
