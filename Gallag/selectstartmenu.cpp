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
        case LEFT:
            break;
        case RIGHT:
            break;
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
        
        //���� ����
        case ENTER:
            page = 1;
            break;
        case SPACEBAR:
            page = 1;
            break;
        }
	}
    return 0;
}