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
        if (GetAsyncKeyState(VK_DOWN) & 0x8000) { //�Ʒ�
            y++;
        }

        gotoxy(x, y);
        printf("<O>"); // ���� Unit ������ �и���ų ����

        Sleep(100);
    }
}