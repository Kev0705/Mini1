#include "Main.h"

void Function::MoveFlight()
{
    TimeDelay T;
    T.timeSet(1);

    while(true) // ȭ�� ��ü �ʱ�ȭ ����. ���߿� ��Ƽ������� ȭ�� ��ü ��� �� �ִ��� Ȯ��. �Ƹ� �ȵɵ���
    {
        if (T.timeDelay() == true) {
            if (GetAsyncKeyState(VK_LEFT) & 0x8000) { //����
                x = x - 2;
            }
            if (GetAsyncKeyState(VK_RIGHT) & 0x8000) { //������
                x = x + 2;
            }
            if (GetAsyncKeyState(VK_UP) & 0x8000) { //��
                y--;
            }
            if (GetAsyncKeyState(VK_DOWN) & 0x8000) { //�Ʒ�
                y++;
            }

            if (x < 30) x = x + 2;
            if (x >= 132) x = x - 2;

            if (y >= 45) y = y - 1;
            if (y <= 10) y = y + 1;
        }
        gotoxy(x, y);
        printf("<O>"); // ���� Unit ������ �и���ų ����
    }
}