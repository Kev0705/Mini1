#include "Main.h"


void Function::MoveFlight(StartScreen S, int& page)
{
    TimeDelay T;
    T.timeSet(0.1);

    while(true) // ȭ�� ��ü �ʱ�ȭ ����. ���߿� ��Ƽ������� ȭ�� ��ü ��� �� �ִ��� Ȯ��. �Ƹ� �ȵɵ���
    {
        if (T.timeDelay() == true) {
            if (KeyScan()) {
                page = 0;
                system("cls");
                S.logo();
                S.menu();
                break;
            }
            int x1 = x;
            int y1 = y;
            if (GetAsyncKeyState(VK_LEFT) & 0x8000) { //����
                x1 -= 2;
            }
            if (GetAsyncKeyState(VK_RIGHT) & 0x8000) { //������
                x1 += 2;
            }
            if (GetAsyncKeyState(VK_UP) & 0x8000) { //��
                y1 -= 1;
            }
            if (GetAsyncKeyState(VK_DOWN) & 0x8000) { //�Ʒ�
                y1 += 1;
            }

            if (x1 < 30) x1 += 2;
            if (x1 >= 132) x1 -= 2;

            if (y1 <= 10) y1 += 1;
            if (y1 >= 45) y1 -= 1;

            gotoxy(x, y);
            printf("   ");
            x = x1;
            y = y1;
            gotoxy(x, y);
            printf("<O>"); // ���� Unit ������ �и���ų ����
            Lx = &x;
            Ly = &y;
        }
        
        FireShoot(*Lx, *Ly);
      //  lasercrash();
    }
    
}