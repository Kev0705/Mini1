#pragma once
#include "Main.h"

int SelectStartMenu::MenuSelect(int &x,int &y,int &page)
{
    if(_kbhit())
	{   
        //�޴� ���� (��,�ϸ� ����)
		c = _getch();
        switch (c)
        {
            //Ű���� ����Ű �� �Ʒ��θ� ������ �� ����
        case UP:
            //Ŭ���� �Լ��� �������� ��� ����
            gotoxy(x - 5, y); 
            printf_s("��");

            y = y - 2;
            if (y < 30) y = 34;
            break;
        case DOWN:
            //Ŭ���� �Լ��� �������� ��� ����
            gotoxy(x - 5, y); 
            printf_s("��");

            y = y + 2;
            if (y > 34) y = 30;
            break;
        
        //����â
        case ENTER:
            switch (y) {
            case 30: // ���� ����
                page = 1;
                break;
            case 32: // ���ھ�
                page = 2;
                break;
            case 34: // ���� ����
                exit(0);
                break;
            }
            
        case SPACEBAR:
            switch (y) {
            case 30: // ���� ����
                page = 1;
                break;
            case 32: // ���ھ�
                page = 2;
                break;
            case 34: //���� ����
                exit(0);
                break;
            }
        }
	}
    return 0;
}