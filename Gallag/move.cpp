#include "Main.h"


void Function::MoveFlight(int& x, int& y)
{
    while(true) // ȭ�� ��ü �ʱ�ȭ ����. ���߿� ��Ƽ������� ȭ�� ��ü ��� �� �ִ��� Ȯ��. �Ƹ� �ȵɵ���
    {
        if (GetAsyncKeyState(VK_LEFT) & 0x8000) { //����
            x = x - 2;
        }
        if (GetAsyncKeyState(VK_RIGHT) & 0x8000) { //������
            x = x + 2;
        }
        if (GetAsyncKeyState(VK_UP) & 0x8000) { //��
            y--;
        }
        if (GetAsyncKeyState(VK_DOWN) &  0x8000) { //�Ʒ�
            y++;
        }
      
        if (x < 30) x = x + 2;
        if (x >= 132) x = x - 2;

        if (y >= 45) y = y - 2;
        if (y <= 10) y = y + 2;
       
        gotoxy(x, y);
        mydx = &x; // �浹�Լ����� ����� ��ǥ
        mydy = &y; // �浹�Լ����� ����� ��ǥ
        printf("<O>"); // ���� Unit ������ �и���ų ����
        
       
    }
            

        Sleep(100);

}
