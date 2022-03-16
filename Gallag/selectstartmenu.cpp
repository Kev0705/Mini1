#pragma once
#include "Main.h"

int SelectStartMenu::MenuSelect(int &x,int &y,int &page, bool &gameToken, bool &scoreToken)
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
            switch (y) {
            case 30:
                page = 1;
                gameToken = true;
                break;
            case 32:
                page = 2;
                scoreToken = true;
                break;
            case 34:
                exit(0);
            }
            
        case SPACEBAR:
            switch (y) {
            case 30:
                page = 1;
                gameToken = true;
                break;
            case 32:
                page = 2;
                scoreToken = true;
                break;
            case 34:
                exit(0);
            }
        }
	}
    return 0;
}